/*
Write a C++ programming to get the maximum product from a given integer after breaking the integer into the sum of at least two positive integers.
Sample Input: 12
Sample Output: 81
Explanation: 12 = 3 + 3 + 3 + 3, 3 x 3 x 3 x 3 = 81.
Sample Input: 7
Sample Output: 12
Explanation: 7 = 3 + 2 + 2, 3 x 2 x 2 = 12.
*/ 

#include <iostream>
using namespace std;

long square (int b){
long int temp = 1;
for(int i = 1; i<=b;i++ ){
    temp = temp * 3;

}
return temp;
}

int main() {
long long int answer;
int number;
int iteration;
cout<<"Enter a number: ";
cin>>number;

switch (number) {

    case 2: cout<<1<<endl;return 0;
    case 3: cout<<2<<endl;return 0;
    case 4: cout<<4<<endl;return 0;
    case 5: cout<<6<<endl;return 0;
    case 6: cout<<9<<endl;return 0;
    case 7: cout<<12<<endl;return 0;
    case 8: cout<<18<<endl;return 0;
    case 9: cout<<27<<endl;return 0;
}

if(number % 3 == 2){
    iteration = number / 3;
    square(iteration);
    cout<<"Output is: "<<square(iteration)*2<<endl;
}

if((number % 3 == 0)||(number % 3 == 1)) {
    iteration = number / 3;
   square(iteration);
   cout<<"Output is: "<<square(iteration)<<endl;
}


return 0;
}












