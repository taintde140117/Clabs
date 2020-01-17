#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>
int main()
{   int key, count;
	char s[31];
	int i,j;
	do{
		printf("\nPlease Enter A String: ");
		gets(s);
		printf("\nFound Characters: ");
		for(i=0; i<strlen(s); i++)
		{
			for(j=0; j<strlen(s); j++)
			{
				if(s[i] == s[j])
				count +=1;
			}
				if(count == 1)  printf("%5c", s[i]);
				count = 0;
		}
			printf("\nPress Enter To Continue, Esc To Exit ! ");
			key=getch();
      } while (key != 27);
}
