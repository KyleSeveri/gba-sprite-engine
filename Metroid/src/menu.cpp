//
// Created by kyles on 27/12/2019.
//

#include <libgba-sprite-engine/sprites/sprite_builder.h>
#include <libgba-sprite-engine/background/text_stream.h>
#include <libgba-sprite-engine/gba/tonc_memdef.h>
#include <libgba-sprite-engine/gba_engine.h>
#include <libgba-sprite-engine/effects/fade_out_scene.h>
#include <libgba-sprite-engine/sprites/sprite.h>
#include "menu.h"

#include "samus_aran.h"
#include "ball.h"
#include "Mario.h"
#include "projectiel.h"
#include "achtergrond.h"
#include "achtergrond2.h"
#include "achtergrond3.h"
#include "sample_sound.h"
#include "Metroid.h"

std::vector<Background *> Menu::backgrounds() {
    return {bg.get(), bg2.get(), /*bg3.get()*/};
}

std::vector<Sprite *> Menu::sprites() {
    return {  metroidObject->getMetroid(), ball_projectiel.get(), enemyObject->getMario(), projectiel.get(), firebolt.get() };
}

void Menu::load() {
    foregroundPalette = std::unique_ptr<ForegroundPaletteManager>(new ForegroundPaletteManager(sharedPal, sizeof(sharedPal)));
    backgroundPalette = std::unique_ptr<BackgroundPaletteManager>(new BackgroundPaletteManager(sharedBackgroundPal, sizeof(sharedBackgroundPal)));

    SpriteBuilder<Sprite> builder;

    metroidBewegen = builder
            .withData(animatie_metroidTiles, sizeof(animatie_metroidTiles))
            .withSize(SIZE_32_64)
            .withAnimated(11, 3)
            .withLocation(50, 50)
            .withinBounds()
            .buildPtr();

    ball_projectiel = builder
            .withData(ballTiles, sizeof(ballTiles))
            .withSize(SIZE_16_16)
            .withLocation(60, 60)
            .withinBounds()
            .buildPtr();

    enemy = builder
            .withData(enemy_bigTiles, sizeof(enemy_bigTiles))
            .withSize(SIZE_16_32)
           // .withAnimated(7, 30)
            .withLocation(80, 50)
            .withinBounds()
            .buildPtr();

    projectiel = builder
            .withData(projectielTiles, sizeof(projectielTiles))
            .withAnimated(5,7)
            .withLocation(70, 40)
            .withSize(SIZE_8_8)
            .withinBounds()
            .buildPtr();

    firebolt = builder
            .withData(fireboltTiles, sizeof(fireboltTiles))
            .withLocation(10, 20)
            .withSize(SIZE_8_8)
            .withinBounds()
            .buildPtr();


    metroidObject = std::unique_ptr<Metroid>(new Metroid(std::move(metroidBewegen)));
    enemyObject = std::unique_ptr<Mario>(new Mario(std::move(enemy)));

    bg = std::unique_ptr<Background>(new Background(1, dungeon_backgroundTiles, sizeof(dungeon_backgroundTiles), dungeon_backgroundMap, sizeof(dungeon_backgroundMap)));
    bg.get()->useMapScreenBlock(29);
    bg2 = std::unique_ptr<Background>(new Background(2, MoonTiles, sizeof(MoonTiles), MoonMap, sizeof(MoonMap)));
    bg2.get()->useMapScreenBlock(26);
    bg3 = std::unique_ptr<Background>(new Background(3, blackTiles, sizeof(blackTiles), blackMap, sizeof(blackMap)));
    //bg3.get()->useMapScreenBlock(4);

    //bg2 = std::unique_ptr<Background>(new Background(1, wallsTiles, sizeof(wallsTiles), wallsMap, sizeof(wallsMap)));
    //bg2.get()->useMapScreenBlock(16);


    engine->enqueueMusic(zelda_music_16K_mono, zelda_music_16K_mono_bytes);
}

void Menu::tick(u16 keys) {
    
    metroidObject->tick(keys);
    enemyObject->tick(keys);
}
