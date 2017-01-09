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
void noeud::set_filsdroit(int filsdroit){
	*fd=&filsdroit;	
}
void noeud::set_filsgauche(int filgauche){
	*fg=&filgauche;	
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


void creation_arbre(int a){
}

int main(){
	noeud unnoeud = noeud();
	int a = unnoeud.key;
	cout << a << endl;
	return 0;

}
