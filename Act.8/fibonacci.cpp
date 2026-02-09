#include <iostream>
#include<conio.h>
using namespace std;
int numero=0 ,numeroanterior=1 ,i, temp,opcion,limite;//for
int main() {
do {
        cout<<"\n1. for \n2. while \n3. do hile \n4 salir\nSeleccione: ";
        cin>> opcion ;
        switch(opcion) {
            case 1:                
               cout<<"Ejecutando for\n";
                 cout<<"Dame un valor al que quieres llegar?: ";
                  cin>> limite;
                   for (i = 0; numero <= limite; i++)
                   {
                     cout<<" "<<numero<<endl;
                     temp = numero;
                     numero =numero + numeroanterior;
                     numeroanterior = temp; 
                   }
                break;
            case 2:
                cout<<"Ejecutando while ...\n";
                cout<<"Dame un valor al que quieres llegar: ";
                  cin>> limite;

                while (numero <= limite)
                {
                    cout<<" "<<numero<<endl;
                     temp = numero;
                     numero =numero + numeroanterior;
                     numeroanterior = temp; 
                    
                }
                break;
            case 3:
                cout<< "Ejecutando do while...\n";
                cout<<"Dame un valor al que quieres llegar: ";
                  cin>> limite;
                do
                {
                    cout<<" "<<numero<<endl;
                     temp = numero;
                     numero =numero + numeroanterior;
                     numeroanterior = temp; 
                } while (numero <= limite);
                break;
            case 4:
                cout<<"Saliendo...\n";
                break;
            default:
                cout<<"Opcion invalida.\n";
        }
    } while(opcion != 3);

    return 0;
}