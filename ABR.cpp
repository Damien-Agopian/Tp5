#include <iostream>
#include "ABR.h"

using namespace std;


noeud::noeud(){
	*key = 0;
	fd = NULL; 
	fg = NULL;
}

noeud::noeud(int key_custom){
	*key = key_custom;
	fd = NULL;
	fg = NULL;
}
//setters
void noeud::set_filsdroit(noeud* filsdroit){
	fd=filsdroit;	
}
void noeud::set_filsgauche(noeud* filsgauche){
	fg=filsgauche;	
}
void noeud::set_cle(int cle){
	*key=cle;	
}
//getters
int noeud::getfilsdroite(){
	return *fd;	
}
int noeud::getfilsgauche(){
	return *fg;	
}
int noeud::getcle(){
	return *key;	
}


void creation_arbre(){
	noeud racine();
}

int main(){
	noeud racine = noeud(10);
	noeud premierfilsgauche = noeud(8);
	noeud premierfilsdroit = noeud(9);
	noeud* pg = &premierfilsgauche;
	noeud* pd = &premierfilsdroit;
	racine.set_filsgauche(pg);
	racine.set_filsdroit(pd);
	
	//int a = unnoeud.key;
	//cout << a << endl;
	return 0;

}
