/* An implementation of stdint.h */
// TODO update for C23
// TODO documentation


#ifndef VAT7_LIBC_STDINT_H
#define VAT7_LIBC_STDINT_H


typedef signed char int8_t;
_Static_assert(sizeof(int8_t) == 1, "int8_t must be 1 byte.");

typedef unsigned char uint8_t;
_Static_assert(sizeof(uint8_t) == 1, "uint8_t must be 1 byte.");

typedef short int16_t;
_Static_assert(sizeof(int16_t) == 2, "int16_t must be 2 bytes.");

typedef unsigned short uint16_t;
_Static_assert(sizeof(uint16_t) == 2, "uint16_t must be 2 bytes.");

typedef int int32_t;
_Static_assert(sizeof(int32_t) == 4, "int32_t must be 4 bytes.");

typedef unsigned int uint32_t;
_Static_assert(sizeof(uint32_t) == 4, "uint32_t must be 4 bytes.");

#define INT8_MAX (127)
#define INT8_MIN (-127 - 1)
#define UINT8_MAX (255u)
#define INT16_MAX (32767)
#define INT16_MIN (-32767 -1)
#define UINT16_MAX (65535u)
#define INT32_MAX (2147483647)
#define INT32_MIN (-2147483647 -1)
#define UINT32_MAX (4294967295u)

#define INT8_C(x)    x
#define UINT8_C(x)   x##u
#define INT16_C(x)   x
#define UINT16_C(x)  x##u
#define INT32_C(x)   x
#define UINT32_C(x)  x##u


#if defined(_WIN64)
	typedef long long int64_t;
	typedef unsigned long long uint64_t;
	#define INT64_MAX (9223372036854775807ll)
	#define INT64_MIN (-9223372036854775807ll - 1ll)
	#define UINT64_MAX (18446744073709551615llu)
	#define SIZE_MAX (18446744073709551615llu)
	#define INT64_C(x)   x##ll
	#define UINT64_C(x)  x##llu
#else
	typedef long int64_t;
	typedef unsigned long uint64_t;
	#define INT64_MAX (9223372036854775807l)
	#define INT64_MIN (-9223372036854775807l - 1l)
	#define UINT64_MAX (18446744073709551615lu)
	#define SIZE_MAX (18446744073709551615lu)
	#define INT64_C(x)   x##l
	#define UINT64_C(x)  x##lu
#endif  //  _WIN64 defined

_Static_assert(sizeof(int64_t) == 8, "int64_t must be 8 bytes.");
_Static_assert(sizeof(uint64_t) == 8, "uint64_t must be 8 bytes.");


#endif  // header guard
