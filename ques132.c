//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

enum Traffic
{
    RED, YELLOW, GREEN
};

int main()
{
    enum Traffic light;
    int choice;

    printf("Enter traffic light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &choice);

    light = choice;

    if (light == RED)
    {
        printf("Stop");
    }
    else if (light == YELLOW)
    {
        printf("Wait");
    }
    else if (light == GREEN)
    {
        printf("Go");
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}