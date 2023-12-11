#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo {
 private:
  double real;
  double imaginario;
 public:
  Complejo(double real_, double imaginario_); //Constructor
  Complejo(); //Constructor por defecto, imagina que el objeto tiene que crearse primero para luego darle valores
  friend Complejo operator+(const Complejo& numero_1, const Complejo& numero_2) {
    Complejo resultado{0,0};
    resultado.real = numero_1.real + numero_2.real;
    resultado.imaginario = numero_1.imaginario + numero_2.imaginario;
    return resultado;
  }
  friend Complejo operator-(const Complejo& numero_1, const Complejo& numero_2) {
    // Complejo resultado;
    // resultado.real = numero_1.real - numero_2.real;
    // resultado.imaginario = numero_1.imaginario - numero_2.imaginario;
    // return resultado;
    return (Complejo{ numero_1.real - numero_2.real, numero_1.imaginario - numero_2.imaginario })
  }
  friend std::ostream& operator<<(std::ostream& out, const Complejo& complejo) {
    out << "{" << complejo.real << "," << complejo.imaginario << "i}" << "\n";
    return out; 
  }
  /** Para sobrecargar <<      Point es el nombre de la class
   * std::ostream& operator<<(std::ostream& out, const Point& point) +{
  out << "Point(" << point.x_coordinate_ << ", " << point.y_coordinate_ << ", " << point.z_coordinate_ << ')'; // actual output done here
  return out; 
}
   * 
  */
};

Complejo::Complejo() { //Constructor por defecto, imagina que el objeto tiene que crearse primero para luego darle valores
    real = 0;
    imaginario = 0;
}

Complejo::Complejo(double real_, double imaginario_) { //Inicializado 
    real = real_;
    imaginario = imaginario_;
}

#endif