#include<bits/stdc++.h>
using namespace std;

    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // create 2D array
        int tempMat[n][n];
        int p=0,q;

        for(int i=0,p=0; i<n; i++,p++) {
            
            for(int j=n-1,q=0; j>=0; j--, q++) {
                tempMat[p][q] = matrix[j][i];
                // q++;
            }
            // p++;
        }

        for(int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                matrix[i][j] = tempMat[i][j];
            }
        }
    }

    int main() {
    int n = 3;
    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate(vect);
    // print rotated matrix
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << vect[i][j] << " ";
        }cout<<endl;
    }

        return 0;
    }