#include <iostream>
using namespace std;

// Function to find median of matrix
int median(int mat[][3], int size)
{
    int arr[9];
    int index = 0;

    // Flatten matrix into 1D array
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[index] = mat[i][j];
            index++;
        }
    }

    // Sort array (Bubble Sort)
    for (int i = 0; i < 9 - 1; i++)
    {
        for (int j = 0; j < 9 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Return middle element
    int mid = 9 / 2;
    return arr[mid];
}

int main()
{
    int matrix[3][3] =
    {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };

    cout << median(matrix, 3) << endl;

    return 0;
}