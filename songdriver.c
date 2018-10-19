#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "lsongs.h"
#include "mlibrary.h"

int main() {
  srand(time(NULL));

  struct song_node *music = NULL;
  
//  struct song_node * table[27];

  make_table();

  printf("LINKED LIST TESTS\n");
  printf("====================================\n");
  
  printf("Testing inserts...\n");
  
  music = insert_front(music, "street spirit (fadeout)", "radiohead");
  print_songs(music);
  printf("\n");

  music = insert_front(music, "paranoid android", "radiohead");
  print_songs(music);
  printf("\n");

  music = insert_front(music, "time", "pink floyd");
  print_songs(music);
  printf("\n");
  
  music = insert_order(music, "yellow ledbetter", "pearl jam");
  print_songs(music);
  printf("\n");
  
  music = insert_order(music, "alive", "pearl jam");
  print_songs(music);
  printf("\n");

  music = insert_order(music, "thunderstruck", "ac/dc");
  print_songs(music);
  printf("\n");

  music = insert_order(music, "even flow", "pearl jam");
  
  printf("\nTested print_songs...\n");
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
  //printf("\nlooking for [potus]\n");
  //print_songs(search_artist(music, "potus"));
  printf("\n====================================\n");
  
  printf("\nTesting rand_song:\n");
  print_node(rand_song(music));
  printf("\n");
  print_node(rand_song(music));
  printf("\n");
  print_node(rand_song(music));
  printf("\n");
  print_node(rand_song(music));
  printf("\n====================================\n");
  
  printf("\nTesting remove_song:\n");
  printf("Removing [pearl jam: alive]\n");
  remove_song(music, "alive", "pearl jam");
  print_songs(music);
  printf("\nRemoving [pearl jam: yellow ledbetter]\n");
  remove_song(music, "yellow ledbetter", "pearl jam");
  print_songs(music);
  // printf("\nRemoving [pink floyd: alive]\n");
  //test = remove_song(music, "alive", "pink floyd");
  printf("\n====================================\n");
  
  printf("\nTesting free_list:\n");
  free_list(music);
  printf("List after being freed...\n");
  print_songs(music);
  printf("\n====================================\n");
  
 



  printf("\nMUSIC LIBRARY TESTS\n");
  printf("\n====================================\n");

  add_song("thunderstruck", "ac/dc");
  add_song("alive", "pearl jam");
// add_song("even flow", "pearl jam");
//  add_song("time", "pink floyd");
//  add_song("peaches", "presidents of the united states of america");
  add_song("paranoid android", "radiohead");
//  add_song("street spirit (fade out)", "radiohead");
  printf("\nTesting print_lib:\n");
  print_lib();
  printf("\n====================================\n");

  printf("\nTesting print_letter:\n");
  print_entries('p');
  printf("\n====================================\n");

  printf("\nTesting find:\n");
  printf("looking for [pearl jam: alive]\n");
  print_node(search_song_lib("alive", "pearl jam"));
  printf("\nlooking for [pearl jam: time]\n");
//  search_song_lib("time", "pearl jam");
  printf("\n");
  printf("\n====================================\n");
  //find artist

  printf("\nTesting remove song:\n");
  printf("removing [pearl jam: alive]\n");
  print_lib();
  printf("\n====================================\n");
//OOOOOOOOF

  printf("\nTesting clear lib:\n");
  clear_lib();
  print_lib();
  printf("\n====================================\n");
//OOOOF

  printf("\nTesting shuffle:\n");
  shuffle();
  printf("\n====================================\n");

  return 0;
}
