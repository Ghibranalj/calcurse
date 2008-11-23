/*	$calcurse: help.h,v 1.6 2008/11/23 20:38:56 culot Exp $	*/

/*
 * Calcurse - text-based organizer
 * Copyright (c) 2004-2007 Frederic Culot
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Send your feedback or comments to : calcurse@culot.org
 * Calcurse home page : http://culot.org/calcurse
 *
 */

#ifndef CALCURSE_HELP_H
#define CALCURSE_HELP_H

#include "wins.h"

typedef struct
{
  char *title;
  char *text;
}
help_page_t;

void help_screen (void);
void help_wins_init (scrollwin_t *, int, int, int, int);
void help_wins_reset (scrollwin_t *);
int  help_write_pad (window_t *, char *, char *);

#endif /* CALCURSE_HELP_H */
