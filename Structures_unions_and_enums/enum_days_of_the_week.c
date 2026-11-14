#include <stdio.h>

enum Days
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main()
{
    enum Days today;

    today = WEDNESDAY;

    printf("Today is day number: %d\n", today);

    return 0;
}
