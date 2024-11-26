#ifndef NOX_H_INCLUDED
#define NOX_H_INCLUDED

/**==================================*/
/**========= header files ===========*/
/**==================================*/
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#if defined(_WIN32) || defined(_WIN64)
	#include <windows.h>
#endif

/**==================================*/
/**========= macro defins ===========*/
/**==================================*/
#define MINUS(a) ((a) > 96 && (a) < 123 ? 1 : 0 )
#define MAXUS(a) ((a) > 64 && (a) < 91 ? 1 : 0 )

/**==================================*/
/**===== function signatures=========*/
/**==================================*/

/** +++ +++ Aux_functions ++ +++ +++ */

/** mil - returns a value in milliseconds */
int mil();

/** wait_mill - waits rand milliseconds */
void wait_mill(int min_milliseconds, int max_milliseconds);

/** get_i_value - returns a random value between 1 and 4 */
int get_i_value();

/** Inits an array with null chars */
void init_array(char *arr, int lenght);

/** --- --- Aux_functions --- --- --- */

#endif
