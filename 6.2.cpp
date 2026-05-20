#include <iostream>
#include <fstream>

using namespace std;

int const x=200, y=320;

int main(int argc, char** argv) {
	int tabela[x][y];
	ifstream we("C:/cpp/dane.txt");
	int i=0, j=0, liczba_wierszy_do_usuniencia=0;
	bool symetria=true;
	
	for(i=0; i<x; i++){
		for(j=0; j<y; j++){
			we>>tabela[i][j];
		}
	}
	
	for(i=0; i<x; i++){
		symetria=true;
		
		for(j=0; j<y/2; j++){
			if(tabela[i][j]!=tabela[i][y-j-1]) symetria=false;
		}
		
		if(!symetria) liczba_wierszy_do_usuniencia++;
	}
		
	
	cout<<liczba_wierszy_do_usuniencia;
	
	return 0;
}
