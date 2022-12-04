//Bir ikili ağaç veriliyor, bu ikili ağaçdaki elmanları sizin oluşturacağınız yığıta aktaran
//bir C programı yazınız

#include <stdlib.h>
#include <stdio.h>
#define MAX 100

struct stack {
	int elemanlar[MAX];
	int top;
};

struct nodetype{
	int info;
	struct nodetype *left;
	struct nodetype *right;
	struct nodetype *father;
	
};
typedef struct nodetype *NODEPTR;

typedef struct stack *st;

int agacElemanlar[MAX];
int sayac=0;

void createStack(st *s){
	s->top=-1;
}
 
void insert(st *s, int x){
	(s->top)++;
	s->elemanlar[s->top]=x;
}


void agacıYazdır(NODEPTR p)
{
	if(p!=NULL)
	{                      
		agacElemanlar[sayac]=p->info;     
		sayac++;
		agacıYazdır(p->left);
		agacıYazdır(p->right);
		
	}
}

int main(){
	st *s;
	createStack(s);
	for(int i=0;i<MAX;i++){
		insert(&s,agacElemanlar[i]);
	}
	
}

