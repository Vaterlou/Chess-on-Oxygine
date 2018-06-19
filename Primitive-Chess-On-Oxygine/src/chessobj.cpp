#include "oxygine-framework.h"
#include <functional>
#include <vector>
#include <string>
using namespace std;
using namespace oxygine;
Resources gameResources;
bool DarkStep = false;
bool LightStep = true;
Vector2 Peshka(0, 70);
Vector2 Tower(0, 350);
Vector2 Horse(140, 70);
Vector2 Bishop(210, 210);
Vector2 Queen(280, 0);
void createBoard(string name){
        spSprite sprite = new Sprite;
        sprite->setResAnim(gameResources.getResAnim(name));
        sprite->attachTo(getStage());
}
void WhiteChess(string name, int x, int y, bool True, bool False , Vector2 Vector ){
    spSprite Whitechess = new Sprite;
    Whitechess->setResAnim(gameResources.getResAnim(name));
    Whitechess->attachTo(getStage());
    Whitechess->setPosition(x, y);
    Whitechess->addEventListener(TouchEvent::CLICK, [=](Event*) {
       if (LightStep)
       {
       Whitechess->addTween(Sprite::TweenPosition(Whitechess->getPosition() + Vector), 700, 1);
        LightStep =False;
        DarkStep = True;
       }});}

void BlackChess(string name, int x, int y, bool True, bool False , Vector2 Vector ){
    spSprite  Blackchess = new Sprite;
    Blackchess->setResAnim(gameResources.getResAnim(name));
    Blackchess->attachTo(getStage());
    Blackchess->setPosition(x, y);
    Blackchess->addEventListener(TouchEvent::CLICK, [=](Event*) {
        if (DarkStep){
        Blackchess->addTween(Sprite::TweenPosition(Blackchess->getPosition() - Vector), 700, 1);
           DarkStep=False;
           LightStep=True;
       }});}
