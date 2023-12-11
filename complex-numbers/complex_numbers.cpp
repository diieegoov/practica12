#include "complex_numbers.h"
namespace complex_numbers {
  
  /**
   * @brief Sobrecarga del operador suma de la clase complejo
   * @param[in] kNumero1
   * @param[in] kNumero2
   * @return Suma de los dos complejos
   */
  Complex operator+(const Complex& kNumero1, const Complex& kNumero2) {
    Complex result{kNumero1.real() + kNumero2.real(), kNumero1.imag() + kNumero2.imag()};
    return result;
  }
  /**
   * @brief Sobrecarga del operador resta de la clase complejo
   * @param[in] kNumero1
   * @param[in] kNumero2
   * @return Resta de los dos complejos
   */
  Complex operator-(const Complex& kNumero1, const Complex& kNumero2) {
    Complex result{kNumero1.real() - kNumero2.real(), kNumero1.imag() - kNumero2.imag()};
    return result;
  }
  /**
   * @brief Sobrecarga del operador multiplicación de la clase complejo
   * @param[in] kNumero1
   * @param[in] kNumero2
   * @return Producto de los dos complejos
   */
  Complex operator*(const Complex& kNumero1, const Complex& kNumero2) {
    Complex result{kNumero1.real() * kNumero2.real() - kNumero1.imag() * kNumero2.imag(),
                   kNumero1.imag() * kNumero2.real() + kNumero1.real() * kNumero2.imag()};
    return result;
  }
    /**
   * @brief Sobrecarga del operador división de la clase complejo
   * @param[in] kNumero1
   * @param[in] kNumero2
   * @return Cociente de los dos complejos
   */
  Complex operator/(const Complex& kNumero1, const Complex& kNumero2) {
    Complex result{(kNumero1.real() * kNumero2.real() + kNumero1.imag() * kNumero2.imag()) /
                   (kNumero2.real() * kNumero2.real() + kNumero2.imag() * kNumero2.imag()),
                   (kNumero1.imag() * kNumero2.real() - kNumero1.real() * kNumero2.imag()) /
                   (kNumero2.real() * kNumero2.real() + kNumero2.imag() * kNumero2.imag())};
    return result;
  }
  /**
   * @brief Método de la clase complejo que halla el conjugado
   * @return Conjugado de un complejo
   */
  Complex Complex::conj() const{
    Complex conjugate{real_ , -imag_};
    return conjugate;
  }
  /**
   * @brief Método de la clase complejo que halla el valor 
   *        absoluto de un complejo
   * @return Valor absoluto de un complejo
   */
  double Complex::abs() const{
    const double absolute{sqrt(real_ * real_ + imag_ * imag_)};
    return absolute;
  }
  /**
   * @brief Método de la clase complejo que halla el exponente 
   *        de un número complejo
   * @return Exponente de un complejo
   */
  Complex Complex::exp() const{
    Complex result{std::exp(real_) * cos(imag_), std::exp(real_) * sin(imag_)};
    return result;
    }
}  // namespace complex_numbers