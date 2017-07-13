#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "shape.h"

// like abRectCheck, but excludes a triangle
int 
abSlicedRectCheck(const AbRect *rect, const Vec2 *centerPos, const Vec2 *pixel)
{
  Vec2 relPos;
  vec2Sub(&relPos, pixel, centerPos); /* vector from center to pixel */

  /* reject pixels in slice */
  if (relPos.axes[0] >= 0 && relPos.axes[1]/2 < relPos.axes[1]) 
    return 0;
  else
    return abRectCheck(rect, centerPos, pixel);
}

AbRect rect10 = {abRectGetBounds, abSlicedRectCheck, 15,15};;


Region fence = {{15,25}, {SHORT_EDGE_PIXELS-10, LONG_EDGE_PIXELS-10}};


#define numLayers 2
Layer layer1 = {
  (AbShape *)&rect10,
  {screenWidth/2, screenHeight/2}, /* position */
  {0,0}, {0,0},				    /* last & next pos */
  COLOR_BLACK,
  0,
};

u_int bgColor = COLOR_BLUE;

int
main()
{
  configureClocks();
  
  lcd_init();
  
  Vec2 rectPos = screenCenter, circlePos = {30,screenHeight};

  clearScreen(COLOR_BLUE);
  
  layerDraw(&layer1);
  
}


