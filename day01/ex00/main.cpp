#include "Pony.hpp"

static void ponyOnTheHeap(void) {
  Pony *bob = new Pony("Bob", "Heap");

  bob->dance();
  delete bob;
}

static void ponyOnTheStack(void) {
  Pony tim("Tim", "Stack");

  tim.dance();
}

int main( void ) {
  ponyOnTheStack();
  ponyOnTheHeap();
}