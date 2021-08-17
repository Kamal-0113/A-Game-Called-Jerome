#include "Sprites.h"

// Nothing doing in the constructor and destructor
Sprites::Sprites()
{

}
Sprites::~Sprites()
{

}

int *Sprites::get_play() // Contains play button sprite
{
    static int _play [8][24] = {
        // 8x24 array for sprite
        { 1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,0,1,1,1,1,0 },
        { 1,0,0,0,0,1,1,0,1,0,0,1,1,0,1,1,0,1,1,1,0,0,1,1 },
        { 1,1,0,1,1,0,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,1,0,1 },
        { 0,1,0,1,1,0,1,0,1,1,1,0,1,1,1,0,1,1,0,1,1,0,1,1 },
        { 0,1,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,1,0,1,0,0,0,0 },
        { 0,1,0,1,1,1,1,0,1,1,1,0,1,1,1,1,0,1,0,1,0,0,0,0 },
        { 0,1,0,1,0,0,1,0,0,0,0,1,1,0,0,1,0,1,0,1,0,0,0,0 },
        { 0,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0 },
    };
    return *_play; // Return pointer to array
}

int *Sprites::get_title() // Contains title icon sprite
{
    static int _title [15][48] = {
        // 15x48 array for sprite
        { 0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,0,0,1,1,1,1,0 },
        { 0,0,0,1,0,0,0,0,0,0,1,1,1,0,1,0,0,0,0,1,1,0,1,1,1,1,1,0,0,0,0,1,1,0,1,1,0,0,0,0,1,0,1,1,0,0,1,0 },
        { 0,0,0,1,0,1,0,0,1,1,1,1,0,0,1,0,1,1,1,0,1,1,1,0,0,0,1,1,0,1,1,0,1,1,1,0,1,1,0,1,1,1,1,0,0,1,1,0 },
        { 0,0,0,1,1,1,0,0,1,0,0,0,0,1,1,0,1,1,1,0,1,1,0,1,1,1,0,1,1,0,1,1,0,1,0,1,1,0,1,0,0,0,0,0,1,1,0,0 },
        { 0,0,0,0,0,1,0,0,1,0,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,0,0,0 },
        { 0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,0,0,0,0,1,0,1,1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,0,0,0,0,1,1,0,0 },
        { 0,0,0,0,0,1,0,0,1,0,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,0,0,0 },
        { 0,0,0,1,1,1,0,0,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0,1,1,1,0,1,1,0,1,1,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,0 },
        { 0,0,1,1,0,0,0,1,1,0,0,0,0,0,1,0,1,1,1,0,1,1,1,0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,0,0,0,0,1,0,0 },
        { 0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0 },
        { 0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
        { 0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 },
        { 0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1 },
    };
    return *_title;
}
int *Sprites::get_settings() // Contains settings button sprite
{

    static int _settings [8][41] = {
        // 8x41 array for sprite
        { 0,0,0,0,1,1,1,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1 },
        { 0,1,1,1,1,0,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,0,1,1,1,0,0,0,0,1,1,1,1,0,1 },
        { 1,1,0,0,0,1,1,0,0,0,1,1,0,1,0,0,0,0,0,1,0,1,0,1,0,1,0,1,1,0,1,0,1,1,1,1,0,0,0,1,1 },
        { 1,0,1,1,1,1,1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,0,0,1,1,0,1,0,1,1,1,1,0,1,0,1,1,1,1,0 },
        { 1,1,0,0,0,1,1,0,0,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,0,0,1,1,1,0,0,0,1,1 },
        { 1,1,1,1,1,0,1,0,1,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,1,0,1,1,1,1,1,1,0,1 },
        { 1,0,0,0,0,1,1,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,0,0,0,1,1,0,0,0,0,0,1,1 },
        { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0 },
    };

    return *_settings;
}

int *Sprites::get_arrow() // Contains arrow icon sprite
{
    static int _arrow [7][7] = {
        // 7x7 array for sprite
        { 0,0,1,1,1,0,0 },
        { 0,0,1,0,1,0,0 },
        { 0,0,1,0,1,0,0 },
        { 1,1,1,0,1,1,1 },
        { 0,1,1,0,1,1,0 },
        { 0,0,1,1,1,0,0 },
        { 0,0,0,1,0,0,0 },

    };
    return *_arrow; // Return pointer to array
}

int *Sprites::get_j() // Contains J icon sprite
{
    static int _j [6][6] = {
        // 6x6 array for sprite
        { 1,1,1,1,1,1 },
        { 1,0,0,1,1,0 },
        { 0,0,0,1,1,0 },
        { 0,0,0,1,1,0 },
        { 0,1,1,1,0,0 },
        { 1,0,0,0,0,0 },

    };
    return *_j; // Return pointer to array
}

int *Sprites::get_cpu() // Contains CPU icon sprite
{
    static int _cpu [6][14] = {
        // 6x14 array for sprite
        { 1,1,1,1,0,1,1,1,1,0,1,0,0,1 },
        { 1,1,1,1,0,1,1,1,1,0,1,0,0,1 },
        { 1,0,0,0,0,1,0,0,1,0,1,0,0,1 },
        { 1,0,0,0,0,1,1,1,1,0,1,0,0,1 },
        { 1,0,0,0,0,1,0,0,0,0,1,0,0,1 },
        { 1,1,1,1,0,1,0,0,0,0,1,1,1,1 },

    };
    return *_cpu; // Return pointer to array
}

int *Sprites::get_jerome_ko() // Contains Jerome KO icon sprite
{
    static int _j_ko [10][46] = {
        // 10x46 array for sprite
        { 0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,0,0,1,1,1,1,0 },
        { 0,1,0,0,0,0,0,0,1,1,1,0,1,0,0,0,0,1,1,0,1,1,1,1,1,0,0,0,0,1,1,0,1,1,0,0,0,0,1,0,1,1,0,0,1,0 },
        { 0,1,0,1,0,0,1,1,1,1,0,0,1,0,1,1,1,0,1,1,1,0,0,0,1,1,0,1,1,0,1,1,1,0,1,1,0,1,1,1,1,0,0,1,1,0 },
        { 0,1,1,1,0,0,1,0,0,0,0,1,1,0,1,1,1,0,1,1,0,1,1,1,0,1,1,0,1,1,0,1,0,1,1,0,1,0,0,0,0,0,1,1,0,0 },
        { 0,0,0,1,0,0,1,0,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,0,0,0 },
        { 0,0,0,1,0,0,1,0,0,0,0,1,1,0,0,0,0,0,1,0,1,1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,0,0,0,0,1,0,0,0 },
        { 0,0,0,1,0,0,1,0,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,0,0,0 },
        { 0,1,1,1,0,0,1,0,1,1,1,1,1,0,1,1,1,0,1,1,0,1,1,1,0,1,1,0,1,1,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,0 },
        { 0,1,0,0,0,1,1,0,0,0,0,0,1,0,1,1,1,0,1,1,1,0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,0,0,0,0,1,0,0 },
        { 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0 },

    };
    return *_j_ko; // Return pointer to array
}
int *Sprites::get_ko_icon() // Contains KO icon sprite
{
    static int _ko [9][20] = {
        // 9x20 array for sprite
        { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0 },
        { 1,0,0,0,1,1,0,1,1,1,1,1,1,0,0,0,1,1,0,0 },
        { 1,0,1,0,1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,0 },
        { 1,1,1,0,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0 },
        { 0,0,1,0,0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,0 },
        { 0,0,1,0,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0 },
        { 0,0,1,0,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,1 },
        { 0,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1 },
        { 0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },

    };
    return *_ko; // Return pointer to array
}

int *Sprites::get_cpu_ko() // Contains CPU KO icon sprite
{
    static int _cpu_ko [9][21] = {
        // 9x21 array for sprite
        { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
        { 1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1,1,0,1 },
        { 1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1,1,0,1 },
        { 1,0,1,1,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1 },
        { 1,0,1,1,1,1,1,0,0,0,0,0,1,0,1,1,1,0,1 },
        { 1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1 },
        { 1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1 },
        { 1,0,0,0,0,0,1,0,1,1,1,1,1,0,0,0,0,0,1 },
        { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },

    };
    return *_cpu_ko; // Return pointer to array
}

int *Sprites::get_background() // Contains background sprite
{
    static int _background [50][100] = {
        // 50x100 array for sprite
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },


    };
    return *_background; // Return pointer to array
}

int *Sprites::get_life_icon() // Contains life icon sprite
{
    static int _life [4][5] = {
        // 4x5 array for sprite
        { 1,1,0,1,1 },
        { 1,1,1,1,1 },
        { 0,1,1,1,0 },
        { 0,0,1,0,0 },

    };
    return *_life; // Return pointer to array
}

int *Sprites::get_brightness_icon() // Contains life icon sprite
{
    static int _brightness [11][11] = {
        // 11x11 array for sprite
        { 1,0,0,0,0,1,0,0,0,0,1 },
        { 0,1,0,0,0,1,0,0,0,1,0 },
        { 0,0,0,0,0,0,0,0,0,0,0 },
        { 0,0,0,0,1,1,1,0,0,0,0 },
        { 0,0,0,1,1,1,1,1,0,0,0 },
        { 1,1,0,1,1,1,1,1,0,1,1 },
        { 0,0,0,1,1,1,1,1,0,0,0 },
        { 0,0,0,0,1,1,1,0,0,0,0 },
        { 0,0,0,0,0,0,0,0,0,0,0 },
        { 0,1,0,0,0,1,0,0,0,1,0 },
        { 1,0,0,0,0,1,0,0,0,0,1 },
    };
    return *_brightness; // Return pointer to array
}
int *Sprites::get_contrast_icon() // Contains life icon sprite
{
    static int _contrast [7][7] = {
        // 11x11 array for sprite
        { 0,0,1,1,1,0,0 },
        { 0,1,0,1,1,1,0 },
        { 1,0,0,1,1,1,1 },
        { 1,0,0,1,1,1,1 },
        { 1,0,0,1,1,1,1 },
        { 0,1,0,1,1,1,0 },
        { 0,0,1,1,1,0,0} ,
    };
    return *_contrast; // Return pointer to array
}