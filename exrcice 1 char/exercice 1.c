#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** lirePhrases(int n){
	char tmp;
	char **tab;
	int i;
	/*==== allocation du tab ====*/
	tab=(char**)malloc(n*sizeof(char*));
	if(tab==NULL) return NULL;
	
	/*===== allocation du phrases ====*/
	for (i=0;i<n;i++){
		printf("donner la phrase %d ",i);
		scanf("%s",tmp);
		tab[i]=(char*)malloc((strlen(tmp)+1)*sizeof(char));
		strcpy(tab[i],tmp);
		
	} 
	return tab;
}

void trierParLongueur(char** tab,int n){
	int j,i;
	char *tmp;
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strlen(tab[i])>strlen(tab[j])){
				tmp=tab[i];
				tab[i]=tab[j];
				tab[j]=tmp;
			}
		}
	}
	
}

char* fusionner(char **tab,int n,char separatuer){
	int i;
	char *phrase;
	
	for(i=0;i<n;i++){
		
	}
}

void liberer(char **tab,int n){
	
	
}
