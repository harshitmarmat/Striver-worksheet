#include<iostream>
#include<vector>
using namespace std;

int main (){ 
    int t ; cin>>t;
    while (t--){
        int n ; cin>>n;
        int arr[1000][1000];
        vector<vector<long long int> > output;
        for ( int i=0; i<n; i++){
            vector<long long int> output_temp;
            for (int j=0; j<=i; j++){
                if(j==0 || j==i){
                    output_temp.push_back(1)
                    continue;
                }
                output_temp.push_back(output[i-1][j-1]+output[i-1][j]);
            }
            output.push_back(output_temp);
        }
    }
}
