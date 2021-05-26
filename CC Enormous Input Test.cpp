#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k, numbers;
    int counter = 0;

    cin>>n>>k;

    for(int i=0; i<n; i++){

        cin>>numbers;

        if(numbers%k==0){
            counter++;
        }

    }
    cout<<counter<<endl;




return 0;
}
