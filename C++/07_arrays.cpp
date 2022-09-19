#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
    int numbers[] = {1, 2, 3, 4};
    
    cout << numbers[2] << endl;
    numbers[2] = 23;
    cout << numbers[2] << endl;
    return 0;
}