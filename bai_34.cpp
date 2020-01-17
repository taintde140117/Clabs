#include <stdio.h>
#include <conio.h>
#include <string.h>
int  islower(char c)
{   
	if(c >= 'a' && c <= 'z') return 1;
	else return 0;
}
int isupper(char c)
{   if(c >= 'A' && c <= 'Z') return 1;
	else return 0;
}
int toupper(char c)
{	
	return c -= 32;	
}
int tolower(char c)
{
	return c += 32;	
}

int main()
{   int i; 
	char c[100];
	printf("\nPlease Enter A String: ");
	gets(c);
	//printf("\nString Change:");
	for(i=0; i<strlen(c); i++)
	{
		if(islower(c[i]) == 1)
		
			c[i] = toupper(c[i]);
			//printf("%c", c[i]);
			
		else if( isupper(c[i]) == 1)
		    c[i] = tolower(c[i]);
		    //printf("%c", c[i]);}
	}
	printf("String Change : %s", strrev(c));
	return 0;
}
