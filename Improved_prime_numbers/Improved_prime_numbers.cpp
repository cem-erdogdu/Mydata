/* #include <iostream>
using namespace std;
int main(){
unsigned long long int lowerbound = 0;
unsigned long long int upperbound = 0;
unsigned int counter_non_prime = 0;
unsigned int counter_prime = 0;
//This program will print the prime numbers between determined range
cout <<"Hello, this program will print the prime numbers between determined range."<<endl;
cout <<"Please enter a lowerbound value: ";
cin>>lowerbound;
cout <<"Please enter a upperbound value: ";
cin>>upperbound;
//Here i will, validate your lower and upper bound values whether they valid logically or not
while( () ())
*/















/* #include <iostream>
using namespace std;
int main() {
unsigned long long int lower_bound = 0;
unsigned long long int upper_bound = 0;
int i,j = 0;
unsigned long int counter_for_prime = 0;
unsigned int counter_for_non_prime = 0;

cout<<"This program will calculate the prime numbers between determined range."<<endl;
cout<<"Please enter a lower bound: ";
cin>>lower_bound;
while(lower_bound < 2){
cout<<"Since the smallest prime number is two, your lower bound value cannot be smaller than 2.";
cout<<"Please enter a valid lower bound: ";
cin>>lower_bound; }

cout<<"\n"<<"Please enter a upper bound: "<<endl;
cin>>upper_bound;
while( (upper_bound < lower_bound) ) {
cout<<"Upper bound cannot be smaller than lower bound."<<endl;
cout<<"Please enter a valid upper bound: ";
cin>>upper_bound; }

for(i = upper_bound; i > lower_bound; i--) {
counter_for_non_prime = 0;
for(j = 2; j <= upper_bound - 1; j++) {
  if((i % j) == 0){
  counter_for_non_prime = counter_for_non_prime + 1; // if the incrementation occurs, we found a non prime number
  break;
  }

}
   if(counter_for_non_prime == 0) {   
    cout<< i <<" ";
    counter_for_prime = counter_for_prime + 1;
   }

}
cout<<"There are "<<counter_for_prime<<" prime numbers exist between "<<lower_bound<<" and "<<upper_bound<<endl;


}
*/