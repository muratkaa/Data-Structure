
//BİLGİSAYAR MÜHENDİSLİĞİ          VERİ YAPILARI             KUYRUK ÖDEVİ                    MURAT KARADENİZ  1306200011

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define MAXQUEUE 100	
struct queue {
	int items [MAXQUEUE];
	int front;
	int rear;
	
};                                     //KUYRUK HAFIFZA MODELİ 


int empty(struct queue *pq){
	if (pq->front==pq->rear){
		return 1;
	}
	else
		return 0;
	//return ((pq->front == pq->rear)? TRUE:FALSE
}


int removeItem(struct queue *pq){
	if (empty(pq)){
		printf("queue underflow");
		exit(1);									//ELEMAN CIKARMA
	}
	if (pq->front== MAXQUEUE-1)
		pq->front =0;
	else
		(pq->front)++;
	return (pq->items[pq->front]); 
}


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

	return;
}


void showQueue(struct queue *pq){
	for(int i=MAXQUEUE-1;i>0;i--){
		printf("%d ",pq->items[i]);
		
	}
}

void searchItem(struct queue *pq,int wantedNum){
	int flag=0;
	for(int i=0;i<MAXQUEUE;i++){
		if(wantedNum== pq->items[i]){
			printf("%d sayısı %d . sırada bulundu \n", pq->items[i],MAXQUEUE-i);
			flag=1;
		}
		
	}if (flag!=1){
		printf("%d elemanı bulunamadı. \n",wantedNum);
  }
}



int main(){
	struct queue q;
	q.front=q.rear=MAXQUEUE-1;
	int max=100;
	int random;
	srand(time(NULL));
	for (int i=0;i<MAXQUEUE-1;i++){
		random = rand() %1000;
		insert(&q,random);
	}
	
	searchItem(&q,331);
	showQueue(&q);

}









