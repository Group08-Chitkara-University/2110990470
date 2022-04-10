#include<iostream>
using namespace std;

int main(){
    // declaring 2d array
    int n,m;//n refers to number of rows and m refers to column
    cin>>n>>m;
    int arr[n][m];

    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }



    cout<<"matrix is"<<endl;
     for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

// searching a Matrix
cout<<"enter element to be search"<<endl;
int x ;
cin>>x;

for(int i =0; i<n;i++){
    for(int j = 0;j<m;j++){
        if(arr[i][j]==x){
            cout<<"element found at index array: ["<<i<<"]"<<"["<<j<<"]"<<endl;
            return 0;
        }

    }
    
}
}

// spiral order matrix;--
int main(){

    
}