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
    cout<<"1. Accept Data in first matrix mat1"<<endl;
    cout<<"2. Initialize second matrix mat2 with copy constructor"<<endl;
    cout<<"3. Initialize second matrix mat2 with = overloaded operator"<<endl;
    cout<<"4. Print Data"<<endl;
    cout<<"5. Add"<<endl;
    cout<<"6. Subtract"<<endl;
    cout<<"7. Multiply"<<endl;
    cout<<"8. Transpose"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    return choice;
}

int main()
{
    int choice;
    Matrix *mat = NULL;
    Matrix mat1;
    Matrix mat2;

    while(choice = menu())
    {
        switch(choice)
        {
            case 1:
            {
                mat1.accept();
                break;
            }

            case 2:
            {
                Matrix m(mat1);
                m.print();
                mat2 = m;
                break;
            }

            case 3:
            {
                Matrix m = mat1;
                m.print();
                mat2 = m;
                break;
            }

            case 4:
            {
                cout<<"\n1. Print Matrix 1"<<endl;
                cout<<"2. Print Matrix 2"<<endl;
                cout<<"Enter choice : ";
                cin>>choice;

                if(choice == 1) mat1.print();
                else mat2.print();
                break;
            }
            case 5:
            {
                mat = mat1.add(&mat2);
                if(mat == NULL) break;
                cout<<"\nAfter addition : ";
                mat->print();
                break;
            }
            case 6:
            {
                mat = mat1.sub(&mat2);
                if(mat == NULL) break;
                cout<<"\nAfter subtraction : ";
                mat->print();
                break;
            }
            case 7:
            {
                mat = mat1.mul(&mat2);
                if(mat == NULL) break;
                cout<<"\nAfter multiplication : ";
                mat->print();
                break;
            }
            case 8:
            {
                cout<<"\n1. Transpose Matrix 1"<<endl;
                cout<<"2. Transpose Matrix 2"<<endl;
                cout<<"Enter choice : ";
                cin>>choice;

                if(choice == 1)
                {
                    mat1.transpose();
                    mat1.print();
                }
                else
                {
                    mat2.transpose();
                    mat2.print();
                }
                break;
            }
            default:
                cout<<"\nWrong choice ...."<<endl;
        }
    }

    delete mat;
    // delete mat1;
    // delete mat2;

    return 0;
}