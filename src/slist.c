#include <stdlib.h>

#include "slist.h"



list *listCreate(void)
{
    list *list = malloc(sizeof(*list));
    if (list == NULL)
        return NULL;

    list->head = NULL;
    list->tail = NULL;
    list->length = 0;
    return list;
}

list *listDestroy(list *list)
{
    if (list == NULL)
        return NULL;
    cell *current = listHead(list);
    cell *next;
    int i = listLength(list);
    while(i--)
    {
        next = listNextCell(current);
        free(current);
        current = next;
    }

    free(list);

    return NULL;
}

list *listDeleteCell(list *list, cell *previous, cell *current)
{
    if (list == NULL || previous == NULL || current == NULL )
        return NULL;

    listNextCell(previous) = listNextCell(current);
    free(current);

    return list;
}

list *listAddCellHead(list *list, void *data)
{
    if (list == NULL){
        return NULL;
    }

    cell *head = malloc(sizeof(*head));
    if (head == NULL)
        return NULL;

    head->data = data;
    head->next = NULL;
    list->head = head;
    list->length += 1;
    return list;
}

list *listInsertCell(list *list, cell *current, void *data)
{
    if (list == NULL)
        return NULL;

    cell *n_cell = malloc(sizeof(*n_cell));
    if (n_cell == NULL)
        return NULL;

    n_cell->data = data;
    n_cell->next = listNextCell(current);
    listNextCell(current) = n_cell;
    list->length += 1;

    return list;
}

