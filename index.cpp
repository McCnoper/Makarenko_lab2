#include <iostream>

using namespace std;
int main() {
    int a = 1;
    int b = 1;
    int c = 0;
    int sum = 0;
    cout<<a<<" ";
    cout<<b<<" ";
    sum=a+b;
    for(int i = 1; i<10; i++){
        c= a+b;
        if(c<1000){cout<<c<<" ";
        a = c;
        sum+=c;    
        }
        
        c= a+b;
        if(c<1000){cout<<c<<" ";
        b = c;
        sum+=c;    
        }
    }
    cout<<endl<<"Сумма чисел Фібоначчі до 1000: "<<sum;
}
