// WRITE YOUR CODE HERE
#include <sstream>
class Complex{
  private:
    int real_;
    int imag_;
  public:
    // Costructors, defualt and when provided arguments
    Complex() = default;
    Complex(int, int );
    // Getters
    int real() const{return real_;}
    int imaginary() const{return imag_;}
    // Setters
    void real(int r){real_ = r;}
    void imaginary(int i){imag_ = i;}
    // Overloaded <<
    friend std::ostream& operator<<(std::ostream& out, const Complex& num){
      out << num.real_;
      if(num.imag_ >= 0){
        out << "+" << num.imag_ << "i";
      }
      else{
        out << num.imag_ << "i";
      }
      return out;
    }
    // Overloaded *
    friend Complex operator*(Complex const&, Complex const&);
    



};