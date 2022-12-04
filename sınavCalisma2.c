//Hafızada önceden oluşturulmuş bir ikili ağacın yaprak düğümlerindeki
//elemanların ortalamasını bulup ekrana yazan bir C programı yazınız. 

#include <stdlib.h>
#include <stdio.h>

struct nodetype
{
	int info;
	struct nodetype	*left;
	struct nodetype	*right;
	struct nodetype	*parent;
};
typedef struct nodetype *NODEPTR;
int toplam;
int sayac=0;


void yaprakBulmaVEtoplama(NODEPTR p)
{	
	if(p->left==NULL && p->right==NULL)
	{                                
		p->info+=toplam;
		sayac++;
	}
}

void pretrav(NODEPTR p)
{
	if(p!=NULL)
	{
		printf("%d",p->info);
		yaprakBulmaVEtoplama(p);
		pretrav(p->left);
		pretrav(p->rigth);
	}	
}


int main()
{
	double sonuc;
	NODEPTR p;
	
	pretrav(p);
	sonuc=toplam/sayac;
	printf("%f",&sonuc);
}
                    
          