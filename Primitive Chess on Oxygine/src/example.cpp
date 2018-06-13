#include "oxygine-framework.h"
#include <functional>
#include <vector>
#include <string>
using namespace std;
using namespace oxygine;
Resources gameResources;
void createBoard(string name){
	spSprite sprite = new Sprite;
	sprite->setResAnim(gameResources.getResAnim(name));
	sprite->attachTo(getStage());
}

void example_preinit() {}
bool DarkStep = false;
bool LightStep = true;
bool pressed = false;
Vector2 Peshka(0, 70);
Vector2 Tower(0, 350); 
Vector2 Horse(140, 70);
Vector2 Bishop(210, 210);
Vector2 Queen(280, 0);


void example_init()
{
	gameResources.loadXML("res.xml");
	createBoard("chessboard");
	int W = 0;
	for (int i = 0; i < 8; i++)
	{
	 spSprite spriteR = new Sprite;
	 spriteR->setResAnim(gameResources.getResAnim("pawn"));
	 spriteR->attachTo(getStage());
	 spriteR->setPosition(W, 55);
	 spriteR->addEventListener(TouchEvent::TOUCH_UP, [=](Event*) {
		if (LightStep)
		{
		 spriteR->addTween(Sprite::TweenPosition(spriteR->getPosition() + Peshka), 700, 1);
		 LightStep =false;
		 DarkStep = true;
		} }); 
	W += 70;
		}W = 0;
	 spSprite rock = new Sprite;
	 rock->setResAnim(gameResources.getResAnim("rock"));
	 rock->setPosition(0, -10);
	 rock->attachTo(getStage());
	 rock->addEventListener(TouchEvent::CLICK, [=](Event*) {
		if (LightStep)
		 {
			 rock->addTween(Sprite::TweenPosition(rock->getPosition() + Tower), 700, 1);
			 LightStep = false;
		 } });
	 spSprite rock1 = new Sprite;
	 rock1->setResAnim(gameResources.getResAnim("rock"));
	 rock1->setPosition(490, -10);
	 rock1->attachTo(getStage());
	 rock1->addEventListener(TouchEvent::CLICK, [=](Event*) {
		  if (LightStep)
		  {
			  rock1->addTween(Sprite::TweenPosition(rock1->getPosition() + Tower), 700, 1);
			  LightStep = false;
			  DarkStep = true;
		  }});
	 spSprite bishop = new Sprite;
	 bishop->setResAnim(gameResources.getResAnim("bishop"));
	 bishop->setPosition(70, -10);
	 bishop->attachTo(getStage());
	 bishop->addEventListener(TouchEvent::CLICK, [=](Event*) {
		  if (LightStep)
		  {
			  bishop->addTween(Sprite::TweenPosition(bishop->getPosition() + Bishop), 700, 1);
			  LightStep = false;
			  DarkStep = true;
		  }});
	 spSprite bishop1 = new Sprite;
	 bishop1->setResAnim(gameResources.getResAnim("bishop"));
	 bishop1->setPosition(420, -10);
	 bishop1->attachTo(getStage());
	 bishop1->addEventListener(TouchEvent::CLICK, [=](Event*) {
		  if (LightStep)
		  {
			  bishop1->addTween(Sprite::TweenPosition(bishop1->getPosition() + Bishop), 700, 1);
			  LightStep = false;
			  DarkStep = true;
		  }});
	 spSprite horse = new Sprite;
	 horse->setResAnim(gameResources.getResAnim("horse"));
	 horse->setPosition(140, -10);
	 horse->attachTo(getStage());
	 horse->addEventListener(TouchEvent::CLICK, [=](Event*) {
		  if (LightStep)
		{
				horse->addTween(Sprite::TweenPosition(horse->getPosition() + Horse), 700, 1);
				LightStep = false;
				DarkStep = true;
			}});
	 spSprite horse1 = new Sprite;
	 horse1->setResAnim(gameResources.getResAnim("horse"));
	 horse1->setPosition(350, -10);
	 horse1->attachTo(getStage());
	 horse1->addEventListener(TouchEvent::CLICK, [=](Event*) {
			if (LightStep)
			{
				horse1->addTween(Sprite::TweenPosition(horse1->getPosition() + Horse), 700, 1);
				LightStep = false;
				DarkStep = true;
			}});
	 spSprite queen = new Sprite;
	 queen->setResAnim(gameResources.getResAnim("queen"));
	 queen->setPosition(210, -10);
	 queen->attachTo(getStage());
	 queen->addEventListener(TouchEvent::CLICK, [=](Event*) {
			if (LightStep)
			{
				queen->addTween(Sprite::TweenPosition(queen->getPosition() + Queen), 700, 1);
				LightStep = false;
				DarkStep = true;
			}});
	 spSprite king = new Sprite;
	 king->setResAnim(gameResources.getResAnim("king"));
	 king->setPosition(280, -10);
	 king->attachTo(getStage());
	 king->addEventListener(TouchEvent::CLICK, [=](Event*) {
			if (LightStep)
			{
				king->addTween(Sprite::TweenPosition(king->getPosition() + Peshka), 700, 1);
				LightStep = false;
				DarkStep = true;
			}});
	 for (int i = 0; i < 8; i++){
			spSprite spriteB = new Sprite;
			spriteB->setResAnim(gameResources.getResAnim("pawn-black"));
			spriteB->setPosition(W, 410);
			spriteB->attachTo(getStage());
			spriteB->addEventListener(TouchEvent::CLICK, [=](Event*) {
			if (DarkStep)
			{
				spriteB->addTween(Sprite::TweenPosition(spriteB->getPosition() - Peshka), 700, 1);
				LightStep = true;
				DarkStep = false;
			} });
		    W += 70;
	}
	spSprite rockb = new Sprite;
	rockb->setResAnim(gameResources.getResAnim("rock-black"));
	rockb->setPosition(0, 480);
	rockb->attachTo(getStage());
	rockb->addEventListener(TouchEvent::CLICK, [=](Event*) {
		if (DarkStep)
		{
			rockb->addTween(Sprite::TweenPosition(rockb->getPosition() - Tower), 700, 1);
			LightStep = true;
			DarkStep = false;
		} });
	spSprite rock1b = new Sprite;
	rock1b->setResAnim(gameResources.getResAnim("rock-black"));
	rock1b->setPosition(490, 480);
	rock1b->attachTo(getStage());
	rock1b->addEventListener(TouchEvent::CLICK, [=](Event*) {
		if (DarkStep)
		{
			rock1b->addTween(Sprite::TweenPosition(rock1b->getPosition() - Tower), 700, 1);
			LightStep = true;
			DarkStep = false;
		} });
	spSprite bishopb = new Sprite;
	bishopb->setResAnim(gameResources.getResAnim("bishop-black"));
	bishopb->setPosition(70, 480);
	bishopb->attachTo(getStage());
	bishopb->addEventListener(TouchEvent::CLICK, [=](Event*) {
		if (DarkStep)
		{
			bishopb->addTween(Sprite::TweenPosition(bishopb->getPosition() - Bishop), 700, 1);
			LightStep = true;
			DarkStep = false;
		} });
	spSprite bishop1b = new Sprite;
	bishop1b->setResAnim(gameResources.getResAnim("bishop-black"));
	bishop1b->setPosition(420, 480);
	bishop1b->attachTo(getStage());
	bishop1b->addEventListener(TouchEvent::CLICK, [=](Event*) {
		if (DarkStep)
		{
			bishop1b->addTween(Sprite::TweenPosition(bishop1b->getPosition() - Bishop), 700, 1);
			LightStep = true;
			DarkStep = false;
		} });
	spSprite horseb = new Sprite;
	horseb->setResAnim(gameResources.getResAnim("horse-black"));
	horseb->setPosition(140, 480);
	horseb->attachTo(getStage());
	horseb->addEventListener(TouchEvent::CLICK, [=](Event*) {
		if (DarkStep)
		{
			horseb->addTween(Sprite::TweenPosition(horseb->getPosition() - Horse), 700, 1);
			LightStep = true;
			DarkStep = false;
		} });
	spSprite horse1b = new Sprite;
	horse1b->setResAnim(gameResources.getResAnim("horse-black"));
	horse1b->setPosition(350, 480);
	horse1b->attachTo(getStage());
	horse1b->addEventListener(TouchEvent::CLICK, [=](Event*) {
		if (DarkStep)
		{
			horse1b->addTween(Sprite::TweenPosition(horse1b->getPosition() - Horse), 700, 1);
			LightStep = true;
			DarkStep = false;
		} });
	spSprite queenb = new Sprite;
	queenb->setResAnim(gameResources.getResAnim("queen-black"));
	queenb->setPosition(210, 480);
	queenb->attachTo(getStage());
	queenb->addEventListener(TouchEvent::CLICK, [=](Event*) {
		if (DarkStep)
		{
			queenb->addTween(Sprite::TweenPosition(queenb->getPosition() - Queen), 700, 1);
			LightStep = true;
			DarkStep = false;
		} });
	spSprite kingb = new Sprite;
	kingb->setResAnim(gameResources.getResAnim("king-black"));
	kingb->setPosition(280, 480);
	kingb->attachTo(getStage());
	kingb->addEventListener(TouchEvent::CLICK, [=](Event*) {
		if (DarkStep)
		{
			kingb->addTween(Sprite::TweenPosition(kingb->getPosition() - Peshka), 700, 1);
			LightStep = true;
			DarkStep = false;
		} });
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
