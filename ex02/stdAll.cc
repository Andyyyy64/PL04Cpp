#include <iostream>
#include <string>

using namespace std;

int main() {
    string in;
    int cnt = 0;

    // read input until EOF
    while(cin >> in) {
        cnt++;
    }

    cout << cnt << endl;
}