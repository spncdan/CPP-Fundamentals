// This will be a quick addition to my notes particularly going over the continue and break statements so it better fits the flow of learning

int main() {

  // Break statements by definition allow you to jump out of a loop as shown below.
  for (int i = 0; i < 10; i++) {
      if (i == 4) { // if i = 4 while it increments through the for loop the loop will break and therefor not continue to print '4' only 1,2 and 3.
        break;
      }
    cout << i << endl;
  }

  // On the other hand, the Continue statement breaks only one iteration in the loop and continues with the next iteration in the loop instead.
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      continue; // when i = 4, this will simple go back to the start of the loop therefore 4 will never be printed just 1-10 (excluding 4)
      }
    cout << i << endl;
  }

  // Continue and Break can also work with while loops.

  // Break Example
  int i = 0;
  while (i < 10) {
    cout << i << endl;
    i++;
    if (i == 4) {
      break;
    }
  }

  // Continue Example
  int i = 0;
  while (i < 10) {
    cout << i << endl;
    i++;
    if (i == 4) {
      continue;
    }
  }

  return 0;
  
}
