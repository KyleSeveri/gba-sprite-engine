//
// Created by kyles on 28/12/2019.
//

#ifndef GBA_SPRITE_ENGINE_PROJECT_ACHTERGROND2_H
#define GBA_SPRITE_ENGINE_PROJECT_ACHTERGROND2_H


//{{BLOCK(walls)

//======================================================================
//
//	walls, 512x256@8,
//	+ 58 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32
//	Total size: 3712 + 4096 = 7808
//
//	Time-stamp: 2019-12-29, 16:33:31
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.6
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned int wallsTiles[928] __attribute__((aligned(4)))=
        {
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
                0x04040404,0x04040404,0x03020104,0x04030303,0x02020104,0x04030202,0x01010104,0x04020201,
                0x04040404,0x04040404,0x04030303,0x03020104,0x04030202,0x02020104,0x04020201,0x01010104,
                0x04010101,0x01010104,0x03030304,0x04030303,0x02020203,0x01020202,0x02020203,0x01010202,
                0x01010104,0x01010101,0x04030303,0x03030304,0x01020202,0x02020203,0x01010202,0x02020203,
                0x01010101,0x01010104,0x02020104,0x02030302,0x02010104,0x02020202,0x01010104,0x01010101,
                0x02030302,0x02020104,0x02020202,0x02010104,0x01010101,0x01010104,0x02020104,0x02030302,

                0x04040404,0x04040404,0x03030204,0x04020303,0x02020304,0x04020202,0x02020204,0x04020202,
                0x02020204,0x04020202,0x02020204,0x04010202,0x01010204,0x04040101,0x04040404,0x04040404,
                0x02020201,0x02020202,0x03030102,0x03030303,0x02010102,0x02030202,0x03010102,0x02020202,
                0x02010102,0x02020202,0x01010102,0x02020202,0x02010102,0x02020202,0x02020102,0x02020202,
                0x02020202,0x01020202,0x03030303,0x02020303,0x02030202,0x02030203,0x02020202,0x02030302,
                0x02020202,0x02030302,0x02020202,0x02030202,0x02020202,0x02030202,0x02020202,0x02030202,
                0x04040404,0x04040404,0x02020104,0x03030302,0x02010104,0x02020202,0x01010404,0x01010101,
                0x04040404,0x04040404,0x03030303,0x04010202,0x02020202,0x04010202,0x01010101,0x04010101,

                0x04040404,0x04040404,0x03030303,0x04010202,0x02020202,0x04010202,0x01010101,0x04010101,
                0x04040404,0x04040404,0x02020104,0x03030302,0x02010104,0x02020202,0x01010404,0x01010101,
                0x03030302,0x04020202,0x02020102,0x04020202,0x04040101,0x04010401,0x04040404,0x04040404,
                0x04020202,0x03030302,0x04020202,0x02020102,0x04010401,0x04040101,0x04040404,0x04040404,
                0x03030302,0x04020202,0x02020102,0x04020202,0x04040101,0x04010401,0x04040404,0x04040404,
                0x04020202,0x03030302,0x04020202,0x02020102,0x04010401,0x01010101,0x04040404,0x04040404,
                0x04040404,0x04040404,0x02030204,0x04010302,0x02020104,0x04020201,0x01040404,0x04010101,
                0x04040404,0x04040404,0x04020203,0x03020404,0x04020102,0x02020304,0x04010401,0x01010104,

                0x04040404,0x04040404,0x03030204,0x04020203,0x02030104,0x04020202,0x01010404,0x04010104,
                0x04040404,0x04040404,0x04010203,0x03020304,0x04010102,0x01020204,0x04010101,0x01010104,
                0x01040202,0x02020104,0x04040101,0x01010104,0x03040404,0x04040403,0x02020402,0x02040302,
                0x02020104,0x02040202,0x01010104,0x04040101,0x04040403,0x03040404,0x02040302,0x02020402,
                0x02040202,0x02020104,0x04040101,0x02010104,0x03040404,0x04040403,0x02020402,0x02040302,
                0x02020104,0x02040202,0x01010104,0x04040101,0x04040403,0x03040404,0x01040302,0x02020401,
                0x04040405,0x04040404,0x03030404,0x02020303,0x02030304,0x02020202,0x02020304,0x02020202,
                0x02020204,0x02020202,0x02020204,0x02020202,0x02020204,0x02020202,0x02020204,0x02020202,

                0x04040404,0x05040404,0x02020202,0x04040202,0x02020202,0x04020202,0x02020202,0x04020202,
                0x02020202,0x04020202,0x02020202,0x04020202,0x02020202,0x04020202,0x02020202,0x04020202,
                0x01010302,0x02020101,0x01030202,0x02020201,0x01020202,0x02020101,0x01010202,0x02010101,
                0x02020101,0x01010302,0x02020201,0x01030202,0x02020101,0x01020202,0x02010101,0x01010202,
                0x02020204,0x02020204,0x02020201,0x02020201,0x02020201,0x02020201,0x04010101,0x04010101,
                0x02040202,0x02040202,0x02010202,0x02010202,0x02010202,0x02010202,0x01010401,0x01010401,
                0x02020204,0x03030304,0x02020201,0x02020201,0x02020201,0x02020201,0x04010101,0x04010101,
                0x02040303,0x02040202,0x02010202,0x02010202,0x02010202,0x02010202,0x01010401,0x01010401,

                0x02020204,0x03030304,0x02020201,0x02020201,0x02020201,0x02020201,0x04010101,0x04010101,
                0x02040202,0x03040202,0x02010202,0x02010202,0x02010202,0x02010202,0x01010401,0x01010401,
                0x03030304,0x03030304,0x02020201,0x02020201,0x02020201,0x02020201,0x04010101,0x04010101,
                0x03040303,0x03040303,0x02010202,0x02010202,0x02010202,0x02010202,0x01010401,0x01010401,
                0x03030304,0x02020204,0x02020201,0x02020201,0x02020201,0x02020201,0x04010101,0x04010101,
                0x03040202,0x03040303,0x02010202,0x02010202,0x02010202,0x02010202,0x01010401,0x01010401,
                0x03030304,0x02020204,0x02020201,0x02020201,0x02020201,0x02020201,0x04010101,0x04010101,
                0x03040303,0x02040303,0x02010202,0x02010202,0x02010202,0x02010202,0x01010401,0x01010401,

                0x01010101,0x01010104,0x03030304,0x04030303,0x02020203,0x01020202,0x02020203,0x01010202,
                0x01010104,0x01010101,0x04030303,0x03030304,0x01020202,0x02020203,0x01010202,0x02020203,
                0x02010104,0x02020202,0x01010104,0x01010101,0x02030302,0x02020104,0x02020202,0x02010104,
                0x01010101,0x01010104,0x02020104,0x02030302,0x02010104,0x02020202,0x01010104,0x01010101,
                0x04040404,0x04040404,0x04020303,0x03030204,0x04020202,0x02020304,0x04020202,0x02020204,
                0x04020202,0x02020204,0x04010202,0x02020204,0x04040101,0x01010204,0x04040404,0x04040404,
                0x01010102,0x02020202,0x02010102,0x02020202,0x02010102,0x02020202,0x02010102,0x02020202,
                0x01020102,0x02010202,0x02010102,0x01010201,0x01010102,0x01010101,0x02020201,0x02020202,

                0x02020202,0x02030302,0x02020202,0x02030202,0x02020202,0x02030202,0x02020202,0x02030201,
                0x02010201,0x02030202,0x01010101,0x02030101,0x01010101,0x02020101,0x02020202,0x01020202,
                0x04040404,0x04040404,0x02020204,0x04020102,0x01010204,0x04030202,0x01010404,0x04040401,
                0x04040404,0x04040404,0x04010203,0x02020404,0x04020101,0x03030204,0x04010101,0x01010104,
                0x04040404,0x04040404,0x03010204,0x04020202,0x02030104,0x04010301,0x04040404,0x04040404,
                0x04040404,0x04040404,0x04030202,0x02020204,0x04010102,0x03010204,0x04010101,0x04040404,
                0x02040202,0x02020104,0x04040101,0x01010104,0x03040404,0x04040403,0x02020402,0x02040302,
                0x02020104,0x02040202,0x01010104,0x04040101,0x04040403,0x03040404,0x01040302,0x02020401,

                0x02020202,0x04020202,0x02020202,0x04020202,0x02020202,0x04020202,0x02020202,0x04020202,
                0x02020202,0x04010202,0x02020202,0x04010102,0x01010202,0x04040101,0x04040404,0x05040404,
                0x03030304,0x02020204,0x02020201,0x02020201,0x02020201,0x02020201,0x04010101,0x04010101,
                0x02040202,0x03040202,0x02010202,0x02010202,0x02010202,0x02010202,0x01010401,0x01010401,
                0x03030304,0x02020204,0x02020201,0x02020201,0x02020201,0x02020201,0x04010101,0x04010101,
                0x02040303,0x02040202,0x02010202,0x02010202,0x02010202,0x02010202,0x01010401,0x01010401,
                0x02020204,0x03030304,0x02020201,0x02020201,0x02020201,0x02020201,0x04010101,0x04010101,
                0x03040303,0x02040303,0x02010202,0x02010202,0x02010202,0x02010202,0x01010401,0x01010401,

                0x02020204,0x03030304,0x02020201,0x02020201,0x02020201,0x02020201,0x04010101,0x04010101,
                0x03040202,0x03040303,0x02010202,0x02010202,0x02010202,0x02010202,0x01010401,0x01010401,
                0x03020304,0x03020304,0x02020201,0x02020201,0x02020201,0x02020201,0x04010101,0x04010101,
                0x03040302,0x03040302,0x02010202,0x02010202,0x02010202,0x02010202,0x01010401,0x01010401,
                0x02020304,0x03020202,0x02020201,0x02020202,0x02020201,0x02020202,0x04010101,0x04010101,
                0x03020202,0x02020304,0x02020202,0x02020201,0x02020202,0x02020201,0x04010101,0x04010101,
                0x03030204,0x03030303,0x02020201,0x03020202,0x02020201,0x02020202,0x04010101,0x04010101,
                0x03030303,0x03030204,0x03020202,0x02020201,0x02020202,0x02020201,0x04010101,0x04010101,

                0x03030204,0x02030303,0x02020201,0x02020202,0x02020201,0x02020202,0x04010101,0x04010101,
                0x02030303,0x03030204,0x02020202,0x02020201,0x02020202,0x02020201,0x04010101,0x04010101,
                0x04040404,0x04040404,0x02020104,0x03030302,0x02010104,0x02020202,0x02020104,0x02020202,
                0x02020104,0x02020202,0x02010404,0x02020202,0x01010404,0x02010201,0x04040404,0x04040404,
                0x04040404,0x04040404,0x03030303,0x04010202,0x02020202,0x04020202,0x02020202,0x04010202,
                0x02020202,0x04020202,0x02020202,0x04010202,0x01020101,0x04010201,0x04040404,0x04040404,
                0x04040404,0x04040404,0x02020104,0x02030202,0x02020204,0x02020202,0x02020104,0x02020202,
                0x02020104,0x02020202,0x02010404,0x02020202,0x01010404,0x02010201,0x04040404,0x04040404,

                0x04040404,0x04040404,0x03030203,0x04010203,0x02020202,0x04020303,0x02020202,0x04010202,
                0x02020202,0x04020302,0x02020202,0x04010202,0x01020101,0x04010201,0x04040404,0x04040404,
                0x04040405,0x04040404,0x03030404,0x03030303,0x02030304,0x02020202,0x02020304,0x02020202,
                0x02020104,0x02020202,0x02020404,0x02020202,0x02020104,0x02020202,0x02020104,0x02020202,
                0x04040404,0x05040404,0x03030303,0x04040203,0x02020202,0x04020303,0x02020202,0x04010202,
                0x02020202,0x04020302,0x02020202,0x04010202,0x02020202,0x04010202,0x02020202,0x04010202,
                0x02020104,0x04010303,0x02020201,0x01020202,0x02020101,0x01010202,0x04010101,0x01010101,
                0x01040103,0x03020202,0x02010202,0x02020202,0x01010102,0x02020202,0x01010401,0x01010101,

                0x04040404,0x04040404,0x03020104,0x04010203,0x02010104,0x04010202,0x01010404,0x04010101,
                0x04040404,0x04040404,0x04010203,0x03020104,0x04010202,0x02010104,0x04010101,0x01010404,
                0x04040404,0x04040404,0x03020104,0x04020202,0x02020104,0x04020202,0x01010404,0x04010101,
                0x04040404,0x04040404,0x04020202,0x03020104,0x04020202,0x02020104,0x04010101,0x01010404,
                0x04040404,0x04040404,0x03020204,0x02020303,0x02020204,0x02020202,0x02010104,0x01010202,
                0x04040404,0x04040404,0x02020303,0x03020204,0x02020202,0x02020204,0x01010202,0x02010104,
                0x04040404,0x04040404,0x02020104,0x02020202,0x01010104,0x02020202,0x01010104,0x01010201,
                0x04040404,0x04040404,0x02020202,0x02020204,0x02010202,0x02020104,0x01010101,0x02010104,

                0x04040404,0x04040404,0x02020204,0x02020202,0x02020204,0x02020202,0x02010104,0x01010202,
                0x04040404,0x04040404,0x01010102,0x02020204,0x02010101,0x02020204,0x01010101,0x02010104,
                0x04040404,0x04040404,0x03030303,0x01020203,0x02020202,0x02020202,0x02020202,0x01020202,
                0x02020202,0x02020202,0x02020202,0x01020202,0x02010102,0x01020101,0x04040404,0x04040404,
                0x02020404,0x02020202,0x02020104,0x02020202,0x02020204,0x02020202,0x02020104,0x02020202,
                0x02020104,0x02020202,0x02010404,0x02020202,0x01040404,0x02010201,0x04040405,0x04040404,
                0x02020202,0x04040202,0x02020202,0x04010202,0x02020202,0x04020202,0x02020202,0x04010202,
                0x02020202,0x04010202,0x02020202,0x04010102,0x01010101,0x04040101,0x04040404,0x05040404,

                0x04040404,0x04040404,0x01020204,0x01010202,0x02020104,0x01010202,0x02010104,0x01010202,
                0x04040404,0x04040404,0x01020202,0x02020204,0x02020202,0x02020104,0x01010202,0x01010104,
                0x04040404,0x04040404,0x01020204,0x02020202,0x01020204,0x02020201,0x02010104,0x01010201,
                0x04040404,0x04040404,0x02010202,0x02020204,0x02020202,0x02020204,0x01010202,0x02010104,
        };

