#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
  NodePtr tailPtr=NULL;
  
  // enqueue( &headPtr, &tailPtr, 5);
  // // printf("%d\n", headPtr->data);

  // enqueue( &headPtr, &tailPtr, 4);
  // printf("%d\n", headPtr->data);

  int i,x;

  // For struct Queue
  Queue  q;
  q.headPtr=NULL;
  q.tailPtr=NULL;
  q.size=0;

  for(i=1;i<argc;i++){
    if(strcmp(argv[i],"x")==0){
      x=dequeue_struct(&q);
      if (x) {
        printf("dequeing %d\n",x);
      }
    }
    else {
      enqueue_struct(&q, atoi(argv[i]));
      // printf("adding %d\n", atoi(argv[i]));
    }
  }
   
  // for(i=1;i<argc;i++){
  //   if(strcmp(argv[i],"x")==0){
  //     x=dequeue(&headPtr,&tailPtr);
  //     printf("dequeing %d\n",x);
  //   }
  //   else {
  //     enqueue_struct(&headPtr, &tailPtr, atoi(argv[i]));
  //   }
  // }
  return 0;
}
