#ifndef _CLASSIFICATIONBASICS_TERMSELECTION_
#define _CLASSIFICATIONBASICS_TERMSELECTION_


#include <alisttpl.h>
#include <index.h>

#include "common.h"
#include "class.h"

/*
 * term selection by mutual exclusion
 */
//define select_top_terms_mi(fi* fi, class* cl);

double calc_term_importance_mi(fi* fi, class* cl, __u32 tid);
#endif
