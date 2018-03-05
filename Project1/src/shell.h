/*
 * shell.h
 *
 *  Created on: Sep 7, 2017
 *      Author: S. Cooney
 */

//
// This program contains modified code from F. McGeary.
//

#ifndef SHELL_H_
#define SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

typedef enum { FALSE, TRUE } boolean;

#define MAX_CMD 256
#define MAX_ARGS 128

// function prototypes

void shell();
void type_prompt();
void read_command(char* command, char* params[]);

#endif /* SHELL_H_ */
