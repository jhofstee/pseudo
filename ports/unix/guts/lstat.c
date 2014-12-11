/*
 * Copyright (c) 2013 Wind River Systems; see
 * guts/COPYRIGHT for information.
 *
 * int lstat(const char *restrict path, struct stat *restrict buf)
 *	int rc = -1;
 */

	rc = real_lstat(path, buf);

/*	return rc;
 * }
 */
