#ifndef M_LIBRARY_H
#define M_LIBRARY_H

struct song_node * table[27];

void add_song(struct song_node *s);

struct song_node * search_song(char *song, char *art);

struct song_node * search_artist(char *art);

void print_entries(char c);

void print_songs(char *art);

void print_lib();

void shuffle();

void delete_song(char *song, char *art);

void clear_lib();

#endif
