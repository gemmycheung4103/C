/*
 * 0333.c
 *
 *  Created on: 2017Äê3ÔÂ31ÈÕ
 *      Author: Administrator
 */
#include<stdio.h>
int main(){
	FILE *fp;
	char filename[30],str[30];
	printf("please input filename:\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("can not open!\n press any key to continue:\n");
		getchar();
		exit(0);
	}
	printf("please input string:\n");
	getchar();
	gets(str);
	fputs(str,fp);
    int n;
    n=sizeof(str)-5;
	fp=fopen(filename,"r");
	fgets(str,n,fp);
	printf("%s",str);
	getchar();
	fclose(fp);
}
