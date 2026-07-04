#ifndef CASTLE_INSIDE_HEADER_H
#define CASTLE_INSIDE_HEADER_H

#include "types.h"
#include "game/moving_texture.h"

// geo
extern const GeoLayout castle_geo[];
extern const GeoLayout castle_geo_000F18[]; // Trap Door

// leveldata
extern struct Painting ccm_painting;
extern struct Painting wf_painting;
extern struct Painting jrb_painting;
extern struct Painting lll_painting;
extern const Gfx trapdoor_mesh[];            // Trap Door
extern Gfx castle_inside_gfx_sel_a_mesh[];   // Lobby Room
extern Gfx castle_inside_gfx_sel_a_a_mesh[]; // Lobby Room (Decals)
extern Gfx castle_inside_gfx_sel_b_mesh[];   // Basement Hallway
extern Gfx castle_inside_gfx_sel_c_mesh[];   // Bowser Hallway
extern Gfx gfx_sr_mipmap[];                  // Bowser Hallway (Mipmap Painting)
extern Gfx castle_inside_gfx_sel_d_mesh[];   // Mountain Room
extern Gfx castle_inside_gfx_sel_e_mesh[];   // Fire Buble Room
extern Gfx castle_inside_gfx_sel_e_a_mesh[]; // Fire Bubble Room (Decals)
extern Gfx castle_inside_gfx_sel_f_mesh[];   // Snow Slider Room
extern Gfx castle_inside_gfx_sel_g_mesh[];   // Water Land Room

extern const Collision castle_inside_collision[];
extern const u8 castle_inside_collision_rooms[];
extern const Collision inside_castle_seg7_collision_floor_trap[]; // Trap Door

/*  don't forget to fully remove these later:

extern const Collision inside_castle_seg7_collision_star_door[];
extern const Collision inside_castle_seg7_collision_water_level_pillar[];
extern const Trajectory *const inside_castle_seg7_trajectory_mips[];

*/

// script
extern const LevelScript level_castle_inside_entry[];

#endif
