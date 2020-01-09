/* aide, Advanced Intrusion Detection Environment
 *
 * Copyright (C) 1999,2000,2001,2002 Rami Lehti, Pablo Virolainen
 * 
 * $Header: /cvsroot/aide/aide/include/do_md.h,v 1.2 2006/10/27 18:54:29 rvdb Exp $
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
 
#ifndef _DO_MD_H_INCLUDED
#define _DO_MD_H_INCLUDED
#ifdef WITH_MHASH
#include "mhash.h"
#endif

#include "list.h"
#include "db_config.h"

#define BUFSIZE 16384

list* do_md(list* file_lst,db_config* conf);

void acl2line(db_line* line);

#endif /* _DO_MD_H_INCLUDED */
