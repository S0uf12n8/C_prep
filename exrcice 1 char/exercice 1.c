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
	/*==== sort by string lengthg====*/
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
/*========= function of fusionner ================*/
char* fusionner(char **tab,int n,char separatuer){
	int i

	for(i=0;i<n;i++){
			strcat(tab[i], seprateur);
		
	}
	
	return phrase;
}

void liberer(char **tab,int n){
	int i;
	for(i=0;i<n;i++){
		free(tab[i]);
	}
	free(tab);
	
	
}

int main(){
	char seprateur[10];
	char **tab;
	char *phrase;
	

	printf("donner le separtauer : ");
	scanf("%s",separateur);
	tab =lirePhrases(n);
	trierParLongueur(tab,n);
	phrase = fusionner(tab,n,separateur);
	liberer(tab,n);
	free(phrase);
	
	
}
