#include<iostream>

using namespace std;

int main(){
	int x,y,aux;
	
	cout << "Digite el valor de x: "; cin >> x;
	cout << "Digite el valor de y: "; cin >> y;
	
	//swap
	aux = x;
	x = y;
	y = aux;
	
	cout << "\nEl nuevo valor de x es : " <<x<<endl;
	
}
