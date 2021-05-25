    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int amount;
        double account_balance;
        double rem_bal;

        cin>>amount>>account_balance;

        if(amount%5==0){

            if(amount<account_balance && (amount+0.5)<=account_balance){
                rem_bal = account_balance - amount - (0.5);
                cout<<rem_bal<<endl;
            }
            else{
                cout<<account_balance<<endl;
            }


        }

        else{

            cout<<account_balance<<endl;

        }

        return 0;
    }
