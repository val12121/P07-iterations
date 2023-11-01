/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file decimal_to_binary.cc
  * @author Camila Valentina Alonso Yepez
  * @date 1 Nov 2023
  * @brief Pasa los números de decimal a binario
  * @bug There are no known bugs
  * @see 
  */


#include <iostream>
int main () {

  int numero = 0;
  int binario = 0;
  int aux = 0;
  int base = 1;

  std::cin >> numero;

  if (numero == 0) {
    std::cout << 0;
  } else {
    while (numero > 0) {
      aux = numero % 2;
      binario += base * aux;
      numero = numero / 2;
      base = base * 10;
    }
  }
  std::cout << binario << std::endl;
}

