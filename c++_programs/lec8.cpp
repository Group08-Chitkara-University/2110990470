#include <iostream>
using namespace std;

// int main()
// {
//     // int n;
//     // cin >> n;
//     // bool flag = false;
//     // for (int i = 2; i < n; i++)
//     // {
//     //     if (n % i == 0)
//     //     {
//     //         // cout << "this is non-prime";
//     //         flag = true;
//     //     }

//     // }
//     // if(flag){
//     //     cout<<"non-prime";
//     // }
//     // else{
//     //     cout<<"prime";
//     // }
//     // program2****************************************************
//     // for(int i = 1;i<=7;i++){
//     //     cout<<i<<endl;
//     //     i++;
//     // }
//     // program3**********************************************
//     // for(int i = 1; i < 5; i = i + 1){
//     // cout << i << " ";
//     // i = i - 1;

//     // program4*************************************************
// fibonacci number

// int main(){
//     int a = 0;
//     int b = 1;
//     int c=0;
//     int n;
//     cin>>n;
//     if(n==1){
//         cout<<"0";
//     }
//     else{
//         for(int i =1;i<n;i++){
//             a=b;
//             b=c;
//             c=a+b;

//         }
//         cout<<c<<endl;

//     }
// }
// fibonacci number

// int main(){
//     int a = 1;
//     int b = 1;
//     int c=0;
//     int n;
//     cin>>n;
//     if(n==1){
//         cout<<"1";
//     }
//     else{
//         for(int i =1;i<=n;i++){
//             a=b;
//             b=c;
//             c=a+b;

//         }
//         cout<<c<<endl;

//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n, t1 = 0, t2 = 1, nextTerm = 0;

//     cin >> n;

//     cout << "Fibonacci Series: ";

//     for (int i = 1; i <= n; ++i) {
//         // Prints the first two terms.
//         if(i == 1) {
//             // cout << t1 << ", ";
//             continue;
//         }
//         if(i == 2) {
//             // cout << t2 << ", ";
//             continue;
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;

//     }
//     cout << nextTerm << ", ";
//     return 0;
// }

// int main()
// {
//     int i = 1;
//     while (i < 10)
//     {
//         if (i == 4)
//         {
//             i++;
//             continue;
//         }

//     }
// // }
// int main(){

// int i = 1;
// while(i < 3) {
//     int j = 0;
//     while(j < 5) {
//         j++;
//         if(j == 3) {
//             continue;
//         }
//         cout << j << " ";
//     }
//     i++;
// }
// }

// prime numbers

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 2;
//     // bool flag = false;
//     while (i <= n)
//     {
//         int j = 2;
//         bool flag = false;
//         while (j <i)

//         {
//             if (i % j == 0)
//             {
//                 flag = true;
//                 break;
//             }
//             else
//             {
//                 flag = false;
//             }
//             j++;
//         }
//         if(flag==false){
//             cout<<j<<",";
//         }
//         i++;

//     }

// }
// int main(){
//     int i = 10;
//     int* p = &i;
//     cout<<p<<endl;
//     if(i==10){
//         int i = 34;
//         int*t = &i;
//         cout<<t<<endl;
//     }
// }

// int main() {
//     int a = 10;
//     while(a > 5) {
//         int a = 1;
//         cout << a << " ";
//         a--;
//     }
// }
// program to print character until $
// int main(){
//     char c;
//     // cin>>c;
//     c = cin.get();
//     int count = 0;
//     while(c!='$'){
//         count++;
//         // cin>>c;
//         c = cin.get();
//     }
//     cout<<count<<endl;
// }

// int main(){
//     char c;
//     c = cin.get();
//     while(c!=$){
//         int i = 1;
//         while(i<=c.length){

//         }
//     }
// }

// int main()
// {
//     char c;
//     // cin>>c;
//     c = cin.get();
//     int count = 0;
//     int char_count = 0;
//     int num_count = 0;
//     int space_count = 0;
//     while (c != '$')
//     {
//         c = cin.get();
//         // count++;
//         if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//         {
//             char_count++;
//         }
//         else if (c >= '0' && c <= '9')
//         {
//             num_count++;
//         }
//         else if (c == '\n')
//         {
//             space_count++;
//         }
//         else if (c == '\t')
//         {
//             space_count++;
//         }
//         else if (c == ' ')
//         {
//             space_count++;
//         }
//     }
//     cout << char_count << num_count << space_count << endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//       char ch;
//        int num=0,chr=0,space=0;
//         while(ch != '$'){
//            ch = cin.get();
//             if((ch >= 'a' && ch <= 'z') || (ch >= 'A'  && ch <= 'Z')){
//                 chr++;
//             }
//             else if(ch >= '0' && ch<='9'){
//                 num++;
//             }
//             else if (ch == ' '){
//                 space++;
//             }
//             else if (ch == '\n'){
//                 space++;
//             }
//              else if (ch == '\t'){
//                 space++;
//             }

