#include <iostream>

using namespace std;

class Fraction 
{
private:
    int numerator;
    int denominator;

public:
    Fraction() : numerator(0), denominator(1) {}
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}

    void inputFraction() 
{
        cout << "Enter the numerator: ";
        cin >> numerator;
        cout << "Enter the denominator: ";
        cin >> denominator;
    }

    Fraction add(const Fraction& other) const 
{
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    void printFraction() const 
{
        cout << numerator << "/" << denominator << endl;
    }
};

int main() 
{
    Fraction fraction1, fraction2, result;

    cout << "Enter data for the first fraction:\n";
    fraction1.inputFraction();

    cout << "Enter data for the second fraction:\n";
    fraction2.inputFraction();

    result = fraction1.add(fraction2);

    cout << "Sum of fractions: ";
    result.printFraction();

    return 0;
}
