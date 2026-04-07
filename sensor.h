#include <stdint.h>

#ifndef SENSOR_H
#define SENSOR_H
enum SensorType
{
    TEMPERATURE,
    VOLTAGE,
    PRESSURE
};

struct sensor
{
    enum SensorType type;

    union value
    {
        float reading;
        uint32_t raw;
    }data;
};

#endif
