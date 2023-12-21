#include <stdio.h>
typedef int bool;
#include <string.h> //must use to this to manipulating arrays of characters
#define true 1;
#define false 0;
void launch_missiles(int n)
{
	printf("Launching %d missiles\n", n);
}

void authenticate_and_launch(void)
{
	int n_missiles = 2;
	bool allowaccess = false;
	char response[8];//user input stored into an array of char
	

	printf("Secret: ");
	 
	fgets(response ,8, stdin);
   
	//printf("%ld", strlen(response)); --> used for debuging the fgets issue
	//if(strlen(response) > 8)
		//allowaccess = false; --> tried adding another condition to check for user response that was greater than 6 characters
      
	if(strncmp(response, "Joshua\n",8) == 0)
		allowaccess = true;
	if(allowaccess)
	{
		puts("Access granted");
		launch_missiles(n_missiles);
	}
	
	if(!allowaccess)
		puts("Access Denied");
}

int main(int argc, char **argv)
{
	puts("Wargames Missile Launcher v1.3");
	authenticate_and_launch();
	puts("Operation Complete");
}
