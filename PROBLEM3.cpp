//
// Created by User on 30/09/2024.
//
#include <iostream>
using namespace std;

int main() {
    int N,A,B;
    cin>>N>>A>>B;
    int final=0;
    for (int i = 1; i <= N; i++) {
        int sum = 0;
        int n =i;
        while (n>0) {
            sum+=n%10;
            n/=10;
        }
        if(sum>=A && sum<=B) {
            final+=i;

        }


    }
    cout<<final<<endl;

    return 0;
}