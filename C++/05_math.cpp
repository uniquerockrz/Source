#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char *argv[]) {
    cout << 1.3 + 2.5 << endl;
    cout << 5 % 3 << endl;
    cout << 5 / 0 << endl;
    cout << 5 / 3 << endl;
    cout << 5.0 / 3 << endl;
    
    cout << pow(2, 5) << endl;
    cout << sqrt(2) << endl;
    cout << round(3.5) << endl;
    cout << ceil(3.5) << endl;
    cout << floor(3.5) << endl;
    cout << fmax(3, 5) << endl;
    cout << fmin(3, 5) << endl;
    
    float a = 1.4149;
    double b = 4567.8954321;
    
    cout.precision(2);
    cout << std::fixed << a << endl;
    cout.precision(1);
    cout << std::scientific << b << endl;
    
    return 0;
}