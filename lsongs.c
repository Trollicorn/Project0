#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "lsongs.h"


struct song_node * insert_front(struct song_node *s, char *n, char *a){
  struct song_node *temp = malloc(sizeof(struct song_node));
  strcpy(temp->name,n);
  strcpy(temp->artist,n);
  temp->next = s;
  return temp;
}

struct song_node * insert_order(struct song_node *s, char *n, char *a){
  struct song_node *prev = s;
  struct song_node *current = s; 
  while (strcmp(a, current->artist) < 0){
    prev = current;
    current = current->next;
  }
  while (strcmp(n, current->name) < 0){
    prev = current;
    current = current->next;
  }
  struct song_node *temp = malloc(sizeof(struct song_node));
  strcpy(temp->name,n);
  strcpy(temp->artist,a);
  temp->next = current;
  prev->next = temp;
  return temp;
}

void print_node(struct song_node *s){
  struct song_node *current = s;
  printf("%s: %s | ", s->artist, s->name);
} 

void print_songs(struct song_node *s){
  struct song_node *current = s;
  while(current){
    printf("%s: %s | ", s->artist, s->name);
    current = current->next;
  }
}

struct song_node * search_song(struct song_node *s, char *n, char *a){
  struct song_node *current = s;
  while (strcmp(a, current->artist) != 0){
    current = current->next;
  }
  while (strcmp(n, current->name) != 0){
    current = current->next;
  }
  return current;
}

struct song_node * search_artist(struct song_node *s, char *a){
  struct song_node *current = s;
  while (strcmp(a, current->artist) != 0){
    current = current->next;
  }
  return current;
}

struct song_node * rand_song(struct song_node *s){
  srand(time(NULL));
  int len = 0;
  struct song_node *temp = s;
  struct song_node *rando = s;
  while(temp){
    temp = temp->next;
    len++;
  }
  int target = rand() % len;
  for(int i = 0; i < target; i++){
    rando = rando->next;
  }
  return rando;
}

struct song_node * remove_song(struct song_node *s, char *n, char *a){
  struct song_node *prev = s;
  struct song_node *current = s;
  while (strcmp(a, current->artist) != 0){
    prev = current;
    current = current->next;
  }
  while (strcmp(n, current->name) != 0){
    prev = current;
    current = current->next;
  }
  prev->next = current->next;
  free(current);
  return current;
}

struct song_node * free_list(struct song_node *s){
  struct song_node * next;
	while (s){
    next = s->next;
    free(s);
    s = next;
  }
free(s);
 return s;
}

  
  

  
  

