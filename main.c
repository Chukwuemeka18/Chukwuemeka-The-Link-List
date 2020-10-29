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

  if (C == !NULL){
    C->letter = 'C';
    C->next = NULL;
  }

  list = C;

  //H
  Chuk* H = malloc(sizeof(Chuk));

  if (H == !NULL){
    H->letter = 'H';
    H->next = NULL;
  }

  C->next = H;


  //U
  Chuk* U = malloc(sizeof(Chuk));

  if (U == !NULL){
    U->letter = 'U';
    U->next = NULL;
  }

  H->next = U;



//K
  Chuk* K = malloc(sizeof(Chuk));

  if (K == !NULL){
    K->letter = 'K';
    K->next = NULL;
  }

  U->next = K;


  //W
  Chuk* W = malloc(sizeof(Chuk));

  if (W == !NULL){
    W->letter = 'W';
    W->next = NULL;
  }

  K->next = W;



  //U
  Chuk* U2 = malloc(sizeof(Chuk));

  if (U2 == !NULL){
    U2->letter = 'U';
    U2->next = NULL;
  }

  W->next = U2;


  //E
  Chuk* E = malloc(sizeof(Chuk));

  if (E == !NULL){
    E->letter = 'E';
    E->next = NULL;
  }

  U2->next = E;





  //M
  Chuk* M = malloc(sizeof(Chuk));

  if (M == !NULL){
    M->letter = 'M';
    M->next = NULL;
  }

  E->next = M;




  //E
  Chuk* E2 = malloc(sizeof(Chuk));

  if (E2 == !NULL){
    E2->letter = 'E';
    E2->next = NULL;
  }

  M->next = E2;





  //K
  Chuk* K2 = malloc(sizeof(Chuk));

  if (K2 == !NULL){
    K2->letter = 'K';
    K2->next = NULL;
  }

  E2->next = K2;



  //A
  Chuk* A = malloc(sizeof(Chuk));

  if (A == !NULL){
    A->letter = 'A';
    A->next = NULL;
  }
  
 
  for ( Chuk* temp = list; temp != NULL; temp = temp->next){

    printf("%c\n",temp->letter);
  }
 

}