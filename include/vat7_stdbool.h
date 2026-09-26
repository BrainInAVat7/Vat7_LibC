/* An implementation of stdbool.h */
/* TODO documentation */


#ifndef VAT7_LIBC_STDBOOL_H
#define VAT7_LIBC_STDBOOL_H


/* NOTE: this won't work with C++, and I don't care */
#if defined(__STDC_VERSION__) \
	&& (__STDC_VERSION__ < 202311L) && (__STDC_VERSION__ >= 199901L)


#define bool _Bool
#define true 1
#define false 0
#define __bool_true_false_are_defined 1


#endif  /* C standard version at least C99 and less than C23 */


#endif  /* header guard */
