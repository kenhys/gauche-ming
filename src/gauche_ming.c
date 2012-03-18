/*
 * gauche_ming.c
 */

#include "gauche_ming.h"

/*
 * The following function is a dummy one; replace it for
 * your C function definitions.
 */

ScmObj test_gauche_ming(void)
{
    return SCM_MAKE_STR("gauche_ming is working");
}

/*
 * Module initialization function.
 */
extern void Scm_Init_gauche_minglib(ScmModule*);
extern void Scm_Init_ming_swfaction(ScmModule*);
extern void Scm_Init_ming_swfbutton(ScmModule*);
extern void Scm_Init_ming_swfdisplayitem(ScmModule*);
extern void Scm_Init_ming_swffill(ScmModule*);
extern void Scm_Init_ming_swffillstyle(ScmModule*);
extern void Scm_Init_ming_swffilter(ScmModule*);
extern void Scm_Init_ming_swffont(ScmModule*);
extern void Scm_Init_ming_swflinestyle(ScmModule*);
extern void Scm_Init_ming_swfmorph(ScmModule*);
extern void Scm_Init_ming_swfmovie(ScmModule*);
extern void Scm_Init_ming_swfmovieclip(ScmModule*);
extern void Scm_Init_ming_swfposition(ScmModule*);
extern void Scm_Init_ming_swfshape(ScmModule*);
extern void Scm_Init_ming_swfsound(ScmModule*);
extern void Scm_Init_ming_swfsprite(ScmModule*);
extern void Scm_Init_ming_swftext(ScmModule*);
extern void Scm_Init_ming_swftextfield(ScmModule*);
extern void Scm_Init_ming_swfvideo(ScmModule*);

void Scm_Init_gauche_ming(void)
{
    ScmModule *mod;

    /* Register this DSO to Gauche */
    SCM_INIT_EXTENSION(ming);

    /* Create the module if it doesn't exist yet. */
    mod = SCM_MODULE(SCM_FIND_MODULE("ming", TRUE));

    /* Register stub-generated procedures */
    Scm_Init_gauche_minglib(mod);
    Scm_Init_ming_swfaction(mod);
    Scm_Init_ming_swfbutton(mod);
    Scm_Init_ming_swfdisplayitem(mod);
    Scm_Init_ming_swffill(mod);
    Scm_Init_ming_swffillstyle(mod);
    Scm_Init_ming_swffilter(mod);
    Scm_Init_ming_swffont(mod);
    Scm_Init_ming_swflinestyle(mod);
    Scm_Init_ming_swfmorph(mod);
    Scm_Init_ming_swfmovie(mod);
    Scm_Init_ming_swfmovieclip(mod);
    Scm_Init_ming_swfposition(mod);
    Scm_Init_ming_swfshape(mod);
    Scm_Init_ming_swfsound(mod);
    Scm_Init_ming_swfsprite(mod);
    Scm_Init_ming_swftext(mod);
    Scm_Init_ming_swftextfield(mod);
    Scm_Init_ming_swfvideo(mod);
}
