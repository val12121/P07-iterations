CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS =                                #Enlace en caso de que hubiese uno 

all: P29973_triangle

P29973_triangle: P29973_triangle.o 

# Tenemos el objetivo y el previo, los pasos en el primero se ejecutaran
# en caso de que se haya completado el segundo o que el primero sea una
# version más vieja que el segundo

	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: all clean

clean :
	rm -f *.o P29973_triangle doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;
