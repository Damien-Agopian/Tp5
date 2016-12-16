

class noeud{
	public :
	//Methods
	void creation_arbre(int a);
	bool verif_arbre(noeud un_noeud);
	noeud recherche(int key);
	void insertion(int key,noeud racine);
	void suppression(int key);
	void parcours(noeud racine);
	int min(int key_liste[]);


	//Constructors
	noeud(); //Default constructors
	noeud(int key); //Custom constructors
	
	public :
	int key;
	int* fd;
	int* fg;

};