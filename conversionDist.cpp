#include <iostream>
using namespace std;
int main()
{
  int op1,op2;
  double dis,time,amt;
  cout<<"The following conversions are available:\n1.Distance\n2.Time\n3.Currency";
  cout<<"\nEnter your choice:";
  cin>>op1;
  switch(op1)
  {
    case 1:
            cout<<"\nThe following distance conversions are available:\n1.m to km\n2.miles to km\n3.km to m\n4.km to miles";
            cout<<"\nEnter your choice:";
            cin>>op2;
            switch(op2)
            {
                case 1:
                        cout<<"Enter the distance(in meters):";
                        cin>>dis;
                        cout<<"Distance(km):";
                        cout<<dis/1000;
                        break;
                case 2:
                        cout<<"Enter the distance(in miles):";
                        cin>>dis;
                        cout<<"Distance(km):";
                        cout<<1.6*dis;
                        break;
                case 3:
                        cout<<"Enter the distance(in km):";
                        cin>>dis;
                        cout<<"Distance(m):";
                        cout<<dis*1000;
                        break;
                case 4:
                        cout<<"Enter the distance(in km):";
                        cin>>dis;
                        cout<<"Distance(miles):";
                        cout<<dis/1.6;
                        break;
            }
            break;
    case 2:
            cout<<"\nThe following time conversions are available:\n1.hrs to mins\n2.hrs to secs\n3.mins to hrs\n4.secs to hrs";
            cout<<"\nEnter your choice:";
            cin>>op2;
            switch(op2)
            {
                case 1:
                        cout<<"Enter the time(in hrs):";
                        cin>>time;
                        cout<<"Time(mins):";
                        cout<<time*60;
                        break;
                case 2:
                        cout<<"Enter the time(in hrs):";
                        cin>>time;
                        cout<<"Time(secs):";
                        cout<<time*60*60;
                        break;
                case 3:
                        cout<<"Enter the time(in mins):";
                        cin>>time;
                        cout<<"Time(hrs):";
                        cout<<time/60;
                        break;
                case 4:
                        cout<<"Enter the time(in secs):";
                        cin>>time;
                        cout<<"Time(hrs):";
                        cout<<time/3600;
                        break;
            }
            break;
    case 3:
            cout<<"\nThe following currency conversions are available:\n1.dollars to inr\n2.euros to inr\n3.yens to inr\n4.inr to dollars\n5.inr to euros\n6.inr to yens";
            cout<<"\nEnter your choice:";
            cin>>op2;
            switch(op2)
            {
                case 1:
                        cout<<"Enter the amount(in dollars):";
                        cin>>amt;
                        cout<<"Amount(inr):";
                        cout<<83.59*amt;
                        break;
                case 2:
                        cout<<"Enter the amount(in euros):";
                        cin>>amt;
                        cout<<"Amount(inr):";
                        cout<<93.2*amt;
                        break;
                case 3:
                        cout<<"Enter the amount(in yens):";
                        cin>>amt;
                        cout<<"Amount(inr):";
                        cout<<.58*amt;
                        break;
                case 4:
                        cout<<"Enter the amount(in inr):";
                        cin>>amt;
                        cout<<"Amount(dollars):";
                        cout<<amt/83.59;
                        break;
                case 5:
                        cout<<"Enter the amount(in inr):";
                        cin>>amt;
                        cout<<"Amount(euros):";
                        cout<<amt/93.2;
                        break;
                case 6:
                        cout<<"Enter the amount(in inr):";
                        cin>>amt;
                        cout<<"Amount(yens):";
                        cout<<amt/.58;
                        break;
            }
            break;
    default:
            cout<<"Invalid choice.";
  }
}
