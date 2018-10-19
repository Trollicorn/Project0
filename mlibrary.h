#ifndef M_LIBRARY_H
#define M_LIBRARY_H

void make_table();

int get_index(char *art);

void add_song(struct song_node *s);

struct song_node * search_song_lib(char *song, char *art);

struct song_node * search_artist_lib(char *art);

void print_entries(char c);

void print_artist(char *art);

void print_lib();

void shuffle();

void delete_song(char *song, char *art);

void clear_lib();

#endif
