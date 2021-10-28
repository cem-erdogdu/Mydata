#include <iostream>
#define UPPERBOUND 100
using namespace std;
int main() {
    int i,j,k,l,m,range,temp = 0;
    int arr[UPPERBOUND] = {};
    cout<<"Hello, this program is designed for number sorting smallest to greatest."<<endl;
    cout<<"Do not enter the amount unneccesarly greater than the real amount, errors may occur!!!"<<endl;
    cout<<"Please enter the amount of number you would like to be compared: ";
    cin>>range;
    while((range<0)||(range>UPPERBOUND)){
        cout<<"Invalid range!!! Maximum amount of number you can enter is limited with 100.";
        cout<<"Do not exceed the limit."<<"Please enter the amount of number you would like to be compared"<<endl;
        cin>>range;
    }
    cout<<"Please enter the numbers you would like to compare: "<<endl;
    int counter = 0;
    for(k=0;k<range;k++){
        cout<<"Enter element ["<<k+1<<"] ";
        cin>>arr[k];
        counter = counter + 1;
        int result = 0;
        result = (range)-counter;
        cout<<"You have entered "<<counter<<" number."<<" You can enter "<<result<<" more"<<endl;
    }
    cout<<"Numbers you entered are shown below"<<endl;
    for(l=0;l<range;l++){
        cout<<arr[l]<<"\t"<<endl;
    }
    //this is the important part.
    for(i=0;i<range;i++){
        for(j=i+1;j<range;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Sorted array elements are shown below: "<<endl;
    for(m=0;m<range;m++){
        cout<<"["<< m <<"] "<<"\t";
        cout<<arr[m]<<"\t";
        cout<<endl;
    }
}