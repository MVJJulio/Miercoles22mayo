/*Solicite al usuario 6 notas y calcule su promedio*/
#include<iostream>
using namespace std;
int main(){
    float notas[6];
    float promedio=0.00;
    for (int i = 0; i < 6; i++){
        cout<<"Digite la nota "<<i+1<<": \n";
        cin>>notas[i];
        promedio+=notas[i];
    }
    promedio/=6;
    cout<<"El promedio es igual a: "<<promedio<<"\n";
    

    return 0;
}