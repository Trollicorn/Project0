#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lsongs.h"


struct song_node * insert_front(struct song_node *s, char *n, char *a){
  struct song_node *temp = malloc(sizeof(struct song_node));
  temp->name = n;
  temp->artist = a;
  temp->next = s;
  return temp;
}

struct song_node * insert_order(struct song_node *s, char *n, char *a){
  struct node *prev = s;
  struct node *current = s; 
  while (strcmp(a, current->artist) < 0){
    prev = current;
    current = current->next;
  }
  while (strcmp(n, current->name) < 0)
    current = current->next;
}
