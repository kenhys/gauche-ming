/*
 * gauche_ming.h
 */

/* Prologue */
#ifndef GAUCHE_GAUCHE_MING_H
#define GAUCHE_GAUCHE_MING_H

#include <gauche.h>
#include <gauche/extend.h>
#include <gauche/class.h>

SCM_DECL_BEGIN

/*
 * The following entry is a dummy one.
 * Replace it for your declarations.
 */

extern ScmObj test_gauche_ming(void);


typedef struct ScmSWFMovieRec {
SCM_HEADER;
SWFMovie *h;
} ScmSWFMovie;

SCM_CLASS_DECL(Scm_SWFMovieClass);
#define SCM_CLASS_HPDF_FONT (&Scm_SWFMovieClass)
#define SCM_SWF_MOVIE(obj) ((ScmSWFMovie*)(obj))
#define SCM_SWF_MOVIE_P(obj) (SCM_XTYPEP(obj, SCM_CLASS_SWF_MOVIE))


/* Epilogue */
SCM_DECL_END

#endif  /* GAUCHE_GAUCHE_MING_H */
