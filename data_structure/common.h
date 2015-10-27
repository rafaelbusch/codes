#ifndef _COMMON_H_
#define _COMMON_H_

#define CLEAR		"\e[H\e[2J"
#define SKIP_LINE 	"%*[^\n]"
#define RED		"\e[31m"
#define BLUE		"\e[34m"
#define GREEN		"\e[32m"
#define NORMAL		"\e[0m"
#define SIZE_NAME	100
#define SIZE_ADDRESS	100
#define SIZE_EMAIL	100
#define TIME_IN_SECONDS	1

typedef struct tree tree_t;

struct tree {
       char name[SIZE_NAME];
       char address[SIZE_ADDRESS];
       int phone;
       char email[SIZE_EMAIL];
       struct tree *left;
       struct tree *right;
};

/* utils.c */
void menu(int *option);
void tittle(void);
tree_t *get_info();
void get_name(char name[]);
void get_address(char address[]);
void get_email(char email[]);
void get_phone(int *phone);

/* tree.c */
void insert(tree_t **root, tree_t **newNode);
void print(tree_t *root);
#endif /* _COMMON_H_DEFINED_ */
