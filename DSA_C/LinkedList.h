#pragma once
#ifndef LinkedList_H_
#define LinkedList_H_

typedef struct Node 
{
    int value;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct _LinkedList
{
    Node* head;
    Node* tail;
} LinkedList;



void initList(LinkedList* list, Node* node);
Node* createNode(int value);

void removeFront(LinkedList* list);
void removeBack(LinkedList* list);

void appendNode(LinkedList* list, Node* node);
void prependNode(LinkedList* list, Node* node);

void printNodesReverse(LinkedList* list);
void printNodes(LinkedList* list);

#endif