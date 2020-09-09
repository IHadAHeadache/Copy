#include <stdlib.h> 
#include<stdio.h>

int main(int argc, char* argv[])
{
     	FILE *fp_in, *fp_out; char ch;
	if(argc != 3)
	{
		printf("Wrong Argument Format\n");
          	exit(0);
	}
      	if((fp_in=fopen(argv[1],"r"))==NULL)
	{
		printf("Open file error!!\n");
          	exit(0);
      	}    
      	if((fp_out=fopen(argv[2],"w"))==NULL)
	{
		printf("Open file error!!\n");
          	exit(0);
	}
     	while((ch=getc(fp_in))!=EOF)
       		fprintf(fp_out,"%c",ch);
      	fclose(fp_in);
      	fclose(fp_out);
      	return 0;
}
