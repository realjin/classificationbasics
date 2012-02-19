#ifndef _CLASSIFICATIONBASICS_TERMSELECTION_
#define _CLASSIFICATIONBASICS_TERMSELECTION_


#include <alisttpl.h>
#include <index.h>

#include "common.h"

/*
 * term selection by mutual exclusion
 */
void select_top_terms_mi(fi* fi, class* cl, __u32 tid);

#endif
