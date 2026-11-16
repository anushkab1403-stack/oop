#include<iostream>
using namespace std;
class A{
public:
A(){
    int x=0,y=0;
    cout<<x+y<<endl;
}
A(int x, int y){
    cout<<x+y<<endl;
}
A(double x , double y){
 cout<<x+y<<endl;
}
void sum (int x, int y){
    cout<<x+y<<endl;
}
void sum (double x, double y){
    cout<<x+y<<endl;
};
int main(){
    sum (10.4,20.8);
    return 0;
}
//this is known as constructor overloading jaha function ka naam same hota hai
