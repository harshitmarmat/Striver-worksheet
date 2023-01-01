#include<iostream>
using namespace std;

int main(){
    int t ; cin>>t;
    while(t--){
        int n ; cin>>n;
        int arr[n];
        for ( int i = 0; i < n; i++ ){
            cin>>arr[i];
        }
        int sum = 0, max = arr[0];
        for ( int i = 0; i < n; i++ ){
            sum += arr[i];
            if(sum > max) max = sum;
            if(sum < 0) sum = 0;
        }
        cout<<max<<endl;    
    }
}