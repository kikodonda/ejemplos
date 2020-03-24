// sumar la columna de una matriz y la almacena en un vector
#include <iostream>
#include <conio.h>

int main()
{
    int A[10][10], m, n, x, y, sum = 0;
    //Create a Matrix A
    std::cout << "Enter number of rows and columns in Matrix A : \n";
    std::cin >> n >> m;
    std::cout << "Enter elements of Matrix A : \n";
    for (x = 1; x < n + 1; ++x)
        for (y = 1; y < m + 1; ++y)
            std::cin >> A[x][y];
    //Find sum of each row
    for (x = 1; x < n + 1; ++x)
    {
        A[x][m + 1] = 0;
        for (y = 1; y < m + 1; ++y)
            A[x][m + 1] = A[x][m + 1] + A[x][y];
    }
    //Find sum of each column
    for (y = 1; y < m + 1; ++y)
    {
        A[n + 1][y] = 0;
        for (x = 1; x < n + 1; ++x)
            A[n + 1][y] += A[x][y];
    }
    std::cout << "\nMatrix A, Row Sum (Last Column)"
              << " and Column Sum (Last Row) : \n";
    for (x = 1; x < n + 1; ++x)
    {
        for (y = 1; y < m + 2; ++y)
            std::cout << A[x][y] << "     ";
        std::cout << "\n";
    }
    //Print sum of each column
    x = n + 1;
    for (y = 1; y < m + 1; ++y)
        std::cout << A[x][y] << "     ";
    std::cout << "\n";
    if (m == n)
    {
        for (x = 1; x < m + 1; x++)
            for (y = 1; y < n + 1; y++)
                if (x == y)
                    sum += A[x][y];
                else if (y == m - (x + 1))
                    sum += A[x][y];
    }
    std::cout << "Sum of diagonal elements is : " << sum << std::endl;
    getch();
    return 0;
}