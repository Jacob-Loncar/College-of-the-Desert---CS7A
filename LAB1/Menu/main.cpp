/*****************************************************************************
**                                                                          **
**                   LAB 1 EXERCISE 2: Menu                                 **
**                                                                          **
**      This program prints out a mean that will be used in my              **
**      Banking Application.                                                **
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
    system("cls");

    cout << "\n\n\n";

    cout << setw(10) << " " << setw(17) << "Main Menu" << endl << endl;
    cout << setw(10) << " " << "1. Create a new account." << endl;
    cout << setw(10) << " " << "2. Display an account." << endl;
    cout << setw(10) << " " << "3. List all accounts." << endl;
    cout << setw(10) << " " << "4. List all accounts, sorted by names." << endl;
    cout << setw(10) << " " << "5. Update an account." << endl;
    cout << setw(10) << " " << "6. Make a deposit." << endl;
    cout << setw(10) << " " << "7. Withdraw Money." << endl;
    cout << setw(10) << " " << "8. Exit the program." << endl << endl;
    cout << setw(10) << " " << "Enter your choice: ";

    cin.ignore();
    return 0;
}
