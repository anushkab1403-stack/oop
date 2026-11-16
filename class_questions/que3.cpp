#include <iostream>
using namespace std;
class  myclass{
// agar hum ise private kar denge toh baaki ka code change karna padega function create karna padega 
    int marks; //private
public:
    void inMarks() {
        cin >> marks;
    }
    void outMarks() {
        cout << marks ;
    }
};
 // in and out ke functions define kar diye and int main then cin cout ki jagah finction name likh diya seedha 
int main()
{
    myclass array[5];
   for (int i=0;i<5;i++)
   {
     array[i].inMarks();
   }
   for(int i=0;i<5;i++){
     array[i].outMarks();
   }

    return 0;
}

