#include <stdlib.h>
#include <stdio.h>

#include "slist.h"

int main(int argc, char **argv)
{
    int values[] = {3,5,6,6,21,245,43423,322,121245};
    list *list = listCreate();

    /* creating list and populating it */
    listAddCellHead(list, &values[0]);
    cell *current = listHead(list);
    for(int i=1; i < sizeof(values)/sizeof(int); i++)
    {
        listInsertCell(list, current, &values[i]);
        current = listNextCell(current);
	}

    /* iterating over its values and print them */
    int i = listLength(list);
    current = listHead(list);
    printf("linked list length: %d\n", i);
    while(i--)
    {
        printf("cell value: %d\n", (*(int*)current->data));	
        current = listNextCell(current);
	}

    /* free memory */
    listDestroy(list);
}
