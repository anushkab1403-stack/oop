/* create a class number with a private int number 'value' write a friend function and the function name will be swap number that accept two objects and swap their private values*/
#include <iostream>
using namespace std;
class number
{
private:
    int value;
public:
number (int x){
    value=x;
}
void print()
    {
        cout << value << endl;
    }

     friend void swap(number &obj1, number &obj2);// pass by reference
/*
Without & → function gets a copy
With & → function works on the original object
We use it in swap() because we want the original values to change.
*/
};
void swap(number &obj1, number &obj2)
{
    int temp = obj1.value;
    obj1.value = obj2.value;
    obj2.value = temp;
};
int main()
{
    number obj1(10);
    number obj2(20);
    swap(obj1, obj2);
    cout<< "swapped number:" << endl;
    obj1.print();
    obj2.print();

    return 0;
}
