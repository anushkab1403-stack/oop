#include <iostream>
using namespace std;
class Bank_Account
{
    int balance;
public:
    Bank_Account()
    {
        balance = 0;
    }
    Bank_Account(int a)
    {
        balance = a;
    }
    Bank_Account(Bank_Account &obj)
    {
        balance = obj.balance;
    }
    void print()
    {
        cout << balance << endl;
    }
};
int main()
{
    Bank_Account x;
    x.print();
    Bank_Account y(500000);
    y.print();
    Bank_Account obj3(y);
    obj3.print();
    return 0;
}