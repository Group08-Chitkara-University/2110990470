#include <iostream>
using namespace std;

// int main(){
//     // int a[6] = {1,2,3};
//     // for(int i = 0;i<6;i++){
//     //     cout<<a[i]<<" ";

//     // }
//     // cout<<endl;
//     // return 0;

//     // int a[6] = {5};
//     // for(int i = 0;i<6;i++){
//     //     cout<<a[i]<<" ";

//     // }
//     // cout<<endl;

//     int a[6] = {0};
//     for(int i = 0;i<6;i++){
//         cout<<a[i]<<" ";

//     }
//     cout<<endl;
// }

// void increament(int a,int b[] ,int n){
//     a++;
//     cout<<"this is a of function"<<a<<endl;
//     b[0]++;
// }
// int main(){
//     int a = 10;
//     int b[10] = {1,2,3};
//     increament(a,b,10);

//     cout<<"a of main :"<<a<<endl;
//     cout<<"b[0]: "<<b[0]<<endl;

//     return 0;
// }

void reverse(int arr[], int n)
{
    int i =0;int j = n-1;
    for (int i = 0; i < j ; i++)

    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
        j--;

    }
    
}

int main()
{

    int n;
    cout << "enter the siz of array" << endl;
    cin >> n;

    int arr[10];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, n);
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
