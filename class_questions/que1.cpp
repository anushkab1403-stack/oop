#include <iostream>
using namespace std;
class myclass{ 
    int x,y;
    public:
    void input(){
        cin>> x;
        cin>>y;
    }
    void print();
};
void myclass::print(){
    cout<<"area="<<x*y;
}


int main()
{
   myclass obj1;
   obj1.input();
   obj1.print();
   

    return 0;
}

   