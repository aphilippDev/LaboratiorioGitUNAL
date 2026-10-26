#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;
int main(){
	ifstream archivoEntrada("input/archivoEntrada.txt");
	ofstream archivoSalida("output/archivoSalida.txt");
	
	if(archivoEntrada.is_open()){
		cout<<"Archivo a�adido"<<endl;
		string linea;
		
		while (getline(archivoEntrada, linea)){
			archivoSalida<<linea;
		}
		cout<<"Archivo copiado"<<endl;
	}
}
