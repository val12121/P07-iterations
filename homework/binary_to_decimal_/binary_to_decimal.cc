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

void PrintProgramPurpose() {
  std::cout << "Any program should start its execution with an informative message" << std::endl;
  std::cout << "(like this) that informs the user about the purpose of the program." << std::endl;
  std::cout << "After printing that message, the program should check that the user" << std::endl;
  std::cout << "has provided the correct number of parameters to the program." << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << " param1 param2" << std::endl;
    std::cout << "param1: " << " An integer number meaning bla, bla, bla" << std::endl;
    std::cout << "param2: " << " A string representing la, bla, bla" << std::endl;
    return false;
  }
  return true;
}

void BinarioDecimal(int argc, char* argv[], int num_binario) {

  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    exit;
  }

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

  std::cout << "Everything is fine!. Lets continue with the normal execution..." << argc << std::endl;

  BinarioDecimal(numero);

  return 0;

}