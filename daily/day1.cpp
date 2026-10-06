#include <iostream>
#include <string>

using namespace std;
// g++ day1.cpp -o day1 && ./day1

/*
Multi
Line
Comment
*/

int randomNum() {

    int x{10}; //initialization
    const double PI = 3.141592653589793;

    int myNum = 5;
    double myFloatNum = 3.999;
    char myLetter='D';
    string myText="Hello";
    bool mybool = true;

    return myNum + myFloatNum;
}

int main() {
    cout << "Hello World\n";
    cout << 3 + 3 << "\n";
    cout << randomNum() << '\n';
    cout << "new line" << endl;

    int voltage = 12;
    int current=2;
    
    cout << "Voltage = " << voltage << " V" << ", I = " << current << '\n';

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old.\n";
    
    return 0;
}