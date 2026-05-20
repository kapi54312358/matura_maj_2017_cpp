#include <iostream>
#include <fstream>

using namespace std;

int const x=200, y=320;

int main(int argc, char** argv) {
	int tabela[x][y];
	ifstream we("C:/cpp/dane.txt");
	int i=0, j=0, linia=0, najdl=0;
	
	for(i=0; i<x; i++){
		for(j=0; j<y; j++){
			we>>tabela[i][j];
		}
	}
	we.close();
	
	for(i=0; i<y; i++){
		linia=1;
		for(j=1; j<x;j++){
			if(tabela[j][i]==tabela[j-1][i])
				linia++;
			else
				linia=1;
			if(linia>najdl)
				najdl=linia;
		}
	}
	
	cout<<najdl;

	return 0;
}
