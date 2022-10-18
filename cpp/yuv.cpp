#include <iostream>
#include <string.h>
int j;
using namespace std;
class essentials
{
    int pin;
    string locality;
    string adharNo;
    string panNo;
};
// account class
class customeraccount : public essentials
{
public:
    string name;
    int accountNumber;
    string accountType;

public:
    void details()
    {
        cout << "\nEnter Your Name : ";
        cin >> name;
        cout << "Enter Your Account Number  : ";
        cin >> accountNumber;
        cout << "Enter Your Account Type    : ";
        cin >> accountType;
    }
    void displayDetails()
    {
        cout << "\n\nCustomer Name is : " << name;
        cout << "\nAccount Number is  : " << accountNumber;
        cout << "\nAccount Type is    : " << accountType;
    }
};
// current account class
class current : public customeraccount
{
private:
    float balance;

public:
    void currentDisplay()
    {
        cout << "\nBalance :" << balance;
    }
    void currentDeposit()
    {
        float deposit;
        cout << "\nEnter amount to Deposit :  ";
        cin >> deposit;
        balance = balance + deposit;
    }
    void currentWithdraw()
    {
        float withdraw;
        cout << "\n\n Account Balance : " << balance;
        cout << "\nEnter amount to be withdraw :";
        cin >> withdraw;
        if (balance > 1000)
        {
            balance = balance - withdraw;
            cout << "\nBalance Amount After Withdraw: " << balance;
        }
        else
        {
            cout << "\n Insufficient Balance";
        }
    }
};
// saving  class
class saving : public customeraccount
{
private:
    float sav_balance;

public:
    void savingDisplay()
    {
        cout << "\nBalance :  " << sav_balance;
    }
    void savingDeposit()
    {
        float deposit, interest;
        cout << "\nEnter amount to Deposit :  ";
        cin >> deposit;
        sav_balance = sav_balance + deposit;
        interest = (sav_balance * 2) / 100;
        sav_balance = sav_balance + interest;
    }
    void savingWithdraw()
    {
        float withdraw;
        cout << "\n Account Balance :- " << sav_balance;
        cout << "\nEnter amount to be withdraw : ";
        cin >> withdraw;
        if (sav_balance > 500)
        {
            sav_balance = sav_balance - withdraw;
            cout << "\nBalance Amount After Withdraw: " << sav_balance;
        }
        else
        {
            cout << "\n Insufficient Balance";
        }
    }
};

// admin class
class admin
{
public:
    char userid[10] = "adm";
    int pswd = 123;
};
// loan account class
class loan : public customeraccount
{
private:
    double interest_rate = 0.08;
    double total_amount, monthly_amount, total_interest;

public:
    double loan_amount, number_of_years;
    void total_loan()
    {
        cout << "Enter loan amount " << endl;
        cin >> loan_amount;
        cout << "Enter no of years" << endl;
        cin >> number_of_years;
        total_amount = (number_of_years * loan_amount) + (number_of_years * loan_amount * (interest_rate / 100.00));
        cout << "Final loan amt " << total_amount << endl;
    }
    void monthly_amt()
    {
        monthly_amount = total_amount / (number_of_years * 12);
        cout << "Monthly : " << monthly_amount << endl;
    }
    void total_intrest()
    {
        total_interest = total_amount - (number_of_years * loan_amount);
        cout << "Total interest: " << total_interest << endl;
    }
    void l_display()
    {
        cout << "\nprinciple ammount: " << loan_amount << endl;
        cout << "Banks ROI per anum: " << interest_rate << endl;
        cout << "No of years : " << number_of_years << endl;
    }
};

// main

