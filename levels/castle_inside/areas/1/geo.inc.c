const GeoLayout Hms_selroom_switchmap01[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_a_mesh),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_inside_gfx_sel_a_a_mesh),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

const GeoLayout Hms_selroom_switchmap09[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_a_mesh),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_inside_gfx_sel_a_a_mesh),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_c_mesh),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, gfx_sr_mipmap),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

const GeoLayout Hms_selroom_switchmap03[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_c_mesh),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, gfx_sr_mipmap),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

const GeoLayout Hms_selroom_switchmap10[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_a_mesh),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_inside_gfx_sel_a_a_mesh),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_d_mesh),
      GEO_ASM(  0, geo_painting_update),
      GEO_ASM(0, geo_painting_draw),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

const GeoLayout Hms_selroom_switchmap04[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_d_mesh),
      GEO_ASM(  0, geo_painting_update),
      GEO_ASM(0, geo_painting_draw),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

const GeoLayout Hms_selroom_switchmap11[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_a_mesh),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_inside_gfx_sel_a_a_mesh),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_e_mesh),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_inside_gfx_sel_e_a_mesh),
      GEO_ASM(  0, geo_painting_update),
      GEO_ASM(1, geo_painting_draw),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

const GeoLayout Hms_selroom_switchmap05[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_e_mesh),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_inside_gfx_sel_e_a_mesh),
      GEO_ASM(  0, geo_painting_update),
      GEO_ASM(1, geo_painting_draw),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

const GeoLayout Hms_selroom_switchmap13[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_a_mesh),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_inside_gfx_sel_a_a_mesh),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_g_mesh),
      GEO_ASM(  0, geo_painting_update),
      GEO_ASM(3, geo_painting_draw),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

const GeoLayout Hms_selroom_switchmap07[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_g_mesh),
      GEO_ASM(  0, geo_painting_update),
      GEO_ASM(3, geo_painting_draw),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

const GeoLayout Hms_selroom_switchmap12[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_a_mesh),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_inside_gfx_sel_a_a_mesh),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_f_mesh),
      GEO_ASM(  0, geo_painting_update),
      GEO_ASM(2, geo_painting_draw),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

const GeoLayout Hms_selroom_switchmap06[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_f_mesh),
      GEO_ASM(  0, geo_painting_update),
      GEO_ASM(2, geo_painting_draw),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

const GeoLayout Hms_selroom_switchmap08[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_a_mesh),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_inside_gfx_sel_a_a_mesh),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_b_mesh),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

const GeoLayout Hms_selroom_switchmap02[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_gfx_sel_b_mesh),
   GEO_CLOSE_NODE(),
   GEO_RETURN(),
};

const GeoLayout castle_geo[] = {
   GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND_COLOR(0x0001),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 7000, geo_camera_fov),
         GEO_OPEN_NODE(),
            GEO_CAMERA(13, 0, 2000, 6000, 0, 0, 0, geo_camera_main),
            GEO_OPEN_NODE(),
               GEO_SWITCH_CASE(13, geo_switch_area),
               GEO_OPEN_NODE(),
                  GEO_BRANCH(1, Hms_selroom_switchmap01),
                  GEO_BRANCH(1, Hms_selroom_switchmap02),
                  GEO_BRANCH(1, Hms_selroom_switchmap03),
                  GEO_BRANCH(1, Hms_selroom_switchmap04),
                  GEO_BRANCH(1, Hms_selroom_switchmap05),
                  GEO_BRANCH(1, Hms_selroom_switchmap06),
                  GEO_BRANCH(1, Hms_selroom_switchmap07),
                  GEO_BRANCH(1, Hms_selroom_switchmap08),
                  GEO_BRANCH(1, Hms_selroom_switchmap09),
                  GEO_BRANCH(1, Hms_selroom_switchmap10),
                  GEO_BRANCH(1, Hms_selroom_switchmap11),
                  GEO_BRANCH(1, Hms_selroom_switchmap12),
                  GEO_BRANCH(1, Hms_selroom_switchmap13),
               GEO_CLOSE_NODE(),
               GEO_RENDER_OBJ(),
               GEO_ASM(0, geo_envfx_main),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
