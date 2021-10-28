/*
Write a C++ program to find the square root of a number using Babylonian method.
Sample Input: n = 50
Sample Output: 7.07107
Sample Input: n = 81
Sample Output: 9
*/

#include <iostream>
using namespace std;
int input = 0;
void square_root(int input){
int i = 0;
int number = 100;
double arr[100] = {100.000};
double check = 0.00001;

for(i = 0; i < number; i++){

    arr[i+1] = (arr[i] + (input/arr[i])) / 2;
    
    if(arr[i+1] == check){
        break;
    }
    
    check = arr[i+1];

}
cout<<"Square root of "<<input<<" is: "<<arr[i+1];
}

int main() {
cout<<"Please enter the number you want to learn the square root of: ";
cin>>input;
square_root(input);

}