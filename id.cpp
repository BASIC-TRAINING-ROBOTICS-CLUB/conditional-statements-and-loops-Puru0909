#include <iostream>
using namespace std;


class id {
    int roll_no;
    char name[20];
public:
    void input();  
    void output() {
        cout << "Name = " << name << endl;
        cout << "Roll number = " << roll_no << endl;
    }
};


void id::input() {
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the roll number: ";
    cin >> roll_no;
}

int main() {
    id a;  
    a.input();  
    a.output();  

    return 0;
}
