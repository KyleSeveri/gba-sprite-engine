//
// Created by Wouter Groeneveld on 28/07/18.
//

#ifndef GBA_SPRITE_ENGINE_BACKGROUND_H
#define GBA_SPRITE_ENGINE_BACKGROUND_H
#define MAPLAYOUT_64x64 3
#define MAPLAYOUT_32x64 2
#define MAPLAYOUT_64x32 1
#define MAPLAYOUT_32x32 0


#include <libgba-sprite-engine/gba/tonc_types.h>
#include <vector>

#define MAPLAYOUT_32X32 0
#define MAPLAYOUT_32X64 1
#define MAPLAYOUT_64X32 2
#define MAPLAYOUT_64X64 3

class Background {
private:
    void buildRegister();
    u32 getBgControlRegisterIndex();

protected:
    const void *data;
    const void *map;
    int size, bgIndex;
    int mapSize, mapLayout;
    int screenBlockIndex, charBlockIndex;
    int scrollX, scrollY;
    std::vector<unsigned short int> mapData;

public:
    const int getScreenBlock() { return screenBlockIndex; }
    const int getCharBlock() { return charBlockIndex; }
    void useMapScreenBlock(int block) { screenBlockIndex = block; }
    void scroll(int x, int y);
    void scrollSpeed(int dx, int dy);
    int getScrollX() {return scrollX;}
    int getScrollY() {return scrollY;}
    void setScrollX(int scrollX);
    void setScrollY(int scrollY);

    const std::vector<unsigned short int> &getMapData() const;

    void setMapData(const std::vector<unsigned short int> &mapData);


    Background(int bgIndex, const void *data, int size, const void* map, int mapSize, int screenBlockIndex, int charBlockIndex, int mapLayout)
            : Background(bgIndex, data, size, map, mapSize) {
        this->screenBlockIndex = screenBlockIndex;
        this->charBlockIndex = charBlockIndex;
        this->mapLayout = mapLayout;
    }

    Background(int bgIndex, const void *data, int size, const void* map, int mapSize) : data(data), bgIndex(bgIndex), size(size), map(map), mapLayout(MAPLAYOUT_32X32),
                                                                                        screenBlockIndex(0), charBlockIndex(bgIndex), mapSize(mapSize) {}
    virtual void persist();
    void updateMap(const void* map);
    void clearMap();
    void clearData();
};


#endif //GBA_SPRITE_ENGINE_BACKGROUND_H
