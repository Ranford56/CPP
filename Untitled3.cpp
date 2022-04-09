#include <iostream>
#include <math.h>include <stdlib>

using namespace std;

int cuadratica(int a, int b, int c){
	int x, y = 0;
	
	x = ((-1*b)+(sqrt(pow(b, 2)-(4*a*c))))/(2*a);
	y = ((-1*b)-(sqrt(pow(b, 2)-(4*a*c))))/(2*a);
	
	return x, y;
}

int main(){
	float a,b,c = 0;
	int result1,result2 = 0; // Es importante que las variables a las que asignamos las salidas de vairables sean del mismo tipo que dichas salidas
	
	cout <<"a: "; cin >> a;
	cout <<"b: "; cin >> b;
	cout <<"c: "; cin >> c;
	
	result1, result2 = cuadratica(a,b,c);        

	cout << result1 << endl;
	cout << result2 << endl;
	
	return 0;
}
