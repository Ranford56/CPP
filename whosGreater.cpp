#include <iostream>

using namespace std;

int main(){
	int a,b,c = 0;
	
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
	
	if(a == b == c){
		cout << "Los valores son iguales.";
	}
	else if(a > b && a > c){
		cout << a << " es el mayor";
	}
	else if(b > a && b > c){
		cout << b << " es el mayor";
	}
	else{
		cout << c << " es el mayor";
	}
	
	return 0;
}
