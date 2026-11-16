#include <iostream>
using namespace std;
class  bank_Account
{
    int balance;
    public:
    bank_Account(int a ){
        balance=a;
        // this is parametriced constructor 
    }
void deposit(int amount)
    {
        balance = balance + amount;
    }
void print(){
    cout << balance <<endl;
}
};
int main(){
    bank_Account obj1(500);
       obj1.deposit(200);
    obj1.print();
}