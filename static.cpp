/***********************************
@date 31/01/2024
@author Valnerini Matteo / Infanti Matteo
@version 1.0
***********************************/
#include <iostream>
using namespace std;
int CollatzLenght(int n);

int main(){
    int n;
    do{
        cout<<"Inserire n: ";
        cin>>n;
    }while(n<0);
    cout<<"La lunghezza della sequenza di collaps per: "<<n<<" e' "<<CollatzLenght(n);
    return 0;
}

int CollatzLenght(int n){
    static int lunghezza=0;
    if(n<0){
        return 0;
    }
    lunghezza++;
    if(n==1){
        return lunghezza;
    }
    if(n%2==0){
        CollatzLenght(n/2);
    }else{
        CollatzLenght(n*3+1);
    }
    return lunghezza;
}