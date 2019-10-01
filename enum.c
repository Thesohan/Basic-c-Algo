#include<stdio.h>
#include<stdlib.h>
void starcpy(char *a,char *b){
	while(*b++=*a++);
}
int main(){
	// enum {no,yes};
	// enum {jan=1,fab,march,april,may,june,july,augest,sept,oct,nov,dec};
	// printf("%d%d%d%d%d%d%d%d%d%d%d%d",jan,fab,march,april,may,june,july,augest,sept,oct,nov,dec);
	// printf("%d%d\n",no,yes);

	// const int a=10;       
	// printf("%d",a);
	// // a++;
	// printf("%d",a);
	// char s[]="hello""world";
	// printf("%s",s);

	// char p[]="1234123";
	// char *temp;
	// // starcpy(p,temp);

	// printf("%d",atoi(p));
	// int b=atoi(p);
	// char buffer[20];
	// itoa(1000,buffer,2);
	// printf("%s",buffer);
	// int i=10;
	// register int *a=&i;
	// // int *a=&i;
	// printf("%d\n", *a);
	char a[10];
	gets(a);
	printf("%s\n", a);
	puts(a);
}