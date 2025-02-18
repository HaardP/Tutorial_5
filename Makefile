CC = g++
CFLAGS = -std=c++11 -Wall -I /opt/X11/include
LFLAGS = -lX11 -L /opt/X11/lib

OBJS = main.o TextArea.o TAArray.o T5TextArea.o T5TAArray.o Tester.o RGB.o

tutorial5: $(OBJS)
	$(CC) $(LFLAGS) -o tutorial5 $(OBJS)

main.o: main.cc T5TAArray.h Tester.h
	$(CC) $(CFLAGS) -c main.cc

TextArea.o: TextArea.cc TextArea.h RGB.h
	$(CC) $(CFLAGS) -c TextArea.cc

TAArray.o: TAArray.cc TAArray.h
	$(CC) $(CFLAGS) -c TAArray.cc

T5TextArea.o: T5TextArea.h TextArea.h
	$(CC) $(CFLAGS) -c T5TextArea.cc

T5TAArray.o: T5TAArray.h TAArray.h
	$(CC) $(CFLAGS) -c T5TAArray.cc

Tester.o: Tester.cc Tester.h
	$(CC) $(CFLAGS) -c Tester.cc

RGB.o: RGB.h
	$(CC) $(CFLAGS) -c RGB.cc

clean:
	rm -f tutorial5 $(OBJS)
