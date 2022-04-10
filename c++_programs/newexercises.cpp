#include <iostream>
using namespace std;

// int main(){
//     cout<<"hello world";
//     return 0;
// }

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

// int main()
// {
//     char ch;
//     int rows,i,j,Num_Of_space=1;
//     cout<<"Enter the number of rows: ";
//     cin>>rows;
//     cout<<"Enter the symbol: ";
//     cin>>ch;

//     // Num_Of_space=rows-1;

//     // for(i=1; i<=rows; i++){//outer for loop iterates through rows
//     //     for(j=1; j<=Num_Of_space; j++)
//     //         cout<<" ";//print space - inner for loop
//     //         Num_Of_space--;

//     //     for(j=1; j<=2*i-1; j++)
//     //         cout<<ch;//print character

//     //     cout<<"\n";//move to next line

//     // }

//     Num_Of_space=1;
//     for(i=1; i<=rows-1; i++){
//             for(j=1; j<=Num_Of_space; j++)
//             cout<<" ";//print space - inner for loop
//     Num_Of_space++;

//         for(j=1; j<=2*(rows-i)-1; j++)
//             cout<<ch;//print charactor
//             cout<<"\n";//mobe to next line

//         }

//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int currRow = 1;
//     while (currRow <= (n / 2) + 1)
//     {
//         int spaces = 1;
//         while (spaces <= (n / 2) + 1 - currRow)
//         {
//             cout << " ";
//             spaces++;
//         }
//         int currCol = 1;
//         while (currCol <= (2 * currRow) - 1)
//         {
//             cout << "*";
//             currCol++;
//         }
//         currRow++;
//         cout << endl;
//     }
//     // Lower part
//     currRow = 1;
//     while(currRow<=n/2){
//         int spaces = 1;
//         while(spaces<=currRow){
//             cout<<" ";
//             spaces++;
//         }
//         int currCol = 2*((n/2)-currRow+1)-1;
//         while(currCol>=1){
//             cout<<"*";
//             currCol--;
//         }
//         cout<<endl;
//         currRow++;
//     }
// }

// int increamaent(int a){
//     a= a+1;
//     // cout<<a<<endl;
//     return a;

// }
// int main(){
//     int n=10;
//     n= increamaent(n);
//     cout<<n<<endl;
// }

// Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
// That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
// Print count of characters, count of digits and count of white spaces respectively (separated by space).

// #include<iostream>
// using namespace std;

// int main()
// {
//   char c;
//   int digit_count = 0, chr_count = 0, whiteSpace_count = 0;
//   while (c != '$')
//   {
//     c = cin.get();
//     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//     {
//       chr_count++;
//     }

//     else if (c >= '0' && c <= '9')
//     {
//       digit_count++;
//     }

//     else if (c == ' ')
//     {
//       whiteSpace_count++;
//     }

//     else if (c == '\n')
//     {
//       whiteSpace_count++;
//     }

//     else if (c == '\t')
//     {
//       whiteSpace_count++;
//     }
//   }
//   cout << chr_count << " " << digit_count << " " << whiteSpace_count;
// }

// Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).
// If C is equal to -
//  1, then print the sum
//  2, then print the product
//  Any other number, then print '-1' (without the quotes)

// int main(){
//     int n;
//     cin>>n;

//     int choice;
//     cin>>choice;
//     if(choice==1){
//         int sum = 0;
//         int i =1;
//         while(i<=n){
//             sum=sum+i;
//             i++;
//         }
//         cout<<sum;
//         return 0;

//     }
//     else if(choice==2){
//         int pro = 1;
//         int i = 1;
//         while(i<=n){
//             pro = pro*i;
//             i++;
//         }
//         cout<<pro;
//         return 0;

//     }
//     else{
//         cout<<"-1";
//         return 0;
//     }

// }

// Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int sum = (3*i)+2;
//         i++;
//         if(sum%4==0){
//             n=n+1;
//             continue;
//         }
//         else{
//             cout<<sum<<" ";
//         }
//     }
// }

// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
// Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.

// int main(){
//     int n;
//     cin>>n;
//     int rem ;
//     int reverse_value= 0;
//     while(n>0){
//         rem = n%10;
//         reverse_value = rem + reverse_value*10;
//         n=n/10;

//     }
//     cout<<reverse_value;
// }

// Given a binary number as an integer N, convert it into decimal and print.
// int main(){

//     int n;
//     cin>>n;
//     int rem;
//     int p = 1;

//     int value =0;
//     while(n>0){
//         rem = n%10;
//         value  =  value+rem*p;
//         p=p*2;
//         n=n/10;

//     }
//     cout<<value;
// }

// Given a decimal number (integer N), convert it into binary and print.
// The binary number should be in the form of an integer.
// int main()//this is wrong for a large value of n (ex n=100000)
// {
//     int n;
//     cin >> n;
//     int rem;
//     while (n > 0)
//     {
//         int rem = n % 2;
//         cout<<rem;
//         n = n / 2;
//     }
// // }
// int main(){
//     int n;
//     cin>>n;
//     long rem;
//     long binary = 0;
//     long p =1;
//     while(n>0){
//         rem = n%2;
//         binary = binary+(rem*p);
//         p=p*10;
//         n=n/2;

        
//     }
//     cout<<binary;
// }

// Given a number N, find its square root. You need to find and print only the integral part of square root of N.
// For eg. if number given is 18, answer is 4.



// int main() {
//     int n;
//     cin >> n;
//     int ans = 0;
//     while(ans * ans <= n) {
//         ans = ans + 1;
//     }
//     ans = ans - 1;
//     cout << ans;
// }







// You are given S, a sequence of n integers i.e. S = s1, s2, ..., sn. Compute if it is possible to split S into two parts : s1, s2, ..., si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly decreasing while the second is strictly increasing one.
// Note : We say that x is strictly larger than y when x > y.
// So, a strictly increasing sequence can be 1 4 8. However, 1 4 4 is NOT a strictly increasing sequence.


// That is, in the sequence if numbers are decreasing, they can start increasing at one point. And once the sequence of numbers starts increasing, they cannot decrease at any point further.
// Sequence made up of only increasing numbers or only decreasing numbers is a valid sequence. So, in both the cases, print true.


// You just need to print true/false. No need to split the sequence.
// Input format :
// Line 1 : Integer 'n'
// Line 2 and Onwards : 'n' integers on 'n' lines(single integer on each line)
// Output Format :
// "true" or "false" (without quotes)
// Constraints :
// 1 <= n <= 10^7
// Sample Input 1 :
// 5
// 9
// 8
// 4
// 5
// 6
// Sample Output 1 :
// true

// int main(){
//     int n;
//     cin>>n;

//     int prev;
//     cin>>prev;
//     int i = 2,current;
//     bool is_dec = true;
//     while(i<=n){
//         cin>>current;
//         if(prev==current){
//             cout<<"false";
//             return 0;

//         }
//         i++;
//         if(prev>current){
//             if(is_dec  == false){
//                 cout<<"false";
//                 return 0;
//             }
//         }

//         else{
//             if(is_dec==true){
//                 is_dec = false;

//             }
//         }
//         prev = current;
//     }
//     cout<<"true";
// }




