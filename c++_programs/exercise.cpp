#include <iostream>
using namespace std;
//*******Question1
// int main()
// {
//     int n;
//     cout << "Enter the value of N:" << endl;
//     cin >> n;

//     int sum = 0;
//     int i = 1;
//     while (i <= n)
//     {
//         if (i % 2 == 0)
//         {
//             sum = sum + i;
//         }
//         i = i + 1;
//     }

//     cout << "The sum is :" << sum;

//     return 0;
// }

//********Question2
// int main(){
//     int S;
//     int E;
//     int W;
//     float f;
//     cin>>S>>E>>W;
//     while(S<=E){
//         f =((9.0/5.0)*S)+32;
//         cout<<S<<f<<endl;
//         S =S+W;

//     }

// }
// another program
// double basic;
// cout << "enter the value of basic";
// cin >> basic;
// cout << "Enter the value of grade";
// char grade;
// cin >> grade;
// double hra = 0.2 * basic;
// double da = 0.5 * basic;
// double pf = (11.0 / 100) * basic;
// double allow;
// if (grade == 'A')
// {
//     allow = 1700;
// }
// else if (grade == 'B')
// {
//     allow = 1500;
// }
// else
// {
//     allow == 1300;
// }
// double totalSalary = basic + hra + da + allow - pf;
// cout << round(totalSalary);

// Another program--
// Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.

// int n;
// cin >> n;
// int sum_even = 0;
// int sum_odd = 0;

// while (n > 0)
// {
//     int r = n % 10;
//     if (r % 2 == 0)
//     {
//         sum_even = sum_even + r;
//     }
//     else
//     {
//         sum_odd = sum_odd + r;
//     }
//     n = n / 10;
// }
// cout << "sum of even number is:" << sum_even << endl;
// cout << "sum of odd number is:" << sum_odd << endl;

// Another program--Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.

// int n,p;
// cin>>n>>p;
// int i = 1;
// int v = 1;
// int x = n;
// if(p==0){
//     cout<<1<<endl;
// }
// else{
//      while(i<=p){
//     x=x*v;
//     v=n;
//     i=i+1;
// }
// cout<<x<<endl;
// }

//     //------->another program
//     Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
// 1, if the character is an uppercase alphabet (A - Z)
// 0, if the character is a lowercase alphabet (a - z)
// -1, if the character is not an alphabet
// char x;
// cin>>x;
// if(x>='A' && x<='Z'){
//     cout<<"uppercase"<<endl;
// }

// else if(x>='a' && x<='b'){
//     cout<<"lowercase"<<endl;
// }

// else{
//     cout<<"not a character"<<endl;
// }

//------------class ex--
// 1.
// int main(){

// int a,b,c;
// cin>>a>>b>>c;
// if(a>b){
//   if(a>c){
//     cout<<"a is largest"<<endl;
//   }
//   else{
//     cout<<"c is largest"<<endl;
//   }

// }
// else if(b>a){
//   if(b>c){
//     cout<<"b is largest"<<endl;
//   }
//   else{
//     cout<<"c is largest"<<endl;
//   }

// }
// else{
//   cout<<"c is largest"<<endl;
// }

// }

// //---------------------> 2.
// int main(){
//   int n;
//   cin>>n;
//   int x = n;
//   int v = 1;
//   int i = 1;
//   while(i<=n){
//     x=x*v;
//     v=n-i;
//     i=i+1;

//   }
//   cout<<x<<endl;
// }

// int main(){
//   int n;
//   cin>>n;
//   int sum = 0;
//  while(n>0){
//    int val = n%10;
//    sum = sum+val;
//    n=n/10;
//  }
//  cout<<sum<<endl;

// }

// int main(){
//   char c;
//   cout<<"enter the character ";
//   cin>>c;
//   int a ;
//   a = int(c);
//   if(a>64 && a<=91){
//     cout<<"uppercae";
//   }
//   else if(a>96 && a<123 ){
//     cout<<"lowercae";
//   }
//   else{
//     cout<<"not";
//   }
//   return 0;
// }
// int main(){
//   int n;
//   cin>>n;
//   int i = 1;
//   while(i<=n){
//     if(i%3==0 && i%7==0){
//       cout<<"yes  n is multiple of 3 and 7";
//       break;

//     }
//     else{
//       cout<<"not the multiple of 3 and 7";
//       break;
//     }
//     i++;

//   }

// }

// another question
// int main(){

// int n;
// cin>>n;
// int i=1;
// int pro = 0;
// while(i<=n){
//   pro = pro +i*i;
//   i++;    10
// }
// cout<<pro;

// }

int main()
{
  char c;
  int digit_count = 0, chr_count = 0, whiteSpace_count = 0;
  while (c != '$')
  {
    c = cin.get();
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
      chr_count++;
    }

    else if (c >= '0' && c <= '9')
    {
      digit_count++;
    }

    else if (c == ' ')
    {
      whiteSpace_count++;
    }

    else if (c == '\n')
    {
      whiteSpace_count++;
    }

    else if (c == '\t')
    {
      whiteSpace_count++;
    }
  }
  cout << chr_count << " " << digit_count << " " << whiteSpace_count;
}
