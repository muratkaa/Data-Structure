#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct nodetype 
{
	int info;
	struct nodetype *left;
	struct nodetype *right;                      //DİNAMİK HAFIZA MODELİ
	struct nodetype *father;
};
typedef struct nodetype *NODEPTR;

NODEPTR getnode(void)
{
	NODEPTR p;
	p=(NODEPTR)malloc(sizeof(struct nodetype));            //HAFIZADA DÜĞÜM OLUŞTURMA
	return(p);
}


NODEPTR maketree(int x)
{
	NODEPTR p;
	p= getnode();
	p->info=x;											//ELEMAN EKLEME
	p->left=NULL;
	p->right=NULL;
	return(p);
}

//AĞAÇ TARAMASI 


/*void travRight(NODEPTR p,int x)
{
	if(p->right !=NULL)
	{											//BEN YAZDIM BUNU	, HOCANIN KODLARDA YOK										
		travRight(p->right,x);
	}
	else
		p->right=maketree(x);													
}
void travLeft(NODEPTR p,int x)
{
	if(p->left !=NULL)
	{																
		travLeft(p->left,x);						//BEN YAZDIM BUNU	, HOCANIN KODLARDA YOK	
	}
	else
		p->left=maketree(x);													
}*/

void pretrav(NODEPTR p)
{
	if (p !=NULL)
	{																	//D
		printf("%d\n",p->info);										
		pretrav(p->left);								//PRETRAV    	//L
		pretrav(p->right);	
	}																	//R
}
void intrav(NODEPTR p)
{
	if(p !=NULL)
	{																	//L
		intrav(p->left);
		printf("%d\n",p->info);							//İNTRAV		//D
		intrav(p->right);
	}																	//R
}

void posttrav(NODEPTR p)
{
	if(p !=NULL)
	{																	//L
		posttrav(p->left);
		posttrav(p->right);								//POSTTRAV		//R
		printf("%d\n",p->info);
																		//D
	}
}


void setleft(NODEPTR p,int x)
{
	if(p==NULL)
		printf("void insertion \n");
	else if (p->left !=NULL)
		printf("hata");
	else
		p->left=maketree(x);
}


void setright(NODEPTR p,int x)
{
	if(p==NULL)
		printf("Void insertion\n");						//YENİ GELEN ELEMANI SAĞA EKLEME
	else if (p->right !=NULL)
		printf("hata");
	else
		p->right=maketree(x);
}



int main()
{
	NODEPTR p;
	int number;
	p=maketree(5);
	for (int i=0;i<6;i++)
	{
		
      
		printf("%d. sayıyı gir",i+1);
		scanf("%d",&number);
		if (number< p->info)
			setleft(p,number);
		else
			setright(p,number);
		
	}
	pretrav(p);
	
 
}















