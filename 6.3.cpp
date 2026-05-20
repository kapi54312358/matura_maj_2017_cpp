#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int const x=200, y=320;

int main(int argc, char** argv) {
	int tabela[x][y];
	ifstream we("C:/cpp/dane.txt");
	int i=0, j=0, kontrast=0;
	bool czy_kontrastuje=false;
	
	for(i=0; i<x; i++){
		for(j=0; j<y; j++){
			we>>tabela[i][j];
		}
	}
	
	for(i=0; i<x; i++){
		for(j=0; j<y; j++){
			czy_kontrastuje=false;
			if(i>0 && abs(tabela[i][j]-tabela[i-1][j])>128)
				czy_kontrastuje=true;
			if(i<199 && abs(tabela[i][j]-tabela[i+1][j])>128)
				czy_kontrastuje=true;
			if(j>0 && abs(tabela[i][j]-tabela[i][j-1])>128)
				czy_kontrastuje=true;
			if(j<319 && abs(tabela[i][j]-tabela[i][j+1])>128)
				czy_kontrastuje=true;
			if(czy_kontrastuje)
				kontrast++;		
		}
	}
	
	cout<<kontrast;
	
	return 0;
}
