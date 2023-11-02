#include <iostream>
#include <iomanip> 

int main() {

  double numero = 0;
  double resultado = 0;

  std::cin >> numero;

  for (double i = 1; i <= numero; i++) {
    resultado += 1/i;
  }
  
  std::cout << std::fixed << std::setprecision(4) << resultado;
  std::cout << std::endl;

} 
