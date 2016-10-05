/*
Cellularhacker
GNU GENERAL PUBLIC LICENSE Version 3
voidPointer3.c
*/
#include <stdio.h>

typedef struct Node {
    char datatype;
    void *value;
    struct Node *left;
    struct Node *right;
}Node;

*Node CreateNode(char *datatype, char *value);
void InsertNode(Node *Node, char *datatype, char *value);
*Node RemoveNode(Node *Node, char value);
void DestroyNode(Node *Node, char *value);
void DestroyTree(Node *Node);
void PreOrderSearch(Node *Node);
void ShowTitle();
void ShowInputTitle();
void ErrorHandling(char *str);

int main(void) {
    Node *RootNode = NULL;
    int op;
    char datatype, value[20];

    while(1) {
        ShowTitle();
        scanf("%c", &op);
        switch(op) {
            case '1':
                ShowInputTitle();
                scanf_s("%c %s",&datatype, value);
                InsertNode(RootNode, datatype, value);
                break;
            case '2':
                RemoveNode(RootNode, value);
                break;
            case '3':
                PreOrderSearch(RootNode);
                break;
            case '4':
                exit(1);            
        }
    }

    return 0;
}

*Node CreateNode(char *datatype, char *value) {

}

void InsertNode(Node *RootNode, char datatype, char *vaule) {
    if(RootNode == NULL)
    switch(datatype) {
        
    }
}

void ShowTitle() {
    printf("\n\n================================\n");
    printf("Please Select what you operate.\n");
    printf("1. Insert A New Node\n
            2. Remove A Node\n
            3. Show me the Tree with PreOrderSearch\n
            4. Quit\n");
    printf("=> ")
}

void ShowInputTitle() {  //Show Title
    printf("\nLet me know your value and its data type.\n");
    printf("I(i) : int type\n
            C(c) : char type\n
            D(d) : double type\n");
    printf("[datatype] [value]: ");
}

void ErrorHandling(char *str) {
    printf("Err: %s\n",str);
}