/* vi: set sw=4 ts=4: */
/*
 * posix_fadvise() for MIPS uClibc
 * http://www.opengroup.org/onlinepubs/009695399/functions/posix_fadvise.html
 *
 * Copyright (C) 2000-2006 Erik Andersen <andersen@uclibc.org>
 *
 * Licensed under the LGPL v2.1, see the file COPYING.LIB in this tarball.
 */

#include <features.h>
#include <unistd.h>
#include <errno.h>
#include <endian.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <fcntl.h>

int posix_fadvise(int fd, off_t offset, off_t len, int advice)
{
/* MIPS kernel only has NR_fadvise64 which acts as NR_fadvise64_64 */
#ifdef __NR_fadvise64
	INTERNAL_SYSCALL_DECL(err);
# if _MIPS_SIM == _ABIO32
	int ret = INTERNAL_SYSCALL(fadvise64, err, 7, fd, 0,
		__LONG_LONG_PAIR ((long) (offset >> 31), (long) offset),
		__LONG_LONG_PAIR ((long) (len >> 31), (long) len),
		advice);
# else /* N32 || N64 */
	int ret = INTERNAL_SYSCALL(fadvise64, err, 4, fd, offset, len, advice);
# endif
	if (INTERNAL_SYSCALL_ERROR_P (ret, err))
		return INTERNAL_SYSCALL_ERRNO (ret, err);
	return 0;
#else
	return ENOSYS;
#endif
}
