#include<iostream>
using namespace std;

void swap(int &a, int &b){
int temp=a;
a=b;
b=temp;
}
void (float &x, float &y){
float temp =x;
x=y;
y=temp;
}
//main 
int main(){
int a,b;
float x,y;
//for integers
cout<"Enter two integers :";
cin>> a >> b;
cout<<"before swap:x="<<x<<"y="<<y<<endl;
swap(a,b);
cout<<After swap:x="<<x<<"y="<<y<<endl;
//float numbers
cout<<"Enter two float numbers :";
cin>> x  >> y;
cout<<"before swap:a="<<a<<"b="<<b<<endl;
swap(x,y);
cout<<After swap:a="<<a<<"b="<<b<<endl;
 return 0;
}
