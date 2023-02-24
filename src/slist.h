#ifndef __SLIST_H__
#define __SLIST_H__

typedef struct cell {
	void *data;
	struct cell *next;
} cell;

typedef struct list {
	struct cell *head;
	struct cell *tail;
	int length;
} list;


#define listHead(l) (l->head)
#define listTail(l) (l->tail)
#define listLength(l) (l->length)
#define listNextCell(c) (c->next)

list *listCreate(void);
list *listDestroy(list *list);
list *listAddCellHead(list *list, void *data);
list *listAddCellTail(list *list, void *data);
list *listInsertCell(list *list, cell *current, void *data);
list *listDeleteCell(list *list, cell *previous, cell *current);

#endif
