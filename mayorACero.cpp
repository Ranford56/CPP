#include <iostream>

using namespace std;

int main(){
	int x, i = 0;
	
	do{
		cout << "Ingresar un valor: "; cin >> x;
		if(x > 0){
			i++;
		}
	}while(x != 0);
	
	cout << "Ha ingresado " << i << " valores mayores a 0";
}
