#include <stdio.h>
/*
 * Make a habit of declaring structs like this it will be usefull
 */
typedef struct intro_s {
  char firstName[20];
  char lastName[20];
  int age;
} INTRO_t, *INTRO_p_t;

typedef struct address_s
{
  char *street;
  char *city;
  char *region;
  char *country;
  char *postal_code;
} ADDRESS_t, *ADDRESS_p_t;

// for multiple functions of similar type
typedef int COMPARE_PROC_t(const void *, const void *);
//static COMPARE_PROC_t is_greater_equal;
//static COMPARE_PROC_t is_lesser_equal;

void print_intro(INTRO_p_t);
void print_an_address(void);
