#ifndef INITPARAS_H
#define INITPARAS_H

//normal figures,totally 12
enum slotFigs{
	PF0,  //no prize
	PF1,
	PF2,
	PF3,
	PF4,
	PF5,
	PF6,
	PF7,
	PF8,
	PF9,
	PF10,
	PF11,
	WILDCARD,
};
//prize level
const int PRIZE_FIGS_NUM=12;
const int SLOT_LEN=5;
const int payLevel[PRIZE_FIGS_NUM][SLOT_LEN]={0,   0,   0,   0,   0,
                                              0,   0,   2,   10,  20,
                                              0,   0,   3,   10,  20,
                                              0,   0,   5,   20,  50,
                                              0,   0,   5,   20,  50,
                                              0,   0,   10,  30,  100,
                                              0,   2,   10,  50,  300,
                                              0,   3,   20,  100, 1000,
                                              0,   5,   20,  200, 2000,
                                              0,   5,   30,  300, 5000,
                                              0,   10,  100, 1000,10000,
						                      0,   2,   5,   10,  100};
//the slot structure
const int slot[35][5]={4,	11,	5,	3,	5,
0,	9,	5,	0,	8,
2,	4,	7,	5,	2,
1,	6,	6,	4,	1,
1,	1,	12,	5,	6,
6,	3,	2,	6,	1,
9,	1,	1,	9,	6,
2,	0,	6,	3,	1,
8,	6,	11,	2,	6,
5,	1,	6,	2,	9,
6,	2,	4,	4,	4,
1,	1,	4,	1,	7,
5,	4,	1,	3,	6,
11,	5,	0,	1,	1,
6,	10,	3,	4,	2,
8,	6,	8,	10,	3,
1,	0,	2,	6,	11,
10,	2,	2,	2,	9,
6,	7,	1,	1,	4,
7,	4,	3,	1,	0,
3,	8,	5,	11,	0,
11,	3,	3,	9,	6,
1,	2,	6,	5,	2,
0,	3,	10,	4,	10,
2,	1,	9,	8,	4,
1,	9,	7,	0,	3,
1,	4,	0,	12,	8,
4,	5,	9,	2,	1,
3,	5,	10,	7,	10,
7,	12,	5,	6,	1,
8,	1,	11,	1,	8,
6,	3,	5,	3,	1,
10,	2,	8,	1,	7,
4,	10,	1,	10,	11,
9,	3,	4,	3,	5};

//emerging probability of normal and free bonus figures
const double normalFigsProb[12]={};
const double freeFigProb=0.07;

//parameters of the free bonus
const int freeBonusStep=10;
const double figsProbInFreeBonus[12]={};


#endif