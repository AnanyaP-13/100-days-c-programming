//Q146: Create Employee structure with nested Date structure for joining date and print details.


#include <stdio.h>

struct Date
{
    int day, month, year;
};

struct Employee
{
    char name[50];
    int id;
    struct Date joiningDate;
};

int main()
{
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter joining date: ");
    scanf("%d %d %d", &e.joiningDate.day,
          &e.joiningDate.month, &e.joiningDate.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d",
           e.name, e.id, e.joiningDate.day,
           e.joiningDate.month, e.joiningDate.year);

    return 0;
}
