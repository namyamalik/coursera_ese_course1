/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file main.c
 * @brief Main entry point to the Couse 1 Final Assessment
 *
 * This file contains the main code for the Course 1 final assesment.
 *
 * @author Namya Malik
 * @date July 2020
 *
 */

#include <stdint.h>
#include "platform.h"
#include "memory.h"
#include "course1.h"

#define MAX_LENGTH (10)
char buffer[MAX_LENGTH];

/* A pretty boring main file */
int main(void) {
	#ifdef COURSE1
		course1();
	#endif	
  	return 0;
}

