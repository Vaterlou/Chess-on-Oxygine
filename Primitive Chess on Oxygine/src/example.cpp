#include "oxygine-framework.h"
#include "\Users\Darya\Desktop\Oxygen\oxygine-flow\src\oxygine-flow.h"
#include <functional>
using namespace oxygine;


Resources gameResources;


void example_preinit() {}

//called from main.cpp
bool pressed = false;
Vector2 Peshka(0, 70);
Vector2 Tower(0, 350); 
Vector2 Horse(140, 70);
Vector2 Bishop(210, 210);
Vector2 Queen(280, 0);


void example_init()
{

	//load xml file with resources definition


	gameResources.loadXML("res.xml");

	spSprite sprite = new Sprite;
	sprite->setResAnim(gameResources.getResAnim("chessboard"));
	sprite->attachTo(getStage());
	int W = 0;
	for (int i = 0; i < 8; i++)
		{
				spSprite spriteR = new Sprite;
				spriteR->setResAnim(gameResources.getResAnim("pawn"));
				spriteR->setPosition(W, 55);
				spriteR->attachTo(getStage());
				spriteR->addEventListener(TouchEvent::CLICK, [=](Event*) {
					spriteR->addTween(Sprite::TweenPosition(spriteR->getPosition() + Peshka), 700, 1); });
				W += 70;
			}
	W = 0;
	  spSprite rock = new Sprite;
	  rock->setResAnim(gameResources.getResAnim("rock"));
	  rock->setPosition(0, -10);
	  rock->attachTo(getStage());
	  rock->addEventListener(TouchEvent::CLICK, [=](Event*) {
		rock->addTween(Sprite::TweenPosition(rock->getPosition() + Tower), 700, 1); });


	  spSprite rock1 = new Sprite;
	  rock1->setResAnim(gameResources.getResAnim("rock"));
	  rock1->setPosition(490, -10);
	  rock1->attachTo(getStage());
	  rock1->addEventListener(TouchEvent::CLICK, [=](Event*) {
		  rock1->addTween(Sprite::TweenPosition(rock1->getPosition() + Tower), 700, 1); });

	  spSprite bishop = new Sprite;
	  bishop->setResAnim(gameResources.getResAnim("bishop"));
	  bishop->setPosition(70, -10);
	  bishop->attachTo(getStage());
	  bishop->addEventListener(TouchEvent::CLICK, [=](Event*) {
		  bishop->addTween(Sprite::TweenPosition(bishop->getPosition() + Bishop), 700, 1); });

	  spSprite bishop1 = new Sprite;
	  bishop1->setResAnim(gameResources.getResAnim("bishop"));
	  bishop1->setPosition(420, -10);
	  bishop1->attachTo(getStage());
	  bishop1->addEventListener(TouchEvent::CLICK, [=](Event*) {
		  bishop1->addTween(Sprite::TweenPosition(bishop1->getPosition() + Bishop), 700, 1); });


		spSprite horse = new Sprite;
		horse->setResAnim(gameResources.getResAnim("horse"));
		horse->setPosition(140, -10);
		horse->attachTo(getStage());
		horse->addEventListener(TouchEvent::CLICK, [=](Event*) {
			horse->addTween(Sprite::TweenPosition(horse->getPosition() + Horse), 700, 1); });

		spSprite horse1 = new Sprite;
		horse1->setResAnim(gameResources.getResAnim("horse"));
		horse1->setPosition(350, -10);
		horse1->attachTo(getStage());
		horse1->addEventListener(TouchEvent::CLICK, [=](Event*) {
			horse1->addTween(Sprite::TweenPosition(horse1->getPosition() + Horse), 700, 1); });

		spSprite queen = new Sprite;
		queen->setResAnim(gameResources.getResAnim("queen"));
		queen->setPosition(210, -10);
		queen->attachTo(getStage());
		queen->addEventListener(TouchEvent::CLICK, [=](Event*) {
			queen->addTween(Sprite::TweenPosition(queen->getPosition() + Queen), 700, 1); });


		spSprite king = new Sprite;
		king->setResAnim(gameResources.getResAnim("king"));
		king->setPosition(280, -10);
		king->attachTo(getStage());
		king->addEventListener(TouchEvent::CLICK, [=](Event*) {
			king->addTween(Sprite::TweenPosition(king->getPosition() + Peshka), 700, 1); });



		
	
	
	for (int i = 0; i < 8; i++){
			spSprite spriteB = new Sprite;
			spriteB->setResAnim(gameResources.getResAnim("pawn-black"));
			spriteB->setPosition(W, 410);
			spriteB->attachTo(getStage());
			spriteB->addEventListener(TouchEvent::CLICK, [=](Event*) {
				spriteB->addTween(Sprite::TweenPosition(spriteB->getPosition() - Peshka), 700, 1); });
			W += 70;
			
	}
	spSprite rockb = new Sprite;
	rockb->setResAnim(gameResources.getResAnim("rock-black"));
	rockb->setPosition(0, 480);
	rockb->attachTo(getStage());
	rockb->addEventListener(TouchEvent::CLICK, [=](Event*) {
		rockb->addTween(Sprite::TweenPosition(rockb->getPosition() - Tower), 700, 1); });


	spSprite rock1b = new Sprite;
	rock1b->setResAnim(gameResources.getResAnim("rock-black"));
	rock1b->setPosition(490, 480);
	rock1b->attachTo(getStage());
	rock1b->addEventListener(TouchEvent::CLICK, [=](Event*) {
		rock1b->addTween(Sprite::TweenPosition(rock1b->getPosition() -Tower), 700, 1); });

	spSprite bishopb = new Sprite;
	bishopb->setResAnim(gameResources.getResAnim("bishop-black"));
	bishopb->setPosition(70, 480);
	bishopb->attachTo(getStage());
	bishopb->addEventListener(TouchEvent::CLICK, [=](Event*) {
		bishopb->addTween(Sprite::TweenPosition(bishopb->getPosition() - Bishop), 700, 1); });

	spSprite bishop1b = new Sprite;
	bishop1b->setResAnim(gameResources.getResAnim("bishop-black"));
	bishop1b->setPosition(420, 480);
	bishop1b->attachTo(getStage());
	bishop1b->addEventListener(TouchEvent::CLICK, [=](Event*) {
		bishop1b->addTween(Sprite::TweenPosition(bishop1b->getPosition() -Bishop), 700, 1); });


	spSprite horseb = new Sprite;
	horseb->setResAnim(gameResources.getResAnim("horse-black"));
	horseb->setPosition(140, 480);
	horseb->attachTo(getStage());
	horseb->addEventListener(TouchEvent::CLICK, [=](Event*) {
		horseb->addTween(Sprite::TweenPosition(horseb->getPosition() - Horse), 700, 1); });

	spSprite horse1b = new Sprite;
	horse1b->setResAnim(gameResources.getResAnim("horse-black"));
	horse1b->setPosition(350, 480);
	horse1b->attachTo(getStage());
	horse1b->addEventListener(TouchEvent::CLICK, [=](Event*) {
		horse1b->addTween(Sprite::TweenPosition(horse1b->getPosition() - Horse), 700, 1); });

	spSprite queenb = new Sprite;
	queenb->setResAnim(gameResources.getResAnim("queen-black"));
	queenb->setPosition(210, 480);
	queenb->attachTo(getStage());
	queenb->addEventListener(TouchEvent::CLICK, [=](Event*) {
		queenb->addTween(Sprite::TweenPosition(queenb->getPosition() -Queen), 700, 1); });


	spSprite kingb = new Sprite;
	kingb->setResAnim(gameResources.getResAnim("king-black"));
	kingb->setPosition(280, 480);
	kingb->attachTo(getStage());
	kingb->addEventListener(TouchEvent::CLICK, [=](Event*) {
		kingb->addTween(Sprite::TweenPosition(kingb->getPosition() - Peshka), 700, 1); });
	
	
	
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
