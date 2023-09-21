#include "../include/fraction.h"
#include "../include/myexcept.h"

enum Eoptions
{
    EXIT,
    INIT_FRACTION_1,
    INIT_FRACTION_2,
    SET_NUM,
    SET_DENO,
    LOWEST_FORM,
    DECIMAL_VALUE,
    ADD,
    SUB,
    MUL,
    DIV,
    ASSIGN,
    EQUAL,
    NOT_EQUAL,
    LESS,
    GREATER,
    DISP
};

Eoptions menu()
{
    int choice;
    cout << "\n------------------" << endl;
    cout << "0. Extit" << endl;
    cout << "1. Initialize Fraciton 1" << endl;
    cout << "2. Initialize Fraciton 2" << endl;
    cout << "3. Set numerator" << endl;
    cout << "4. Set denominator" << endl;
    cout << "5. Lowest form" << endl;
    cout << "6. Decimal value" << endl;
    cout << "7. Add" << endl;
    cout << "8. Sub" << endl;
    cout << "9. Multiply" << endl;
    cout << "10. Divide" << endl;
    cout << "11. Assign" << endl;
    cout << "12. Equal" << endl;
    cout << "13. Not equal" << endl;
    cout << "14. Less than" << endl;
    cout << "15. Greater than" << endl;
    cout << "16. Display" << endl;
    cout << "Enter choice : ";
    cin >> choice;
    return Eoptions(choice);
}

int subMenu()
{
    cout << "shri swami samarth" << endl;
    int choice;
    cout << "1. Fraction 1" << endl;
    cout << "2. Fraction 2" << endl;
    cin >> choice;
    return choice;
}

int main()
{

    Fraction f1;
    Fraction f2;
    Fraction *result = NULL;

    int numerator, denominator, ch;
    Eoptions choice;

    while (choice = menu())
    {
        switch (choice)
        {
        case INIT_FRACTION_1:
        {
            cout << "\nEnter numerator : ";
            cin >> numerator;
            cout << "\nEnter denominator : ";
            cin >> denominator;

            f1.set_numerator(denominator);
            try
            {
                f1.set_denominator(denominator);
            }
            catch (DivideByZeroException &e)
            {
                cout << e.what() << endl;
            }
            break;
        }

        case INIT_FRACTION_2:
        {
            cout << "\nEnter numerator : ";
            cin >> numerator;
            cout << "\nEnter denominator : ";
            cin >> denominator;

            f2.set_numerator(numerator);
            try
            {
                f2.set_denominator(denominator);
            }
            catch (DivideByZeroException &e)
            {
                cout << e.what() << endl;
            }
            break;
        }

        case SET_NUM:
        {
            ch = subMenu();
            cout << "\nEnter numerator : ";
            cin >> numerator;
            if (ch == 1)
                f1.set_numerator(numerator);
            else
                f2.set_numerator(numerator);
            break;
        }

        case SET_DENO:
        {
            ch = subMenu();
            cout << "\nEnter denominator : ";
            cin >> denominator;
            try
            {
                if (ch == 1)
                    f1.set_denominator(denominator);
                else
                    f2.set_denominator(denominator);
            }
            catch (DivideByZeroException &e)
            {
                cout << e.what() << endl;
            }
            break;
        }

        case LOWEST_FORM:
        {
            ch = subMenu();
            if (ch == 1)
            {
                f1.lowestForm();
                f1.display();
            }
            else
            {
                f2.lowestForm();
                f2.display();
            }
            break;
        }

        case DECIMAL_VALUE:
        {
            ch = subMenu();
            if (ch == 1)
            {
                f1.display();
                cout << "\nDecimal value of Fraction 1 : " << f1.decimalValue() << endl;
            }
            else
            {
                f2.display();
                cout << "\nDecimal value of Fraction 2 : " << f2.decimalValue() << endl;
            }
            break;
        }

        case ADD:
        {
            result = f1 + f2;
            result->display();
            break;
        }

        case SUB:
        {
            result = f1 - f2;
            result->display();
            break;
        }

        case MUL:
        {
            result = f1 * f2;
            result->display();
            break;
        }

        case DIV:
        {
            try
            {
                result = f1 / f2;
                result->display();
            }
            catch (DivideByZeroException &e)
            {
                cout << e.what() << endl;
            }
            break;
        }

        case ASSIGN:
        {
            result = &f2;
            result->display();
            break;
        }

        case EQUAL:
        {
            f1.display();
            f2.display();
            if (f1 == f2)
                cout << "\nf1 and f2 are equal" << endl;
            else
                cout << "\nf1 and f2 are not equal" << endl;
            break;
        }

        case NOT_EQUAL:
        {
            f1.display();
            f2.display();
            if (f1 != f2)
                cout << "\nf1 and f2 are not equal" << endl;
            else
                cout << "\nf1 and f2 are equal" << endl;
            break;
        }

        case LESS:
        {
            f1.display();
            f2.display();
            if (f1 < f2)
                cout << "\nf1 is less than f2" << endl;
            else
                cout << "\nf1 is not less than f2" << endl;
            break;
        }

        case GREATER:
        {
            f1.display();
            f2.display();
            if (f1 > f2)
                cout << "\nf1 is greater than f2" << endl;
            else
                cout << "\nf1 is not greater than f2" << endl;
            break;
        }

        case DISP:
        {
            ch = subMenu();
            if (ch == 1)
                f1.display();
            else
                f2.display();
            break;
        }

        default:
            cout << "\nWrong choice ..." << endl;
        }
    }

    delete result;
    return 0;
}