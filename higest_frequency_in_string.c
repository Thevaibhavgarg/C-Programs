/* C Program to Find Maximum Occurring Character in a String */
 
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], result;
  	int i, len;
  	int max = 0;
  	
  	int freq[256] = {0}; 
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
  	//printf("maximum occuring characters: ");	
  	for(i = 0; i < 256; i++)
  	{
		if(freq[i] > freq[max])
		{
			max = i;
		}
        // else if(freq[i]==freq[max]){
        //     printf(" '%s' for %d times",freq[max],max);
        // }
	}
	printf("\n Character appears Maximum of %d Times in a String is : '%c' ",freq[max],max);
	
  	return 0;
}