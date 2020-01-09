/* aide, Advanced Intrusion Detection Environment
 *
 * Copyright (C) 1999,2000,2001,2002 Rami Lehti, Pablo Virolainen
 * $Header: /cvsroot/aide/aide/include/compare_db.h,v 1.3 2010/02/17 20:06:57 rvdb Exp $
 *
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

#ifndef _COMPARE_DB_H_INCLUDED
#define _COMPARE_DB_H_INCLUDED
#include "list.h"
#include "db_config.h"
#include "seltree.h"

/*
 * compare_db()
 * Generate report based on list of files and db from disk
 */

void compare_db(list*,db_config*);

/*
 * report_tree()
 * Generate report based on the tree left by populate_tree()
 * stage= which stage to do check=0 added=1, removed=2
 * changed=3 , detailed=4
 * stat contains 5 ints, 0: are we the first to be called
 * 1: total number of files 2: # added files, 
 * 3: # removed, 4: # changed
 */
long report_tree(seltree* tree,int stage, long* status);

void init_rxlst(list* rxlst);

/* 
 * compare_dbline()
 * Return RETOK if same RETFAIL if not
 */
int compare_dbline(db_line* old,db_line* new,DB_ATTR_TYPE ignorelist);

#endif