int main()
{
    system("color A4");
    current c1[100];
    saving s1[100];
    admin a;
    loan l[100];
    char type;
    int i = 0;
start:
    cout << "\nEnter S for saving customer, C for current a/c customer. L for loan customer and A for admin: ";
    cin >> type;
    int choice;
    i++;
    if (type == 's' || type == 'S')
    {
        s1[i].details();
        int p;
        cout << "Please log in with your account! " << endl
             << "Enter your account number : " << endl;
        cin >> p;
        if (p == s1[i].accountNumber)
        {
            cout << "You are succesfully logged In! " << endl;
            while (1)
            {
                cout << "\nChoose Your Choice" << endl;
                cout << "1)   Deposit" << endl;
                cout << "2)   Withdraw" << endl;
                cout << "3)   Display Balance" << endl;
                cout << "4)   Display with full Details" << endl;
                cout << "5)   logout" << endl;
                cout << "6)   Exit!!" << endl;
                cout << "Enter Your choice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    s1[i].savingDeposit();
                    break;
                case 2:
                    s1[i].savingWithdraw();
                    break;
                case 3:
                    s1[i].savingDisplay();
                    break;
                case 4:
                    s1[i].displayDetails();
                    s1[i].savingDisplay();
                    break;
                case 5:
                    goto start;
                    break;
                case 6:
                    goto end;
                default:
                    cout << "\n\nEntered choice is invalid,\"TRY AGAIN\"";
                }
            }
        }
        else
        {
            cout << "No such user exists! " << endl;
            goto start;
        }
    }
    else if (type == 'c' || type == 'C')
    {
        c1[i].details();
        int p;
        cout << "Please log in with your account! " << endl
             << "Enter your account number : " << endl;
        cin >> p;
        if (p == c1[i].accountNumber)
        {
            cout << "You are succesfully logged In! " << endl;
            while (1)
            {
                cout << "\nChoose Your Choice" << endl;
                cout << "1)   Deposit" << endl;
                cout << "2)   Withdraw" << endl;
                cout << "3)   Display Balance" << endl;
                cout << "4)   Display with full Details" << endl;
                cout << "5)   logout" << endl;
                cout << "6)   Exit!!" << endl;
                cout << "Enter Your choice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    c1[i].currentDeposit();
                    break;
                case 2:
                    c1[i].currentWithdraw();
                    break;
                case 3:
                    c1[i].currentDisplay();
                    break;
                case 4:
                    c1[i].displayDetails();
                    c1[i].currentDisplay();
                    break;
                case 5:
                    goto start;
                    break;
                case 6:
                    goto end;
                default:
                    cout << "\n\nEntered choice is invalid,\"TRY AGAIN\"";
                }
            }
        }
        else
        {
            cout << "No such user exists! " << endl;
            goto start;
        }
    }
    else if (type == 'l' || type == 'L')
    {
        l[i].details();
        int p;
        cout << "Please log in with your account! " << endl
             << "Enter your account number : " << endl;
        cin >> p;
        if (p == l[i].accountNumber)
        {
            cout << "You are succesfully logged In! " << endl;
            while (1)
            {
                cout << "\nChoose Your Choice" << endl;
                cout << "1)  Get your loan: " << endl;
                cout << "2)  Check your total interest: " << endl;
                cout << "3)  Check your monthly EMI: " << endl;
                cout << "4)   Display with full Details" << endl;
                cout << "5)   logout" << endl;
                cout << "6)   Exit!!" << endl;
                cout << "Enter Your choice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    l[i].total_loan();
                    break;
                case 2:
                    l[i].total_intrest();
                    break;
                case 3:
                    l[i].monthly_amt();
                    break;
                case 4:
                    l[i].displayDetails();
                    l[i].l_display();
                    break;
                case 5:
                    goto start;
                    break;
                case 6:
                    goto end;
                default:
                    cout << "\n\nEntered choice is invalid,\"TRY AGAIN\"";
                }
            }
        }
        else
        {
            cout << "No such user exists! " << endl;
            goto start;
        }
    }
    else if (type == 'a' || type == 'A')
    {
        char arr[20];
        int p;
        cout << "enter admin user id :\n";
        cin >> arr;
        cout << "enter admin password :\n";
        cin >> p;
        int num;
        if ((p == a.pswd) && !(strcmp(arr, a.userid)))
        {
            cout << "Logged in as Admin \n";
        start1:
            cout << "\nChoose Your Choice" << endl;
            cout << "1)   display details" << endl;
            cout << "2)   delete details " << endl;
            cout << "Enter Your choice: ";
            cin >> num;
            switch (num)
            {
            case 1:
            {
                cout << "hello";
                cout << i;
                for (int j = 1; j < i; j++)
                {
                    cout << "your Name : " << s1[j].name;
                    cout << "\nAccount Number  : " << s1[j].accountNumber;
                    cout << "\nAccount Type    : " << s1[j].accountType;
                }
                break;
            }
            case 2:
            {
                cout << "Enter the account no.";
                int ac;
                cin >> ac;
                for (int j = 1; j <= i; j++)
                {
                    if (ac == s1[j].accountNumber)
                    {
                        cout << "\nAccount found";
                        s1[j].accountNumber = 0;
                        s1[j].accountType = '0';
                        cout << "\n updated  details of the remaining accounts ";
                        for (int j = 1; j < i; j++)
                        {
                            cout << "\nAccount Number  : " << s1[j].accountNumber;
                            cout << "\nAccount Type    : " << s1[j].accountType;
                        }
                    }
                    goto start1;
                }
                break;
            }
            }
        }
    }
    else
    {
        cout << "\nInvalid Account Selection";
    }
end:
    cout << "\nThank You for Banking with us..";
    return 0;
}