#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", height, width, length);
    printf("Volume: %d\n", volume);
    printf("Weight: %d\n", weight);

    return 0;
}