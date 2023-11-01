/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file fibonacci.cc
  * @author Camila Valentina Alonso Yepez
  * @date 1 Nov 2023
  * @brief Imprime los n primeros números de la serie de fibonacci
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
void Fibonacci(int numero) {

  int aux1 = 0;
  int aux2 = 1;

  std::cout << aux1 << " ";
  numero = numero - 2;  

  while (numero >= 0) {
    std::cout << aux2 << " ";  
    aux2 = aux1 + aux2;
    aux1 = aux2 - aux1;
    numero--; 
  }
  std::cout << std::endl;
}

int main() {

  int numero;

  std::cin >> numero;
  Fibonacci(numero);

return 0;

}
