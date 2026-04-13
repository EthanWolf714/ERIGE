#pragma once

#include <defines.h>
#include <game_types.h>

struct game_state {
    f32 delta_time;
};

//no game class
//game data is defined in game_types.h in a game struct
// that instance is then passed  to methods

b8 game_initialize(game* game_inst);

b8 game_update(game* game_inst, f32 delta_time);

b8 game_render(game* game_inst, f32 delta_time);

void game_on_resize(game* game_inst, u32 width, u32 height);
