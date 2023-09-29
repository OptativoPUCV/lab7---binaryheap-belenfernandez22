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


void* heap_top(Heap* pq){
  Heap* createHeap() {
    // Crear un nuevo objeto Heap y reservar memoria para él
    Heap* heap = (Heap*) malloc(sizeof(Heap));
    if (heap == NULL) {
        printf("Error: no se pudo reservar memoria para el heap.\n");
        return NULL;
    }
    heap->handle = HeapCreate(0, 3 * sizeof(int), 0);
    if (heap->handle == NULL) {
        printf("Error: no se pudo crear el heap privado.\n");
        free(heap); 
        return NULL;
    }

    heap->heapArray = (int*) HeapAlloc(heap->handle, 0, 3 * sizeof(int));
    if (heap->heapArray == NULL) {
        printf("Error: no se pudo asignar memoria para el arreglo heapArray.\n");
        HeapDestroy(heap->handle); 
        free(heap); 
        return NULL;
    }

    heap->capacity = 3; 
    heap->size = 0; 

    return heap;
}
    return NULL;



}


void heap_push(Heap* pq, void* data, int priority){

}


void heap_pop(Heap* pq){

}

Heap* createHeap(){

   return NULL;
}
