// Create an abstract class employee with the data memvers name and employee id ,HRA , TA , basic then create a pure virtual func salary then create a two derived classes professors and staff implement the funtion in both the classes and display the slaary for each employee
#include <iostream>
using namespace std;
class Employee {
protected:
    string name;
    int employee_Id;
    float HRA, TA, basic;
public:
    Employee(string n, int id, float h, float t, float b) {
        name = n;
        employee_Id = id;
        HRA = h;
        TA = t;
        basic = b;
    }

    virtual float salary() = 0;
    // Pure virtual function

    virtual void display() {
        cout << "\nName: " << name;
        cout << "\nEmployee ID: " << employee_Id;
        cout << "\nSalary: " << salary() << endl;
    }
};

class Professor : public Employee {
public:
    Professor(string n, int id, float h, float t, float b)
        : Employee(n, id, h, t, b) {}

    float salary() {
        return basic + HRA + TA;
    }
};
class Staff : public Employee {
public:
    Staff(string n, int id, float h, float t, float b)
        : Employee(n, id, h, t, b) {}
    float salary()
     {
        return basic + HRA + TA;
    }
};
int main() {
    Professor p("Rahul", 101, 5000, 2000, 30000);
    Staff s("Priya", 102, 3000, 1500, 20000);
    cout << "Professor Details:";
    p.display();
    cout << "\nStaff Details:";
    s.display();
    return 0;
}