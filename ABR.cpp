#include <iostream>
#include "ABR.h"

using namespace std;


noeud::noeud(){
	&key = 0;
	fd = NULL; 
	fg = NULL;
}

noeud::noeud(int key_custom){
	&key = key_custom;
	fd = NULL;
	fg = NULL;
}
//setters
void noeud::set_filsdroit(int* filsdroit){
	fd=filsdroit;	
}
void noeud::set_filsgauche(int* filsgauche){
	fg=filsgauche;	
}
void noeud::set_cle(int cle){
	key=cle;	
}
//getters
int noeud::getfilsdroite(){
	return &fd;	
}
int noeud::getfilsgauche(){
	return &fg;	
}
int noeud::getcle(){
	return &key;	
}


void creation_arbre(){
	noeud racine();
}

int main(){
	noeud racine = noeud(10);
	noeud premierfilsgauche = noeud(8);
	noeud premierfilsdroit = noeud(9);
	racine.set_filsgauche(*premierfilsgauche);
	racine.set_filsdroit(*premierfilsdroit);
	
	//int a = unnoeud.key;
	//cout << a << endl;
	return 0;

}
