/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file leap_year.cc
  * @author Camila Valentina Alonso Yepez
  * @date 1 NOV 2023
  * @brief El programa recibe un año y dice si es bisiesto
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
int main() {

  int year;
  std::cin >> year;

  if (year % 4 == 0 && year % 100 != 0) {
    std::cout << year << " -> YES";
  } else if (year % 400 == 0) {
    std::cout << year << " -> YES";
  } else {
    std::cout << year << " -> NO";
  }
  std::cout << std::endl;

} 
