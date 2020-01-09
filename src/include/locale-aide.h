/* aide, Advanced Intrusion Detection Environment
 *
 * Copyright (C) 2000,2001,2002 Rami Lehti, Pablo Virolainen
 * $Header: /cvsroot/aide/aide/include/locale-aide.h,v 1.1.1.1 2003/01/16 10:37:34 rammer Exp $
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

#ifndef _LOCALE_AIDE_H_INCLUDED
#define _LOCALE_AIDE_H_INCLUDED

#ifdef USE_LOCALE

#include <locale.h>
#include <libintl.h>
#define _(Text) gettext(Text)

#else

#define _(Text) Text

#endif /* USE_LOCALE */

#endif /* _LOCALE_AIDE_H_INCLUDED*/
