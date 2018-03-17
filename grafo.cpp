// Felipe Homrich Melchior

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

struct node {
	int index;
	bool visited;
	vector <struct node*> *adj;
};
typedef struct node Node;

struct grafo {
	int m;
	vector <Node*> vertices;
};
typedef struct 	grafo Grafo;

Grafo* criaGrafo(Grafo* Gr) {
	if(Gr == NULL) {
		Gr->m == NULL;		
	}else{
		cout << "Grafo ja iniciado" << endl;
	}

	return Gr;
}

int main(int argc, char **argv) {
	ifstream iFile;
	int nodo, aresta;
	string Nome;

	Grafo* grafo = NULL;

	if(argc < 2) {
		cout << "Faltam argumentos!" << endl << "Uso: " << argv[0] << "<ArquivoGrafo.txt>" << endl;
	}

	Nome = argv[1];

	iFile.open(Nome.c_str());

	if(!iFile.is_open()) {
		cout << "Falha ao abrir o arquivo" << endl;
		exit(1);
	}

	grafo = criaGrafo(grafo);

	while(!iFile.eof()){
		iFile >> nodo;
		iFile >> aresta;

		grafo = criaAresta(int nodo, int aresta);

	}

	/*while(!iFile.eof()) {
		iFile >> nodo;
		iFile >> aresta;

		cout << nodo << " --> " << aresta << endl;
	}*/

	return 0;
}