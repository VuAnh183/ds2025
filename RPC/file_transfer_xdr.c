/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "file_transfer.h"

bool_t
xdr_FileData (XDR *xdrs, FileData *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->filename, 256))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->content.content_val, (u_int *) &objp->content.content_len, 1024))
		 return FALSE;
	 if (!xdr_bool (xdrs, &objp->is_last_chunk))
		 return FALSE;
	return TRUE;
}
