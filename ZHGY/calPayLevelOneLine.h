/**
  * calculte pay level of a pay line
  * author yanjun
  * date 2013/12/23
  */
#include"initparas.h"

//extern int payLevelCount[PRIZE_FIGS_NUM][SLOT_LEN]={0};  //计数各奖级的中出
int calPayLevelOneLine(int payLine[SLOT_LEN]){
	int maxLength=1;         //从投注线左或右端开始，某个中奖图案的最大连续个数
	int wildcardLength=0;    //连续通配的个数
	int payLevelOneLine=0;
	
	//计算从赔付线左端开始得到的奖级
	//计算从左端开始的连续通配个数
	for(int i=0;i<SLOT_LEN;i++){
		if(payLine[i]==WILDCARD)
			wildcardLength++;
		else
			break;
	}
	//计算奖级
	switch(wildcardLength){
	case 0:
		{
		for(int i=1;i<SLOT_LEN;i++){
			if((payLine[i]==payLine[0]) | (payLine[i]==WILDCARD))
				maxLength++;
			else
				break;
		}
		payLevelOneLine+=payLevel[payLine[0]][maxLength-1];
		}
		break;
	case 1:
		{
		maxLength=2;
		for(int i=2;i<SLOT_LEN;i++){
			if((payLine[i]==payLine[1]) | (payLine[i]==WILDCARD))
				maxLength++;
			else
				break;
		}
		payLevelOneLine+=payLevel[payLine[1]][maxLength-1];
		}
		break;
	case 2:
		{
		maxLength=3;
		for(int i=3;i<SLOT_LEN;i++){
			if((payLine[i]==payLine[2]) | (payLine[i]==WILDCARD))
				maxLength++;
			else
				break;
		}
		payLevelOneLine+=payLevel[payLine[2]][maxLength-1];
		}
		break;
	case 3:
		{
		maxLength=4;
		if((payLine[4]==payLine[3]) | (payLine[4]==WILDCARD))
			maxLength++;
		payLevelOneLine+=payLevel[payLine[3]][maxLength-1];
		}
		/*for(int i=4;i<SLOT_LEN;i++){
			if(payLine[i]==payLine[3] | payLine[i]==WILDCARD)
				maxLength++;
			else
				break;
		}
		payLevelOneLine+=payLevel[payLine[3]][maxLength-1];
		}*/
		break;
	case 4:
		{
		maxLength=5;
		payLevelOneLine+=payLevel[payLine[4]][maxLength-1];
		}
		break;
	default: ; break;
	}


	//计算从赔付线右端开始得到的奖级
	//计算从右端开始的连续通配个数
	maxLength=1;             //重置中奖图案最大连续个数
	wildcardLength=0;        //重置通配符连续个数
	for(int i=4;i>=0;i--){
		if(payLine[i]==WILDCARD)
			wildcardLength++;
		else
			break;
	}
	//计算奖级
	switch(wildcardLength){
	case 0:
		{
		for(int i=3;i>=0;i--){
			if((payLine[i]==payLine[4]) | (payLine[i]==WILDCARD))
				maxLength++;
			else
				break;
		}
		if(maxLength<SLOT_LEN)    //if equal,this pay level has been added from left side
			payLevelOneLine+=payLevel[payLine[4]][maxLength-1];
		}
		break;
	case 1:
		{
		maxLength=2;
		for(int i=2;i>=0;i--){
			if((payLine[i]==payLine[3]) | (payLine[i]==WILDCARD))
				maxLength++;
			else
				break;
		}
		if(maxLength<SLOT_LEN)
			payLevelOneLine+=payLevel[payLine[3]][maxLength-1];
		}
		break;
	case 2:
		{
		maxLength=3;
		for(int i=1;i>=0;i--){
			if((payLine[i]==payLine[2]) | (payLine[i]==WILDCARD))
				maxLength++;
			else
				
				break;
		}
		if(maxLength<SLOT_LEN)
			payLevelOneLine+=payLevel[payLine[2]][maxLength-1];
		}
		break;
	case 3:
		{
		maxLength=4;
		if((payLine[0]!=payLine[1]) & (payLine[0]!=WILDCARD))
			payLevelOneLine+=payLevel[payLine[1]][maxLength-1];
		}
		break;
	case 4: ; break;
	default: ; break;
	}
	
	return payLevelOneLine;

}