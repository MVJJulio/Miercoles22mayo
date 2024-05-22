#include<iostream>
using namespace std;
int main(){
    int a[100];
    int suma=0;
    for (int i = 0; i <100; i++){
        a[i]=i+1;
        suma+=a[i];
    }
    cout<<suma;

    return 0;
}