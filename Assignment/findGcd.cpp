#include<iostream>
using namespace std;
int findGCD(int num1,int num2){
    int gcd;
    for(int i=1;i<=num1;i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    return gcd;
}
int main(){
    int num1,num2;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    int gcd = findGCD(num1,num2);
    cout<<gcd;
    return 0;
}
