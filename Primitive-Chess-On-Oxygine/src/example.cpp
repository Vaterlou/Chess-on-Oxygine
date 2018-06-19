#include "oxygine-framework.h"
#include <functional>
#include <vector>
#include <string>
#include "chessobj.cpp"
using namespace std;
using namespace oxygine;
void example_preinit() {}

void example_init()
{
    gameResources.loadXML("res.xml");
    createBoard("chessboard");
	int W = 0;
	for (int i = 0; i < 8; i++)
	{
        WhiteChess("pawn", W, 55, true, false, Peshka);
	W += 70;
    }
    W = 0;
    WhiteChess("rock", 0, -10, false, true, Tower);
    WhiteChess("rock", 490, -10, false, true, Tower);
    WhiteChess("bishop", 70, -10, false, true, Tower);
    WhiteChess("bishop", 420, -10, false, true, Tower);
    WhiteChess("horse", 140, -10, false, true, Horse);
    WhiteChess("horse", 350, -10, false, true, Horse);
    WhiteChess("queen",210, -10, false, true, Queen);
    WhiteChess("king",280, -10, false, true, Peshka);

	 for (int i = 0; i < 8; i++){
            BlackChess("pawn-black", W, 410, true, false, Peshka);
		    W += 70;
	}
    BlackChess("rock-black", 0, 480, true, false, Peshka);
    BlackChess("rock-black", 490, 480, true,false, Peshka);
    BlackChess("bishop-black", 70, 480, true, false, Tower);
    BlackChess("bishop-black", 420, 480, true, false, Tower);
    BlackChess("horse-black", 140, 480, true, false, Horse);
    BlackChess("horse-black", 350, 480, true, false, Horse);
    BlackChess("queen-black", 210, 480, true, false, Queen);
    BlackChess("king-black", 280, 480, true, false, Peshka);

}
	//called each frame from main.cpp
	void example_update()
	{

	}

	//called each frame from main.cpp
	void example_destroy()
	{
		//free previously loaded resources

		gameResources.free();
	}
