#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 100;
    for(int i = 1; i <= n; i++) {
        // check if i is divisible by 3 or contains 3
        if(i % 3 == 0 || to_string(i).find("3") != string::npos) {
            cout << i << endl;
        } 
    }
    return 0;
}