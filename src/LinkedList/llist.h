#ifndef LLIST_H
#define LLIST_H

struct node
{
  int val;
  struct node *next;
};

struct node *deleteNode(struct node *first, int num);
struct node *reverseList(struct node *root);
void printList(struct node *root);

#endif /* LLIST_H */
