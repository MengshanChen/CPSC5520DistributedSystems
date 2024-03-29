/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "placeToairport.h"

bool_t
xdr_airportlist (XDR *xdrs, airportlist *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)objp, sizeof (struct airport), (xdrproc_t) xdr_airport))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_airport (XDR *xdrs, airport *objp)
{
	register int32_t *buf;

	 if (!xdr_codetype (xdrs, &objp->code))
		 return FALSE;
	 if (!xdr_citytype (xdrs, &objp->city))
		 return FALSE;
	 if (!xdr_statetype (xdrs, &objp->state))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->distance))
		 return FALSE;
	 if (!xdr_airportlist (xdrs, &objp->next))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_LatLon (XDR *xdrs, LatLon *objp)
{
	register int32_t *buf;

	 if (!xdr_double (xdrs, &objp->lat))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->lon))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_returnAirports (XDR *xdrs, returnAirports *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->err))
		 return FALSE;
	switch (objp->err) {
	case 0:
		 if (!xdr_airportlist (xdrs, &objp->returnAirports_u.list))
			 return FALSE;
		break;
	default:
		break;
	}
	return TRUE;
}
