#include "pieces.h"
#include "random.h"
#include "definitions.h"

static TPiece testPC = {'i',0,0,0,
	1,1,1,1,
	1,0,1,1,
	1,1,1,1,
	1,1,1,1,

	1,1,1,1,
	1,1,0,1,
	1,1,1,1,
	1,1,1,1,

	1,1,1,1,
	1,1,1,1,
	1,1,0,1,
	1,1,1,1,

	1,1,1,1,
	1,1,1,1,
	1,0,1,1,
	1,1,1,1};


static TPiece iPC = {'i',0,0,0,
	0,0,0,0,
	1,1,1,1,
	0,0,0,0,
	0,0,0,0,

	0,0,1,0,
	0,0,1,0,
	0,0,1,0,
	0,0,1,0,

	0,0,0,0,
	0,0,0,0,
	1,1,1,1,
	0,0,0,0,

	0,1,0,0,
	0,1,0,0,
	0,1,0,0,
	0,1,0,0};

static TPiece oPC = {'o',0,0,0,
	0,1,1,0,
	0,1,1,0,
	0,0,0,0,
	0,0,0,0,

	0,1,1,0,
	0,1,1,0,
	0,0,0,0,
	0,0,0,0,

	0,1,1,0,
	0,1,1,0,
	0,0,0,0,
	0,0,0,0,

	0,1,1,0,
	0,1,1,0,
	0,0,0,0,
	0,0,0,0,};

static TPiece tPC = {'t',0,0,0,
	0,1,0,0,
	1,1,1,0,
	0,0,0,0,
	0,0,0,0,

	0,1,0,0,
	0,1,1,0,
	0,1,0,0,
	0,0,0,0,

	0,0,0,0,
	1,1,1,0,
	0,1,0,0,
	0,0,0,0,

	0,1,0,0,
	1,1,0,0,
	0,1,0,0,
	0,0,0,0,};

static TPiece jPC = {'j',0,0,0,
	1,0,0,0,
	1,1,1,0,
	0,0,0,0,
	0,0,0,0,

	0,1,1,0,
	0,1,0,0,
	0,1,0,0,
	0,0,0,0,

	0,0,0,0,
	1,1,1,0,
	0,0,1,0,
	0,0,0,0,

	0,1,0,0,
	0,1,0,0,
	1,1,0,0,
	0,0,0,0,};

static TPiece lPC = {'l',0,0,0,
	0,0,1,0,
	1,1,1,0,
	0,0,0,0,
	0,0,0,0,

	0,1,0,0,
	0,1,0,0,
	0,1,1,0,
	0,0,0,0,

	0,0,0,0,
	1,1,1,0,
	1,0,0,0,
	0,0,0,0,

	0,1,1,0,
	0,0,1,0,
	0,0,1,0,
	0,0,0,0,};

static TPiece sPC = {'s',0,0,0,
	0,1,1,0,
	1,1,0,0,
	0,0,0,0,
	0,0,0,0,

	0,1,0,0,
	0,1,1,0,
	0,0,1,0,
	0,0,0,0,

	0,0,0,0,
	0,1,1,0,
	1,1,0,0,
	0,0,0,0,

	1,0,0,0,
	1,1,0,0,
	0,1,0,0,
	0,0,0,0,};

static TPiece zPC = {'z',0,0,0,
	1,1,0,0,
	0,1,1,0,
	0,0,0,0,
	0,0,0,0,

	0,0,1,0,
	0,1,1,0,
	0,1,0,0,
	0,0,0,0,

	0,0,0,0,
	1,1,0,0,
	0,1,1,0,
	0,0,0,0,

	0,0,1,0,
	0,1,1,0,
	0,1,0,0,
	0,0,0,0,};

int initPieces()
{
	initRandom();
}

TPiece* getNewPiece(int pieceStats[7])
{
	TPiece* piece;
	int rdpc = generateRandom();
	switch(rdpc)
	{
		case 0:
			piece = &iPC;
			pieceStats[0]++;
			break;
		case 1:
			piece = &oPC;
			pieceStats[1]++;
			break;
		case 2:
			piece = &tPC;
			pieceStats[2]++;
			break;
		case 3:
			piece = &sPC;
			pieceStats[3]++;
			break;
		case 4:
			piece = &zPC;
			pieceStats[4]++;
			break;
		case 5:
			piece = &jPC;
			pieceStats[5]++;
			break;
		case 6:
			piece = &lPC;
			pieceStats[6]++;
			break;
	}
	//Manuel piece override
	//piece = &sPC;
	//Piece placement
	piece->x = SPAWNOFFSETX;
	piece->y = SPAWNOFFSETY;
	return piece;
}