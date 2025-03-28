CC := gcc

football.exe: football_main.o football.o
	$(CC) -o football.exe football_main.o football.o

football_main.o: football_main.c football.h
	$(CC) -c football_main.c

football.o: football.c football.h
	$(CC) -c football.c

clean:
	rm -f *.o football.exe

temperature.exe: temperature_main.o temperature.o
	$(CC) -o temperature.exe temperature_main.o temperature.o

temperature_main.o: temperature_main.c temperature.h
	$(CC) -c temperature_main.c

temperature.o: temperature.c temperature.h
	$(CC) -c temperature.c

clean:
	rm -f *.o temperature.exe
