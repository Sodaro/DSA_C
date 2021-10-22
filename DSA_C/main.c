#include <stdio.h>
#include "LinkedList.h"
#include <malloc.h>

int main()
{
    LinkedList* list;

    list = (LinkedList*)malloc(sizeof(LinkedList));
    initList(list, NULL);

    Node* node2 = NULL;
    
    for (int i = 0; i < 10; i++)
    {
        Node* node = createNode(i);
        if (node)
        {
            appendNode(list, node);
        }
    }

    Node* node = createNode(420);
    if (node)
    {
        prependNode(list, node);
    }


    printNodes(list);
    printNodesReverse(list);

    printf("removing element from front\n");
    removeFront(list);
    printNodes(list);

    printf("removing element from back\n");
    removeBack(list);
    printNodes(list);

    return 0;
}