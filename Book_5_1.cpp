#include<iostream>
using namespace std;
class bank{
    private :
        char name[100];
        int accno;
        char acctype;
        int balance;
    public :
        int initial(){
            cout<<"Enter the name of the customer"<<endl;
            cin>>name;
            cout<<"Enter the account number"<<endl;
            cin>>accno;
            cout<<"P-Primary & S-Saving"<<endl;
            cin>>acctype;
            cout<<"Enter the amount"<<endl;
            cin>>balance;
            //cout<<"\n";
        }
        int deposit(){
            int g;
            cout<<"Enter the amount you desposit"<<endl;
            cin>>g;
            balance = balance + g;
            cout<<"\n";
            cout<<balance;
            cout<<"\n";
        }
        int withdraw(){
            int u;
            cout<<"Enter the amount for withdraw"<<endl;
            cin>>u;
            balance = balance - u;
            cout<<"\n";
            cout<<balance;
            cout<<"\n";
        }
        int display(){
            cout<<"Customer Name = "<<name<<endl;
            cout<<"Balance = "<<balance;
        }
};
int main(){
    bank a;
    a.initial();
    char r;
    cout<<"Choice Your Any Method"<<endl;
    cout<<"D-Deposit"<<endl;
    cout<<"W-Withdraw"<<endl;
    cout<<"D-Display"<<endl;
    cin>>r;
    switch (r)
    {
    case 'd' :
    case 'D' : a.deposit();
        break;
    case 'w' :
    case 'W' : a.withdraw();
        break;
    case 'J' :
    case 'j' : a.display();
        break;
    default: cout<<"Enter the valid information";
        break;
    }
    //a.deposit();
    //a.withdraw();
    a.display();
    return 0;
}