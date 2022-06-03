#include <iostream>
using namespace std;

const int N = 10;

void get_submatrix(int matrix[N][N], int submatrix[N][N], int p, int q, int n){
    int i=0, j=0;
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(row != p && col != q){
                submatrix[i][j++] = matrix[row][col];
                if(j == n-1){
                    j = 0;
                    i++;
                }
            }
        }
    }
}

int determinant(int matrix[N][N], int n){
    int det = 0;

    if(n == 2){
        return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
    }

    int submatrix[N][N];
    int sign = 1;
    for(int k=0; k<n; k++){
        get_submatrix(matrix, submatrix, 0, k, n);
        det += (sign * matrix[0][k] * determinant(submatrix, n-1));
        sign *= -1;
    }

    return det;
}

int main(){
    int n;
    cin >> n;
    int matrix[N][N];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> matrix[i][j];
        }
    }

    cout << determinant(matrix, n) << endl;    
}