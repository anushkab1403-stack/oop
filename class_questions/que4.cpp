#include <iostream>
using namespace std;
class  A{
public:
    int a;
void input (int x){
        a=x;
    }
void sum (A x, A y){
    a= x.a + y.a;
}
void print (){
    cout<<a<<endl;
}
void sum (int x , int y){
    cout<<x+y;}
};
int main()
{
 A x;
 x.input(20);
 A y;
 y.input(40);
 A obj3;
 obj3.sum(x,y);
 x.print();
 y.print();
 obj3.print();
 x.sum(10,20);
 return 0;
}