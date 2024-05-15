#include<iostream>
#include<iomanip>
using namespace std;

void showbalance(double balance){
    cout<<"balance:$"<<setprecision(3) <<fixed <<balance<<endl;
}
double deposit(){
    double amt= 0;  //local variable
    cout<<"enter the amount you want to deposit:"<<endl;
    cin>>amt;
    if (amt>0)
    return (amt);
    else{
    cout<<"it is not a valid amount"<<endl;
    return 0;
    }
}
double withdraw(double balance)
{
     double wdrw= 0;  //local variable
    cout<<"enter the amount you want to withdraw:"<<endl;
    cin>>wdrw;
    if (wdrw>balance){
    cout<<"insufficient funds"<<endl;
    return 0;
    }
    else{
    if (wdrw>0)
    return (wdrw);
    else{
    cout<<"it is not a valid amount"<<endl;
    return 0;
    }
    }
}


int main()
{
    double balance= 0;
    int choice;

    cout<<"Enter Your Choice:"<<endl;

    do{
    cout<<"1.Show Balance"<<endl<<"2.Deposit Money"<<endl<<"3.Withdraw Money"<<endl<<"4.Exit"<<endl;
    cin>>choice;

    cin.clear();
    fflush(stdin);


    switch(choice){
        case 1: showbalance(balance);
            break;
        case 2: balance += deposit();            //balance= balance + deposit()
            showbalance(balance);        
            break;
        case 3: balance -= withdraw(balance);
            showbalance(balance);
            break;
        case 4: cout<<"Thanks for visiting"<<endl;
            break;
            default: cout<<"invalid option!!!!!!"<<endl;
    }
    } while(choice!=4);


    return 0;
}