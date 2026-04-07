#include <stdio.h>
#include "sensor.h"
int main()
{
    struct sensor s[3];
    
    s[0].type = TEMPERATURE;
    s[0].data.reading = 25.7;

    s[1].type = VOLTAGE;
    s[1].data.reading = 9.22;

    s[2].type = PRESSURE;
    s[2].data.raw = 556;
    
    printf("TEMPERATURE: %f\n", s[0].data.reading);
    printf("VOLTAGE: %f\n", s[1].data.reading);
    printf("PRESSURE: %d\n", s[2].data.raw);
    return 0;
}