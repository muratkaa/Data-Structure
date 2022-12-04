//BİLGİSAYAR MÜHENDİSLİĞİ          VERİ YAPILARI             lAB 3 ÖDEVİ                   MURAT KARADENİZ  1306200011

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MAX 100
#define MAXQUEUE 100	

int sayac=0;

struct queue {
	int items [MAXQUEUE];
	int front;
	int rear;
	
};                                     //KUYRUK HAFIFZA MODELİ 

void insert(struct queue *pq,int x){
	if (pq->rear == MAXQUEUE-1)
		pq->rear =0;
	else
		(pq->rear)++;
	if (pq->rear == pq->front){						//ELEMAN EKLEME
		printf("queue overflow");
		exit(1);
	}                                
	pq->items[pq->rear] = x;
                                                                       					//KUYRUK
	return;
}
void showQueue(struct queue *pq){
	for(int i=MAXQUEUE-1;i>0;i--){
		printf("%d ",pq->items[i]);
		
	}
}
                                        
struct stack {
	int elemanlar[MAX];																	//YIĞIT
	int top;
};
typedef struct stack st;

void createStack (st *s){
	s->top =-1;
}



void push(st *s,struct queue *pq){
	for(int i=MAXQUEUE-1;i>0;i--){
		s->top++;
		s->elemanlar[s->top]=pq->items[i];
		sayac++;
	
	}
}


void yazdir(st *s){
	printf("\n YIĞIT: \n");
	for (int i=0;i<sayac;i++){
		printf("%d ",s->elemanlar[i],"\n");
	}
}



int main(){
	struct queue q;
	st *s= (st *)malloc(sizeof(st));
	createStack(s);
	int max=100;
	int* pq = &q;
	q.front=q.rear=MAXQUEUE-1;
	int random;
	srand(time(NULL));
	
	for (int i=0;i<MAXQUEUE-1;i++){
		random = rand() %1000;					//KUYRUĞA ELEMAN ATAMASI 
		insert(&pq,random);
	}
	
	printf("\n KUYRUK \n");
	showQueue(&pq);
	
	push(s,&pq);
	

	yazdir(s);
	


}
