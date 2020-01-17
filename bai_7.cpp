#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
char* rTrim(char s[])
{
	int i = strlen(s)-1;
	while (s[i] == '  ') i--;
	s[i+1]= '\0';
	return s;
}
char* lTrim(char s[])
{
	int i = 0;
	while (s[i] == '  ') i++;
	if(i>0) strcpy(&s[0] , &s[i]);
	return s;
}
char* trim( char s[])
{
	rTrim(lTrim(s));
	char *ptr = strstr(s ,"  ");
	while (ptr != NULL)
	{ 
		strcpy( ptr, ptr+1);
		ptr=strstr(s , "  ");
	}
	return s;
}
char* nameStr(char s[])
{   
    trim(s);
	strlwr(s);
	int L = strlen(s);
	int i;
	for(i=0;i<L;i++)
		if(i == 0 ||(i >0 &&s[i-1] == ' ')) s[i] = toupper (s[i]);
	return s;
}
int main()
{   int key;
 	do{
	   char s[31];
       printf("\nPlease Enter A String: ");
	   gets(s);
	   trim(s);
	   nameStr(s);
	   printf("\nThe String After Removing:");
	   puts(s);
	   printf("\nPress Enter To Continue, Esc To Exit ! ");
	   key=getch();
	  }while (key!=27);
	fflush(stdin);
	getchar();
}
