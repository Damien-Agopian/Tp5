

class noeud{
	public :
	//Methods
	void creation_arbre(int a);
	bool verif_arbre(int a);
	
	//Constructors
	noeud(); //Default constructors
	noeud(int key); //Custom constructors
	
	private :
	int key;
	int* fd;
	int* fg;

}