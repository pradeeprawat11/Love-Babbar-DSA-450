#include<iostream>
using namespace std;

int main(){
  int a[4][4] = {{1,2,3,4},
           {5,6,7,8},
           {9,10,11,12},
           {13,14,15,16}};

  for(int i=0; i<4; i++) {
    for(int j=0; j<4; j++) {
      cout << a[i][j]<<" ";
    }cout<<endl;
  }   

  int top=0,left=0,right=3,bottom=3;
        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
                cout<<a[top][i]<<" ";
             top++;
            for(int i=top;i<=bottom;i++)
                cout<<a[i][right]<<" ";
              right--;
              if(top<=bottom)
              {
                  for(int i=right;i>=left;i--)
                   cout<<a[bottom][i]<<" ";
                   bottom--;
              }
              if(left<=right)
               {
                   for(int i=bottom;i>=top;i--)
                    cout<<a[i][left]<<" ";
                    left++;
               }
  } 
  return 0;
}