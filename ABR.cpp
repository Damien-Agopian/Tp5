#include <iostream>
#include "ABR.h"

using namespace std;


noeud::noeud(){
	key = 0;
	fd = NULL; 
	fg = NULL;
}

noeud::noeud(int key_custom){
	key=key_custom;
	fd = NULL;
	fg = NULL;
}

int main(){
	noeud unnoeud = noeud();
	int a = unnoeud.key;
	cout << a << endl;
	return 0;

}