#include <stdio.h>
#include <malloc.h>
#include "tu.h"


//初始化图
void Init(Graph *g) {
   for (int i=0; i<maxSize; i++)
      g->vexs[i].adj = NULL;
   g->n = g->e = 0;
}


//得到图的第i个顶点的值
VertexType GetValue(Graph *g, int i) {
   if (i<0 || i>=g->n) exit(1);
   return g->vexs[i].data;
}


//输入顶点和边，创建图
void create(Graph *g) {
   int i, j, k;
   edge *s;
   printf("请输入顶点数和边数: ");
   scanf("%d%d", &g->n, &g->e);
   printf("请输入%d个顶点的值: ", g->n);
   getchar();
   for (i=0; i<g->n; i++) {
      scanf("%c", &g->vexs[i].data);
      g->vexs[i].adj = NULL;
   }
   printf("请输入%d条边:", g->e);
   for (k=0; k<g->e; k++) {
      scanf("%d%d", &i, &j);
      s = (edge*)malloc(sizeof(edge));
      s->dest = j;
      s->next = g->vexs[i].adj;
      g->vexs[i].adj = s;
      s = (edge*)malloc(sizeof(edge));
      s->dest = i;
      s->next = g->vexs[j].adj;
      g->vexs[j].adj = s;
   }
}


//输出一个顶点的链表
void Print(edge *e) {
   edge *p = e;
   while (p) {
      printf("%3d", p->dest);
      p = p->next;
   }
   printf("\n");
}

//输出图的邻接表
void showMatrix(Graph *g) {
   for (int i=0; i<g->n; i++) {
      printf("%3c", g->vexs[i].data);
      Print(g->vexs[i].adj);
   }
}

