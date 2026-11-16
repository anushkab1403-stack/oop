#include <iostream>
using namespace std;
class A{
    private:
    int a; // private
    public:
    A(int x){
        a=x;
    }
    friend void print(A obj);
};
void print(A obj){
    cout<<obj.a;
};
int main(){
    A obj(100);
    // function ko call karna padega
    print(obj);

    return 0;
}
