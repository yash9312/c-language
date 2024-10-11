#include <stdio.h>

int main()
{
    // *****Q-1*****

    // int n, i;

    // printf("Enter the array's size: ");
    // scanf("%d", &n);

    // int arr[n];

    // printf("Enter array's elements:\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("a[%d] = ", i);
    //     scanf("%d", &arr[i]);
    // }

    // printf("Negative elements from an Array: ");
    // for (i = 0; i < n; i++)
    // {
    //     if (arr[i] < 0)
    //     {
    //         printf("%d ", arr[i]);
    //     }
    // }

    // *****Q-2*****

    // int rows, cols, i, j, largest;

    // printf("Enter the array's row size: ");
    // scanf("%d", &rows);
    // printf("Enter the array's column size: ");
    // scanf("%d", &cols);

    // int arr[rows][cols];

    // printf("Enter array's elements:\n");
    // for (i = 0; i < rows; i++)
    // {
    //     for (j = 0; j < cols; j++)
    //     {
    //         printf("a[%d][%d] = ", i, j);
    //         scanf("%d", &arr[i][j]);
    //     }
    // }

    // largest = arr[0][0];

    // for (i = 0; i < rows; i++)
    // {
    //     for (j = 0; j < cols; j++)
    //     {
    //         if (arr[i][j] > largest)
    //         {
    //             largest = arr[i][j];
    //         }
    //     }
    // }

    // printf("The largest element is: %d\n", largest);

    // *****Q-3*****

    //    int size, i, j;

    //     printf("Enter the array's row & column size: ");
    //     scanf("%d", &size);

    //     int arr[size][size], transpose[size][size];

    //     printf("Enter array's elements:\n");
    //     for(i = 0; i < size; i++) {
    //         for(j = 0; j < size; j++) {
    //             printf("a[%d][%d] = ", i, j);
    //             scanf("%d", &arr[i][j]);
    //         }
    //     }

    //     for(i = 0; i < size; i++) {
    //         for(j = 0; j < size; j++) {
    //             transpose[j][i] = arr[i][j];
    //         }
    //     }

    //     printf("The transpose matrix of an array:\n");
    //     for(i = 0; i < size; i++) {
    //         for(j = 0; j < size; j++) {
    //             printf("%d ", transpose[i][j]);
    //         }
    //         printf("\n");
    //     }

    // *****Q-4*****

    int rows, cols, i, j, rowNum, colNum, rowSum = 0, colSum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter row number: ");
    scanf("%d", &rowNum);

    printf("Elements of row %d: ", rowNum);
    for (j = 0; j < cols; j++)
    {
        printf("%d ", arr[rowNum][j]);
        rowSum += arr[rowNum][j];
    }
    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

    printf("Enter column number: ");
    scanf("%d", &colNum);

    printf("Elements of column %d: ", colNum);
    for (i = 0; i < rows; i++)
    {
        printf("%d ", arr[i][colNum]);
        colSum += arr[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);
}
