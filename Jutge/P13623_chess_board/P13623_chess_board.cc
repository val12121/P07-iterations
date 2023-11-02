#include <iostream>
int main() {

  int fila = 0;
  int columna = 0;
  int resultado = 0;
  char moneda;  

  std::cin >> fila >> columna;

  for (int i = 0; i < fila; i++) {
    for (int j = 0; j < columna; j++) {
      std::cin >> moneda;

      if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) {
        resultado += static_cast<int>(moneda);
      }
    }
  }
  std::cout << resultado << std::endl;
}
