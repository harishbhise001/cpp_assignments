#include "student.h"

enum Emenu
{
    EXIT,
    ACCEPT,
    PRINT,
    SEARCH,
    SORT
};

Emenu menu()
{
    int choice;
    cout<<"\n----------------------------"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Accept"<<endl;
    cout<<"2. Print"<<endl;
    cout<<"3. Search"<<endl;
    cout<<"4. Sort"<<endl;
    cout<<"Enter choice : ";
    cin>>choice;
    return Emenu(choice);
}

void serachRecords(Student **stud_arr, int index, int rollNo)
{
    bool found = false;
    int i;
    for(i=0;i<index;i++)
    {
        if(stud_arr[i]->getRollNo() == rollNo) 
        {
            found = true;
            break;
        }
    }

    if(found) 
    {
        cout<<"\nStudent with roll no "<<rollNo<<" found. Details are below : "<<endl;
        stud_arr[i]->print();
    }
    else
    {
        cout<<"\nStudent with roll no "<<rollNo<<" not found."<<endl;
    }
}

int compare(Student *obj1, Student *obj2)
{
    return obj1->getRollNo() < obj2->getRollNo(); 
}

void sortRecords(Student **stud_arr, int size)
{
    sort(stud_arr,stud_arr+size,compare);
    cout<<"\nStudents sorted successfully."<<endl;
}

int main()
{
    Student **stud_arr = NULL;
    Emenu choice;

    int size,rollNo,index=0,count=0;
    cout<<"\nEnter number of students : ";
    cin>>size;

    stud_arr = new Student*[size];
    for(int i=0;i<size;i++)
        stud_arr[i] = NULL;

    while(choice  = menu())
    {
        switch(choice)
        {
            case ACCEPT:
                if(index == size) 
                {
                    cout<<"\nArray is full."<<endl;
                    break;
                }

                stud_arr[index] = new Student();
                stud_arr[index]->accept();
                index++;
                break;

            case PRINT:
                for(int i=0;i<index;i++)
                {
                    stud_arr[i]->print();
                    count++;
                }

                cout<<"\nPrinted "<<count<<" students."<<endl;
                count = 0;
                break;

            case SEARCH:
                cout<<"\nEnter roll no : ";
                cin>>rollNo;

                serachRecords(stud_arr,index,rollNo);
                break;

            case SORT:
                sortRecords(stud_arr,index);
                break;

            default:
                cout<<"\nWrong choice...."<<endl;
        }

    }

    for(int i=0;i<size;i++)
        delete[] stud_arr[i];

    delete stud_arr;

    return 0;
}