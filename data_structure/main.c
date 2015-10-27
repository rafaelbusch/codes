#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <unistd.h>

#include "common.h"

int main(void)
{
	int option;
	tree_t *root;
	tree_t *newNode;
	root = NULL;
	
	do {
		menu(&option);	
		__fpurge(stdin);			
		switch(option) {
			case 1:			
				newNode = get_info();
				insert(&root, &newNode);			
				break;
			case 2:	
				print(root);
				sleep(TIME_IN_SECONDS*2);
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
		}			
	} while (option != 0);
	
	return EXIT_SUCCESS;
}                      
      
