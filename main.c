#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


struct dugum1{
	char * name1;
	struct dugum1 *sonraki1;
};
typedef struct dugum1 queue1;
queue1 *front1 = NULL;
queue1 *rear1 = NULL;

void enqueue1(char *);
void dequeue1();
void list_queue1();

struct dugum2{
	char * name2;
	struct dugum2 *sonraki2;
};
typedef struct dugum2 queue2;
queue2 *front2 = NULL;
queue2 *rear2 = NULL;

void enqueue2(char *);
void dequeue2();
void list_queue2();

int main(){
	int no;
	long long int tcNo;
	char tcNoArray[11];
	char space[] = " ";
	int i,j;
	int islem;
	char isim[30];
	char dummy[1];
	
	for(i=0; ;i++){
		printf("Aile hekiminin numarasini giriniz:\n");
		printf("1 - Dr.Ahmet Yasin Gur\n");
		printf("2 - Dr.Alperen Tellioglu\n");
		scanf(" %d",&no);
		
		switch(no){
			case 1 :
				printf("Yapmak istediginiz islemin numarasini giriniz:\n1 - Ekle \n2 - Sil \n3 - Listele \n");
				scanf("%d",&islem);
				switch(islem){
					case 1:
						printf("Tc kimlik numarasini giriniz:\n");						
						
						if( scanf(" %lli", &tcNo) != 1 ){
		        			int c;
		        			while ((c = getchar()) != EOF && c != '\n')
								continue;
		        			if (c == EOF) {
		            		return 1;
					        }
					        tcNo = -1;
							printf("\nlutfen gecerli tc giriniz...\n");
							break;
						}
						
						if(tcNo < 10000000000 || tcNo > 99999999999){
							printf("Lutfen gecerli bir tc kimlik numarasi giriniz!\n------------\n");
							break;
						}
						else{
							sprintf(tcNoArray, "%lli", tcNo);
						}

						printf("\n");
						
						printf("Ad ve soyadi giriniz : \n");
						gets(dummy);
						gets(isim);
						
						if(strlen(isim) > 30 || strlen(isim) < 4){
							printf("\nAd ve soyad karakter sayisi 4 ten kucuk ve 30 dan buyuk olamaz...!\n\n");
							break;
						}
						
						for(j=0 ; j<strlen(isim) ; j++){
							if(isdigit(isim[j]) == 1){
								printf("\nLutfen isim ve soyisim bilgisini dogru giriniz...\n\n");
								main();
							}
						}
						strcat(tcNoArray, space);
						strcat(tcNoArray, isim);
						
						enqueue1(tcNoArray);
						printf("\n_____________________");
						printf("\nBilgiler Basariyla Alindi\n\n");
						printf("---Dr.Ahmet Yasin Gur Hastalari---\n");
						printf("-TC Kimlik-|-Ad ve Soyad-\n");
						list_queue1();
						printf("\n_____________________");
						
						printf("\n");
						break;	
					case 2:
						dequeue1();
						printf("---Dr.Ahmet Yasin Gur Hastalari---\n");
						printf("-TC Kimlik-|-Ad ve Soyad-\n");
						list_queue1();
						printf("\n_____________________");
						printf("\n");
						break;
					case 3 :
						printf("\n_____________________\n");
						printf("\n");
						printf("---Dr.Ahmet Yasin Gur Hastalari---\n");
						printf("-TC Kimlik-|-Ad ve Soyad-\n");
						list_queue1();
						printf("\n_____________________\n");
						break;
					default : 
		        			printf("Lutfen tekrar giriniz!\n------------\n");
							int c;
		        			while ((c = getchar()) != EOF && c != '\n')
		            			continue;
		        			if (c == EOF) {
		            		return 1;
					        }
					        islem = -1;
						break;	
				}
				break;
			case 2 :
				printf("Yapmak istediginiz islemin numarasini giriniz:\n1 - Ekle \n2 - Sil \n3 - Listele \n");
				scanf("%d",&islem);
				switch(islem){
					case 1 :
						printf("Tc kimlik numarasini giriniz:\n");
						
						if (scanf("%d", &tcNo) != 1) {
		        			int c;
		        			while ((c = getchar()) != EOF && c != '\n')
		            			continue;
		        			if (c == EOF) {
		            		return 1;
					        }
					        tcNo = -1;
		    			}
							
						if(tcNo < 10000000000 || tcNo > 99999999999){
							printf("Lutfen gecerli bir tc kimlik numarasi giriniz!\n\n");
							break;
						}
						else{
							sprintf(tcNoArray, "%lli", tcNo);
							
						}
						printf("\n");
						
						printf("Ad ve soyadi giriniz : \n");
						gets(dummy);
						gets(isim);
						
						if(strlen(isim) > 30 || strlen(isim) < 4){
							printf("\nAd ve soyad karakter sayisi 4 ten kucuk ve 30 dan buyuk olamaz...!\n\n");
							break;
						}
						
						for(j=0 ; j<strlen(isim) ; j++){
							if(isdigit(isim[j]) == 1){
								printf("\nLutfen isim ve soyisim bilgisini dogru giriniz...\n\n");
								main();
							}
						}						
						
						strcat(tcNoArray, space);
						strcat(tcNoArray, isim);
						
						enqueue2(tcNoArray);
						printf("\n_____________________");
						printf("\nBilgiler Basariyla Alindi\n\n");
						printf("---Dr.Alperen Tellioglu Hastalari---\n");
						printf("-TC Kimlik-|-Ad ve Soyad-\n");
						list_queue2();
						printf("\n_____________________");
						
						printf("\n");
						break;
					case 2 :
						dequeue2();
						printf("---Dr.Alperen Tellioglu Hastalari---\n");
						printf("-TC Kimlik-|-Ad ve Soyad-\n");
						list_queue2();
						printf("\n_____________________");
						printf("\n");
						break;
					case 3 :
						printf("\n_____________________\n");
						printf("\n");
						printf("---Dr.Alperen Tellioglu Hastalari---\n");
						printf("-TC Kimlik-|-Ad ve Soyad-\n");
						list_queue2();
						printf("\n_____________________\n");
						break;
					default : 
		        			printf("Lutfen tekrar giriniz!\n------------\n");
							int c;
		        			while ((c = getchar()) != EOF && c != '\n')
		            			continue;
		        			if (c == EOF) {
		            		return 1;
					        }
					        islem = -1;

						break;	
				}
				break;
			default : 
				printf("Lutfen tekrar giriniz!\n------------\n");
        			int c;
        			while ((c = getchar()) != EOF && c != '\n')
            			continue;
        			if (c == EOF) {
            		return 1;
			        }
			        no = -1;
				break;	
		}
	}
	
	return 0;
}


