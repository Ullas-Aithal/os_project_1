#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void execCommand(char *);
char** evaluation (char *);
int getCount(char **);
void push();
int main(int argc, char **argv, char **envp)

{
	char s[100];
	char **command;
	
	printf("$");
	gets(s);
	
	
	command = evaluation(s);
	
	//execCommand(command[1]);
	
	
	
	int g = getCount(command);
	printf("%d",g);

	
	return 0;

}
char** evaluation (char *input)
{
	char **buffer;
	char *b[100];
	char *stack_temp[100];
	char *temp = (char*) malloc(100);
	//memset(temp, '\0', 1);
	//memset(buffer, '\0', 100);
	int buf_count=0,stack_count=0;
	int k=0,i=0,j=0;
	for(i=0;i<strlen(input);i++)
	{
		switch(input[i])
		{
			case '(' : {
							//push();
							break;
						}
			case ')' : {
							//pop();
							break;
						}
			case ';' : {
							temp[k] = NULL;
							buffer[j] = (char *)malloc(100);
							strncpy(buffer[j++],temp,strlen(temp));
							free(temp);
							temp = (char*) malloc(100);
							k=0;
							break;
						}
			default : 	{
							temp[k++] = input[i];
							break;
						}
							
			
		}
	}
	if(k>0)
	{
							temp[k] = NULL;
							buffer[j] = (char *)malloc(100);
							strncpy(buffer[j++],temp,strlen(temp));
							free(temp);
	}
	buffer[j]=NULL;
	
	// void push()
	// {
		// buf_count = getCount(buffer);
		
		// while(buf_count > 0)
		// {
			// strcpy(stack_temp[stack_count++],buffer[buf_count--];
		// }
		
	// }
	
		//printf("%s",buffer[0]);
	
	
	//*buffer[j] = NULL;
	
	//printf("%s",buffer[0]);
	
	//execCommand(input);
	// int l=0;
	// for(l=0;l<j;l++)
	// {
		// printf("%d = %s",l,buffer[l]);
	// }
	return buffer;
}
int getCount(char** var)
{
	int count =0;
	for(count=0;var[count] != '\0';count++)
		{
				
		}
	return count;
}
void execCommand(char *s)
{
	char *command[100];
	int i=0,j=0,k=0;
	char temp[100];
	memset(temp, '\0', 100);
	
	for(i=0;i<strlen(s);i++)
	{
		if(s[i] == ' ')
		{
			
			strcpy(command[j++],temp);
			memset(temp, '\0', 100);
			k=0;
			
			
		}
		else
		{
			temp[k++] = s[i];
			
			
		}
	
	
	}
	command[j++] = temp;
	command[j] = NULL;
	
	execvp(command[0],command);
	
}