//Write a C++ program to find the number of trailing zeroes in a given factorial
#include <iostream>
using namespace std;

int factorial(int a){
    int product = 1;
for(int i = 1; i <= a; i++){
    product = product * i;
}
return product;

}

int main(){
int number = 0;
int number_of_zeros = 0;
cout<<"Relax due to variables stroage limits, it can only calculates up to 12! but, algorithm is accurate."<<endl;
cout<<"Hello, enter a number and i will find the trails of zeroes in numbers factorial"<<endl;
cout<<"Please enter a number: ";
cin>>number;

number_of_zeros = number / 5;

cout<<number<<" factorial is: "<<factorial(number)<<endl;
cout<<"There are "<<number_of_zeros<<" zeros at the end of the factorial "<<number<<endl;
}