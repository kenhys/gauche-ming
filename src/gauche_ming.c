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

void Scm_Init_gauche_ming(void)
{
    ScmModule *mod;

    /* Register this DSO to Gauche */
    SCM_INIT_EXTENSION(ming);

    /* Create the module if it doesn't exist yet. */
    mod = SCM_MODULE(SCM_FIND_MODULE("ming", TRUE));

    /* Register stub-generated procedures */
    Scm_Init_gauche_minglib(mod);
}
