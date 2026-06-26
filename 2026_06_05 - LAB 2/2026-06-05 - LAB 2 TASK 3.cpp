#include <iostream>
using namespace std;

// Function for Boolean Matrix
void booleanMatrix(int mat[][4], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == 1)
            {
                // Replace all zeros in jth column with -1
                for (int idx = 0; idx < rows; idx++)
                {
                    if (mat[idx][j] == 0)
                    {
                        mat[idx][j] = -1;
                    }
                }

                // Replace all zeros in ith row with -1
                for (int idx = 0; idx < cols; idx++)
                {
                    if (mat[i][idx] == 0)
                    {
                        mat[i][idx] = -1;
                    }
                }
            }
        }
    }

    // Replace all -1 with 1
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == -1)
            {
                mat[i][j] = 1;
            }
        }
    }
}

int main()
{
    int mat[3][4] =
    {
        {1, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 0}
    };

    booleanMatrix(mat, 3, 4);

    // Print matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}