struct reponse{
	char vraiOuFaux[5];
	int ligne;
	int colonne;
};

Reponse verifieMatrice(char m[][MAX], int n){
	int i, j , k, idnentique;
	Reponse res = {"Faux", -1, -1}; // Faux par defaut
	/* pour chaque ligne on verifier s'il de colonne
	idnentique */
	for (i = 0; i < n; ++i){//on fixe la ligne
		for ( j = 0; j < n; ++j){ //on fixe la colonne
			idnentique = 0;
			for ( k = 0; (k < n && m[i][k] == m[k][j]); ++k){
				idnentique++;
			}
			// si on trouve le resultat
			if (idnentique == n){
				strcpy(res.vraiOuFaux,"Vrai");
				res.ligne = i;
				res.colonne = j;
			}
		}
	}
	return res;
}
