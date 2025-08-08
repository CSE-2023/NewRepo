#include <iostream>
using namespace std;

int main()
{
    int L, B, H;
    cin>>L>>B>>H;
    int ***ptr = new int **[L];

    // create 2D array and store it's address in ptr

    for(int i=0; i<L; i++)
    {
        ptr[i] = new int *[B];

        for(int j=0; j<B; j++)
        {
            ptr[i][j] = new int[H];
        }
    }

    for(int i=0; i<L; i++)
    for(int j=0; j<B; j++)
    for(int k=0; k<H; k++)
    ptr[i][j][k]= i+j+k;

    for(int i=0; i<L; i++)
    for(int j=0; j<B; j++)
    for(int k=0; k<H; k++)
    cout<<ptr[i][j][k]<<" ";

    // Release the memory in Heap
    for(int i=0; i<L; i++)
    delete ptr[i];
    delete ptr;
    
}