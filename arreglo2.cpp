#include <iostream>
using namespace std;
int main()
{
    string nombres[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Introduzca un nombre: ";
        cin >> nombres[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "El nombre es: " << i + 1 << nombres[i] << "\n";
    }

    return 0;
}