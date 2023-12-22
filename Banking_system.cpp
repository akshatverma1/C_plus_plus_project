#include <iostream>
using namespace std;
class account
{
public:
    int balance;
    int despoitt;
    string customer_name;
    int account_number;
    char account_type;
    void enter()
    {
        cout << "Enter you Name" << endl;
        cin >> customer_name;
        cout << "Enter the account Number" << endl;
        cin >> account_number;
        cout << "Enter the opening Balance" << endl;
        cin >> balance;
    }

public:
    int despoit()
    {
        cout << "Enter the amount" << endl;
        cin >> despoitt;
        balance = balance + despoitt;
        cout << "This is Update Balance" << endl;
        cout << balance << endl;
        return 0;
    }
    int Display()
    {
        cout << "This is information of the Account" << endl;
        cout << "Customer name" << customer_name << endl;
        cout << "Account Number" << account_number << endl;
        cout << "Account Type" << account_type << endl;
        cout << "Account Balance" << balance << endl;
    }

    int withdraw()
    {
        int e;
        cout << "This is Your BALANCE = " << balance << endl;
        cout << "Enter your withdraw amount" << endl;
        cin >> e;
        balance = balance - e;
        cout << "This is your balance after withdraw = " << balance << endl;
    }
    int mini()
    {
        int m;
        cout << "This is your balance = " << balance << endl;
        if (balance < 1000)
        {
            cout << "Bank impose penalty on you. - 100rs" << endl;
            balance = balance - 100;
            cout << "Update balance = " << balance << endl;
        }
        else
        {
            cout << "Your balnce is more than 1000 no penalty is charge" << endl;
            exit(10);
        }
    }
};
class cur_acct : public account
{
public:
    void check()
    {
        cout << "Check method invoked" << endl;
    }
};
class sav_acct : public account
{
public:
    int intrest()
    {
        cout << "This your Intrest" << endl;
        int r, t, y;
        //cout << "Enter Your balance" << endl;
        //cin >> p;
        cout << "Enter Your Rate of intrest" << endl;
        cin >> r;
        cout << "Enter Your Time Period" << endl;
        cin >> t;
        y = ((balance * r * t) / 100);
        cout << "This is Intrest amount " << y << endl;
        y = y + balance;
        cout << "This is Your total balance with intrest" <<y<< endl;
    }
};
int main()
{
    account pp;
    cur_acct H;
    sav_acct x;
    cout<<"Enter the valid choice"<<endl;
    cout<<"P-Current account"<<endl;
    cout<<"S-Saving account"<<endl;
    char f;
    cin>>f;

    switch (f)
    {
    case 'p':
    case 'P':
        int t;
        pp.enter();
        cout << "Choice Your funtion in saving account" << endl;
        cout <<"1-check book"<<endl;
        cout <<"2-despoit"<<endl;
        cout <<"3-Display"<<endl;
        cout <<"4-withdraw"<<endl;
        cout <<"5-mini"<<endl;
        cin>>t;
        switch (t)
        {
        case 1: H.check();
            break;
        case 2: pp.despoit();
            break;
        case 3: pp.Display();
            break;
        case 4: pp.withdraw();
            break;
        case 5: pp.mini();
            break;
        default:
        cout<<"Enter your valid Number"<<endl;
            break;
        }
        break;
    case 'S' :
    case 's' :
        pp.enter();
        int k;
        cout << "Choice Your funtion in saving account" << endl;
        cout <<"1-Intrest"<<endl;
        cout <<"2-despoit"<<endl;
        cout <<"3-Display"<<endl;
        cout <<"4-withdraw"<<endl;
        cout <<"5-mini"<<endl;
        cin>>k;
        switch (k)
        {
        case 1: x.intrest();
            break;
        case 2: pp.despoit();
            break;
        case 3: pp.Display();
            break;
        case 4: pp.withdraw();
            break;
        case 5: pp.mini();
            break;
        default:
        cout<<"Enter your valid Number"<<endl;
            break;
        }
        break;
    default:
        cout<<"enter Your valid character"<<endl;
        break;
    }
    return 0;
}