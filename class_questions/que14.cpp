#include <iostream>
using namespace std;
class A
{
private:
    int a;
public:
    A()
    {
    a = 10;
    }
    friend class B;
};
class B
{
public:
    void print(A obj){
      cout << obj.a;
    }
};
int main()
{
    A obj;
    B b;
    b.print(obj);
    return 0;
}