#include<iostream>


using namespace std;


int main()
{
    int M[10][10];
    int size=3;
  // to take value in matrix
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
             cin>>M[i][j];
    }
  // to print value of matrix
     for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)

            if(i<=j)
        {
             cout<<M[i][j]<<" ";
        }
             cout<<endl;
    }

    return 0;
}

