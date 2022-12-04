//Ekrandan girilecek sayısal değerleri sizin oluşturacağınız bir kuyruğa giren bir C
//programı yazınız. Not: “0” değeri girilince program sonlansın. 

#include <stdio.h>
#include <stdlib.h>
#define MAXQUEUE 100								//,kuyruk oluştur,eleman ekle, 

typedef struct queue {

	int front;
	int rear;
	int items[MAXQUEUE];
}Queue;


void insert(Queue *q,int x)
{
	if (q->rear == MAXQUEUE-1)
		q->rear =0;
	else
		(q->rear)++;
	if (q->rear==q->front)
		printf("Queue overflow");
	q->items[q->rear]=x;
}

int main()
{
	Queue q;
	q.front=q.rear=MAXQUEUE-1;
	int secim;
	int eleman;
	
	while (secim!=0)
	{
		printf("Lütfen seçim yapınız. \n1)Eleman ekle\n0)Çıkış\n");
		scanf("%d",&secim);
		if(secim==0)
			break;
		else if(secim==1) 
		{
			printf("Hangi sayıyı eklemek istersiniz:");
			scanf("%d",&eleman);
			insert(&q,eleman);
		}
		else
			printf("HATALI SECİM YAPTİNİZ.");
				
	}
	
	
	
}