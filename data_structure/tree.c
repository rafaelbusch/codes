#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

#include "common.h"

void insert(tree_t **root, tree_t **newNode)
{
	if(*root == NULL) 
		*root = *newNode;
	else {
		if(strcasecmp((*root)->name, (*newNode)->name) > 0)
			insert(&(*root)->left, newNode);
		else {
			if(strcasecmp((*root)->name, (*newNode)->name) < 0)
				insert(&(*root)->right, newNode);
			else {
				if(strcmp((*root)->name, (*newNode)->name) == 0)
					fprintf(stderr, "Nome já existe na agenda!\n");
			}
		}
	} 
}

void print(tree_t *root)
{
	if(root != NULL) {
		print((root)->left);
		printf("Nome do contato: %s",(root)->name);
		printf("Endereço: %s",(root)->address);
		printf("E-mail: %s",(root)->email);
		printf("Telefone: %d",(root)->phone);
		print((root)->right);
	}
}


