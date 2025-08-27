#include <iostream>

using namespace std;

int main(){

    string number;
    cin >> number;

    int n = number.length();
    int count = 0;
    for (int idx = 0; idx < n; idx++){
        char digit = number[idx];
        // We only care abt digits 4 and 7.
        if(digit == '4' || digit == '7'){
            count += 1;
        }
    }

    if (count == 4 || count == 7){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}