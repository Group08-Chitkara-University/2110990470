#include <iostream>
using namespace std;
// linear search
// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;

//     int array[100001];

//     for(int i = 0;i<n;i++){
//         cin>>array[i];
//     }

//     cout<<"the array is:";
//     for(int i = 0;i<n;i++){
//         cout<<array[i]<<" "<<endl;
//     }

//     cout<<"vaule to be search:"<<endl;
//     int value;
//     cin>>value;

//     for(int i = 0;i<n;i++){
//         if(value==array[i]){
//             cout<<"index of value is: "<<i<<endl;
//             return 0;
//         }

//     }
//     int l = -1;
//     cout<<l<<endl;

// }

// linear search uaing fucntion
// int linearsearch(int arr[],int n, int x){
//     for(int i = 0;i<n;i++){
//         if(arr[i]==x){
//            return i;
//         }
//     }
//     return -1;

// }

// int main(){
//     int n;
//     cout<<"enter n"<<endl;
//     cin>>n;

//     int x;
//     cout<<"enterx"<<endl;
//     cin>>x;

//     int arr[50];

//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//     }

//     linearsearch(arr,n,x);
// };

// arrnange numbr in array

//  void arrange(int arr[],int n){
//     int j = 0;
// 	int i = 0;

//     while(j <= n){

//         if( j % 2 != 0){
//             arr[i] = j;
//             i++;
//             j++;
//         }
//         else{
//             j++;
//         }
//     }
//     j = n;
//     while(j >= 1){

//         if(j % 2 == 0){
//             arr[i] = j;
//             i++;
//             j--;
//         }
//         else{
//             j--;
//         }
//     }
//     for(int i =0;i<n;i++){
//         cout<<arr[i];
//     }
// }



