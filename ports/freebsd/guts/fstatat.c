/*
 * Copyright (c) 2011 Wind River Systems; see
 * guts/COPYRIGHT for information.
 *
 * int fstatat(int fd, const char *path, struct stat *buf, int flag)
 *	int rc = -1;
 */
	pseudo_msg_t *msg;

	rc = real_fstatat(fd, path, buf, flag);

	if (rc == -1) {
		return rc;
	}

	/* query database
	 * note that symlink canonicalizing is now automatic, so we
	 * don't need to check for a symlink on this end
	 */
	msg = pseudo_client_op(OP_FSTAT, 0, fd, -1, 0, buf);
	if (msg && msg->result == RESULT_SUCCEED) {
		pseudo_stat_msg(buf, msg);
	}

/*	return rc;
 * }
 */
