# include <iostream>
//The number of steps you will go in this calculation will be given by the user as an integer 
//The program should calculate the Pi value using the formula given above by going
//stepcount number of steps and finally print out the result as a double value.
/*      
 * input     5                100
 * output   3.33968     3.13159
 * π = 4/1 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 +......
 */
using namespace std;
int main () {
int number_of_the_step = 0;
double pi =0.0;
int multiply = 1;
cout<<"To learn the value of the pi in any step, please enter the step number :";

cin>>number_of_the_step;
for( int i=1; i<= number_of_the_step; i++) {
    
    pi = pi + (4.0 / (2*i-1))*multiply;
    multiply= multiply * -1;
}
cout<<"The pi value of the step "<<number_of_the_step<<" is :"<<pi<<endl;
}