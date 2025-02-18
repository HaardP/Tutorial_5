# Compiler and Flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -I /opt/X11/include
LDFLAGS = -lX11 -L /opt/X11/lib

# Object Files
objects = main.o RGB.o TextArea.o TAArray.o T5TextArea.o T5TAArray.o Tester.o TestControl.o View.o

# Executable
tutorial5: $(objects)
	$(CXX) -o tutorial5 $(objects) $(LDFLAGS)

# Main Program
main.o: main.cc TestControl.h
	$(CXX) $(CXXFLAGS) -c main.cc

# RGB
RGB.o: RGB.cc RGB.h
	$(CXX) $(CXXFLAGS) -c RGB.cc

# TextArea
TextArea.o: TextArea.cc TextArea.h RGB.h
	$(CXX) $(CXXFLAGS) -c TextArea.cc

# TAArray
TAArray.o: TAArray.cc TAArray.h TextArea.h
	$(CXX) $(CXXFLAGS) -c TAArray.cc

# T5TextArea (Tutorial 5)
T5TextArea.o: T5TextArea.cc T5TextArea.h TextArea.h
	$(CXX) $(CXXFLAGS) -c T5TextArea.cc

# T5TAArray (Tutorial 5)
T5TAArray.o: T5TAArray.cc T5TAArray.h TAArray.h
	$(CXX) $(CXXFLAGS) -c T5TAArray.cc

# Tester
Tester.o: Tester.cc Tester.h
	$(CXX) $(CXXFLAGS) -c Tester.cc

# TestControl
TestControl.o: TestControl.cc TestControl.h View.h Tester.h
	$(CXX) $(CXXFLAGS) -c TestControl.cc

# View
View.o: View.cc View.h
	$(CXX) $(CXXFLAGS) -c View.cc

# Clean Build Files
clean:
	rm -f tutorial5 $(objects)
