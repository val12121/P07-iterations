CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS =                                #Enlace en caso de que hubiese uno 

all: suma_de_digitos

suma_de_digitos: suma_de_digitos.o 

# Tenemos el objetivo y el previo, los pasos en el primero se ejecutaran
# en caso de que se haya completado el segundo o que el primero sea una
# version más vieja que el segundo

	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: all clean

clean :
	rm -f *.o suma_de_digitos doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;
