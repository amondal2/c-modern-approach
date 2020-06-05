#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter height: ");
    scanf("%d", &height);

    printf("Enter width: ");
    scanf("%d", &width);

    printf("Enter length: ");
    scanf("%d", &length);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", height, width, length);
    printf("Volume: %d\n", volume);
    printf("Weight: %d\n", weight);

    return 0;
}