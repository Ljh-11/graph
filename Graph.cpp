//
// Created by 李金豪 on 2020/7/18.
//
#include <iostream>

/*
 * 邻接矩阵法（顺序存储）、邻接表法（顺序 + 链式存储）
 */

#define MaxVertexNum 100 //图中顶点数目的最大值

/*
 * 邻接矩阵存储结构
 */

//图的邻接矩阵存储结构
typedef struct {
    char Vex[MaxVertexNum]; //一维数组存储char型顶点的数据
    int Edge[MaxVertexNum][MaxVertexNum]; //邻接矩阵，边表

    int vexnum, arcnum; //图中顶点数和弧数
}MGraph;


/*
 * 邻接表存储结构
 */

//边表结点
typedef struct ArcNode {
    int adjvex; //该弧所指向的顶点的位置
    struct ArcNode * next; //指向下一条弧的指针
}ArcNode;

//顶点表结点
typedef struct VNode{
    char data; //顶点信息
    ArcNode * first; //指向第一条依附该顶点的弧的指针
}VNode, AdjList[MaxVertexNum];

//邻接表
typedef struct {
    AdjList vertices;
    int vexnum, arcnum;
}ALGraph;
