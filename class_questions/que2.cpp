#include <iostream>
using namespace std;
class  myclass{
public:
    int marks; 
};
 
int main()
{
    myclass array[5];
   for (int i=0;i<5;i++)
   {
       cin>>array[i].marks;
   }
   for(int i=0;i<5;i++){
    cout<<array[i].marks;
   }

    return 0;
}
