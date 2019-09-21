#include<iostream>
#include<algorithm>

using namespace std;


int main()
{   int i,j,temp;
    int M[10][10];
    int size=3;
  // to take value in matrix
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
             cin>>M[i][j];
    }

  //sort the matrix

  int A[size*size];
   int k=0;
  for(int i=0;i<size;i++)
  {  for(int j=0;j<size;j++)

      A[k++]=M[i][j];

  }

  sort(A,A+(size*size));
   int l=0;
  // to store value in the matrix matrix
     for(int i=0;i<size;i++)
      {
          for(int j=0;j<size;j++)
          M[i][j]=A[l++];
      }
  //
  for( int i=0;i<size;i++)
  {
      for(int j=0;j<size;j++)
        {
        cout<<M[i][j]<<" ";
        }

        cout<<endl;
  }

    return 0;
}


