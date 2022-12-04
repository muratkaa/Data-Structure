//BİLGİSAYAR MÜHENDİSLİĞİ          VERİ YAPILARI             lAB 4 ÖDEVİ                   MURAT KARADENİZ  1306200011

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_WANT 12

struct node {
	int info;
	struct node *next;
};
typedef struct node *NODEPTR;


NODEPTR getnode(void)
{
	NODEPTR p;
	p=(NODEPTR) malloc(sizeof(struct node));
	return(p);
}

void freenode(NODEPTR p){
	free(p);
}

void insert(NODEPTR p,int x){
	NODEPTR q;
	if(p==NULL){
		printf("Hata oluştu");
	}										//ELEMAN EKLEME
	q=getnode();
	q->info=x;
	q->next=p->next;
	p->next=q;
}

void delete(NODEPTR p,int *px){
	NODEPTR q;
	if((p==NULL) || (p->next==NULL)){
		printf("Hata oluştu.");
		exit(1);
	}
	q=p->next;
	*px =q->info;
	p->next=q->next;
	freenode(q);
}



int main()
{
	
	int i, rand_number, loop;
	
  	srand (time(NULL));
	int x;
    NODEPTR first = getnode();
    first->info=NULL;
    NODEPTR p=first;
    //first->next = p;
    p->next = NULL;
    for(int i=0; i<=100; i++){
       
        insert(p,rand() % 1001);
        p = p->next;
	}
       
    
	int iasd= 0;
    for(p = first->next; p != NULL ; p = p -> next){
        if(p->info == NUM_WANT){
        	printf( "aranan sayi bulundu \n");
        	printf("%d", iasd);
		}
		iasd++;
    }


    return 0;
	
}


























