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

// Implementar la función createHeap
Heap* createHeap() {
    // Crear un nuevo objeto Heap y reservar memoria para él
    Heap* heap = (Heap*) malloc(sizeof(Heap));
    if (heap == NULL) {
        printf("Error: no se pudo reservar memoria para el heap.\n");
        return NULL;
    }

    // Inicializar las variables del objeto Heap
    heap->size = 0; // El tamaño actual es de 0 casillas
    heap->capac = 3; // La capacidad inicial es de 3 casillas

    // Reservar memoria para el arreglo heapArray
    heap->heapArray = (heapElem*) malloc(heap->capac * sizeof(heapElem));
    if (heap->heapArray == NULL) {
        printf("Error: no se pudo reservar memoria para el arreglo heapArray.\n");
        free(heap); // Liberar la memoria del objeto Heap
        return NULL;
    }

    // Devolver el puntero al objeto Heap creado
    return heap;
}



void heap_push(Heap* pq, void* data, int priority){

}


void heap_pop(Heap* pq){

}