void enqueue1(char * name){
	if(rear1 == NULL) {
		rear1 = (queue1*)malloc(sizeof(queue1));
		rear1 -> name1 = strdup(name);
		rear1 -> sonraki1 = NULL;
		front1 = rear1;
	}
	else {
		queue1 *temp = (queue1*)malloc(sizeof(queue1));
		temp -> name1 = strdup(name);
		rear1 -> sonraki1 = temp;
		temp -> sonraki1 = NULL;
		rear1 = temp;
	}	
}

void dequeue1(){
	queue1 *front_temp = front1;
	
	if(front_temp == NULL) {
		main();
	}
		else {
		if(front_temp -> sonraki1 != NULL) {
			front_temp = front_temp -> sonraki1;
			free(front1);
			front1 = front_temp;
		}
		else {
			free(front1);
			front1 = NULL;
			rear1 = NULL;
		}
		printf("Hasta basariyla silindi.\n\n");
	}
}


void list_queue1() {
	queue1 *front_temp = front1;
	if((front_temp == NULL) && (rear1 == NULL)) {
		printf("Sirada (kuyrukta) hasta yok!\n\n");
		main();
	}
	else {
		while(front_temp != rear1) {
			puts(front_temp -> name1);
			front_temp = front_temp -> sonraki1;
		}
	}
	if(front_temp == rear1) {
		puts(front_temp -> name1);
		printf("\n\n");
		main();
	}
}

void enqueue2(char * name){
	if(rear2 == NULL) {
		rear2 = (queue2*)malloc(sizeof(queue2));
		rear2 -> name2 = strdup(name);
		rear2 -> sonraki2 = NULL;
		front2 = rear2;
	}
	else {
		queue2 *temp = (queue2*)malloc(sizeof(queue2));
		temp -> name2 = strdup(name);
		rear2 -> sonraki2 = temp;
		temp -> sonraki2 = NULL;
		rear2 = temp;
	}	
}

void dequeue2(){
	queue2 *front_temp = front2;
	
	if(front_temp == NULL) {
		main();
	}
		else {
		if(front_temp -> sonraki2 != NULL) {
			front_temp = front_temp -> sonraki2;
			free(front2);
			front2 = front_temp;
		}
		else {
			free(front2);
			front2 = NULL;
			rear2 = NULL;
		}
		printf("Hasta basariyla silindi.\n\n");
	}
}

void list_queue2() {
	queue2 *front_temp = front2;
	if((front_temp == NULL) && (rear2 == NULL)) {
		printf("Sirada (kuyrukta) hasta yok!\n\n");
		main();
	}
	else {
		while(front_temp != rear2) {
			puts(front_temp -> name2);
			front_temp = front_temp -> sonraki2;
		}
	}
	if(front_temp == rear2) {
		puts(front_temp -> name2);
		printf("\n\n");
		main();
	}
}
