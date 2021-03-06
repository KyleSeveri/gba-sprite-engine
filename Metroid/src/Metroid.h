//
// Created by SDM Technics on 28/12/2019.
//

#ifndef GBA_SPRITE_ENGINE_PROJECT_METROID_H
#define GBA_SPRITE_ENGINE_PROJECT_METROID_H

#include <libgba-sprite-engine/sprites/sprite.h>
#include <libgba-sprite-engine/gba/tonc_math.h>

class Metroid {
private:
    std::unique_ptr<Sprite> metroid;
    int lives = 100;
    bool goLeft = false;
    bool isCrouching = false;
    bool isJumping = false;
    bool isFalling = false;
    bool canJump = true;
    bool canGoLeft = true;
    bool canGoRight = true;
    bool canGoUp = true;
    bool canGoDown = false;
    bool powerUp = false;

public:
    Metroid(std::unique_ptr<Sprite> sprite1) : metroid(std::move(sprite1)){}
    Sprite *getMetroid() {return metroid.get();}
    void tick(u16 keys);
    void reduceLives(int value);
    int getLives();
    bool getGoLeft(){return goLeft;}
    bool getIsCrouching(){return isCrouching;}
    bool getIsJumping(){return isJumping;}
    void setCanGoRight(bool value);
    void setCanGoLeft(bool value);
    void setCanGoUp(bool canGoUp);
    void setCanGoDown(bool canGoDown);
    bool getIsFalling(){return isFalling;}
    void setIsFalling(bool value);
    void setIsJumping(bool value);
    void setPowerUp(bool value){powerUp = value;}
    bool getPowerUp(){return powerUp;}

};


#endif //GBA_SPRITE_ENGINE_PROJECT_METROID_H
