#include <stdio.h>
#include <stdlib.h>


struct song_node{ 
  char name[100];
  char artist[100];
  struct song_node *next;
};

struct song_node * insert_front(struct song_node *s, char n, char a);

struct song_node * insert_order(struct song_node *s, char n, char a);

void print_songs(struct song_node *s);

struct song_node * search_song(struct song_node *s, char n, char a);

struct song_node * search_artist(struct song_node *s, char a);

struct song_node * rand_song(struct song_node *s);

struct song_node * remove_song(struct song_node *s);

struct song_ndoe * free_list(struct song_node *s);

