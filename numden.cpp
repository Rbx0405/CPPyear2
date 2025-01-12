#include<iostream>
using namespace std;

float Divisionbyzero(float num, float den){
    if(den == 0){
        throw runtime_error("math error \n");
    }
    return (num / den);
}
int main(){
    float num1, num2, result;
    num1 = 12;
    num2 = 4;
try{
    result = Divisionbyzero(num1, num2);
    cout << "the quotient is : " << result << endl;
}
catch(runtime_error &e){
    cout << "Exception !" << endl
         << e.what();
}
}

