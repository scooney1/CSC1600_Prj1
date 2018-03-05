/*
 ============================================================================
 Name        : shell.c
 Author      : S. Cooney
 Version     :
 Copyright   : Tanenbaum and Bos
 Description : A highly simplified shell
 ============================================================================
 */

//
// This program contains modified code from F. McGeary.
// This program contains modified code from Tanenbaum and Bos.
//

#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shell() {
	char command[256];      // longest command name
	char *params[MAX_ARGS]; // the argv[] array we construct
	int pid, status;

	while (TRUE) {

		type_prompt();					// Prompts user for input command.
		read_command(command, params);	// Reads command.
		pid = fork();					// Creates child process.
		if (pid < 0) {					// If fork fails.

			printf("Unable to fork.");
			continue;
		}
		if (pid != 0) {					// Parent waits for child.

			waitpid (-1, &status, 0);
		} else {

			if(execvp(command, params) >= 0) {	// Checks for valid command.

				execvp(command, params);		// Execute command.
				//printf("The command is executing.\n"); // Debugging
			} else {							// Invalid command.

				printf("This command is invalid.\n");
				// printf("The command is not executing.\n"); // Debugging
				exit(1);						// Exits fork.
			}
		}
	}
}
