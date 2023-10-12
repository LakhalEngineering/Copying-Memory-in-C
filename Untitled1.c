#include <Stdio.h>
#include <string.h> // to use memcpy fun

#define NODE_OFFSET 10
#define BUFFER_SIZE 4096

typedef struct node{
    unsigned int isvalid : 1;
    unsigned int size : 15;
    struct node * next;
} node_t;

int main(){
    node_t n = {.isvalid = 1, .size = 367, .next = NULL};
    node_t *n2;

    char buffer[BUFFER_SIZE];

    memset(buffer, 0xCD, BUFFER_SIZE); // P1 : Pointer memory that you want to set , P2 : Value, P3 : Numbers of bytes

    //memcpy(buffer+NODE_OFFSET, &n, sizeof(node_t)); // P1 : distination P2 : Adress of source P3 : size
    n2 = (node_t*)buffer+NODE_OFFSET; // using pointer

    /* n2 = n; */

    printf("n2 = %d, %d, %p\n",n2->isvalid, n2->size, n2->next);
}
