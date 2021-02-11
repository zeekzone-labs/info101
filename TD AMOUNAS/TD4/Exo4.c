
struct reponse{
	char vraiOuFaux[5];
	int ligne;
	int colonne;
};
// typedef <ceQu'on  remplace> <synonyme>
typedef struct reponse Reponse;


int nbrCaseIdentique(char m[][100], int n, int i, int j){
	int identique = 0; // combien de case  sont identrique
	for ( k = 0; k<n; ++k){
		if(m[i][k] == m[k][j])
			identique++;
	}
	return identique;
}

Reponse verifieMatrice(char m[][100], int n){
	Reponse res = {"Faux", -1, -1}; // Faux par defaut
	
	int i, j , k;
	/* pour chaque ligne on verifier s'il de colonne
	idnentique */
	for (i = 0; i < n; ++i){//on fixe la ligne
		for ( j = 0; j < n; ++j){ //on fixe la colonne
			// verifier si la ligne  i et la colonne j son identique
			if (nbrCaseIdentique(m, n, i, j) == n){
				strcpy(res.vraiOuFaux,"Vrai"); // res.vraiOuFaux = "Vrai";
				res.ligne = i;
				res.colonne = j;
			}
		}
		
	}
	return res;
}
