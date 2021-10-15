#include <iostream>
using namespace std;
const int row = 10;
const int column = 10;

void set_layout(char** & pointer,char (&arr)[11] ) {
int i = 0;
int counter1 = 0;
int counter2 = 0;
int check = 0;
// This part is the upper part.
cout<<"    ";
for(i = 0; i < 10;i++){
if(counter2 != 3){
for(int a = 0; a < 3;a++){
cout<<arr[a]<<" ";
}
check++;
}
if(check = 1){
cout<<"| "<<arr[10]<<arr[10]<<arr[10]<<" |";
i = 2;
check = 0;
}

// A B C | OOO |

if(counter2 != 6){
for(int a = 3; a < 6;a++){
cout<<arr[a]<<" ";
}
check++;
}
if(check = 1){
cout<<"| "<<arr[10]<<arr[10]<<arr[10]<<" |";
i = 5;
check = 0;
}

//  A B C | OOO |D E F | OOO |G H | OOO |

if(counter2 != 8 ){
for(int a = 6; a < 8;a++){
cout<<arr[a]<<" ";
}
check++;
}
if(check = 1){
cout<<"| "<<arr[10]<<arr[10]<<arr[10]<<" |";
i = 7;
check = 0;
}
//  A B C | OOO |D E F | OOO |G H | OOO |I J 
if(counter2 != 10 ){
for(int a = 8; a < 10;a++){
cout<<arr[a]<<" ";
}
check++;
}
if(check = 1){
i = 9;
check = 0;
}
counter1 = counter1 + 1;
counter2 = counter1;
}
 for(int k = 0; k < 10; k++){
        cout<<"\n"<<k<<"   ";
        for(int i = 0; i < 10; i++){
            cout<<pointer[k][i]<<" ";
            if(i == 2){
                cout<<"|     |"; continue;
            }
            if(i == 5){
                cout<<"|     |"; continue;
            }
            if(i == 7){
                cout<<"|     |"; continue;
            }
            
        }
    }
}

int dist(char** & pointer1,char** & pointer2){





}

int main(){
char array1[11] = {'A','B','C','D','E','F','G','H','I','J','O'};
char** ptrptr;
ptrptr = new char* [10];
//Creating multidimensional array inside heap, dynamically allocated
for(int i = 0; i < row; i++){
ptrptr[i] = new char [column];
}
// initilazing empty seats
for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        ptrptr[i][j] = '-';
    }
}
int number_of_passengers = 0;
int check_group = 0;
cout<<"Hello, welcome to Turkish Airlines"<<endl;
cout<<"Due to covid 19, we take limited number of people to our aircraft"<<endl;
cout<<"For the persons who will make reservation more than one seat, compulsory to act according to covid 19 measurments"<<endl;
cout<<"For a famliy or group reservations, your seats will automatically be assigned by the system."<<endl;
cout<<"Don't worry you will not be seperated"<<endl;
cout<<"Below, you can monitor the seat layout"<<endl;
set_layout(ptrptr,array1);
cout<<"Please enter the number of people who will make reservations: ";
cin>>number_of_passengers;
if((number_of_passengers <= 10) && (number_of_passengers > 1)){
check_group++;
}
else{
while(number_of_passengers > 10){
cout<<"Unfortunately, you can not reservate more than ten seats in the same row."<<endl;
cout<<"For the groups who has more than ten people in it, must make a seperate reservation."<<endl;
cout<<"Please reenter the number of seats which will be reservated: ";
cin>>number_of_passengers;
if(number_of_passengers > 1){
check_group++;
}
}
}









}
