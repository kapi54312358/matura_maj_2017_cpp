#include <iostream>
#include <fstream>

using namespace std;

int const x=320, y=200;

int main(int argc, char** argv) {
	int tabela[x][y];
	ifstream we("C:/cpp/dane.txt");
	int i=0, j=0, najw=0, najm=256;
	
	for(i=0; i<y; i++){
		for(j=0; j<x; j++){
			we>>tabela[i][j];
			if(tabela[i][j]>najw) najw=tabela[i][j];
			if(tabela[i][j]<najm) najm=tabela[i][j];
		}
	}
	
	cout<<"najjasniejszy "<<najw<<endl<<"najciemniejszy "<<najm;
	
	return 0;
}
