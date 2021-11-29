// Victor Ekpenyong
// October 2020

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    // Variables
    int choice, quarters, dimes, nickels, pennies;
    float balance, deposit, withdraw, maxHold, qamount, damount, namount, pamount, statbalance;

    // Balance & Maximum Initializer
    balance = 0.00;
    maxHold = 900;



    // Do...while loop running program
    do{
        // Main Menu
        cout << "***********************************" << endl;
        cout << "*         Piggy Bank Menu         *" << endl;
        cout << "*                                 *" << endl;
        cout << "*     Current Balance $  "<< setw(6) << fixed << setprecision(2) << balance << "   *" << endl;
        cout << "***********************************" << endl;
        cout << "*                                 *" << endl;
        cout << "* 1)  Make Deposit                *" << endl;
        cout << "* 2)  Make Withdrawal             *" << endl;
        cout << "* 3)  View Coins                  *" << endl;
        cout << "* 4)  Exit Program                *" << endl;
        cout << "*                                 *" << endl;
        cout << "***********************************" << endl;

        cout << "Enter choice: ";
        cin >> choice;
        cout << endl;

        // Conditional statement if choice input is invalid
        if(choice < 1 || choice > 4) {
            cout << "Invalid Option -- Try again" << endl << endl;

            cout << "***********************************" << endl;
            cout << "*         Piggy Bank Menu         *" << endl;
            cout << "*                                 *" << endl;
            cout << "*     Current Balance $  "<< setw(6) << fixed << setprecision(2) << balance << "   *" << endl;
            cout << "***********************************" << endl;
            cout << "*                                 *" << endl;
            cout << "* 1)  Make Deposit                *" << endl;
            cout << "* 2)  Make Withdrawal             *" << endl;
            cout << "* 3)  View Coins                  *" << endl;
            cout << "* 4)  Exit Program                *" << endl;
            cout << "*                                 *" << endl;
            cout << "***********************************" << endl;

            cout << "Enter choice: ";
            cin >> choice;
            cout << endl;
        }

        //Conditional statement if 1st choice is made
        if(choice == 1)
        {
            cout << "Enter the amount to be deposited: $ ";
            cin >> deposit;
            cout << endl;

            if(deposit < 0)
            {
                cout << "Invalid amount -- Negative values are not allowed." << endl;
            }

            else if((balance + deposit) > maxHold)
            {
                cout << "The piggybank will not hold that much. You may deposit up to $ " << maxHold - balance << endl;
            }

            else {
            balance = balance + deposit;
            }
        }



        // Conditional statement if 2nd choice is made
         if(choice == 2)
        {
            cout << "Enter the amount to be withdrawn: $ ";
            cin >> withdraw;
            cout << endl;

            if(withdraw < 0)
            {
                cout << "Invalid amount -- Negative values are not allowed." << endl;
            }

            else if(withdraw > balance)
            {
                cout << "The piggybank does not contain that much. You may withdraw up to $ " << balance << endl;
            }

            else {
            balance = balance - withdraw;
            }
        }


        // Conditional statement if 3rd choice is made
        if(choice == 3)
        {

                if (balance < 0)
                {
                    statbalance = balance;
                    quarters = 0;
                    qamount = 0;
                    dimes = 0;
                    damount = 0;
                    nickels = 0;
                    namount = 0;
                    pennies = 0;
                    pamount = 0;
                }

                else if (balance < .05)
                {
                    statbalance = balance;
                    quarters = 0;
                    qamount = 0;
                    dimes = 0;
                    damount = 0;
                    nickels = 0;
                    namount = 0;
                    pennies = statbalance / .01;
                    pamount = pennies * .01;
                }

                else if (balance < .1)
                {
                    statbalance = balance;
                    quarters = 0;
                    qamount = 0;
                    dimes = 0;
                    damount = 0;
                    nickels = statbalance / .05;
                    namount = nickels * .05;
                        statbalance = statbalance - namount;
                    pennies = statbalance / .01;
                    pamount = pennies * .01;
                }

                else if (balance < .25)
                {
                    statbalance = balance;
                    quarters = 0;
                    qamount = 0;
                    dimes = statbalance / .1;
                    damount = dimes * .1;
                        statbalance = statbalance - damount;
                    nickels = statbalance / .05;
                    namount = nickels * .05;
                        statbalance = statbalance - namount;
                    pennies = statbalance / .01;
                    pamount = pennies * .01;
                }

                else
                {
                    statbalance = balance;
                    quarters = statbalance / .25;
                    qamount = quarters * .25;
                        statbalance = balance - qamount;
                    dimes = statbalance / .1;
                    damount = dimes * .1;
                        statbalance = statbalance - damount;
                    nickels = statbalance / .05;
                    namount = nickels * .05;
                        statbalance = statbalance - namount;
                    pennies = statbalance / .01;
                    pamount = pennies * .01;

                }


            // Statistics outputed
            cout << "***********************************" << endl;
            cout << "*           Statistics            *" << endl;
            cout << "***********************************" << endl;
            cout << "*                                 *" << endl;
            cout << "*   Quarters     " << setw(4) << quarters << "   $ " << setw(6) << qamount << "  *" << endl;
            cout << "*   Dimes        " << setw(4) << dimes << "   $ " << setw(6) << damount << "  *" << endl;
            cout << "*   Nickels      " << setw(4) << nickels << "   $ " << setw(6) << namount << "  *" << endl;
            cout << "*   Pennies      " << setw(4) << pennies << "   $ " << setw(6) << pamount << "  *" << endl;
            cout << "*                                 *" << endl;
            cout << "***********************************" << endl;
        }


        // Conditional statement if 4th choice is made
        if (choice == 4)
        {
            cout << "GOODBYE!" << endl;;
            // Loop ends
            return 0;
        }

        cout << endl;

    }while(choice > 0);



    // Graceful Exit
    return 0;
}
