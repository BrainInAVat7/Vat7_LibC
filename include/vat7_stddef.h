/* An implementation of stddef.h */
/*TODO finish documentation */


#ifndef VAT7_LIBC_STDDEF_H
#define VAT7_LIBC_STDDEF_H


/* MACROS */

/* TODO documentation for NULL */
#define NULL ((void *)0)


/* Integer constant expression of type size_t, the value of
 * which is the offset in bytes to the structure member
 * (member-designator), from the beginning of its structure (type).
 */
#define offsetof(type, member-designator) ((size_t)&(((type *)0)->member))


/* TYPES */

/* TODO documentation for size_t and ptrdiff_t */
#if defined(_WIN64)
	typedef unsigned long long size_t;
	_Static_assert(sizeof(size_t) == 8,
			"size_t must be 8 bytes.");

	typedef signed long long ptrdiff_t;
	_Static_assert(sizeof(ptrdiff_t) == 8,
			"ptrdiff_t must be 8 bytes.");

#else
	typedef unsigned long size_t;
	_Static_assert(sizeof(size_t) == 8,
			"size_t must be 8 bytes.");

	typedef signed long ptrdiff_t;
	_Static_assert(sizeof(ptrdiff_t) == 8,
			"ptrdiff_t must be 8 bytes.");

#endif  // _WIN64 defined


/* Integer type whose range of values can represent
 * distinct codes for all members of the largest extended
 * character set specified among the supported locales; the
 * null character shall have the code value zero. Each
 * member of the basic character set shall have a code
 * value equal to its value when used as the lone character
 * in an integer character constant if an implementation
 * does not define __STDC_MB_MIGHT_NEQ_WC__.
 *
 * NOTE: This is a legacy thing no one uses and is
 * implementation defined. Just using the linux
 * implementation for now, but may not support it at
 * all in the final version
 */
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199409L)
typedef int wchar_t;
#endif  // C version at least 1995 revision of C89


/* An untagged complete object type whose alignment
 * requirement is at least as strict as that of every
 * scalar type (meaning any pointer, integer, or float
 * type can be safely stored in memory aligned to max_align_t).
 */
#if defined(__STDC_VERSION__) && (__STDC__VERSION__ >= 201112L)
typedef alignof(union {long long _vat7_max_aligned_int;
		long double _vat7_max_aligned_float });
#endif  // C version at least C11


/* TODO documentation for nullptr_t */
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 202311L)
typedef typeof(nullptr) nullptr_t;
#endif  // C version at least C23


#endif  // header guard
