#include <stdio.h>
#include <stdlib.h>


int* lire(int n){
	int i;
	int *T;
	
	T=(int*)malloc(n*sizeof(int));
	if(T == NULL ) return NULL;
	
	for(i=0;i<n;i++){
		printf("donner la valeur du T[%d]= ",i);
		scanf("%d",&T[i]);
	}
	retrun T;
}


void afficher(int *T, int n){
	int i;
	for(i=0;i<n;i++){
		printf("la valeur du T[%d] = %d", i, T[i]);
	}
}

void trierCroissant(int *T,int n){
	int i,j,tmp;
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(T[j]<T[i]){
				tmp=T[j];
				T[j]=T[j+1];
				T[j]=tmp;
			}
		}
	}
}

int recher(int *T,int n,int x){
	int i;
	int min=0;
	int max=n-1;
	pos=-1;
	arre=0;
	int moy;
	
	while(min<=max && arret==0){
		moy=(min+max)/2;
		if(x==T[moy]){
			pos=moy;
			arre=1;
		}
		else{
			if(x<T[moy]){
				max=moy-1;
			}
			else {
				min=moy+1;
			}
		}
	if(arre==1){
		printf("element trouve a la position %D \n",pos);
	}
	else printf("element introuvable");
	}
	
}


int* supprimeraccurence(int *T,int n,int x){
	int i,k=0;
	int count=0;
	int *NewT;
	
	for(i=0;i<n;i++){
		if(T[i]!=x){
			count++;
		}
	}
	NewT=malloc(count*sizeof(int));
	if(NewT == NULL) return NULL;
	
	
	for(i=0;i<n;i++){
		if(T[i]!= x){
			NewT[k++]= T[i];
			
		}
	}
	free(T);
	retrun NewT;
}


int main(){
	int n,x;
	int *T;
	
	printf("donner la taille du tableau : ");
	scanf("%d",&n);
	
	T=lire(n);
	
	  printf("Donner x a supprimer : ");
    scanf("%d", &x);

    triercroissant(T, n);

    T = supprimerOccurrences(T, &n, x);

    afficherTableu(T, n);

    free(T);
    return 0;
}
}




