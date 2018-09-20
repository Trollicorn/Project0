#include <stdio.h>
#include <stdlib.h>
#include "lsongs.h"


struct song_node * insert_front(struct song_node *s, char n, char a){
  struct song_node *temp = malloc(sizeof(struct song_node));
  temp->name = n;
  temp->artist = a;
  temp->next = s;
  return temp;
}

struct song_node * insert_order(struct song_node *s, char n, char a){
  struct song_node *current = s;
  while (current){

  }
}
