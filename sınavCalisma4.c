//Bir ikili ağaç veriliyor, bu ikili ağaçdaki elmanları sizin oluşturacağınız tek bağlı
//listeye aktaran bir C programı yazınız. 

#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *next;
}

typedef struct node *NODEPTR;

NODEPTR getnode(void){
	NODEPTR p;
	p = (NODEPTR) malloc(sizeof(struct node));
	return p;
}

void freenode(NODEPTR p){
	free(p);
}

void insafter(NODEPTR p, int x){
	NODEPTR q; 
	q = getnode();
	q->info=x;
	q->next=p->next;
	p->next = q;
}


struct nodetype{
	int info;
	struct nodetype *left;
	struct nodetype *right;
	struct nodetype *father;
};

typedef struct nodetype *NODEPTR_v2;


	
NODEPTR first;	

void pretrav(NODEPTR_v2 p){
	if(p=!NULL){
		printf("%d",p->info);
		insafter(first,p->info);
		p_g=p_g->next;
		pretrav(p->left);
		pretrav(p->right);
	}
}

void cevirici(NODEPTR_v2 p){
	first=getnode();
	first->info=NULL;
	
	pretrav(p)
}

int main(){
	
	
	
	
/*	for(p=first->next; p!=NULL; p=p->next){
		printf("%d",p->info);
	}
	
	*/
	
	return 0;
}




