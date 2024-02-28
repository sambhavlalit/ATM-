#include <iostream>
using namespace std;

class ATM {
public:
    float Balance;
    int userid=489;
    int PIN = 6784;

    bool checkPin() {
        cout<<"Enter Your userid";
        int  uid;
        cin>>uid;
        cout << "Enter your PIN: ";
        int enterPIN;
        cin >> enterPIN;

        if (enterPIN == PIN) {
            return true;
        } else {
            cout << "Wrong PIN entered!\n" << endl;
            return false;
        }
    }

    void menu() {
        cout << "ENTER YOUR CHOICE" << endl;
        cout << "1. Check A/C Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Exit\n" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                WithdrawMoney();
                break;
            case 3:
                DepositMoney();
                break;
            case 4:
                cout << "Thank you!\n" << endl;
                break;
            default:
                cout << "Enter a valid choice!\n" << endl;
        }
    }

    void checkBalance() {
        cout << "Balance: " << Balance << endl;
    }

    void WithdrawMoney() {
        cout << "Enter amount to be withdrawn: ";
        float amount;
        cin >> amount;

        if (amount > Balance) {
            cout << "Insufficient Balance\n" << endl;
        } else {
            Balance -= amount;
            cout << "Money Withdrawn Successfully\n" << endl;
        }
    }

    void DepositMoney() {
        cout << "Enter the amount: ";
        float money;
        cin >> money;
        Balance += money;
        cout << "Money deposited successfully\n" << endl;
    }
};

int main() {
    cout << "Bank of Baroda" << endl << endl;
    ATM obj;
    if (!obj.checkPin()) {
        return 1;
    }
    obj.menu();
    return 0; 
}