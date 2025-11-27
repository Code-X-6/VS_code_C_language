#include<stdio.h>

int main()
{
    float height = 0;
    float weight = 0;
    float bmi = 0;
    printf("Please enter your current height:\n");
    scanf("%f", &height);
    printf("Please enter your current weight:\n");
    scanf("%f", &weight);

    bmi = weight / (height * height);
    printf("Your current bmi is %f:",bmi );
    return 0;
}