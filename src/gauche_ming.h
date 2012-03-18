/*
 * gauche_ming.h
 */

/* Prologue */
#ifndef GAUCHE_GAUCHE_MING_H
#define GAUCHE_GAUCHE_MING_H

#include <gauche.h>
#include <gauche/extend.h>
#include <gauche/class.h>
#include "ming.h"

SCM_DECL_BEGIN

/*
 * The following entry is a dummy one.
 * Replace it for your declarations.
 */

extern ScmObj test_gauche_ming(void);

#define SCM_BYTE(obj) ((unsigned char)(obj))
#define SCM_BYTE_P(obj) true

typedef struct ScmSWFBitmapRec {
SCM_HEADER;
SWFBitmap h;
} ScmSWFBitmap;

SCM_CLASS_DECL(Scm_SWFBitmapClass);
#define SCM_CLASS_SWF_BITMAP (&Scm_SWFBitmapClass)
#define SCM_SWF_BITMAP(obj) ((ScmSWFBitmap*)(obj))
#define SCM_SWF_BITMAP_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_BITMAP))

typedef struct ScmSWFCharacterRec {
SCM_HEADER;
SWFCharacter h;
} ScmSWFCharacter;

SCM_CLASS_DECL(Scm_SWFCharacterClass);
#define SCM_CLASS_SWF_CHARACTER (&Scm_SWFCharacterClass)
#define SCM_SWF_CHARACTER(obj) ((ScmSWFCharacter*)(obj))
#define SCM_SWF_CHARACTER_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_CHARACTER))

typedef struct ScmSWFDisplayItemRec {
SCM_HEADER;
SWFDisplayItem h;
} ScmSWFDisplayItem;

SCM_CLASS_DECL(Scm_SWFDisplayItemClass);
#define SCM_CLASS_SWF_DISPLAY_ITEM (&Scm_SWFDisplayItemClass)
#define SCM_SWF_DISPLAY_ITEM(obj) ((ScmSWFDisplayItem*)(obj))
#define SCM_SWF_DISPLAY_ITEM_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_DISPLAY_ITEM))

typedef struct ScmSWFFontRec {
SCM_HEADER;
SWFFont h;
} ScmSWFFont;

SCM_CLASS_DECL(Scm_SWFFontClass);
#define SCM_CLASS_SWF_FONT (&Scm_SWFFontClass)
#define SCM_SWF_FONT(obj) ((ScmSWFFont*)(obj))
#define SCM_SWF_FONT_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_FONT))

typedef struct ScmSWFFillRec {
SCM_HEADER;
SWFFill h;
} ScmSWFFill;

SCM_CLASS_DECL(Scm_SWFFillClass);
#define SCM_CLASS_SWF_FILL (&Scm_SWFFillStyleClass)
#define SCM_SWF_FILL(obj) ((ScmSWFFill*)(obj))
#define SCM_SWF_FILL_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_FILL))

typedef struct ScmSWFFillStyleRec {
SCM_HEADER;
SWFFillStyle h;
} ScmSWFFillStyle;

SCM_CLASS_DECL(Scm_SWFFillStyleClass);
#define SCM_CLASS_SWF_FILL_STYLE (&Scm_SWFFillStyleClass)
#define SCM_SWF_FILL_STYLE(obj) ((ScmSWFFillStyle*)(obj))
#define SCM_SWF_FILL_STYLE_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_FILL_STYLE))

typedef struct ScmSWFGradientRec {
SCM_HEADER;
SWFGradient h;
} ScmSWFGradient;

SCM_CLASS_DECL(Scm_SWFGradientClass);
#define SCM_CLASS_SWF_GRADIENT (&Scm_SWFGradientClass)
#define SCM_SWF_GRADIENT(obj) ((ScmSWFGradient*)(obj))
#define SCM_SWF_GRADIENT_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_GRADIENT))

typedef struct ScmSWFMovieRec {
SCM_HEADER;
SWFMovie h;
} ScmSWFMovie;

SCM_CLASS_DECL(Scm_SWFMovieClass);
#define SCM_CLASS_SWF_MOVIE (&Scm_SWFMovieClass)
#define SCM_SWF_MOVIE(obj) ((ScmSWFMovie*)(obj))
#define SCM_SWF_MOVIE_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_MOVIE))

typedef struct ScmSWFMovieBlockTypeRec {
SCM_HEADER;
SWFMovieBlockType *h;
} ScmSWFMovieBlockType;

SCM_CLASS_DECL(Scm_SWFMovieBlockTypeClass);
#define SCM_CLASS_SWF_MOVIE_BLOCK_TYPE (&Scm_SWFMovieBlockTypeClass)
#define SCM_SWF_MOVIE_BLOCK_TYPE(obj) ((ScmSWFMovieBlockType*)(obj))
#define SCM_SWF_MOVIE_BLOCK_TYPE_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_MOVIE_BLOCK_TYPE))

typedef struct ScmSWFShapeRec {
SCM_HEADER;
SWFShape h;
} ScmSWFShape;

SCM_CLASS_DECL(Scm_SWFShapeClass);
#define SCM_CLASS_SWF_SHAPE (&Scm_SWFShapeClass)
#define SCM_SWF_SHAPE(obj) ((ScmSWFShape*)(obj))
#define SCM_SWF_SHAPE_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_SHAPE))

typedef struct ScmSWFTextRec {
SCM_HEADER;
SWFText h;
} ScmSWFText;

SCM_CLASS_DECL(Scm_SWFTextClass);
#define SCM_CLASS_SWF_TEXT (&Scm_SWFTextClass)
#define SCM_SWF_TEXT(obj) ((ScmSWFText*)(obj))
#define SCM_SWF_TEXT_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_TEXT))



typedef struct ScmSWFLineStyleRec {
SCM_HEADER;
SWFLineStyle h;
} ScmSWFLineStyle;

SCM_CLASS_DECL(Scm_SWFLineStyleClass);
#define SCM_CLASS_SWF_LINE_STYLE (&Scm_SWFLineStyleClass)
#define SCM_SWF_LINE_STYLE(obj) ((ScmSWFLineStyle*)(obj))
#define SCM_SWF_LINE_STYLE_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_LINE_STYLE))

typedef struct ScmSWFMatrixRec {
SCM_HEADER;
SWFMatrix h;
} ScmSWFMatrix;

SCM_CLASS_DECL(Scm_SWFMatrixClass);
#define SCM_CLASS_SWF_MATRIX (&Scm_SWFMatrixClass)
#define SCM_SWF_MATRIX(obj) ((ScmSWFMatrix*)(obj))
#define SCM_SWF_MATRIX_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_MATRIX))




/* Epilogue */
SCM_DECL_END

#endif  /* GAUCHE_GAUCHE_MING_H */
