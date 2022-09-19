#include <iostream>

using namespace std;

double cube(double num){
    double result = num * num * num;
    return result;
}

int main(int argc, char *argv[]) {
    cout << "Cube of 5 is " << cube(5) << endl;
}