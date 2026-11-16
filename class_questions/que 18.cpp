
#include <iostream>
using namespace std;
class Bank_account {
public:
    int Balance;
    Bank_account(int b) {
        Balance = b;
    }

    void ShowBalance() {
        cout << "Balance: " << Balance << endl;
    }
};

int main() {
    Bank_account obj1(500000);
    obj1.ShowBalance();

    return 0;
}