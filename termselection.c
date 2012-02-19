#include "termselection.h"




double calc_term_importance_mi(fi* fi, class* cl, __u32 tid)
{
	__u32 n;
	__u32 n1, n0;
	__u32 n11, n10, n01, n00;

	__u32 i,j;

	doc_alist* alldocs;

	posting_alist* postings;

	alldocs = fi->doccol->docs;

	n = alldocs->size;
	n11 = n10 = n01 = n00 = 0;
	postings = get_postings(fi->ii, tid);

	for(i=0;i<postings->size;i++)	{
		for(j=0;j<cl->docs->size;j++)	{
			if(cl->docs->list[j]->id == postings->list[i]->did) {
				break;
			}
		}
		if(j<cl->docs->size)	{	//doc in class
			n11++;
		}
		else	{ //doc not in class
			n10++;
		}
	}

	n01 = cl->docs->size - n11;
	n00 = n - n11 - n10 - n01;
	
	//mmm: not impl yet
	return 0;	
}
