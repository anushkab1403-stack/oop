/* write a program - The class name is rectangle with attribute length and width 
1.with no arrangement and set the value as 1
2.the value of length and width should be int
3.aceept float and double values
4.calculate and display the area */

#include <iostream>
using namespace std;

class Rectangle{
    int length;
    int width;
public:
    // 1. 
    Rectangle(){
        length = 1;
        width = 1;
    }

    // 2.
    Rectangle(double l, double w){
        length = (int)l;
        width = (int)w;
    }

    // 3.
    void area(){
        cout << "Area = " << length * width << endl;
    }
};
int main()
{
    Rectangle r1;
    r1.area();
    Rectangle r2(5.5, 4.2);
    r2.area();
    return 0;
}
 