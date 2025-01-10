#include<iostream>
using namespace std;
//for finding the greatest of the 3 no

inline int largest(int a, int b , int c){
if(a>=b && a>=c){
return a;
}
else if(b>=a && b>=c){
return b;
}
else{
return c;
}
}
//main func
int main(){
int num1, num2,num3;
cout<<"Enter the number: ";
cin>>num1>>num2>>num3;
int max= largest(num1,num2,num3);
cout<<"the largest number is:"<<max<<endl;
return 0;
}

