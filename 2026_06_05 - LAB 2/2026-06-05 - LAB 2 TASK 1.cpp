#include <iostream>
using namespace std;

// Function to rotate matrix
void rotateMatrix(int mat[][4], int size)
{
    int m = size;
    int n = size;

    int row = 0, col = 0;
    int prev, curr;

    // Rotate matrix in layers
    while (row < m && col < n)
    {
        if (row + 1 == m || col + 1 == n)
            break;

        // Store first element of next row
        prev = mat[row + 1][col];

        // Move elements of first row
        for (int i = col; i < n; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;

        // Move elements of last column
        for (int i = row; i < m; i++)
        {
            curr = mat[i][n - 1];
            mat[i][n - 1] = prev;
            prev = curr;
        }
        n--;

        // Move elements of last row
        if (row < m)
        {
            for (int i = n - 1; i >= col; i--)
            {
                curr = mat[m - 1][i];
                mat[m - 1][i] = prev;
                prev = curr;
            }
        }
        m--;

        // Move elements of first column
        if (col < n)
        {
            for (int i = m - 1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
}

int main()
{
    int mat[4][4] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    rotateMatrix(mat, 4);

    // Print rotated matrix
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}