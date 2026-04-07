all: sensor_logger

sensor_logger: main.o sensor.o
	gcc main.o sensor.o -o sensor_logger -lm

main.o: main.c sensor.h
	gcc -c main.c 

sensor.o: sensor.c sensor.h
	gcc -c sensor.c

clean:
	rm -f *.o sensor_logger 
