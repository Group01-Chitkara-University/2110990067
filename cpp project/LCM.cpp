#include<iostream>
using namespace std;

int main(){
    int a , b ,t ,i;
    cin>>"enter a no:">>a>>b;
    int lcm = 1;
    if(a>b){
        t=a;
    }
    else {t=b;};
    for(i=2; i<=t; i++){
        while (a%i==0; || b%i==0;)
        {
            lcm=lcm*i;
            a=a/i;
            b=b/i;
        }
    }
    cout<<lcm;
}