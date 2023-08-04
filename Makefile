CC = g++ -std=c++20
CFLAGS  = -g -Wall
RM = rm

OPENCV = `pkg-config --cflags --libs opencv4`
XLIB = `pkg-config --cflags --libs x11`

LIBS = $(OPENCV) $(XLIB)

all: main run

main: startup.o
	$(CC) $(CFLAGS) -o startup -lX11 startup.o $(LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $< $(LIBS)

run:
	./startup
	
clean:
	rm *.o startup