#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

float fahrToCelsius(float fahr) 
{
    return (5.0/9.0) * (fahr-32.0);
}

float celsiusToFahr(float celsius) 
{
    return (9.0/5.0) * celsius+32.0;
}

void displayTemp(bool reverse, float (*operation)(float))
{
    if (!reverse)
    {
        for (float i = LOWER; i <= UPPER; i = i + STEP)
        {
            printf("%3f %6.1f\n", i, operation(i));
        }
    }
    else
    {
        for (float i = UPPER; i >= LOWER; i = i - STEP)
        {
            printf("%3f %6.1f\n", i, operation(i));
        }
    }
}
int main()
{
    displayTemp(false, fahrToCelsius);
    return 0;
}
