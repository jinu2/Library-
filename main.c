#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct library
{
char kitapadi[30]; 
char yazar[30];
int sayfa;
};



void printMessageCenter(const char* message)
{
    int l =0;
    int p = 0;
    l = (20 - strlen(message))/2;
    printf("\t\t\t");
    for(p =0 ; p < l ; p++)
    {
        printf(" ");
    }
    printf("%s",message);
}
void printMessage(char* message)
{
    int l =0;
    int p = 0;
    l = (37 - strlen(message))/2;
    printf("\t\t\t");
    for(p =0 ; p < l ; p++)
    {
        printf(" ");
    }
    printf("%s",message);
}


void hosgeldin()
{
    system("cls");
    printf("---------------------------------------------------------------------------");
    printf("\n------------                                                   ------------");
    printf("\n------------                  Kutuphane otomasyon              ------------");
    printf("\n------------                                                   ------------");
    printf("\n---------------------------------------------------------------------------");
}



int main()
{

hosgeldin();
struct library l[100];
struct library ll[100];
struct library *pl;
struct library *ol;
char string1[30],string2[30],ara[30];
int i,j,n, keepcount,keepc,ayni;
int w;
i=n=keepcount=keepc = 0;



while(n!=6)
{
printf("\n1. Yeni kitap ekle\n");
printf("2. Okudum kitaplar \n");
printf("3. Okumak istiyorum\n");
printf("4. Yazarlar listesi\n");
printf("5. Kitap ara\n");
printf("6. Exit");

printf ("\n\nYukardaki sayi giriniz : ");
scanf("%d",&n);

switch (n)
{
case 1:  
	
	
	printf ("1.Kitab okudun icin 1 tikla \n2.okumak istiyorsunuz 2 tikla :\n");
	scanf("%d",&w);
	if (w==1)
	{
	    
	    ol = (struct library*) malloc(1 * sizeof(struct library));
	printf ("Kitabin adi giriniz : ");
	scanf ("%s",l[keepc].kitapadi);
	
	printf ("Kitabin yazari giriniz : ");
	scanf ("%s",l[keepc].yazar);
	
	printf ("Kitap kac sayfadir? \n");
	scanf ("%d",&l[keepc].sayfa);

	keepc++;
	}

	if (w==2)
	{

	    pl = (struct library*) malloc(1 * sizeof(struct library));
	printf ("Kitabin adi giriniz : ");
	scanf ("%s",ll[keepcount].kitapadi);
	
	printf ("Kitabin yazari giriniz : ");
	scanf ("%s",ll[keepcount].kitapadi);
	
	printf ("Kitap kac sayfadir? \n");
	scanf ("%d",&ll[keepcount].sayfa);


	keepcount++;
	}
	

	break;
case 2:
	printf("Okudum kitaplar\n");
	for(i=0;i<keepc;i++)
	{
	printf("\n--------------------------------------------------------------------------------------");    
	    
	printf ("\n Kitap (%d): %s",l[i].sayfa,l[i].kitapadi);
	
	printf("               ");
	
	printf ("\t Yazari : %s",l[i].yazar);

	printf("\n--------------------------------------------------------------------------------------");
	}
	break;

case 3:
	
	printf("Okumak istiyorum\n");
	for(i=0;i<keepcount;i++)
	{
	printf("\n--------------------------------------------------------------------------------------");    
	    
	printf ("\n Kitap (%d): %s",ll[i].sayfa,ll[i].kitapadi);
	
	printf ("\t Yazari : %s",ll[i].yazar);

	printf("\n--------------------------------------------------------------------------------------");
	}
    
	break;

case 4:
	printf ("Yazarlar listesi : ");
	
	printf ("\n %s :",l[i].yazar);
	
	for (i=0;i<keepc;i++)
	{
	    ayni=1;
	        for (j=0; j<i; j++)
	        {
	            ayni=strcmp(l[i].yazar,l[j].yazar); 
	        }
	        
	        if (ayni!=0)
	           {
	           printf ("\n %s ",l[i].yazar);
	           }
	}
	
	ayni=strcmp(l[0].yazar,ll[0].yazar); 
	  
	        if (ayni!=0)
	           {
	           printf ("\n %s ",ll[0].yazar);
	           }
	
	for (i=0;i<keepcount;i++)
	{
	    ayni=1;
	        for (j=0; j<i; j++)
	        {
	            ayni=strcmp(ll[i].yazar,ll[j].yazar); 
	        }
	        
	        if (ayni!=0)
	           {
	           printf ("\n %s ",ll[i].yazar);
	           }
	}
	break;

case 5:
printf ("Aramak istedi??iniz kitab??n ad?? giriniz : ");
scanf ("%s", ara);

for (i=0; i<keepcount; i++)
{
ayni=strcmp(ara,ll[i].kitapadi);  
   if(ayni==0)  
   
   printf("Kitab??n??z %s, %s yazar?? taraf??ndan yaz??lm????, okumak istiyorum kisminda bulunmus \n", ara,ll[i].yazar);    
   else  
   
   printf("Kitap bulunamad??!");  
}  

for (i=0; i<keepc; i++)
{
ayni=strcmp(ara,l[i].kitapadi);  
   if(ayni==0)  
   
   printf("Kitab??n??z %s, %s yazar?? taraf??ndan yaz??lm????, okudugun kitablari kisminda bulunmus \n", ara,l[i].yazar);  
   else  
   
   printf("Kitap bulunamad??!");  
}  


break;

case 6:
	exit (0); 
}
}
return 0;
}
