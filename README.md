# Sensor Data Logger

A C-based sensor data logger that models temperature, voltage, and pressure readings using structs, unions, and enums. Built as part of an embedded firmware learning roadmap targeting bare-metal STM32 development.

## Project Structure
sensor-data-logger/
├── main.c       # Entry point, sensor array population and output
├── sensor.h     # SensorType enum, value union, and sensor struct definitions
├── sensor.c     # Sensor module implementation
└── Makefile     # Build and clean targets

## Build Instructions
```bash
make          # Compile and produce sensor_logger binary
make clean    # Remove object files and binary
```

## Run
```bash
./sensor_logger
```

## Concepts Practiced

- Enums for named sensor type constants
- Unions for memory-efficient value storage (float vs uint32_t)
- Tagged structs combining enum + union
- Makefile with dependency tracking
- Git branching and PR workflow