/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file suma_de_digitos.cc
  * @author Camila Valentina Alonso Yepez
  * @date 1 Nov 2023
  * @brief Recibe un numero por teclado e imprime la suma de 
  *        de sus digitos por pantalla
  * @bug There are no known bugs
  * @see 
  */

#include <iostream> 

int Sumando(int num) {
int resultado = 0;

  while (num > 0) {
    resultado += num % 10; 
    num = num/10;    
  }   

return resultado;    
}  

int main() {

  int numero;
  std::cin >> numero;
  std::cout << Sumando(numero) << std::endl;
  
  return 0;
}
