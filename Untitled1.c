#include <Stdio.h>


typedef struct node{
    unsigned int isvalid : 1;
    unsigned int size : 15;
    struct node * next;
} node_t;

int main(){
    node_t n = {.isvalid = 1, .size = 367, .next = NULL};
    node_t n2;

    n2 = n; // copying memory

    printf("n2 = %d, %d, %p\n",n2.isvalid, n2.size, n2.next);
}
