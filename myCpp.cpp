#include <iostream>
#include <stdio.h>

using namespace std;

void myAccount()
{
    std::cout << "What's Your Full-Name" << endl;
    string firstName;
    getline(cin, firstName);

    cout << "1."
         << "My Account Balance" << endl;
    cout << "2. "
         << "Account Number" << endl;
    cout << "3. "
         << "Account Information" << endl;
    /* cout << "4. "
          << "Account Name" << endl
          << endl
          << endl;*/
    int g;
    cout << "" << endl
         << endl
         << endl;
    cin >> g;
    if (g == 1)
    {
        cout << "#0.63" << endl
             << endl
             << endl;
    }
    else if (g == 2)
    {
        cout << " 1628362983. " << endl
             << endl;
    }
    else if (g == 3)
    {
        cout << "Bank-Name:  Union Bank Plc" << endl
             << endl;
        cout << "Account-Number: 1628362983. " << endl
             << endl;
        cout << "Account-Balance: #237,428.63" << endl
             << endl;
    }
    // else if (g == 4)
    // {
    //     cout << firstName << endl;
    // }
    else
    {
        cout << "Wrong Option" << endl;
    }
    cout << "Thank You For Choosing Union Bank" << endl;
}
void airtime1()
{
    cout << "Enter Amount" << endl;

    int g;
    cout << "";
    cin >> g;
    if (g < 50)
    {
        cout << " Amount is low" << endl;
    }
    else if (g > 1000000)
    {
        cout << " Amount has exceded limit" << endl;
    }
    else
    {
        cout << " Airtime sent successfully" << endl;
    }
}
void airtime()
{
    // if user Presses 2
    cout << "1."
         << "Self" << endl;
    cout << "2. "
         << "Third Party" << endl;
    int g;
    cout << "";
    cin >> g;
    if (g == 1)
    {
        airtime1();
    }
    else if (g == 2)
    {
        cout << " Enter Phone Number. " << endl;

        int g;
        cout << "";
        cin >> g;
        if (g <= 07000000000)
        {
            cout << " Number Inputted is not up to 11" << endl;
        }
        else if (g > 07000000000)
        {
            cout << "Enter Your Amount" << endl;

            int myAmount;
            cin >> myAmount;

            if (myAmount < 50)
            {
                cout << " Amount is low" << endl;
            }
            else if (myAmount > 10000000)
            {
                cout << " Amount has exceded limit" << endl;
            }
            else
            {
                cout << " Airtime sent successfully" << endl;
            }
        }
        else
        {
            cout << " Number Inputted is more up to 11" << endl;
        }
    }
    else
    {
        cout << "Inavlid Option";
    }
    cout << "Thank You For Choosing Union Bank" << endl;
}

void transfer()
{
    cout << "1. "
         << "Union Bank" << endl;
    cout << "2. "
         << "Other Banks" << endl
         << endl;
    int g;
    cout << "";
    cin >> g;
    if (g == 1)
    {
        cout << "Account Number" << endl;
    }
    else if (g == 2)
    {
        cout << "Please Enter Account Number. " << endl;
    }
    else
    {
        cout << "Please select the right number";
    }
    cout << "Thank You For Choosing Union Bank" << endl;
}

void data()
{
    cout << "1."
         << "YourSelf" << endl;
    cout << "2. "
         << "Third Party" << endl;

    int g;
    cout << "";
    cin >> g;

    if (g == 1)
    {
        cout << "Enter Phone Number" << endl;
    }
    else if (g == 2)
    {
        cout << " Enter Phone Number. " << endl;
    }
    else
    {
        cout << "Your selection is not available yet" << endl;
    }
    cout << "Thank You For Choosing Union Bank" << endl;
}

void withdraw()
{
    cout << "1."
         << "Through P.O.S" << endl;
    cout << "2. "
         << "Through A.T.M" << endl;
    cout << "3. "
         << "Through Phone" << endl;
}

int main()
{
    std::cout << "Hello Welcome To Union-Bank Plc" << endl;
    cout << "Please Enter Your Full-Name" << endl;
    string firstName;
    getline(cin, firstName);

    std::cout << "Welcome " << firstName << " How may we help you?" << endl;
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    cout << a << ". "
         << "My Account" << endl;
    cout << b << ". "
         << "Airtime" << endl;
    cout << c << ". "
         << "Transfer" << endl;
    cout << d << ". "
         << "Data" << endl;
    cout << e << ". "
         << "Withdraw" << endl
         << endl
         << endl;

    // Getting User Input
    int f;
    cout << "";
    cin >> f;

    // if user Presses 1

    if (f == 1)
    {
        myAccount();
    }

    // if user Presses 2

    else if (f == 2)
    {
        airtime();
    }

    // if user Presses 3

    else if (f == 3)
    {
        transfer();
    }

    // if user Presses 4

    else if (f == 4)
    {
        data();
    }
    // if user Presses 5

    else if (f == 5)
    {
        withdraw();
    }

    else
    {
        cout << "Please you didn't pick the above selections.";
    }
}