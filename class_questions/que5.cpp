/*1. 
#include <iostream>
using namespace std;
class  A
{
    int x;
    public:
    A(){
        cout<<"hello"<<endl;
        // this is known as a constructor 
    }
};

2.
#include <iostream>
using namespace std;
class  A
{
    int x;
    public:
    A(){
        x=0;
        // this is deffined constructor 
    }
void print(){
    cout << x;
}
};
int main(){
    A obj1;
    obj1.print();
    A obj2(10);
    obj2.print();
*/


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
void print(){
    cout << balance <<endl;
}
};
int main(){
    bank_Account obj1(500000);
    obj1.print();


}