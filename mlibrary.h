#ifndef M_LIBRARY_H
#define M_LIBRARY_H

struct song_node * table[27];

void add_song(struct song_node *s);

struct song_node * search_song(char *name);

struct song_node * search_artist(char *name);

void print_entries(char c);

void print_songs(char *name);

void print_lib();

void shuffle();

void delete_song(char *name);

void clear_lib();

#endif
