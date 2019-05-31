/* Interface function header.
 * Copyright (C) 2004 KEDACOM
 *
 * Version:	@(#)hw_type.h	1.0.0	01/12/05
 *
 * Authors:	Zhishuang Zhang
 *
 * GNU Zebra is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * GNU Zebra is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Zebra; see the file COPYING.  If not, write to the Free
 * Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.  
 */

#ifndef _ZEBRA_HW_TYPE_H
#define _ZEBRA_HW_TYPE_H

#include <lib/zebra.h>
#include <lib/if.h>
#include "lib/vty.h"

/* Structures. */
struct hwtype {
  unsigned short type;
  char *name;

  int (*proto_encap)(struct interface *ifp);
  int (*proto_no_encap)(struct interface *ifp);

  int (*proto_show)(struct interface *ifp, struct vty *vty);
  int (*proto_config)(struct interface *ifp, struct vty *vty);
  int (*proto_erase)(struct interface *ifp);

  int (*shutdown)(struct interface *ifp);
  int (*no_shutdown)(struct interface *ifp);
  
  int (*set_ipaddr)(struct interface *ifp,
    struct connected *ifc);
  int (*clear_ipaddr)(struct interface *ifp,
    struct connected *ifc);

  int (*set_mtu)(struct interface *ifp, unsigned mtu);
  int (*phy_state_change)(struct interface *ifp, int flag);	
  /*
  	called when physical state changed ,flag 0/1 phy UP/DOWN
  */
};

/* Prototypes. */
extern struct hwtype *zebra_get_hwtype (unsigned short hw_type);

int encap_link_proto(struct interface *ifp, unsigned short type);
int detach_link_proto(struct interface *ifp);
#endif /* _ZEBRA_HW_TYPE_H */

