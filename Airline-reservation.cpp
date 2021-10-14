#include <iostream>
using namespace std;
const int row = 10;
const int column = 10;
void set_layout(char** pointer) {
char array1[11] = {'A','B','C','D','E','F','G','H','I','J','O'};// O means aisle, i will fill aisles with O,
int i = 0;
int counter1 = 0;
int counter2 = 0;
int check = 0;
// This part is the upper part.
cout<<"    ";
for(i = 0; i < 10;i++){
if(counter2 != 3){
for(int a = 0; a < 3;a++){
cout<<array1[a]<<" ";
}
check++;
}
if(check = 1){
cout<<"| "<<array1[10]<<array1[10]<<array1[10]<<" |";
i = 2;
check = 0;
}

// A B C | OOO |D E F | OOO |

if(counter2 != 6){
for(int a = 3; a < 6;a++){
cout<<array1[a]<<" ";
}
check++;
}
if(check = 1){
cout<<"| "<<array1[10]<<array1[10]<<array1[10]<<" |";
i = 5;
check = 0;
}

//  A B C | OOO |D E F | OOO |G H | OOO |

if(counter2 != 8 ){
for(int a = 6; a < 8;a++){
cout<<array1[a]<<" ";
}
check++;
}
if(check = 1){
cout<<"| "<<array1[10]<<array1[10]<<array1[10]<<" |";
i = 7;
check = 0;
}
//  A B C | OOO |D E F | OOO |G H | OOO |I J 
if(counter2 != 10 ){
for(int a = 8; a < 10;a++){
cout<<array1[a]<<" ";
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
// This part will be the lower part 
for(int k = 0; k < 10; k++){
  cout<<k+1<<"   ";
    for(int l = 0; l < 10; l++){
    




    }
}





}
int main(){
char** ptrptr;
ptrptr = new char* [10];
//Creating multidimensional array inside heap, dynamically allocated
for(int i = 0; i < row; i++){
ptrptr[i] = new char [column];
}
// visualazing empty seats
for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        ptrptr[i][j] = '-';
    }
}



set_layout(ptrptr);








}
