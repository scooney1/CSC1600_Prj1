/*
 ============================================================================
 Name        : read_command.c
 Author      : S. Cooney
 Version     :
 Copyright   : Tanenbaum and Bos
 Description : A highly simplified shell
 ============================================================================
 */

//
// This program contains modified code from F. McGeary.
//

#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char cmd[MAX_CMD];

void read_command(char* command, char* params[]) {
    char * commandcopy;
    char * token;
    const char delimiters[4] = " \n\r";
    int num_args = 0;

	// read the entire command line from the user
    fgets(cmd, MAX_CMD, stdin);

    // if the only input is the word "exit", exit
    if(strncmp(cmd, "exit", 4) == 0) {
		   printf("\nBye!\n");
		   exit(0);
		 }

    // process the incoming command line
    // since the tokenizing is destructive, make a copy
    commandcopy = (char *)malloc (strlen(cmd)+2);
    strcpy(commandcopy, cmd);

    /* Tokenize the command */
    token = strtok(commandcopy, delimiters);
    strcpy(command, token);  // need this in two places
    //printf("Command requested is %s\n",command);  	// debug info
    params[0] = token;

    /* Tokenize the arguments */
    token = strtok(NULL, delimiters);
    while((num_args < MAX_ARGS) && (token != NULL)) {
       //printf(" %s",token);  							// debug info
       num_args++;
       params[num_args] = token;
       token = strtok(NULL, delimiters);
    }
    //printf("\n");  									// debug info
    num_args++;
    params[num_args] = NULL;

	return;
}
