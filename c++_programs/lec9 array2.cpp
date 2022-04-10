#include<iostream>
using namespace std;
// passing array in functions


// void printArray(int input[]){

//     cout<<"function: "<<sizeof(input)<<endl; //it will print 8 bcos we passed a address of array so in cpp 8bite is needded to store an adress in a variable;
//     // so we cant pass size of an array using like above
//     // for (int i = 0;i<) 
// }


void printArray(int input[],int n){
    cout<<"print"<<endl;
    for(int i =0; i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;

}


int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int input[100];
    cout<<"enter array elements;";
    cout<<input<<endl;

    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    // cout<<"main: "<<sizeof(input)<<endl;

    printArray(input,n);
    /*
    int largest = values[0];
    for(int i = 1;i<n;i++){
        if(largest<values[i] || largest==values[i]){
            largest = values[i];
        }

    }
    cout<<largest<<"is maximum";
    */

}