/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P22973_triangle.cc
  * @author Camila Valentina Alonso Yepez
  * @date 2 Nov 2023
  * @brief Imprime un triangulo con el numero de * y 
           filas "numero" 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P29973
  */

#include <iostream>
int main() {

  int numero = 0;
  std::cin >> numero;

  for (int i = 0; i < numero; i++) {
    for (int j = 0; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << std::endl; 
  }

}
