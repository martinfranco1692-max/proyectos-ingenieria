/*Martin Franco Miranda
222616927 */

#include<iostream>
using namespace std;

void Hanoi(int escalones, int torre1, int torre2, int torre3,int &movimientos);//llamamos a la funcion

int main(){
int Niveles, Torre1=1, Torre2=2, Torre3=3;
char volver;

do{


 do{
    cout<<"Con cuantos  niveles quieres jugar (3-7)?"<<endl;
    cin>>Niveles;
    if(Niveles < 3 || Niveles >7){
        cout<<"El numero de niveles es invalido ingrsa un numero en el rango de (3-7)"<<endl;
    }
   }while (Niveles < 3 || Niveles >7);//el filtro para que se ingrse los numeros dentro de el rango
   int contador = 0;
    cout<<"---Solucion del problema---"<<endl;
    Hanoi(Niveles,Torre1,Torre2,Torre3,contador);//se llama la fucion para ejecutar el acomodod
    cout << "Total de movimientos: " << contador << endl;
    cout<< "Desea continuar (presiona s) si no presiona cualquier tecla"<<endl;
    cin>>volver;

}while (volver == 's' || volver == 'S');/*aqui para que el progra se  siga ejecutando
si el usuario lo quiere*/

return 0;


}

void Hanoi(int escalones, int torre1, int torre2, int torre3, int &movimientos){
if (escalones == 1 ){
    cout<<"Mover escalon de torre "<<torre1 <<" a la torre"<<torre3<< endl;//
    /*el caso base:en este se muestra cuando solo queda un disco en la torre y es el que impide que se haga un bucle infinito */
     movimientos++; // Modifica la variable original en tiempo real gracias al amperson
}
else {
Hanoi(escalones-1,torre1, torre3, torre2, movimientos);/* aqui es donde se ejecuta la recursividad y el intercanbio en las torres 
pues se vuelve a llamar a la funcion dentro de si misma pero con otro acomodo*/
 movimientos++; // Modifica uno mas a la variable original lo que permite el guardado de el resultado de la variable
cout<<"Mover escalon de la torre "<<torre1 <<" a la torre"<<torre3<< endl;
Hanoi(escalones-1,torre2,torre1,torre3, movimientos);/*y aqui es donde se hace el segundo llamado y se simplifica aun mas el
problema ya que se aplica el divide y venceras*/
}

}