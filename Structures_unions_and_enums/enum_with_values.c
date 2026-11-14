#include <stdio.h>

enum Status
{
    OFF = 0,
    ON = 1,
    ERROR = -1
};

int main()
{
    enum Status device;

    device = ON;

    printf("Device Status: %d\n", device);

    return 0;
}
