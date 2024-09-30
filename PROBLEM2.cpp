//
// Created by User on 30/09/2024.
//
#include <iostream>
using namespace std;

int main() {
    int dig;
    cin >> dig;
    string final = "";

    for (int i = 1; i <= dig; i++) {

        int num;
        cin >> num;
        int digit;
        string var = "";

        while (num > 0) {
            digit = num % 10;
            var += to_string(digit);
            var += " ";
            num = num / 10;
        }
        final += var+"\n";
    }
    cout << final;
    return 0;
}