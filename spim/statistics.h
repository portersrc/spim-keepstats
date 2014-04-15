//Added 4/26/03 for performance measuring with Cool
//based on code by (I think) Douglas Hauge.
//Copied 8/21/06 by MMS.  I got a copy of this code from Francis Hsu.
//I am making it work with spim-7.2.1.


#include <stdio.h>
#include <string.h>

typedef struct statistics_s {
  int instruction_count; //Should equal the sum of the counts below
  int num_reads;
  int num_writes;
  int num_branches;
} statistics_t;

void statistics_reset(statistics_t *s);
void statistics_print(statistics_t *s,FILE *f);
void statistics_inc_instruction_count(statistics_t *s);
void statistics_inc_reads(statistics_t *s);
void statistics_inc_writes(statistics_t *s);
void statistics_inc_branches(statistics_t *s);

extern statistics_t global_stats;
extern int keep_stats;
