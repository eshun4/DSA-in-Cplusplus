#include <iostream>
// This returns a matrix in row-column order
void row_column(){
    double matrix[3][2] {0};

    // Input student grades into the matrix
    std::cout << "Enter student grades:" << std::endl;
    for(int row = 0; row < 3; ++row) {
        for(int column = 0; column < 2; ++column) {
            std::cin >> matrix[row][column]; // This takes in the grades as input
        }
    }

    // Output the student grades from the matrix
    std::cout << "Student Grades:" << std::endl;
    for(int row = 0; row < 3; ++row) {
        for(int column = 0; column < 2; ++column) {
            std::cout << matrix[row][column] << " ";
        }
        std::cout << std::endl;
    }
}

void column_row() {
    int matrix[3][2] {0};
    // Get the Matrix numbers as input
    std::cout << "Enter Numbers:" << std::endl;
    for(int row = 0; row < 3; ++row) {
        for(int column = 0; column < 2; ++column) {
            std::cin >> matrix[row][column];
        }
    }

    std::cout << "Row-Column" << std::endl;
    for(int row = 0; row < 3; ++row) {
        for(int column = 0; column < 2; ++column) {
            std::cout << matrix[row][column] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "The column-order numbers are:" << std::endl;
    for(int column = 0; column < 2; ++column) {
        for(int row = 0; row < 3; ++row) {
            std::cout << matrix[row][column] << " ";
        }
        std::cout << std::endl;
    }
}



int main() {
    // Create an array with row 7 and column 6 that takes in student grades and another loop to display them
    // This follows the row-column order traversal;
    // row_column();
    column_row();
    return 0;
}
