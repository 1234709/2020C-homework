#include <stdio.h>
#include <string.h> 

char num[110];
char result[110];
int len; 
  
int main()
{
	int i,j;
	int s1,s2;              
	int find1 = 0;                
	int find2 = 0;            
	int index; 
	            
	scanf("%s",num);
	len = strlen(num);   
	
	for(i = 0;i < len;++i)
	{
		if(find1 && find2)
			break;
			
		if(num[i] == '.'){
			s1 = i;
			find1 = 1;
		}	
		else if(num[i] != '0' && !find2){
			find2 = 1;
			s2 = i;
		}	
	}
	
	if(s1-s2 > 0)        
		index = s1-s2-1;
	else if(s2 > s1)
		index = s1-s2;          

	j = 0;
	for(i = s2;i < len;++i)        
	{
		if(num[i] == '.')    
			continue;
		else if(i == s2) {      
			
			if(num[i+1]){
				result[j++] = num[i];
				result[j++] = '.';	
			}
			else
				result[j++] = num[i];
		}
		else
			result[j++] = num[i]; 
	}
	result[j] = '\0';
	
	printf("%se%d\n",result,index);
	return 0;	
}
