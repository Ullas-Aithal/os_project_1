#include<stdio.h>

int main(int argc, char **argv, char **envp)
{
	
	
	argv[argc-1]=NULL;
	
	execvp(argv[0],argv);
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