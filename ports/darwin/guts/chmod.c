/*
 * Copyright (c) 2011 Wind River Systems; see
 * guts/COPYRIGHT for information.
 *
 * int chmod(const char *path, mode_t mode)
 *	int rc = -1;
 */

	rc = real_chmod(path, mode);

/*	return rc;
 * }
 */