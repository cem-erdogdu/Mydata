#include <iostream>
using namespace std;
//I will try to declare a function which calculates m power n
double power ( double m, double n) {
    double p= 1.0;
    for ( int i =1; i <=n ; i++) {
        p = p * m;
    }
    return p;
}

int main() {
    double m = 0, n =0;
    cout<<"Enter a two number and i will display you the m power n :";
    cin>>m>>n;
    cout<<"m power n is :"<<power(m,n)<<endl; 
    return 0;
    
}
