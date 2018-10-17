#include <stdio.h>
#include <stdlib.h>
#include "lsongs.h"
#include "mlibrary.h"

void add_song(struct song node *s){
	int l = 0;
	while (l < 26){
		if (s->artist[0] == 'a' + char(l)){
			
		}
	}
#include <stdio.h>
#include <stdlib.h>
#include "lsongs.h"
#include "mlibrary.h"

void make_table(){
        for (int i = 0; i < 27; i++){
                table[i] = NULL;
        }
}



void add_song(struct song node *s){
        int index;
        if (s->artist[0] >= 97 && s->artist[0] <= 122){
                index = (s->artist[0] - 19) % 26;
        }else{
                index = 26;
        }
        if (!table[index]){
                table[index] = insert_front(table[index], s->name, s->artist);
                return;
        }
        table[index] = insert_order(table[index], s->name, s->artist);
}
~                                                                                                                                                                       
~                                                                                      }
