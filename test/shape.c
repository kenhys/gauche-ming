/* -*- mode:c coding:utf-8 -*- */
#include <stdio.h>
#include "ming.h"

/*
  see http://www.opaque.net/ming/examples/example.php?name=shape
*/

int main(int argc, char *argv[])
{
  SWFShape shape = newSWFShape();
  SWFMovie movie = newSWFMovie();
  SWFShape_setLine(shape, 4, 0xff, 0, 0, 0xff);

  SWFShape_setRightFillStyle(shape, SWFShape_addSolidFillStyle(shape, 0xff, 0, 0, 0xff));
  SWFShape_movePenTo(shape, 10, 10);
  SWFShape_drawLineTo(shape, 310, 10);
  SWFShape_drawLineTo(shape, 310, 230);
  SWFShape_drawCurveTo(shape, 10, 230, 10, 10);

  SWFMovie_setDimension(movie, 320, 240);
  SWFMovie_setRate(movie, 12.0);
  SWFMovie_add(movie, shape);
  SWFMovie_nextFrame(movie);

  SWFMovie_save(movie, "shape.swf");
}
