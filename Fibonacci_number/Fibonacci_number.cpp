# include <iostream>

using namespace std;
int main () {
    int number = 0;
    int fibonacci_number1=0;
    int fibonacci_number2=1;
    int next_fibonnacci_number = fibonacci_number1 + fibonacci_number2;
    cout<<"Please enter a number and i will display the fibonacci numbers below the number you entered"<<"\nPlease enter a positive number :";
    cin>>number;
    if( number == 1) {
    cout<<0<<endl; 
    if (number ==2) 
    cout<<1<<endl; 
    if ( number == 3) 
    cout<<1<<endl;
     if ( number == 4) 
    cout<<2<<endl;}
    if ( number >0 ) {
        for ( int i = 1; i <= number; i++) {
            fibonacci_number1 = fibonacci_number2;
            fibonacci_number2 = next_fibonnacci_number;
            next_fibonnacci_number = fibonacci_number1 + fibonacci_number2;
        } 
        cout<<next_fibonnacci_number<< endl;
    }
        
    
        
    
}