#include <iostream>
#include <cmath>
using namespace std;
// question1. sum of first n natural numbers

// void printsum(int n){
//     cout<<(n*(n+1))/2;

// }
// int main(){
//     int n;
//     cin>>n;

//     printsum(n);

//     return 0;
// }

// question2. --> pythagorian triplet
//  int main() {
//      int x,y,z;
//      cin>>x>>y>>z;

//     int a = max(x,max(y,z));

//     bool value = false;
//     if(a==x){
//         if((a*a)==(x*x) +(y*y)){
//             value = true;

//         }
//         else{
//             value = false;

//         }
//     }

//     else if(a==y){
//         if((a*a)==(x*x) +(z*z)){
//             value = true;

//         }
//         else{
//             value = false;

//         }
//     }

//     else if(a==z){
//         if((a*a)==(x*x) +(y*y)){
//             value = true;

//         }
//         else{
//             value = false;

//         }
//     }

//     if(value){
//         cout<<"yes these are pythagorian triplet"<<endl;
//         return 0;
//     }

//     else{
//         cout<<"no these are not";
//     }

// }

// binary to decimal

// int binaryToDecimal(int n)
// {
//     int sum = 0;
//     int p = 1;
//     while (n > 0)
//     {
//         int rem = n % 10;
//         sum = sum + rem * p;
//         p = p * 2;

//         n = n / 10;
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout<<binaryToDecimal(n);

// }


// octal to decimal

int octalToDecimal(int n)
{
    int sum = 0;
    int p = 1;
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum + rem * p;
        p = p * 8;

        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout<<octalToDecimal(n);

}



// hexadecimalToDecimal

// int main(){
//     string x;
//     cin>>x;
//     cout<<x.size();
// }
