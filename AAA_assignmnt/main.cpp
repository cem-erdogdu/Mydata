#include <iostream>
#define epsilon 0.0001
using namespace std;
double number;
double number2;
double x1{0};
double x2;
double copy_x2;
int count_1{1},count_2{1};

double func_sign(double& x,double& number){ // x represents x1 and x2
int sign;
if((x*x-number) < 0){
sign = -1;
return sign;    
}
if((x*x-number) > 0){
sign = 1;
return sign;
}
else if((x*x-number) == 0){
sign = 0;
return sign;
}
}

double func(double& number){
x2 = x1 + (number)/(pow(10,count_1)); 
if((func_sign(x1,number)*func_sign(x2,number)) < 0){

while((x2-x1) > epsilon){
if((func_sign(x1,number)*func_sign(x2,number)) < 0){
count_1++;
x1 = x1 + (x2)/(pow(10,count_1));
copy_x2 = x2;
x2 = x1 + (x2)/(pow(10,count_1));
}
while((func_sign(x1,number)*func_sign(x2,number)) > 0){
x1 = x1 + (copy_x2)/(pow(10,count_1));
x2 = x1 + (copy_x2)/(pow(10,count_1));
}
}
return x2;
}
// ----------------------------------
x1 = 0;
x2 = x1 + (number)/(pow(10,count_2));
if((func_sign(x1,number)*func_sign(x2,number) > 0)){
while((x2-x1) > epsilon){
while((func_sign(x1,number)*func_sign(x2,number)) > 0){
x1 = x1 + (number2)/(pow(10,count_2));
x2 = x1 + (number2)/(pow(10,count_2));    
}
number2 = x2;
if((func_sign(x1,number)*func_sign(x2,number)) < 0){
count_2++;
x1 = x1 + x2/(pow(10,count_2));
x2 = x1 + x2/(pow(10,count_2));
}
}
return x2;
}
}

int main(){

cout<<"Hello, i will calculate square root of the number you enter"<<endl;
cout<<"Please enter a number: ";
cin>>number;
number2 = number;
cout<<"\n"<<"Square root of "<<number<<" is = "<<func(number);
// this was the first method lets see how the second algorithm perform 
// To prevent to ambigiouty i will write the program on another cpp file.



return 0;
}
