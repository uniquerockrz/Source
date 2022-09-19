#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
    int age;
    string name;
    
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;
    
    cout << "Enter your name: " << endl;
    cin.ignore(256, '\n');
    getline(cin, name);
    cout << "Hello " << name << "!" << endl;
    return 0;
}