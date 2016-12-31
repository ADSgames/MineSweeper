#include "init.h"

// Construct state
init::init(){
  // Get graphics resolution
  int width;
  int height;
  get_desktop_resolution( &width, &height);

  // Set graphics mode
  set_gfx_mode( GFX_AUTODETECT_WINDOWED, 640, 640, 0, 0);

  // Title
  set_window_title( "Minesweeper - A.D.S. Games");
}

// Update
void init::update(){
  set_next_state( STATE_INTRO);
}

// Destruct state
init::~init(){

}