/*
 * Copyright (c) 2013 Wind River Systems; see
 * guts/COPYRIGHT for information.
 *
 * int fstatat(int fd, const char *restrict path, struct stat *restrict buf, int flag)
 *	int rc = -1;
 */

	rc = real_fstatat(fd, path, buf, flag);

/*	return rc;
 * }
 */
