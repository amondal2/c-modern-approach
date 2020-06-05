#include <stdio.h>
#define RATIO (4.0f / 3.0f)
#define PI 3.14f

int main(void)
{
    float radius = 10.0f;
    float volume = RATIO * PI * radius * radius * radius;
    printf("Volume is: %0.2f\n", volume);
    return 0;
}