//           }
//     cout<< chr<<" "<<num<<" "<<space;
// }


// Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).

// int main(){
//     int n;
//     cout<<"value of n is";
//     cin>>n;
//     int choice;
//     cout<<"pick ur choice";
//     cin>>choice;
    

//     if(choice == 1){
//         cout<<"you choosed to do sum"<<endl;
//         int sum = 0;
//         int i = 1;
//         while(i<=n){
//             sum = sum+i;
//             i++;
//         }
//         cout<<"the sum is"<<sum<<endl;


//     }
//     else if(choice == 2){
//         cout<<"you choosed to do multiplication from 1 to n"<<endl;
//         int pro = 1;
//         int i = 1;
//         while(i<=n){
//             pro = pro*i;
//             i++;
//         }
//         cout<<"the product is :"<<pro<<endl;
//     }
//     else{
//         cout<<"-1";
//     }
// }



// Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
// int main() {
// 	// Write your code here
// 	int n;
// 	int i;
// 	int flag = 1;
// 	cin >>n;
	
// 	for(i = 1; i<=1000;i++ )
// 	{ 
// 		int val = ((3*i) + 2);
// 		if(val % 4 != 0 && flag <= n) 
// 		{
// 				cout <<val<<" ";
// 				flag++;
// 		}	
// 	}
// }
// int main(){
//     int num;
//     cin >> num;

//     for (int i = 1; i < num + 4; i++){
//         int series = (3*i) + 2;
//         if (series % 4 != 0){
//             cout << series << " ";
//         }
        
//     }
// }

// #include<cmath>
// int main(){

//  int n;
//  cin>>n;

//  int rem;
//  int dec=0;
// int i=0;
// int temp = n;
//  while(temp>0){
//      rem = temp%10;
//      dec = dec + rem*pow(2,i);
//      i++;
//      temp = temp/10;
//  }
//  cout<<dec<<endl;
    
// }

// int  main(){
//     int n;
//     cin>>n;
//     int rem;
//     int  dec = 0 ;
//     int b = 1;
//     int temp = n;

//     while(n>0){
//         rem = n%10;
//         dec = dec + rem*b;
//         b= b*2;
//         n = n/10;

//     }
//     cout<<dec;

// }

// decimal to binary
// int main(){
//     int n;
//     cin>>n;
//     int pow = 1;
//     long dec = 0 ;
//     while(n>0){                                       
//         int lastbit = n%2;
//         dec = dec + lastbit*pow;
//         pow = pow * 10;
//         n=n/2;
//     }
//     cout<<dec;
// }


// squareroot
// int main(){
//     int n;
//     cin>>n;
//     int out = 0;
//     while(out*out<=n){
//         out++;

//     }
//     out=out-1;
//     cout<<out<<endl;
// }


// You are given S, a sequence of n integers i.e. S = s1, s2, ..., sn. Compute if it is possible to split S into two parts : s1, s2, ..., si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly decreasing while the second is strictly increasing one.


// int main() {
//     int n;
//     cin >> n;
//     int prev;
//     cin >> prev;
//     int count = 2, current;
//     bool isDec = true; 
//     while(count <= n) {
//         cin >> current;
//         if(current == prev) {
//             cout << "false";
//             return 0;
//         } 
//         count++;
//         if(current < prev) { 
//             if(isDec == false) {
//                 cout << "false";
//                 return 0;
//             }
//         }
//         else {
//             if(isDec == true) {
//                 isDec = false;
//             }
//         }
//         prev = current;
//     }
//     cout << "true";
// }

int main(){
    int n;
    cin>>n;

    int prev;
    cin>>prev;
    int count =2,curr;
    bool isDec = true;
    while(count<=n){
        cin>>curr;
        if(prev == curr){
            cout<<"false";
            return 0;
        }
        count++;
        if(curr<prev){
            if(isDec == false){
                cout<<"false";
                return 0;

            }
        }
        else{
            if(isDec==true){
                isDec=false;
            }
        }
        prev = curr;
    }
    cout<<"true";
}

