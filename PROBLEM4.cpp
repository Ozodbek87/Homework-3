//
// Created by User on 30/09/2024.
//
#include <iostream>
using namespace std;

int main() {
    int a,b;
    int final;
    cin>>a>>b;
    if(a>2) {
        if((a-2)%b!=0) {
            final=(a-2)/b+2;
        }else{
            final=(a-2)/b+1;
        }
    }else {
        final=1;
    }

    cout<<final<<endl;
    return 0;
}