#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main() {
  char hello[] = "What's up!"; 
  char hello2[] = { 72, 101, 108, 108, 111, 33, 0 };

  puts(hello);
  puts(hello2);
}
