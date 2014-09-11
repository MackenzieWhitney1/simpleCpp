
/*
  (c) 2003-2014 Coverity, Inc. All rights reserved worldwide.
  The information contained in this file is the proprietary and confidential
  information of Coverity, Inc. and its licensors, and is supplied subject to,
  and may be used only by Coverity customers in accordance with the terms and
  conditions of a previously executed license agreement between Coverity and
  that customer.
*/


/* DO NOT MODIFY THE CONTENTS OF THIS FILE */

#define __ptr64
#define _export
#define _vectorcall __vectorcall
#define __vectorcall
#define __FUNCSIG__ __FUNCSIG__
#if defined(_M_MIPS) || defined(_M_SH)
/* __asm is not a keyword for these compilers */
#define __asm __COVERITY___asm
#endif

#if defined(_Wp64)
typedef __COVERITY_SIZE_TYPE__ size_t;
#endif
