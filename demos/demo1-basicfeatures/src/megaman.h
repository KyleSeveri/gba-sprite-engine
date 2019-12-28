//
// Created by kyles on 26/12/2019.
//

#ifndef GBA_SPRITE_ENGINE_PROJECT_MEGAMAN_H
#define GBA_SPRITE_ENGINE_PROJECT_MEGAMAN_H

const unsigned int megamanTiles[768] __attribute__((aligned(4)))=
        {
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x02000000,
                0x00000000,0x00010101,0x01000000,0x01010101,0x01000000,0x01010101,0x01020000,0x01010101,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000002,0x00000000,
                0x00000202,0x00000000,0x00000000,0x00000000,0x01020200,0x00000000,0x01000001,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

                0x00000000,0x00000000,0x00000000,0x02000000,0x00000000,0x02020200,0x00000000,0x02020201,
                0x00000000,0x02010101,0x00000000,0x00010101,0x00000000,0x00010100,0x00000000,0x01010000,
                0x01020000,0x04040301,0x01020002,0x00040403,0x01000202,0x00040403,0x01000202,0x04040303,
                0x00020200,0x00000301,0x02020001,0x03030300,0x02000101,0x00000002,0x02000101,0x02020202,
                0x04010104,0x00000000,0x04000300,0x00000000,0x04000300,0x00000000,0x03040304,0x00000000,
                0x00030000,0x00020200,0x02000303,0x00020202,0x02020000,0x00020202,0x00000202,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00010101,0x00000000,
                0x02020201,0x00000200,0x01010101,0x00000100,0x00010101,0x00000000,0x00000000,0x00000000,

                0x00000000,0x01000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x02000000,0x00000000,0x02010000,0x00000000,0x01010100,0x01000000,0x01010101,
                0x02020001,0x02020202,0x02010100,0x02020202,0x01010100,0x01010101,0x01010102,0x02010101,
                0x01010202,0x02020101,0x00020202,0x02020200,0x00000202,0x01010000,0x00000001,0x01010000,
                0x00000002,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000002,0x00000000,0x00000101,0x00000000,0x00000101,0x00000000,0x00000001,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

                0x01010100,0x01010101,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x01010100,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x01010101,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x02000000,
                0x00000000,0x00010101,0x01000000,0x01010101,0x01000000,0x01010101,0x01020000,0x01010101,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000002,0x00000000,
                0x00000202,0x00000000,0x00000000,0x00000000,0x01020200,0x00000000,0x01000001,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

                0x00000000,0x00000000,0x00000000,0x02000000,0x00000000,0x02020200,0x00000000,0x02020201,
                0x00000000,0x02010101,0x00000000,0x00010101,0x00000000,0x00010100,0x00000000,0x01010000,
                0x01020000,0x03030301,0x01020002,0x03030303,0x01000202,0x00000003,0x01000202,0x03030303,
                0x00020200,0x00000301,0x02020001,0x03030300,0x02000101,0x00000002,0x02000101,0x02020202,
                0x03010103,0x00000000,0x03030303,0x00000000,0x00000300,0x00000000,0x03030303,0x00000000,
                0x00030000,0x00020200,0x02000303,0x00020202,0x02020000,0x00020202,0x00000202,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00010101,0x00000000,
                0x02020201,0x00000200,0x01010101,0x00000100,0x00010101,0x00000000,0x00000000,0x00000000,

                0x00000000,0x01000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x02000000,0x00000000,0x02010000,0x00000000,0x01010100,0x01000000,0x01010101,
                0x02020001,0x02020202,0x02010100,0x02020202,0x01010100,0x01010101,0x01010102,0x02010101,
                0x01010202,0x02020101,0x00020202,0x02020200,0x00000202,0x01010000,0x00000001,0x01010000,
                0x00000002,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000002,0x00000000,0x00000101,0x00000000,0x00000101,0x00000000,0x00000001,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

                0x01010100,0x01010101,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x01010100,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x01010101,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x02020000,
                0x01000000,0x02000101,0x01010000,0x00010101,0x01010000,0x00010101,0x01010200,0x01010101,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000002,0x00000000,0x00000000,0x00000000,0x00010202,0x00000000,0x00010000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

                0x00000000,0x00000000,0x00000000,0x02020000,0x00000000,0x02020202,0x01000000,0x02020202,
                0x01000000,0x00020101,0x01000000,0x01000101,0x00000000,0x01000101,0x00000000,0x01010100,
                0x01010200,0x04040403,0x03010200,0x00000404,0x03010002,0x00000404,0x03010002,0x04040403,
                0x01000202,0x00000003,0x00020200,0x03030303,0x02020001,0x00000000,0x02020001,0x02020202,
                0x00040101,0x00000000,0x00040003,0x00000000,0x00040003,0x00000000,0x00030403,0x01000000,
                0x00000300,0x01000202,0x02020003,0x01000202,0x02020200,0x01000202,0x00000002,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000101,0x00000000,
                0x00020202,0x00000002,0x00010101,0x00000001,0x00000101,0x00000000,0x00000000,0x00000000,

                0x00000000,0x01010000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x02000000,
                0x00000000,0x02020000,0x00000000,0x02020100,0x00000000,0x01010100,0x01000000,0x01010101,
                0x02020200,0x02020202,0x02020101,0x00020202,0x01010101,0x00010101,0x01010101,0x00020101,
                0x01010102,0x02020201,0x00000202,0x01020202,0x00000202,0x01010000,0x00000001,0x01010000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000001,0x00000000,0x00000101,0x00000000,0x00000001,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

                0x01010100,0x01010101,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x01010100,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x01010101,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
        };

//}}BLOCK(megaman)
#endif //GBA_SPRITE_ENGINE_PROJECT_MEGAMAN_H