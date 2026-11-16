#include <iostream>
using namespace std;
class A{
    private:
    int a , b ;
    public:
    A(){
    int x=10,y=20;
    a=x;
    b=y; 
    }
    friend void sum(A obj);
};
void sum(A obj){
   cout<< obj.a + obj.b<<endl;
};
int main(){
    A obj;
    // function ko call karna padega
    sum (obj);
    return 0;
}