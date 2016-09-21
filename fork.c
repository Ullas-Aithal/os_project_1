#include<stdio.h>

int main(int argc, char **argv, char **envp)
{
	execvp("ls",argv);
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