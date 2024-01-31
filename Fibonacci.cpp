/* 
Implementare funzione ricorsiva di Fibonacci che ricevuta in ingresso la posizione restituisce il valore del numero in quella posizione
nella serie di fibonacci.

è una successione di numeri interi (>=0) in cui ciascun numero è la somma dei due precedenti eccetto i primi due che sono,
per definizione, 0 e 1:
0,1,1,2,3,5,8,..

Tale funzione:
 riceve in ingresso un numero intero pos che rappresenta la posizione del numero nella serie 
 restituisce il valore del numero in posizione pos nella serie di Fibonacci
esempio:
pos 0 -> numero 0
pos 1 -> numero 1
pos 2 -> numero 1
pos 3 -> numero 2
pos 4 -> numero 3
pos 5 -> numero 5
pos 6 -> numero 8
************************************
@date 31/01/2024
@author Valnerini Matteo
@version 1.1
***********************************/
#include <iostream>
using namespace std;
int fibonacci(int pos);
int main(){
    int posizioneT;
    cout<<"Inserire posizione: ";
    cin>>posizioneT;
    for (int i=0; i<posizioneT; i++){
        cout<<"pos "<<i<<" -> numero "<<fibonacci(i)<<"\n";
    }
    return 0;
}
int fibonacci(int pos){
    if (pos<=1){
        return pos;
    }else{
        return fibonacci(pos - 1)+fibonacci(pos-2);
    }
}