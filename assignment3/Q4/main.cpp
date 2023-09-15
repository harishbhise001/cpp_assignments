/*
Q4. Write a Matrix class. Allocate memory dynamically in
parameterized constructor. Also write parameter-less constructor.
Write accept() and print() functions. Also provide add(), subtract(),
multiply() and transpose() function.
*/

#include "matrix.h"

int menu()
{
    int choice;
    cout<<"\n0. EXIT"<<endl;
    cout<<"1. Accept Data"<<endl;
    cout<<"2. Print Data"<<endl;
    cout<<"3. Add"<<endl;
    cout<<"4. Subtract"<<endl;
    cout<<"5. Multiply"<<endl;
    cout<<"6. Transpose"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    return choice;
}

int main()
{
    int choice;
    Matrix *mat = NULL;
    Matrix *mat1 = new Matrix();
    Matrix *mat2 = new Matrix(2,2);

    while(choice = menu())
    {
        switch(choice)
        {
            case 1:
            {
                cout<<"\n1. Accept Matrix 1"<<endl;
                cout<<"2. Accept Matrix 2"<<endl;
                cout<<"Enter choice : ";
                cin>>choice;

                if(choice == 1) mat1->accept();
                else mat2->accept();
                break;
            }
            case 2:
            {
                cout<<"\n1. Print Matrix 1"<<endl;
                cout<<"2. Print Matrix 2"<<endl;
                cout<<"Enter choice : ";
                cin>>choice;

                if(choice == 1) mat1->print();
                else mat2->print();
                break;
            }
            case 3:
            {
                mat = mat1->add(mat2);
                if(mat == NULL) break;
                cout<<"\nAfter addition : ";
                mat->print();
                break;
            }
            case 4:
            {
                mat = mat1->sub(mat2);
                if(mat == NULL) break;
                cout<<"\nAfter subtraction : ";
                mat->print();
                break;
            }
            case 5:
            {
                mat = mat1->mul(mat2);
                if(mat == NULL) break;
                cout<<"\nAfter multiplication : ";
                mat->print();
                break;
            }
            case 6:
            {
                cout<<"\n1. Transpose Matrix 1"<<endl;
                cout<<"2. Transpose Matrix 2"<<endl;
                cout<<"Enter choice : ";
                cin>>choice;

                if(choice == 1)
                {
                    mat1->transpose();
                    mat1->print();
                }
                else
                {
                    mat2->transpose();
                    mat2->print();
                }
                break;
            }
            default:
                cout<<"\nWrong choice ...."<<endl;
        }
    }

    delete mat;
    delete mat1;
    delete mat2;

    return 0;
}