#include<stdio.h>
#include<string.h>
void execCommand(char *);
int main(int argc, char **argv, char **envp)
{
	char s[100];
	char **command;
	//memset(command, '\0', 10);
	printf("$");
	gets(s);
	//printf("%s",s);
	//printf("\n%d",strlen(s));
	execCommand(s);
	
	//int l = strlen(*command);
	//printf("%s", command[0]);
	//execvp(c[0],c);
	//execvp(c[0],c);
	return 0;
	//printf("\n Start %d",a++);
	
	//if( fork() !=0)
	//{
	//	printf("\n In Parent");
	//}
	//else
	//{
	//	printf("\n In Child");
	//}
}
void execCommand(char *s)
{
	char *command[100];
	int i=0,j=0,k=0;
	char temp[100];
	memset(temp, '\0', 1000);
	//printf("%s\n", s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i] == ' ')
		{
			
			strcpy(command[j++],temp);
			memset(temp, '\0', 1000);
			k=0;
			
			
		}
		else
		{
			temp[k++] = s[i];
			
			
		}
	
	
	}
	command[j++] = temp;
	command[j] = NULL;
	printf("%s\n", command[0]);
	printf("%s", command[1]);
	printf("%s", command[2]);
	printf("%s", command[3]);
	printf("%s", command[4]);
	//execvp(command[0],command);
	
}