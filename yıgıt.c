//BİLGİSAYAR MÜHENDİSLİĞİ          VERİ YAPILARI             YIĞIT ÖDEVİ                    MURAT KARADENİZ  1306200011


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100


int sayac=0;

struct stack {
	int elemanlar[MAX];
	int top;
};
typedef struct stack st;

void createStack (st *s){
	s->top =-1;
}

int doluMu(st *s){
	if (s->top == MAX -1)
		return 1;
	else 
		return 0;
}

int bosMu (st *s){
	if (s->top ==-1)
		return 1;
	else 
		return 0;
}
void push(st *s,int yenieleman){
	if (doluMu(s)==1) {
		printf("Yığıt dolu!!.");
		}
	else {
		s->top++;
		s->elemanlar[s->top]= yenieleman;
	}
	sayac++;
}

void ara(st *s,int arananEleman){
	int flag=0;
	for (int i=0;i<MAX;i++){
		if (arananEleman == s->elemanlar[i]){
			printf("%d sayısı alttan %d . sırada bulundu \n", s->elemanlar[i],MAX-i);
			flag=1;
		}
	}	if (flag!=1){
		printf("%d elemanı bulunamadı. \n",arananEleman);
	}
}

void yazdir(st *s){
	printf("YIĞIT: ");
	for (int i=0;i<sayac;i++){
		printf("%d ",s->elemanlar[i],"\n");
	}
}



int main(){

	st s;
	int max=300;
	int random;
	srand(time(NULL));
	createStack(&s);
	while (max--){
		random = rand() %1000;
		push(&s,random);
	}
	
	ara(&s,173);
	
	yazdir(&s);
}











