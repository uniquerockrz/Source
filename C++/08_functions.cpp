#include <iostream>

using namespace std;

void sayHi(string name);

int main(int argc, char *argv[]) {
    sayHi("Saurav");
    
    return 0;
}

void sayHi(string name) {
    cout << "Hi! " << name << endl;
}
