#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

typedef struct Chrom{
    short int bit[1000]; //网络节点编码
    int fit;            //适应值，这里指成本
    double rfit;        //相对fit值，即所占的备份比
    double cfit;        //累计概率
                        //存放网络链路
}chrom;

class GA{
    public:
        int nodeNum;
        int iteration;
        GA(int nodeNum, int iteration){
		this->nodeNum = nodeNum;
		this->iteration = iteration;
		cout << this->nodeNum << endl;
		cout << this->iteration << endl;	
	};
        void getBestServersPos(int num);
    private:
        void *evpop(chrom* popcurrent, int num);         //种群初始化
        int x(chrom popcurrent);                
        int y(int x);
        void *pickchroms(chrom* popcurrent, int initNum);    //选择操作
        void *pickchroms_new(chrom* popcurrent, int initNum);//轮盘选择
        void *crossover(chrom* popnext, int initNum);        //交叉操作
        void *mutation(chrom* popnext, int initNum);         //突变操作
        chrom* popcurrent;                      //初始种群规模
        chrom* popnext;                         //更新后种群规模
};
