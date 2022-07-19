#ifndef _FT_BOOLEAN_
#define _FT_BOOLEAN_

#define EVEN(EXP) (0 == EXP % 2)
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG  "I have an odd number of arguments."

typedef enum { false, true } t_bool;

#endif
