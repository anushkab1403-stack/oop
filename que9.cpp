// write a program to search a given no in the list and check whether its presnt or  not 

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3, 4, 5};
    int n;
    cout << "Enter number to search ";
    cin >> n;
    int found = 0 ;
    for (int x : l) { // x:1 hume one at a time store karna hai list ki values ko
        if (x == n) {
            found = 1;
            break;
        }
    }
    if (found== 1) {
        cout << "Number is present";
    } else {
        cout << " number is not present in the given list ";
    }

}
