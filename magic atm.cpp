#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    srand(time(0));  
    int money = 1000 + (rand() % 4001);  // Random number from 1000 to 5000
    string choice;

    while (true)  // atm matchine
    {
        cout << "\nYour balance: " << money << endl;
        cout << "Choose an action (DEPOSIT, WITHDRAW, GAMBLING, EXIT): ";
        cin >> choice;

        if (choice == "DEPOSIT")
        {
            int depositAmount;
            cout << "How much to deposit? ";
            cin >> depositAmount;

            if (depositAmount > 0)  //u cant add negative 
            {
                money += depositAmount;
                cout << "Success, new balance: " << money << endl;
            }
            else
            {
                cout << "nice try lol" << endl;
            }
        }
        else if (choice == "WITHDRAW")
        {
            int withdrawAmount;
            cout << "How much to withdraw? Only accepts per 100  ";
            cin >> withdrawAmount;

            if (withdrawAmount > 0 && withdrawAmount <= money && withdrawAmount % 100 == 0)  //withdraw is not negative, and within money, and per 100
            {
                money -= withdrawAmount;
                cout << "Withdrawal successful! New balance: ?" << money << endl;
            }
            else
            {
                cout << "Gahiag kalag ingnag tag 100 ra " << endl;
            }
        }
        else if (choice == "GAMBLING")
        {
            while (money > 0) 
            {
                cout << "\nDouble or nothing? Press 1 to play, any other key to stop: ";
                int yesG;  //yes to gambling
                cin >> yesG;

                if (yesG == 1)
                {
                    if (rand() % 2 == 0) 
                    {
                        money *= 2;
                        cout << "Lucky bastard, new total: " << money << endl;
                    } 
                    else 
                    {
                        money = 0;
                        cout << "gambling is bad, game over.\n";
                        break;
                    }
                }
                else
                {
                    cout << "You stopped gambling. Final balance: ?" << money << endl;
                    break;
                }
            }
        }
        else if (choice == "EXIT")
        {
            cout << "Thank you for using Magic ATM! Final balance: ?" << money << endl;
            break;
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}

