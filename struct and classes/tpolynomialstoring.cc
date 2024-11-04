#include <iostream>
#include <vector>

class Polynomial {
private:
    std::vector<double> coefficients; // stores the coefficients of the polynomial
    int degree; // stores the degree of the polynomial

public:
    // Constructor
    Polynomial() : degree(-1) {}

    // Member function to evaluate the polynomial at a given real number
    double value(double x) {
        double result = 0;
        for (int i = degree; i >= 0; --i) {
            result = coefficients[i] + x * result;
        }
        return result;
    }

    // Overloaded + operator to return the sum of two polynomials
    Polynomial operator+(const Polynomial& other) {
        Polynomial result;
        result.degree = std::max(degree, other.degree);
        for (int i = 0; i <= result.degree; ++i) {
            if (i <= degree) {
                result.coefficients[i] = coefficients[i];
            }
            if (i <= other.degree) {
                if (result.coefficients[i] == 0) {
                    result.coefficients[i] = other.coefficients[i];
                } else {
                    result.coefficients[i] += other.coefficients[i];
                }
            }
        }
        return result;
    }

    // Overloaded * operator to return the product of two polynomials
    Polynomial operator*(const Polynomial& other) {
        Polynomial result;
        result.degree = degree + other.degree;
        for (int i = 0; i <= degree; ++i) {
            for (int j = 0; j <= other.degree; ++j) {
                if (result.coefficients[i + j] == 0) {
                    result.coefficients[i + j] = coefficients[i] * other.coefficients[j];
                } else {
                    result.coefficients[i + j] += coefficients[i] * other.coefficients[j];
                }
            }
        }
        return result;
    }

    // Overloaded - operator to return the difference of two polynomials
    Polynomial operator-(const Polynomial& other) {
        Polynomial result;
        result.degree = std::max(degree, other.degree);
        for (int i = 0; i <= result.degree; ++i) {
            if (i <= degree) {
                result.coefficients[i] = coefficients[i];
            }
            if (i <= other.degree) {
                if (result.coefficients[i] == 0) {
                    result.coefficients[i] = -other.coefficients[i];
                } else {
                    result.coefficients[i] -= other.coefficients[i];
                }
            }
        }
        return result;
    }

    // Member function to read a polynomial from the keyboard
    void read() {
        std::cout << "Enter the degree of the polynomial: ";
        std::cin >> degree;
        if (degree > 100) {
            std::cout << "Degree should be at most 100. Setting degree to 100.\n";
            degree = 100;
        }
        coefficients.resize(degree + 1);
        std::cout << "Enter the coefficients of the polynomial (starting with the constant term): ";
        for (int i = 0; i <= degree; ++i) {
            std::cin >> coefficients[i];
        }
    }

    // Member function to print a polynomial
    void print() {
        if (degree == -1) {
            std::cout << "No polynomial defined.\n";
            return;
        }
        for (int i = degree; i >= 0; --i) {
            if (coefficients[i] != 0) {
                if (i == degree && coefficients[i] > 0) {
                    std::cout << '+';
                }
                if (i == degree){
                    std::cout << coefficients[i];
                } else if (coefficients[i] > 0) {
                    std::cout << '+' << coefficients[i];
                } else {
                    std::cout << coefficients[i];
                }
                if (i > 1) {
                    std::cout << 'x' << '^' << i;
                } else if (i == 1) {
                    std::cout << 'x';
                }
            }
        }
        std::cout << '\n';
    }

    // Overloaded >> operator to read a polynomial from an input stream
    friend std::istream& operator>>(std::istream& in, Polynomial& p) {
        p.read();
        return in;
    }

    // Overloaded << operator to print a polynomial to an output stream
    friend std::ostream& operator<<(std::ostream& out, const Polynomial& p) {
        p.print();
        return out;
    }
};