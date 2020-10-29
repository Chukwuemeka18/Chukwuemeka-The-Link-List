#include <stdio.h>
#include <stdlib.h>
 //typedef char* string;

typedef struct node{

  char letter;
  struct node* next;

}
Chuk;


int main(void) {
  
  //C
  Chuk* list;
  Chuk* C = malloc(sizeof(Chuk));

  C->letter = 'C';
  C->next = NULL;
  
  list = C;

  //H
  Chuk* H = malloc(sizeof(Chuk));

    H->letter = 'H';
    H->next = NULL;

  C->next = H;


  //U
  Chuk* U = malloc(sizeof(Chuk));

  U->letter = 'U';
  U->next = NULL;

  H->next = U;



//K
  Chuk* K = malloc(sizeof(Chuk));

  K->letter = 'K';
  K->next = NULL;

  U->next = K;


  //W
  Chuk* W = malloc(sizeof(Chuk));

  W->letter = 'W';
  W->next = NULL;

  K->next = W;



  //U
  Chuk* U2 = malloc(sizeof(Chuk));

  U2->letter = 'U';
  U2->next = NULL;

  W->next = U2;


  //E
  Chuk* E = malloc(sizeof(Chuk));

  E->letter = 'E';
  E->next = NULL;

  U2->next = E;





  //M
  Chuk* M = malloc(sizeof(Chuk));

  M->letter = 'M';
  M->next = NULL;


  E->next = M;




  //E
  Chuk* E2 = malloc(sizeof(Chuk));

  E2->letter = 'E';
  E2->next = NULL;

  M->next = E2;





  //K
  Chuk* K2 = malloc(sizeof(Chuk));

  K2->letter = 'K';
  K2->next = NULL;


  E2->next = K2;



  //A
  Chuk* A = malloc(sizeof(Chuk));

  A->letter = 'A';
  A->next = NULL;

  K2->next= A;

/*
  //STOP
  Chuk* STOP = malloc(sizeof(Chuk));

  STOP->letter = '.';
  STOP->next = NULL;

  A->next = STOP;
*/

 
  for ( Chuk* temp = list; temp != NULL; temp = temp->next){
    printf("%c\n",temp->letter);
  }
 

}