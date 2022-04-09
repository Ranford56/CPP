#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i;
	
	i = 10;
	
	while(i>=1){
		cout << i << endl;
		i--;
	}
	
	getch(); //get character, can be used as an input (for pause is better system("pause") (stdlib.h)
	return 0;
}
