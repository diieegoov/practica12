/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Dec 16 2022
 * @brief Vector3D class Definition
 */

#ifndef VECTOR3D_H
#define VECTOR3D_H

/** @brief Class Vector3D */
class Vector3D {
 public:
  Vector3D() : coordenada_x_{0.0}, coordenada_y_{0.0}, coordenada_z_{0.0} { };
  // 3 Getters:
  double x_position() { return coordenada_x_; }; 
  double y_position() { return coordenada_y_; };
  double z_position() { return coordenada_z_; };
 private:
  double coordenada_x_;
  double coordenada_y_;
  double coordenada_z_;
};

std::ostream& operator<<(std::ostream& kOutput, Vector3D vector1);

#endif