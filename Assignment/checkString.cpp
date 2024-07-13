#include <iostream>
#include <cctype> 

using namespace std;

bool isAlphaOnly(const string& s) {
    for (char c : s) {
        if (!isalpha(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    string test1 = "HelloWorld";
    cout << (isAlphaOnly(test1) ? "True" : "False") << endl; 
    
    string test2 = "Hello123";
    cout << (isAlphaOnly(test2) ? "True" : "False") << endl;

    return 0;
}
