
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class bank
{   
    int accountno;
    float balance;
    char name[20];
    public:
    void open();
    void deposite(int);
    void withdraw(int);
    void search(int);
    void display();
};
void bank::open()
{
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your account number:";
    cin>>accountno;
    cout<<"Enter your amount:";
    cin>>balance;
}
void bank::deposite(int j)
{
    int a;
    if(j==accountno)
    {
        cout<<"Enter amount of money:";
        cin>>a;
        balance+=a;
        cout<<"balance is:"<<balance;
    }
}
void bank::withdraw(int k)
{
    int b,c;
    if(k==accountno)
    {
        cout<<"Enter amount of money:";
        cin>>b;
        c=balance-b;
        if(c<0)
        cout<<"\nSorry there is not enough money in your account";
        else
        {
            "\nYour request to withdraw money has done";
            balance=c;
            cout<<"\nBalance is :"<<balance;
        }
    }
}
void bank::search(int i)
{
    if(i==accountno)
    {
        cout<<"\nName of account holder is:"<<name;
        cout<<"\nAccount no is:"<<accountno;
        cout<<"\nBalance is:"<<balance;
    }
}
void bank::display()
{
    cout<<"\nName is:"<<name;
    cout<<"\nAccount number is:"<<accountno;
    cout<<"\nBalance is:"<<balance;
}
int main()
{ 
  int i,j,k,l,index,y=0;
  bank b[20];
  do
  {
  cout<<"\nPress 1 for open account";
  cout<<"\nPress 2 for deposit money";
  cout<<"\nPress 3 for withdraw money";
  cout<<"\nPress 4 for display";
  cout<<"\nPress 5 for search";
  cout<<"\nPress 6 for exit";
  cin>>index;
  switch(index)
  {
      case 1:
      cout<<"\nHow many account you want to open:";
      cin>>y;
      for(i=0;i<y;i++)
      b[i].open();
      break;
      case 2:
      cout<<"Enter your acconut number";
      cin>>j;
      for(i=0;i<y;i++)
      b[i].deposite(j);
      break;
      case 3:
      cout<<"Enter your acconut no";
      cin>>k;
      for(i=0;i<y;i++)
      b[i].withdraw(k);
      break;
      case 4:
      for(i=0;i<y;i++)
      b[i].display();
      break;
      case 5:
      cout<<"\nEnter your acconut no";
      cin>>l;
      for(i=0;i<y;i++)
      b[i].search(l);
      break;
      case 6:
      break;
      default:
      cout<<"\nYou have pressed a wrong key. please try again";
      break;
  }
}while(index!=6);
    return 0;
}
