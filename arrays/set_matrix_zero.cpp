#include <bits/stdc++.h>
using namespace std;

void setMat1(vector<vector<int>> & mat) {
    int n = mat.size();
    int m = mat[0].size();
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (mat[i][j] == 0) {
                for (int k=0;k<n;k++) {
                    mat[i][k] = -1;
                }
                for (int l=0;l<m;l++) {
                    mat[l][j] = -1;
                }
            } 
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (mat[i][j] == -1) {
                mat[i][j] = 0;
            } 
        }
    }
}

void setMat2(vector<vector<int>> & mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<int> dummy1(n,-1), dummy2(m,-1);
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (mat[i][j] == 0) {
                dummy1[i] = 0;
                dummy2[j] = 0;
            }
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (dummy1[i]==0 || dummy2[j]==0) {
                mat[i][j] = 0;
            }
        }
    } 
}

int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m)) ;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> mat[i][j];
        }
    }
    setMat2(mat);
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}