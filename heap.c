#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;

void* heap_top(Heap* pq)
{
  if(pq->size == 0)
  {
    return NULL;
  }
  return pq->heapArray->data;
}

void heap_push(Heap* pq, void* data, int p)
{
  if(pq->size == pq->capac);
  {
    pq->capac = (pq->capac * 2) + 1;
    pq->heapArray = realloc(pq->heapArray, pq->capac * sizeof(heapElem));
  }

  int i = pq->size;
  pq->heapArray[i].priority = p;
  pq->heapArray[i].data = data;
  pq->size++;

  while(i > 0 && pq->heapArray[i].priority > pq->heapArray[(i - 1)/2].priority)
  {
    heapElem tmp = pq->heapArray[i]; //Variable temporal, para guardar dato que se desea cambiar
    pq->heapArray[i] = pq->heapArray[(i - 1)/2];
    pq->heapArray[(i - 1)/1] = tmp;
    i = (i - 1)/2;
  } } 



void heap_pop(Heap* pq)
{

}

Heap* createHeap() {
    // Crear un nuevo objeto Heap y reservar memoria para él
    Heap* heap = (Heap*) malloc(sizeof(Heap));
    if (heap == NULL) {
        printf("Error: no se pudo reservar memoria para el heap.\n");
        return NULL;
    }
    heap->size = 0; // El tamaño actual es de 0 casillas
    heap->capac = 3; // La capacidad inicial es de 3 casillas
    heap->heapArray = (heapElem*) malloc(heap->capac * sizeof(heapElem));
    if (heap->heapArray == NULL) {
        printf("Error: no se pudo reservar memoria para el arreglo heapArray.\n");
        free(heap); 
        return NULL;
    }
    return heap;
}




//
//Heap* createHeap()
//{
  //Heap *arreglo = (Heap*)malloc(sizeof(Heap));

  //arreglo->heapArray = (heapElem*)malloc(3 * sizeof(heapElem));
  //arreglo->size = 0;
  //arreglo->capac = 3;
  //return arreglo;
//}//