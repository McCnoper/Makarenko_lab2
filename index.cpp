#include <iostream>

using namespace std;
int main() {
    int a = 1;
    int b = 1;
    int c = 0;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i = 1; i<10; i++){
        c= a+b;
        if(c<1000)cout<<c<<" ";
        a = c;
        
        c= a+b;
        if(c<1000)cout<<c<<" ";
        b = c;
    }
}
