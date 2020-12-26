#ifndef tu_h
#define tu_h
#include <stdio.h>
#include <malloc.h>
#define maxSize 100

typedef char VertexType;

typedef struct edge {
   int dest;
   struct edge *next;
} edge;


typedef struct  {
   VertexType data;
   edge *adj;
} vertex;

typedef struct {
   vertex vexs[maxSize];
   int n, e;
} Graph;

void Init(Graph *g);
VertexType GetValue(Graph *g, int i);
void create(Graph *g);
void Print(edge *e);
void showMatrix(Graph *g);


#endif
   
