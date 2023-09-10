#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int year, month, day;
};

struct Date* initDate(struct Date *ptrDate);
void acceptDateFromConsole(struct Date *ptrDate);
void printDateOnConsole(struct Date *ptrDate);
int menu();

int main()
{
    struct Date* ptrDate;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            ptrDate = initDate(ptrDate);
            break;

        case 2:
            acceptDateFromConsole(ptrDate);
            break;

        case 3:
            printDateOnConsole(ptrDate);
            break;

        default:
            printf("\nWrong Choice...");
        }
    }
    return 0;
}

int menu()
{
    int choice;

    printf("\n0 = Exit\n1 = Init Date\n2 = Accept Date\n3 = Print Date\n");
    scanf("%d", &choice);
    return choice;
}

struct Date* initDate(struct Date *ptrDate)
{
    ptrDate = (struct Date *)malloc(sizeof(struct Date));
    ptrDate->day = 0;
    ptrDate->month = 0;
    ptrDate->year = 0;
    printf("\nDate initilized...\n");
    return ptrDate;
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("\nEnter Date (DD MM YYYY) : ");
    scanf("%d%d%d", &ptrDate->day, &ptrDate->month, &ptrDate->year);
}

void printDateOnConsole(struct Date *ptrDate)
{
    printf("\nDate : %d/%d/%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}