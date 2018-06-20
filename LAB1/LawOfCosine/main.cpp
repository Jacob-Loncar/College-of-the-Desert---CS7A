/*****************************************************************************
**                                                                          **
**                   LAB EXERCISE 1: Modification                           **
**                                                                          **
**      This program will ask for values from a triangle and using          **
**      the law of cosines, it will calculate the missing information.      **
**                                                                          **
**      @Author:    Jacob Loncar                                            **
**      @Created:   01-30-18                                                **
**                                                                          **
*****************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14159;

int main()
{
    double      anglA, anglB, anglC,
                sideA, sideB, sideC;

    cout << "\n\n\n";
    cout << fixed << setprecision(1);

    cout << setw(45) << "LAW OF COSINE" << endl;
    cout << setw(55) << "______________________________________"
         << endl << endl;
    cout << setw(15) << " " << "Enter length of side a                     : ";
    cin >> sideA;
    cout << setw(15) << " " << "Enter length of side b                     : ";
    cin >> sideB;
    cout << setw(15) << " " << "Enter angle C between side a and side b    : ";
    cin >> anglC;

    sideC = sqrt(pow(sideA, 2) + pow(sideB, 2) - (2 * sideA * sideB * cos((anglC * PI) / 180)));
    anglB = (acos((pow(sideB, 2) - (pow(sideA, 2) + pow(sideC, 2))) / (-2 * sideA * sideC)) * 180) / PI;
    anglA = 180 - (anglC + anglB);

    cout << setw(15) << " " << "The length of side c is                    : "
         << sideC << endl;
    cout << endl;
    cout << setw(45) << "OTHER ANGLES ARE" << endl;
    cout << setw(55) << "_______________________________________" << endl << endl;
    cout << setw(15) << " " << "Angle B is                                 : "
         << anglB << endl;
    cout << setw(15) << " " << "Angle C is                                 : "
         << anglA << endl;
    cout << "\n\n\n";

    return 0;
}
