//
// Created by 李金豪 on 2020/7/18.
//
#include <iostream>

/*
 * 邻接矩阵法
 */

#define MaxVertexNum 100 //顶点数目的最大值

//图的邻接矩阵存储结构
typedef struct {
    char Vex[MaxVertexNum]; //一位数组存储char型顶点的数据
    int Edge[MaxVertexNum][MaxVertexNum]; //邻接矩阵，边表

    int vexnum, arcnum; //图中顶点数和弧数
}MGraph;

