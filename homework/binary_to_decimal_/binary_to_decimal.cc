/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file binary_to_decimal.cc
  * @author Camila Valentina Alonso Yepez
  * @date 1 Nov 2023
  * @brief Convierte nueros de binario a decimal, en
  *        caso de no ser binario manda un mensaje de error.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>

void BinarioDecimal(int num_binario) {

  int resultado = 0;
  int resto = 0;
  int i = 0;
  bool no_binario = false;

  int num_binario_pr = num_binario;

  while(num_binario_pr != 0) {
    resto = num_binario_pr % 10;
    num_binario_pr = num_binario_pr / 10;
    if (resto != 0 && resto != 1) {
      no_binario = true;
    }
  } 

  if (no_binario == false) {
    while (num_binario != 0) {
      resto = num_binario % 10;
      num_binario = num_binario / 10;
      resultado += resto * pow (2, i);
      i++;
    }
    std::cout << resultado << std::endl;
  } else {
    std::cout << "Wrong Input" << std::endl;
  }

}

int main() {

  int numero;
  std::cin >> numero;

  BinarioDecimal(numero);

  return 0;

}
