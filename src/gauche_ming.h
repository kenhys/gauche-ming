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

typedef struct ScmSWFMovieRec {
SCM_HEADER;
SWFMovie h;
} ScmSWFMovie;

SCM_CLASS_DECL(Scm_SWFMovieClass);
#define SCM_CLASS_SWF_MOVIE (&Scm_SWFMovieClass)
#define SCM_SWF_MOVIE(obj) ((ScmSWFMovie*)(obj))
#define SCM_SWF_MOVIE_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_MOVIE))

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

typedef struct ScmSWFFontRec {
SCM_HEADER;
SWFFont h;
} ScmSWFFont;

SCM_CLASS_DECL(Scm_SWFFontClass);
#define SCM_CLASS_SWF_FONT (&Scm_SWFFontClass)
#define SCM_SWF_FONT(obj) ((ScmSWFFont*)(obj))
#define SCM_SWF_FONT_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_FONT))

typedef struct ScmSWFDisplayItemRec {
SCM_HEADER;
SWFDisplayItem h;
} ScmSWFDisplayItem;

SCM_CLASS_DECL(Scm_SWFDisplayItemClass);
#define SCM_CLASS_SWF_DISPLAY_ITEM (&Scm_SWFDisplayItemClass)
#define SCM_SWF_DISPLAY_ITEM(obj) ((ScmSWFDisplayItem*)(obj))
#define SCM_SWF_DISPLAY_ITEM_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_DISPLAY_ITEM))

typedef struct ScmSWFCharacterRec {
SCM_HEADER;
SWFCharacter h;
} ScmSWFCharacter;

SCM_CLASS_DECL(Scm_SWFCharacterClass);
#define SCM_CLASS_SWF_CHARACTER (&Scm_SWFCharacterClass)
#define SCM_SWF_CHARACTER(obj) ((ScmSWFCharacter*)(obj))
#define SCM_SWF_CHARACTER_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_CHARACTER))



/* Epilogue */
SCM_DECL_END

#endif  /* GAUCHE_GAUCHE_MING_H */
