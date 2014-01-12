//#include<math.h>
//#include<ctime>
//#include<stdlib.h>
#include"calPayLevelOneLine.h"

int random(int beginNum,int endNum){
	return beginNum+static_cast<int>((endNum-beginNum)*rand()/(RAND_MAX+1.0));
}

int creditOneBet=1;
int BetNum=9;
int prizeOneBet=0;
int totalCredit=0,totalPrize=0;
int salesAmount=0,AwardAmount=0;
int roundStep=10000;


