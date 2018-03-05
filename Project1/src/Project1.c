/*
 ========================================================
 Name        : Project1.c
 Author      : S. Cooney
 Version     : 1
 Copyright   : Tanenbaum and Bos
 Description : A highly simplified shell
 ========================================================
 */

//
// This program contains modified code from F. McGeary.
//

#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	puts("!!!Project1!!!");
	setbuf(stdout,NULL);
	shell();
	return EXIT_SUCCESS;
}
