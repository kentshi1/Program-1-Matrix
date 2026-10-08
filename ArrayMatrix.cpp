/*
Kent Shi
CS 210 - Data Structurea
October 5, 2026
*/

#include "ArrayMatrix.h"

int main() {
    try {
        ArrayMatrix<int> matrix1(2, 3, 1);
        ArrayMatrix<int> matrix2(2, 3, 2);

        matrix1[0][0] = 1;
        matrix1[0][1] = 2;
        matrix1[0][2] = 3;
        matrix1[1][0] = 4;
        matrix1[1][1] = 5;
        matrix1[1][2] = 6;

        std::cout << "Matrix 1:\n";
        matrix1.print();

        std::cout << "\nRows: " << matrix1.rows() << "\n";
        std::cout << "Columns: " << matrix1.cols() << "\n";

        ArrayMatrix<int> matrix3(matrix1);
        std::cout << "\nMatrix 3 (copy constructor):\n";
        std::cout << matrix3;

        ArrayMatrix<int> matrix4(2, 3);
        matrix4 = matrix1;
        std::cout << "Matrix 4 (assignment operator):\n";
        std::cout << matrix4;

        ArrayMatrix<int> sum = matrix1 + matrix2;
        std::cout << "Matrix 1 + Matrix 2:\n";
        std::cout << sum;

        ArrayMatrix<int> multiplyLeft(2, 3);
        ArrayMatrix<int> multiplyRight(3, 2);

        multiplyLeft[0][0] = 1;
        multiplyLeft[0][1] = 2;
        multiplyLeft[0][2] = 3;
        multiplyLeft[1][0] = 4;
        multiplyLeft[1][1] = 5;
        multiplyLeft[1][2] = 6;

        multiplyRight[0][0] = 7;
        multiplyRight[0][1] = 8;
        multiplyRight[1][0] = 9;
        multiplyRight[1][1] = 10;
        multiplyRight[2][0] = 11;
        multiplyRight[2][1] = 12;

        ArrayMatrix<int> product = multiplyLeft * multiplyRight;
        std::cout << "Matrix multiplication:\n";
        std::cout << product;

        const ArrayMatrix<int> constMatrix(matrix1);
        std::cout << "\nConst matrix access: " << constMatrix[0][1] << "\n";

        ArrayMatrix<int> inputMatrix(2, 3);

        std::cout << "\nEnter 6 integer values for a 2x3 matrix (separated by spaces or newlines):\n";
        std::cin >> inputMatrix;

        std::cout << "\nYou entered the following matrix:\n";
        std::cout << inputMatrix;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}