const unsigned short wallsMap[2048] __attribute__((aligned(4)))=
        {
                0x0000,0x0000,0x0001,0x0001,0x0002,0x0002,0x0003,0x0003,
                0x0004,0x0004,0x0005,0x0006,0x0007,0x0008,0x0009,0x000A,
                0x000B,0x000C,0x000D,0x000E,0x000F,0x0010,0x0011,0x0011,
                0x0012,0x0012,0x0013,0x0014,0x0015,0x0015,0x0016,0x0017,
                0x0000,0x0000,0x0001,0x0001,0x0018,0x0018,0x0019,0x0019,
                0x001A,0x001A,0x001B,0x001C,0x0007,0x0008,0x0009,0x0009,
                0x001D,0x001E,0x001F,0x000D,0x0C10,0x0020,0x0011,0x0011,
                0x0012,0x0012,0x0021,0x0022,0x0015,0x0015,0x0023,0x0024,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0025,0x0025,0x0026,0x0026,0x0027,0x0027,0x0028,0x0028,
                0x0029,0x002A,0x002B,0x002C,0x002D,0x002E,0x002F,0x002F,
                0x0030,0x0030,0x0031,0x0031,0x0032,0x0032,0x0033,0x0034,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0025,0x0025,0x0026,0x0026,0x0027,0x0027,0x0028,0x0028,
                0x0035,0x0029,0x002C,0x002B,0x0036,0x0037,0x002F,0x002F,
                0x0030,0x0030,0x0031,0x0031,0x0032,0x0032,0x0038,0x0039,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
        };

//}}BLOCK(walls)


#endif //GBA_SPRITE_ENGINE_PROJECT_ACHTERGROND2_H