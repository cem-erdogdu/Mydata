/*
A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3, 4, 5 and 6
spots. After the dice have come to rest, the sum of the spots on the two upward faces is
calculated. If the sum is 7 or 11 on the first roll, the player wins. If the sum is 2, 3 or
12 on the first roll (called “craps”), the player loses (i.e., the “house” wins). If the sum
is 4, 5, 6, 8, 9 or 10 on the first roll, then that sum becomes the player’s “point.” To
win, you must continue rolling the dice until you “make your point.” The player loses
by rolling a 7 before making the point 
*/ 

#include <iostream>
#include <cstdlib> //contains prototypes for functions srand and rand
#include <ctime> // contains prototype for function time
using namespace std;
int main() {
    srand(time(NULL));
    enum status {WIN,LOST,CONTINUE};
    status first {WIN};
    status second {LOST};
    status third {CONTINUE};
    int roll_1,roll_2 = 1;
    int temp_1,temp_2 = 0;
    int sum_of_dices = 0;
    cout<<"Hello, welcome to CRAPS"<<endl;
    cout<<"To roll the first dice, please enter 1: ";
    cin>>roll_1;
    cout<<""<<endl;
    while(roll_1 != 1){
        cout<<"You did not enter the valid number."<<endl;
        cout<<"Please enter again"<<endl;
        cin>>roll_1;
    }
    temp_1 = rand() % 6 + 1;
    cout<<"First dice is: "<<temp_1<<endl;
    cout<<"Please roll the second dice, please enter 2: ";
    cin>>roll_2;
    cout<<""<<endl;
    while(roll_2 != 2){
        cout<<"You did not enter the valid number."<<endl;
        cout<<"Please enter again"<<endl;
        cin>>roll_2;
    }
    temp_2 = rand() % 6 + 1;
    cout<<"\nSecond dice is: "<<temp_2<<endl;
    sum_of_dices = temp_1 + temp_2;
    cout<<"Sum of dices are: "<<sum_of_dices;
    switch(sum_of_dices){
        case 7:
        case 11:
        cout<<"\nYou win the game"<<endl;
        break;
        case 2:
        case 3:
        case 12:
        cout<<"You lost the game"<<endl;
        cout<<"If you wish to play again, restart the program"<<endl;
        break;
        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
        case 10:
        cout<<"\nGames is not over, your point is: "<<sum_of_dices<<endl;
        cout<<"To win, you must make your point !!!"<<endl;
        while(sum_of_dices != sum_of_dices || sum_of_dices != 7){
    cout<<"Please roll the dices again, enter 1 to roll the first dice: ";
    cin>>roll_1;
    cout<<""<<endl;
    while(roll_1 != 1){
        cout<<"You did not enter the valid number."<<endl;
        cout<<"Please enter again: ";
        cin>>roll_1;
    }
        temp_1 = rand() % 6 + 1;
        cout<<"\nFirst dice is: "<<temp_1<<endl;
    cout<<"Please roll the second dice, please enter 2: ";
    cin>>roll_2;
    cout<<""<<endl;
    while(roll_2 != 2){
        cout<<"You did not enter the valid number."<<endl;
        cout<<"Please enter again: ";
        cin>>roll_2;
    }
    temp_2 = rand() % 6 + 1;
    cout<<"\nSecond dice is: "<<temp_2<<endl;
    sum_of_dices = temp_1 + temp_2;
    cout<<"Sum of dices are: "<<sum_of_dices<<endl;

    }
    if(sum_of_dices == sum_of_dices) {
        cout<<"You win the game"<<endl;
    }
    if(sum_of_dices == 7) {
        cout<<"You lost the game"<<endl;
    }
    }
    }

















