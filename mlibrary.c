#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "lsongs.h"
#include "mlibrary.h"


struct song_node * table[27];

void make_table(){

        for (int i = 0; i < 27; i++){
                table[i] = NULL;
        }
}

int get_index(char *art){
        int index;
        if (art[0] >= 97 && art[0] <= 122){
                index = (art[0] - 19) % 26;
        }else{
                index = 26;
        }
        return index;
}

void add_song(char *song, char *art){
        int index = get_index(art);
        if (!table[index]){
                table[index] = insert_front(table[index], song, art);
                return;
        }
        insert_order(table[index], song, art);
        //NEED CASE FOR GOES RIGHT IN FRONT (MUST SET TABLE[INDEX] TO IT)
}

struct song_node * search_song_lib(char *song, char *art){
        int index = get_index(art);
/*        struct song_node here = table[index];
        while (here && strcmp(art,here->artist) + strcmp(song,here->name)){
                here = here -> next;
        }
        return here;
	*/
	return search_song(table[index],song,art);
}

struct song_node * search_artist_lib(char *art){
        int index = get_index(art);
 /*       struct song_node here = table[index];
        while (here && strcmp(art,here->artist) ){
                here = here -> next;
        }
        return here;
*/
	return search_artist(table[index],art);
}

void print_entries(char c){
        int index;
        if (c >= 97 && c <= 122){
                index = (c - 19) % 26;
        }else{
                index = 26;
        }
        print_songs(table[index]);
}

void print_artist(char *art){
        int index = get_index(art);
        struct song_node *s = search_artist(table[index],art);
        while (s->artist && ! strcmp(art, s->artist)){
                printf("%s, by %s\n", s->name, s->artist);
                s = s->next;
        }
}

void print_lib(){
        for (int i = 0; i < 27; i++){
                print_songs(table[i]);
        }
}

void shuffle(){
	struct song_node *temp;
        srand(time(NULL));
	for (int i = 0; i < 27; i++){
		if (rand() % 26 < 5){
			temp = rand_song(table[i]);
			printf("%s, by %s\n",temp->name,temp->artist);	
                }
	}
}

void delete_song(char *song, char *art){
        int index = get_index(art);
        if (strcmp(table[index]->name,song) == 0 && strcmp(table[index]->artist, art) ){
                
        }
	remove_song(table[index],song,art);
}

void clear_lib(){
        for (int i = 0; i < 27; i++){
                free_list(table[i]);        
        }
}
