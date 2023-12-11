 /**
   * Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática  
   * Informática Básica 2023-2024
   * @file P57548.cc
   * @author Diego Vegas Acosta alu0101651361@ull.edu.es
   * @date Oct 10 2023    
   * @brief The program sums two numbers
   * @bug There are no known bugs
   * @see https://jutge.org/problems/P57548
   */

#include <iostream>
#include "complejo.h"

int main() {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado{0,0};
  resultado = complejo1 + complejo2;
  std::cout << resultado;
  resultado = complejo1 - complejo2;
  std::cout << resultado;
}

  /**
   * Desarrolle un programa cliente complejos.cc que permita operar con números complejos y haga uso de la clase 
   * Complejo que diseñe. La clase Complejo ha de contener al menos métodos que implementen la sobrecarga de los operadores
   * de suma y resta de números complejos así como de los operadores de inserción y extracción en flujos (streams). 
   * Así la función main del programa complejos.cc podría contener (entre otras) sentencias como las siguientes:

main() {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;
  resultado = complejo1 + complejo2;
  std::cout << resultado;
  resultado = complejo1 - complejo2;
  std::cout << resultado;
}
Incluya (discrecionalmente) cualesquiera otras operaciones que considere adecuadas como métodos en la clase Complejo.
  */