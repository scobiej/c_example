#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   printList();
   return 0;
}
