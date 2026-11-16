#include<iostream>
using namespace std;
void sum (int x, int y){
    cout<<x+y<<endl;
}
void sum (double x, double y){
    cout<<x+y<<endl;
}
void sum (int x, double y){
    cout<<x+y<<endl;
}
int main(){
    sum (10.4,20.8);
    return 0;
}
// this is known as function overloading jaha function ka naam same hota hai 