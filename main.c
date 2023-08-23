// Program to find and remove a string from within another string

#include <stdio.h>
#include <string.h>

// Declare Functions
void removeString (char [], int, int);

int main(void) {

  char txt[] = "the wrong son";
  printf ("Original: %s\n", txt);
  removeString (txt, 4, 6);
  printf ("Modified: %s\n", txt);
  
  return 0;
}

// Define Functions
void removeString (char text [], int index, int numToRemove) {
  // Test for overflow
  if (strlen(text) < index + numToRemove) {
    numToRemove = strlen(text) - index;
  }

  // Shift relevant characters left
  int i;
  int lengthToShift = strlen(text) - index - numToRemove + 1;
  for (i = 0; i < lengthToShift; i++) {
    text [index + i] = text [index + i + numToRemove];
  }
}