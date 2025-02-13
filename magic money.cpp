#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    srand(time(0));
    int money;
    string choice;
    money = 1000 + (rand() % 4001);  // Random number from 1000 to 5000

    cout<< "DEPOSIT OR WITHDRAW? " << endl;
    cin>> choice;
    
    if (choice == "DEPOSIT")
        {
            cout<< "Total: " << money <<endl;
        }
    else if (choice == "WITHDRAW")  // Fixed comparison operator
        {
            cout<< "Total: " << money <<endl;
            cout<< "How much?";
            int withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= money) {
                money -= withdrawAmount;
                cout << "Remaining balance: " << money << endl;
            } else {
                cout << "Insufficient funds." << endl;
            }
        }
    return 0;
    
}