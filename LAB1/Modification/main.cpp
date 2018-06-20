/*****************************************************************************
**                                                                          **
**                   LAB EXERCISE 1: Modification                           **
**                                                                          **
**      This program will prompt a user to enter in a four digit            **
**      number and it will print out the individual digits. Then it         **
**      it will print out the number backwards.                             **
**                                                                          **
**      @Author:    Jacob Loncar                                            **
**      @Created:   01-30-18                                                **
**                                                                          **
*****************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int     num1,
            thousand, hundred, ten, one;

    cout << "\n\n\n";
    cout << setw(17) << " " << "MODIFICATION OF AN INTEGER" << endl;
    cout << setw(10) << " " << "______________________________________" << endl << endl;
    cout << setw(10) << " " << "Enter a four digit integer: ";
    cin >> num1;

    thousand = num1 / 1000;
    hundred = (num1 - (thousand * 1000)) / 100;
    ten = (num1 - ((thousand * 1000) + (hundred * 100))) / 10;
    one = num1 % 10;

    cout << endl;
    cout << setw(10) << " " << num1 << "  =>  " <<
         " " << thousand << " " <<
         " " << hundred << " " <<
         " " << ten << " " <<
         " " << one << " " << "  =>  " <<
         one << ten << hundred << thousand;

    cout << "\n\n\n";


    return 0;
}
