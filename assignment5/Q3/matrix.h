#ifndef MATRIX_X
#define MATRIX_H

#include<iostream>
using namespace std;

class Matrix
{
    private:
    int row,col;
    int **arr;

    public:
    Matrix();
    Matrix(int row, int col);

    // Copy constructor
    Matrix(const Matrix &mat);

    // Overloaded = operator
    void operator = (const Matrix &mat);

    void accept();
    void print();

    Matrix* add(Matrix *mat);
    Matrix* sub(Matrix *mat);
    Matrix* mul(Matrix *mat);
    void transpose();

    ~Matrix();

};

#endif