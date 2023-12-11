#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H
#include <cmath>
namespace complex_numbers {
  class Complex {
   public:
    /**
     * @brief Constructores
     */
    Complex() : real_{}, imag_{} {}
    Complex(const double kReal, const double kImaginary) : real_{kReal}, imag_{kImaginary} {}
    
    /**
     * @brief Getters
     */
    double real() const { return real_; }
    double imag() const { return imag_; }
    /**
     * @brief Métodos
     */
    Complex conj() const;
    double abs() const;
    Complex exp() const;
   private:
    double real_;
    double imag_;
};
  /**
   * @brief Sobrecargade operadores de la clase Complex
   */
  Complex operator+(const Complex& kNumero1, const Complex& kNumero2);
  Complex operator-(const Complex& kNumero1, const Complex& kNumero2);
  Complex operator*(const Complex& kNumero1, const Complex& kNumero2);
  Complex operator/(const Complex& kNumero1, const Complex& kNumero2);
}  // namespace complex_numbers
#endif  // COMPLEX_NUMBERS_H