#pragma once
#include <stdio.h>
#include "LinkedList.h"
#include <malloc.h>

void initList(LinkedList* list, Node* node)
{
    list->tail = node;
    list->head = node;
}

Node* createNode(int value)
{
    Node* node = (Node*)malloc(sizeof(Node));
    if (node)
    {
        node->value = value;
        node->next = NULL;
        node->prev = NULL;
        return node;
    }
    else
        return NULL;
}

void appendNode(LinkedList* list, Node* node)
{
    if (!list)
        return;

    if (!list->tail)
    {
        initList(list, node);
    }
    else
    {
        list->tail->next = node;
        node->prev = list->tail;
        list->tail = node;
    }
}
void prependNode(LinkedList* list, Node* node)
{
    if (!list->head)
    {
        initList(list, node);
    }
    else
    {
        list->head->prev = node;
        node->next = list->head;
        list->head = node;
    }
}

void removeFront(LinkedList* list)
{
    if (!list)
        return;

    if (!list->head)
        return;

    if (!list->head->next)
    {
        free(list->head);
        list->head = NULL;
    }
    else
    {
        Node* temp = list->head->next;

        free(list->head);
        list->head = temp;
        list->head->prev = NULL;
    }
    
}

void removeBack(LinkedList* list)
{
    if (!list)
        return;

    if (!list->tail)
        return;        

    if (!list->tail->prev)
    {
        free(list->tail);
        list->tail = NULL;
    }
    else
    {
        Node* temp = list->tail->prev;

        free(list->tail);
        list->tail = temp;
        list->tail->next = NULL;

    }
}

void printNodesReverse(LinkedList* list)
{
    if (!list->tail)
        return;

    Node* currentNode = list->tail;
    while (currentNode)
    {
        printf("%d", currentNode->value);
        currentNode = currentNode->prev;
        if (currentNode == NULL)
        {
            printf("\n");
        }
        else
        {
            printf(", ");
        }
    }
}
void printNodes(LinkedList* list)
{
    if (!list->head)
        return;

    Node* currentNode = list->head;
    while (currentNode)
    {
        printf("%d", currentNode->value);
        currentNode = currentNode->next;
        if (currentNode == NULL)
        {
            printf("\n");
        }
        else
        {
            printf(", ");
        }
    }
}