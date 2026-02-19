#include <iostream>
#include <string>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex& a) {
        return Complex(real + a.real, imag + a.imag);
    }

    Complex operator-(const Complex& a) {
        return Complex(real - a.real, imag - a.imag);
    }

    Complex operator*(const Complex& a) {
        double r = real * a.real - imag * a.imag;
        double i = real * a.imag + imag * a.real;
        return Complex(r, i);
    }

    string toString() {
        string result = to_string(real);
        if (imag >= 0)
            result += " + " + to_string(imag) + "i";
        else
            result += " - " + to_string(-imag) + "i";
        return result;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, -5);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;

    cout << "c1 = " << c1.toString() << endl;
    cout << "c2 = " << c2.toString() << endl;

    cout << "\nSum = " << sum.toString() << endl;
    cout << "Difference = " << diff.toString() << endl;
    cout << "Product = " << prod.toString() << endl;

    return 0;
}
