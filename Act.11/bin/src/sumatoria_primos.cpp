#include <iostream>
using namespace std;
bool esPrimo(int n);
int limite;
long long suma = 0;
int main(){

cout<<"Ingresa el limites superior: "<<endl;
cin>> limite;

cout<<"Primos: "<<endl;

for (int i = 2; i <= limite; i++)
{
    if (esPrimo(i))
    {
        cout<< i <<" ";
        suma+= i;
    }
    
}

cout << "\nSuma total: " << suma << endl;
    return 0;

}

bool esPrimo(int n){
    if (n== 2) return true;
     if (n < 2) return false;
      if (n % 2 == 0) return false;

for (int d = 3; d * d <= n; d += 2) {
        if (n % d == 0) return false;
    }
    return true;
}

    
