#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    string number;
    cin >> number;
    int n = number.length();
    
    unordered_map<char, int> frequency;
    char digit;
    for (int i = 0; i<n; i++){
        digit = number[i];
        if (frequency.count(digit)){
            int newVal = frequency[digit] + 1;
            frequency[digit] = newVal;
        }
        else {
            frequency[digit] = 1;
        }
    }

    if (frequency.count('4') || frequency.count('7')){
        int totalCount = frequency['4'] + frequency['7'];
        if ((totalCount == 4) || (totalCount == 7)){
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }
    }
    else {
        cout<<"NO";
    }


    return 0;
}