
#include "matrix.h"

Matrix::Matrix()
{
    cout<<"\nEnter row : ";
    cin>>this->row;
    cout<<"Enter col : ";
    cin>>this->col;

    this->arr = new int*[this->row];
    for(int i=0;i<this->row;i++)
    {
        arr[i] = new int[this->col];
    }
}

Matrix::Matrix(int row, int col)
{
    this->row = row;
    this->col = col;

    this->arr = new int*[this->row];
    for(int i=0;i<this->row;i++)
    {
        arr[i] = new int[this->col];
    }
}

Matrix::Matrix(const Matrix &mat)
{
    this->row = mat.row;
    this->col = mat.col;

    this->arr = new int*[this->row];
    for(int i=0;i<this->row;i++)
        arr[i] = new int[this->col];

    for(int i=0;i<this->row;i++)
        for(int j=0;j<this->col;j++)
            this->arr[i][j] = mat.arr[i][j];
}

void Matrix::operator= (const Matrix &mat)
{
    this->row = mat.row;
    this->col = mat.col;

    this->arr = new int*[this->row];
    for(int i=0;i<this->row;i++)
        arr[i] = new int[this->col];

    for(int i=0;i<this->row;i++)
        for(int j=0;j<this->col;j++)
            arr[i][j] = mat.arr[i][j];
}

void Matrix::accept()
{
    cout<<"\nEnter the values in "<<this->row<<" X "<<this->col<<" matrix : "<<endl;
    for(int i=0;i<this->row;i++)
        for(int j=0;j<this->col;j++)
            cin>>arr[i][j];
}

void Matrix::print()
{
    cout<<"\nValues in "<<this->row<<" X "<<this->col<<" matrix : "<<endl;
    for(int i=0;i<this->row;i++)
    {
        for(int j=0;j<this->col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

Matrix* Matrix::add(Matrix *mat)
{
    if(this->row != mat->row || this->col != mat->col)
    {
        cout<<"\nAddition is not compatible"<<endl;
        return NULL;
    }

    Matrix* result = new Matrix(this->row, this->col);
    
    for(int i=0;i<this->row;i++)
        for(int j=0;j<this->col;j++)
            result->arr[i][j] = this->arr[i][j] + mat->arr[i][j];

    return result;
}

Matrix* Matrix::sub(Matrix *mat)
{
    if(this->row != mat->row || this->col != mat->col)
    {
        cout<<"\nSubtraction is not compatible"<<endl;
        return NULL;
    }

    Matrix* result = new Matrix(this->row, this->col);
    for(int i=0;i<this->row;i++)
        for(int j=0;j<this->col;j++)
            result->arr[i][j] = this->arr[i][j] - mat->arr[i][j];

    return result;
}

Matrix* Matrix::mul(Matrix *mat)
{
    if(this->col != mat->row)
    {
        cout<<"\nMultiplication is not compatible"<<endl;
        return NULL;
    }

    Matrix *result = new Matrix(this->row, this->col);

    for(int i=0;i<this->row;i++)
    {
        for(int j=0;j<this->col;j++)
        {
            result->arr[i][j] = 0;
            for(int k=0;k<this->col;k++)
            {
                result->arr[i][j] += this->arr[i][k] * mat->arr[k][j];
            }
        }
    }

    return result;

}

void Matrix::transpose()
{
    for(int i=0;i<this->row;i++)
    {
        for(int j=i+1;j<this->col;j++)
        {
            int temp = this->arr[i][j];
            this->arr[i][j] = this->arr[j][i];
            this->arr[j][i] = temp;
        }
    }

    cout<<"\nMatrix transposed"<<endl;
}

Matrix::~Matrix()
{
    for(int i=0;i<this->row;i++)
        delete[] arr[i];
    
    delete[] arr;
}