

class noeud{
	public :
	//Methods
	void creation_arbre();
	bool verif_arbre(noeud un_noeud);
	noeud recherche(int key);
	void insertion(int key,noeud racine);
	void suppression(int key);
	void parcours(noeud racine);
	int min(int key_liste[]);
	//getters
	int getfilsdroite();
	int getfilsgauche();
	int getcle();
	//setters
	void set_filsdroit(int droit);
	void set_filsgauche(int gauche);
	void set_cle(int cle);
	
	//Constructors
	noeud(); //Default constructors
	noeud(int key); //Custom constructors
	
	private :
	int* key;
	int* fd;
	int* fg;

};