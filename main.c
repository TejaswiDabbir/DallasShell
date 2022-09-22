#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SHELL_NAME "dash"
#define EXIT_KEYWORD "exit"

int shell_paths_length = 2; //increment whenever a new path is added

void runInteractiveMode();
void runBatchMode(char *);

int
main(int argc, char *argv[])
{
	//Can add max 100 different shell paths with each path having a max length of 50
	char shell_paths[100][50] = {
		"/bin",
		"/usr/bin"
	};

	printf("%d arguments entered\n", argc);
	if (argc == 1) {
		runInteractiveMode();
	}
	else if (argc == 2) {
		runBatchMode(argv[1]);
	}

	return 0;
}

void runInteractiveMode()
{

	while (1) {
		printf("%s> ",SHELL_NAME);

		size_t characters;
		char *userCommand;
		size_t bufsize = 0;


		characters = getline(&userCommand, &bufsize, stdin);
		int length = strlen(userCommand);
		printf("%zu characters were read!\n", characters);
		userCommand[length - 1] = '\0';
		if(strcmp(userCommand,EXIT_KEYWORD) == 0)
			break;

		//Parse command and validate by checking in shell paths
		//Check if redirection is present.. dome by >
		//run single command
		//run parallel commands
		//Implement exit
		//Implement cd
		//Implement path
		//Implement other commands
		
	}

}

