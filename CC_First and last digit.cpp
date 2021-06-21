#include<bits/stdc++.h>
using namespace std;

int main(){


        int T;
        cin>>T;

        while(T--){

        int n;
        cin>>n;

        ostringstream str1;
        str1<<n;

        string s = str1.str();
        int len = s.length();
        int l = s[0]-48;
        int p = s[len-1]-48;

        cout<<l+p<<endl;

}




return 0;
}

