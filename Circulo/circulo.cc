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
#include <cmath>
#include <string>

class Circulo {
 public:
  Circulo(double, double, double); //Constructor
  Circulo(); //Constructor por defecto
  double Area();
  double Perimetro();
  void Print();
 private:
  double centro_, radio_, punto_;
};

Circulo::Circulo(double centro, double radio, double punto) { //Inicializador
  centro_ = centro;
  radio_ = radio;
  punto_ = punto;
}

double Circulo::Area() {
  double area;
  area = M_PI * (radio_ * radio_);
  return area;
}

double Circulo::Perimetro() {
  double perimetro;
  perimetro = 2 * M_PI * radio_;
  return perimetro;
}

void Circulo::Print() {
  std::cout << "Área: " << this->Area() << "\n";
  std::cout << "Perímetro: " << this->Perimetro() << "\n";
}

int main(const int argc, char *argv[])  {
  double centro = std::stod(argv[1]);
  double radio = std::stod(argv[2]);
  double punto = std::stod(argv[3]);
  Circulo bola(centro, radio, punto);
  bola.Print();
  return 0;
}




/**#include <iostream>
#include <cmath>

class Circulo {
 private: 
  double centro, radio;
 public:
  Circulo(double, double); //Constructor
  double Area();
  double Perimetro();
  void Print();
};

Circulo::Circulo(double centro_, double radio_) { //Inicialización
  centro = centro_;
  radio = radio_;
}

double Circulo::Area() {
  double area = M_PI * (radio * radio);
  return area;
}

double Circulo::Perimetro() {
  double perimetro = 2 * M_PI * radio;
  return perimetro;
}

void Circulo::Print() {
  std::cout << "Área: " << this->Area() << std::endl;
  std::cout << "Perímetro: " << this->Perimetro() << std::endl;
}

int main(const int argc, char *argv[]) {
  double centro = std::stod(argv[1]);
  double radio = std::stod(argv[2]);
  Circulo circulo(centro, radio);
  circulo.Print();
}
*/

  /**
   * Diseñe una clase Circulo que permita representar círculos utilizando como atributos el centro,
   *  el radio y el color del círculo. Utilice una enumeración (enum) para representar el 
   * color del círculo. Incluya métodos Area, Perimetro y Print que permitan respectivamente calcular 
   * el área, el perímetro del círculo así como imprimir en pantalla la información relativa al 
   * círculo en cuestión. Incluya asimimsmo un método EsInterior que determine si un punto del espacio 
   * cartesiano (x, y) está o no dentro del círculo.
  */