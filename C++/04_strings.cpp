#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
    string phrase = "Saurav Modak";
    
    cout << "Length: " << phrase.length() << endl;
    cout << "Index: " << phrase[0] << endl;
    phrase[0] = 's';
    cout << "Modifying: " << phrase << endl;
    cout << "Find: " << phrase.find("au", 0) << " " << phrase.find("ag", 0) << endl;
    cout << "Subtring: " << phrase.substr(1, 3) << endl;
    
    return 0;
}