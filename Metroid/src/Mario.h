//
// Created by SDM Technics on 2/01/2020.
//

#ifndef GBA_SPRITE_ENGINE_PROJECT_MARIO_H
#define GBA_SPRITE_ENGINE_PROJECT_MARIO_H

#include <libgba-sprite-engine/sprites/sprite.h>
#include <libgba-sprite-engine/gba/tonc_math.h>

class Mario {
private:
    std::unique_ptr<Sprite> enemy;
    int lives = 100;
    bool goLeft = true;
public:
    bool isGoLeft() const;

    void setGoLeft(bool goLeft);

private:
    bool canGoLeft = true;
    bool canGoRight = true;
public:
    bool isCanGoLeft() const;

    void setCanGoLeft(bool canGoLeft);

    bool isCanGoRight() const;

    void setCanGoRight(bool canGoRight);

public:
    Mario(std::unique_ptr<Sprite> sprite1) : enemy(std::move(sprite1)){}
    Sprite *getMario() {return enemy.get();}
    void tick(u16 keys);
    int getLives();
    void reduceLives(int value);
    bool getGoLeft(){return goLeft;}
};


//{{BLOCK(enemy_big)

//======================================================================
//
//	enemy_big, 16x224@8,
//	+ 56 tiles not compressed
//	Total size: 3584 = 3584
//
//	Time-stamp: 2020-01-02, 23:47:47
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.6
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned int enemy_bigTiles[896] __attribute__((aligned(4)))=
        {
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x20000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x20202020,0x00000000,
                0x00000000,0x20202000,0x00000000,0x20202020,0x00000000,0x20202020,0x00000000,0x1F1E1E1E,
                0x1E000000,0x1F1E1F1F,0x1E1E0000,0x1E1E1F1F,0x1E1E0000,0x1F1F1F1F,0x1E000000,0x1F1F1F1E,
                0x1D202020,0x00000000,0x1D1D2020,0x00000000,0x20202020,0x00202020,0x1F1F1E1F,0x0000001F,
                0x1F1E1E1F,0x001F1F1F,0x1F1F1F1F,0x1F1F1F1F,0x1E1F1F1F,0x1F1F1F1F,0x1E1E1F1F,0x001E1E1E,

                0x00000000,0x1F1F1E00,0x00000000,0x2020201D,0x1D1D0000,0x1D1D1D20,0x1D1D0000,0x1D1D1D20,
                0x201D0000,0x1D1D2020,0x20000000,0x1D1D2020,0x20000000,0x1D202020,0x20000000,0x20202020,
                0x1F1F1F1F,0x00001F1F,0x001F1F1F,0x00000000,0x20201D20,0x00001F1F,0x1D1D201D,0x1F1F1F1F,
                0x1D1D1D1D,0x1F1F1F1F,0x1D1D1D1D,0x1F1F1F1D,0x1D1D1D1D,0x1F1F1F1D,0x1D1D1D20,0x00000020,
                0x201D1D1D,0x20202020,0x201D1D1D,0x20202020,0x1D1D1D1D,0x20202020,0x1D1D1D1D,0x00202020,
                0x1D1D1D1D,0x00000000,0x00001D1D,0x00000000,0x0000001D,0x00000000,0x00000000,0x00000000,
                0x20202020,0x00002020,0x20202020,0x0000201D,0x2020201D,0x00000020,0x20202000,0x00000020,
                0x1D1D1D00,0x0000001D,0x1D1D1D00,0x0000001D,0x1D1D1D00,0x001D1D1D,0x1D1D1D00,0x001D1D1D,

                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x20200000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00202020,0x00000000,
                0x00000000,0x20202020,0x20000000,0x20202020,0x20000000,0x20202020,0x1E000000,0x1F1F1E1E,
                0x1F1E1E00,0x1F1F1E1F,0x1F1E1E00,0x1F1E1E1F,0x1E1E0000,0x1F1F1F1F,0x1E000000,0x1F1F1F1E,
                0x001D2020,0x00000000,0x001D1D20,0x00000000,0x20202020,0x00002020,0x1F1F1F1E,0x00000000,
                0x1F1F1E1E,0x001F1F1F,0x1F1E1F1F,0x001F1F1F,0x1E1E1E1F,0x00001E1E,0x1F1F1F1F,0x0000001F,

                0x00000000,0x20202020,0x1D000000,0x201D1D20,0x201D0000,0x1D1D1D1D,0x201D0000,0x1D1D1D1D,
                0x201D0000,0x1D1D1D1D,0x20200000,0x1D1D1D1D,0x20200000,0x1D1D1D20,0x20200000,0x1D1D2020,
                0x00001F1F,0x00000000,0x001D1D20,0x00000000,0x1D1D2020,0x00000000,0x1D1D2020,0x00000000,
                0x1F1F1F1F,0x00000000,0x1F1F1F1F,0x00000020,0x1F1F1F1F,0x00002020,0x201F1F1F,0x00002020,
                0x20200000,0x20202020,0x20000000,0x20202020,0x00000000,0x1D202000,0x00000000,0x20201D00,
                0x00000000,0x1D1D1D00,0x00000000,0x1D1D1D1D,0x00000000,0x1D1D1D1D,0x00000000,0x1D1D0000,
                0x20201D1D,0x00002020,0x201D1D1D,0x00000020,0x001D1D1D,0x00000000,0x1D1D1D20,0x00000000,
                0x1D1D001D,0x00000000,0x0000001D,0x00000000,0x001D1D1D,0x00000000,0x001D1D1D,0x00000000,

                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x20200000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x001D2020,0x00000000,
                0x00000000,0x20202020,0x20000000,0x20202020,0x1E000000,0x1F1F1E1E,0x1F1E0000,0x1F1F1E1F,
                0x1F1E1E00,0x1F1E1E1F,0x1F1E1E00,0x1F1E1E1F,0x1E000000,0x1F1F1F1E,0x00000000,0x1F1F1E1E,
                0x001D1D20,0x00000000,0x20202020,0x00002020,0x1F1F1F1E,0x00000000,0x1F1F1E1E,0x00001F1F,
                0x1F1F1F1F,0x001F1F1F,0x1F1E1F1F,0x001F1F1F,0x1E1E1E1F,0x00001E1E,0x00001F1F,0x00000000,

                0x00000000,0x1D1D1D20,0x1D000000,0x201D1D1D,0x1D1D1D00,0x1D1D1D1D,0x1D1D1D00,0x1D1D1D1D,
                0x1D1D1D1D,0x20201D1D,0x1D1D1D1D,0x20202020,0x1F1F1F1F,0x2020201F,0x1F1F1F1F,0x2020201F,
                0x0020201D,0x001F0000,0x20201D1D,0x1F1F1F00,0x201D1D20,0x1F1F1F1D,0x1D1D2020,0x1F1F1F20,
                0x1D201F20,0x00001D1F,0x20202020,0x00000020,0x20202020,0x00000020,0x20202020,0x1D000020,
                0x1F1F1F1F,0x20202020,0x1F1F1F1C,0x20202020,0x201D1D1D,0x1D1D2020,0x1D1D1D1D,0x20202020,
                0x1D1D1D1D,0x0000201D,0x1D1D1D00,0x00000000,0x1D1D1D00,0x00000000,0x1D1D0000,0x0000001D,
                0x20202020,0x1D1D1D20,0x1D202020,0x1D1D1D1D,0x1D202020,0x1D1D1D1D,0x1D000000,0x1D1D1D1D,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x001F1F1F,0x1F000000,0x1F1F1E1F,
                0x00000000,0x20200000,0x00000000,0x20202020,0x20000000,0x20202020,0x20000000,0x20202020,
                0x1E1E0000,0x1F1F1E1E,0x1F1E0000,0x1F1F1E1F,0x1F1E1E00,0x1F1F1F1F,0x1E1E1E00,0x1F1F1F1E,
                0x1F202020,0x1F1E1E1F,0x1F202020,0x1F1F1F1F,0x1D202020,0x1D1D1D1D,0x20202020,0x1D1D2020,
                0x1F1F1F1E,0x1D1D1D1D,0x1F1F1E1E,0x1D1D1F1F,0x1F1E1F1F,0x001D1F1F,0x1E1E1E1F,0x001D1E1E,

                0x1E000000,0x1F1F1F1E,0x00000000,0x20202020,0x1D1D1D1D,0x201D1D1D,0x1D1D1D1D,0x1D1D1D1D,
                0x1F1F1F1D,0x201D1D1F,0x1F1F1F1F,0x20201D1F,0x1F1F1F1F,0x2020201F,0x1F1F001F,0x20202020,
                0x1F1F1F1F,0x001D1D1F,0x1D201D1D,0x001D1D1D,0x1D201D20,0x00001D1D,0x201D1D20,0x00001D1D,
                0x1D202020,0x0000001F,0x20201F20,0x00000020,0x20202020,0x00000020,0x20202020,0x1D000020,
                0x201F1F00,0x20202020,0x201D1D1D,0x20202020,0x201D1D1D,0x1D1D2020,0x201D1D1D,0x20202020,
                0x201D1D1D,0x20202020,0x201D1D1D,0x00202020,0x00001D1D,0x00000000,0x0000001D,0x00000000,
                0x20202020,0x1D1D1D20,0x20202020,0x1D1D1D1D,0x20202020,0x1D1D1D1D,0x20200000,0x1D1D1D1D,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x20200000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x001D2020,0x00000000,
                0x00000000,0x20202020,0x20000000,0x20202020,0x1E000000,0x1F1F1E1E,0x1F1E0000,0x1F1F1E1F,
                0x1F1E1E00,0x1F1E1E1F,0x1F1E1E00,0x1F1E1E1F,0x1E000000,0x1F1F1F1E,0x00000000,0x1F1F1F1E,
                0x001D1D20,0x00000000,0x20202020,0x00002020,0x1F1F1F1E,0x00000000,0x1F1F1E1E,0x00001F1F,
                0x1F1F1F1F,0x001F1F1F,0x1F1E1F1F,0x001F1F1F,0x1E1E1E1F,0x00001E1E,0x001F1F1F,0x00000000,

                0x00000000,0x1F1D201D,0x1D000000,0x1D1D201D,0x1D1D1D00,0x1D1D201D,0x1D1D1D1D,0x1D1D201D,
                0x1D1D1D1D,0x20202020,0x1D1D1D1D,0x20201D20,0x1F1F1F1F,0x20202020,0x1F1F1F1F,0x20202020,
                0x1D201D1F,0x00000000,0x1D201D1D,0x0000001D,0x1D201D1D,0x001D1D1D,0x1D201D1D,0x1D1D1D1D,
                0x20202020,0x1D1D1D1D,0x201D2020,0x1D1D1D1D,0x20202020,0x1F1F1F1F,0x20202020,0x1F1F1F1F,
                0x1F1F1F00,0x20202020,0x201F1F00,0x20202020,0x20202000,0x00002020,0x20202000,0x00002020,
                0x1D1D0000,0x00001D1D,0x1D1D0000,0x00001D1D,0x1D1D1D1D,0x00001D1D,0x1D1D1D1D,0x00001D1D,
                0x20202020,0x001F1F1F,0x20202020,0x001F1F20,0x20200000,0x00202020,0x20200000,0x00202020,
                0x1D1D0000,0x00001D1D,0x1D1D0000,0x00001D1D,0x1D1D0000,0x1D1D1D1D,0x1D1D0000,0x1D1D1D1D,

                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x20000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x20202020,0x00000000,
                0x00000000,0x20202000,0x00000000,0x20202020,0x00000000,0x20202020,0x00000000,0x1F1E1E1E,
                0x1E000000,0x1F1E1F1F,0x1E1E0000,0x1E1E1F1F,0x1E1E0000,0x1F1F1F1F,0x1E000000,0x1F1F1F1E,
                0x1D202020,0x00000000,0x1D1D2020,0x00000000,0x20202020,0x00202020,0x1F1F1E1F,0x0000001F,
                0x1F1E1E1F,0x1F1F1F1F,0x1E1F1F1F,0x1F1F1F1F,0x1E1E1E1F,0x001E1E1E,0x1D1D1F1F,0x1F1F1F1F,

                0x00000000,0x1F1F1D00,0x00000000,0x1D20201D,0x1D000000,0x1D1D2020,0x1D000000,0x1D1D1D20,
                0x00000000,0x1D1D2020,0x00000000,0x20202020,0x00000000,0x20202020,0x20000000,0x20202020,
                0x1F1D1D1D,0x001F1F1F,0x1D1D1D1D,0x00001F1F,0x1D1D1D1D,0x0000001F,0x1D1D1D1D,0x00000000,
                0x1D202020,0x0000001D,0x20202020,0x0000001D,0x20201D20,0x00000020,0x20202020,0x00000020,
                0x201D1D1D,0x20202020,0x201D1D1D,0x20202020,0x1D1D1D1D,0x20202020,0x1D1D1D1D,0x00202020,
                0x1D1D1D1D,0x00000000,0x00001D1D,0x00000000,0x0000001D,0x00000000,0x00000000,0x00000000,
                0x1D202020,0x00002020,0x201D1D20,0x00002020,0x2020201D,0x00000020,0x20202000,0x00000020,
                0x1D1D1D00,0x0000001D,0x1D1D1D00,0x0000001D,0x1D1D1D00,0x001D1D1D,0x1D1D1D00,0x001D1D1D,

                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x20000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x20202020,0x00000000,
                0x00000000,0x20202000,0x00000000,0x20202020,0x00000000,0x20202020,0x00000000,0x1F1E1E1E,
                0x1E000000,0x1F1E1F1F,0x1E1E0000,0x1E1E1F1F,0x1E1E0000,0x1F1F1F1F,0x1E000000,0x1F1F1F1E,
                0x1D202020,0x00000000,0x1D1D2020,0x00000000,0x20202020,0x00202020,0x1F1F1E1F,0x0000001F,
                0x1F1E1E1F,0x1F1F1F1F,0x1E1F1F1F,0x1F1F1F1F,0x1E1E1E1F,0x001E1E1E,0x1D1D1F1F,0x1F1F1F1F,

                0x00000000,0x1F1F1D00,0x00000000,0x1D20201D,0x1D000000,0x1D1D2020,0x1D000000,0x1D1D1D20,
                0x00000000,0x1D1D2020,0x00000000,0x20202020,0x00000000,0x20202020,0x20000000,0x20202020,
                0x1F1D1D1D,0x001F1F1F,0x1D1D1D1D,0x00001F1F,0x1D1D1D1D,0x0000001F,0x1D1D1D1D,0x00000000,
                0x1D202020,0x0000001D,0x20202020,0x0000001D,0x20201D20,0x00000020,0x20202020,0x00000020,
                0x20000000,0x20202020,0x201D0000,0x20202020,0x201D1D1D,0x1D1D2020,0x1D1D1D1D,0x20202020,
                0x1D1D1D1D,0x0000201D,0x1D1D1D00,0x00000000,0x1D1D1D00,0x00000000,0x1D1D0000,0x0000001D,
                0x1D202020,0x1D1D1D1D,0x1D202020,0x1D1D1D1D,0x1D202020,0x1D1D1D1D,0x1D000000,0x1D1D1D1D,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
        };

//}}BLOCK(enemy_big)


#endif //GBA_SPRITE_ENGINE_PROJECT_MARIO_H
