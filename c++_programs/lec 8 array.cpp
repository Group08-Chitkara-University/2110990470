#include<iostream>
#include<climits>

using namespace std;

// int main(){
//     int n;
    
//     cout<<"enter the number of eleent";
//     cin>>n;
//     int input[100];
//     for(int i=0;i<n;i++){
//         cin>>input[i];
//     }
//     for(int i = 0;i<n;i++){
//         cout<<input[i];
//     }
// }

// q1.-largest element among an is_array
// int main(){
//     int n;
//     cin>>n;
//     int values[20];
//     for(int i=0;i<n;i++){
//         cin>>values[i];
//     }
//     int largest = values[0];
//     for(int i = 1;i<n;i++){
//         if(largest<values[i] || largest==values[i]){
//             largest = values[i];
//         }

//     }
//     cout<<largest<<"is maximum";

// }

// but the above code willl be crash for value of n = 0


// int main(){
//     int n;
//     cin>>n;
//     int values[20];
//     for(int i=0;i<n;i++){
//         cin>>values[i];
//     }
//     int largest = 0;
//     for(int i = 0;i<n;i++){
//         if(largest<values[i] || largest==values[i]){
//             largest = values[i];
//         }

//     }
//     cout<<largest<<"is maximum";

// }
// but the above is also valid for only +ve numbers in array

// int main(){
//     int n;
//     cin>>n;
//     int values[20];
//     for(int i=0;i<n;i++){
//         cin>>values[i];
//     }
//     int largest = INT_MIN;
//     for(int i = 0;i<n;i++){
//         if(largest<values[i] || largest==values[i]){
//             largest = values[i];
//         }

//     }
//     cout<<largest<<"is maximum";

// }


// p2 sum of all elements of array
// int main(){
//     int n;
//     cin>>n;

//     int values[1000000];
//     for(int i = 0;i<n;i++){
//         cin>>values[i];
//     }

//     int sum = 0;

//     for(int i = 0;i<n;i++){
//         sum = sum +values[i];

//     }

//     cout<<sum;
// }

