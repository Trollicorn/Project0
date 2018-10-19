#include <stdio.h>
#include <stdlib.h>

#include "lsongs.h"
#include "mlibrary.h"

int main() {

  struct song_node *music;
//  struct song_node * table[27];

  make_table();

  printf("LINKED LIST TESTS\n");
  printf("====================================\n");
  
  printf("Testing inserts...\n");
  
  music = insert_front(music, "thunderstruck", "ac/dc");
 // insert_order(music, "yellow ledbetter", "pearl jam");
 /* insert_order(music, "even flow", "pearl jam");
  insert_order(music, "alive", "pearl jam");
  insert_order(music, "street spirit (fadeout)", "radiohead");
  insert_order(music, "paranoid android", "radiohead");
  insert_order(music, "time", "pink floyd");
  
  printf("\nTesting print_songs:\n");
  print_songs(music);
  printf("\n====================================\n");
  
  printf("\nTesting print_node:\n");
  print_node(music);
  printf("\n====================================\n");
  
  printf("\nTesting search_artist:\n");
  printf("looking for [pink floyd]\n");
  print_songs(search_artist(music, "pink floyd"));
  printf("\nlooking for [pearl jam]\n");
  print_songs(search_artist(music, "pearl jam"));
  printf("looking for [potus]\n");
  print_songs(search_artist(music, "potus"));
  printf("\n====================================\n");
  
  printf("\nTesting rand_song:\n");
  print_node(rand_song(music));
  print_node(rand_song(music));
  print_node(rand_song(music));
  print_node(rand_song(music));
  printf("\n====================================\n");

  printf("\nTesting remove_song:\n");
  printf("Removing [pearl jam: alive]\n");
  remove_song(music, "alive", "pearl jam");
  print_songs(music);
  printf("\nRemoving [pearl jam: yellow ledbetter]\n");
  remove_song(music, "yellow ledbetter", "pearl jam");
  print_songs(music);
  printf("\nRemoving [pink floyd: alive]\n");
  remove_song(music, "alive", "pink floyd");
  print_songs(music);
  printf("\n====================================\n");

  printf("\nTesting free_list:\n");
  free_list(music);
  printf("List after being freed...\n");
  print_songs(music);
  printf("\n====================================\n");

  printf("\nMUSIC LIBRARY TESTS\n");
  printf("\n====================================\n");

  printf("\nTesting print_lib:\n");
  print_lib();
  printf("\n====================================\n");

  printf("\nTesting print_lib:\n");
*/
  
  return 0;
  
}
