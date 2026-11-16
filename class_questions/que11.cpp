#include <iostream>
using namespace std;
class  A{
    int x,a;
    public:
A(){
    x=0;
}
A(int a){
    x=a;
}
A(A &obj){
    x=obj.x;
}
void print (){
    cout<< a <<endl;
}
};
int main()
{
 A x;
 x.print();
 A y(5);
 y.print();
 A obj3(y);
 obj3.print();
 return 0;
}