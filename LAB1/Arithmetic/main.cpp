/*****************************************************************************
**                                                                          **
**                   LAB 1 EXERCISE 3: Arithmetic                           **
**                                                                          **
**      This program performs a number of arithmetic operations to          **
**      the two number that the user picks and displays them                **
**                                                                          **
**      @Author:    Jacob Loncar                                            **
**      @Created:   01-30-18                                                **
**                                                                          **
*****************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int     num1, num2, sum, diff, prod, div, mod, power, absu;

    cout << "\n\n\n";
    cout << setw(17) << " " << "ARITHMETIC" << endl;
    cout << setw(10) << " " << "Enter two integers: " ;
    cin >> num1 >> num2;

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    div = static_cast<double>(num1) / num2;
    mod = num1 % num2;
    power = pow(num1, num2);
    absu = abs(diff);

    cout << setw(10) << " " << "Sum of num1 and num2           " << sum << endl;
    cout << setw(10) << " " << "Difference of num1 and num2    " << diff << endl;
    cout << setw(10) << " " << "Product of num1 and num2       " << prod << endl;
    cout << setw(10) << " " << "Division of num1 and num2      " << div << endl;
    cout << setw(10) << " " << "Modulus of num1 and num2       " << mod << endl;
    cout << setw(10) << " " << "Num1 raised to power of num2   " << power << endl;
    cout << setw(10) << " " << "Absolute value of difference   " << absu << endl;

    return 0;
}
