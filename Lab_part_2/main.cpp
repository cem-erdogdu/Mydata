#include <iostream>
#include <string>
// i will dynamically allocate an array which will store the number up to 100 digits.
class LargeInteger{
private:
int numberofdigits;
char sign;
int* number; // with the help of this pointer we will have a chance to access the array of integers which can store up to 100 number
 // I will concatenate string with integer that's why i have created this.
public:
friend std::istream& operator>>(std::istream& input,LargeInteger& obj);    // overloading insertion operator
friend std::ostream& operator<<(std::ostream& output,LargeInteger& obj);   // overloading extraction operator

LargeInteger operator+(LargeInteger& obj){ 
LargeInteger temp;
*(temp.number)= *number + *(obj.number);
}

LargeInteger(){  // default constructor
numberofdigits = 1;
number = nullptr;
sign ='+';
}
LargeInteger(char &signuture,int* &ptr){
ptr = new int[100]; // dynamical array, it can only contain 100 numbers
numberofdigits = sizeof(ptr)/sizeof(ptr[0]);

}


void setnumber(std::string numstr){
if(sign = '-'){
    sign = '-';
}
else{
    sign = '+';
}

}

};

std::istream& operator>>(std::istream& input,LargeInteger& obj){
input>>obj.sign>>*(obj.number);

return input;
}
std::ostream& operator<<(std::ostream& output,LargeInteger& obj){
output<<obj.sign<<*(obj.number);

return output;
}

int main(){
LargeInteger object1;
LargeInteger object2;
LargeInteger object3;
std::cout<<"Hello, please enter the first number: ";
std::cin>>object1;
std::cout<<"\n"<<"Hello, please enter the second number: ";
std::cin>>object2;
object3 = object1+object2;
std::cout<<"\n"<<object3;
}