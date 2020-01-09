/* aide, Advanced Intrusion Detection Environment
 *
 * Copyright (C) 1999,2000,2001,2002 Rami Lehti,Pablo Virolainen
 * $Header: /cvsroot/aide/aide/src/list.c,v 1.3 2006/10/27 20:44:38 rvdb Exp $
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

#include "aide.h"
#include <stdlib.h>
#include "list.h"
#include "report.h"
/*for locale support*/
#include "locale-aide.h"
/*for locale support*/

/* list
 * limitations:
 * Only the head knows where the tail is
 * Every item knows where the head is
 
 * And that is not true anymore. 
 * Now list has header which knows head and tail.
 * Every item knows header.
 
 */

/* list_append()
 * append an item to list
 * returns the head
 * The first argument is the head of the list
 * The second argument is the data to be added
 * Returns list head
 */


/* 
 * Some way to handle mallocs failure would be nice. Now it say abort().
 */

list* list_append(list* listp,void*data)
{
  list* newitem=NULL;
  newitem=(list*)malloc(sizeof(list));

  if (newitem==NULL) {
    error(0,"Not enough memory to add a new item to list.\n");
    abort();
  }
  
  if(listp==NULL){
    list_header* header=(list_header*)malloc(sizeof(list_header));
    
    if (header==NULL){
      error(0,"Not enough memory for list header allocation\n");
      abort();
    }
    
    newitem->data=data;
    newitem->header=header;
    newitem->next=NULL;
    newitem->prev=NULL;

    header->head=newitem;
    header->tail=newitem;

    return newitem;
  }else {
    
    /* We have nonempthy list.
     * add to last
     */
    
    newitem->prev=listp->header->tail;
    newitem->next=NULL;
    newitem->data=data;
    newitem->header=listp->header;
    
    listp->header->tail->next=newitem;
    listp->header->tail=newitem;
    return listp;
  }
  /* Not reached */
  return NULL;
}

/*
 * delete_list_item()
 * delete a item from list
 * returns head of a list.
 */

list* list_delete_item(list* item){
  list* r;


  if (item==NULL) {
    error(200,"Tried to remove from empthy list\n");
    return item;
  }
  
  if (item->header->head==item->header->tail) {
    /*
     * Ollaan poistamassa listan ainoaa alkiota.
     * T�ll�in palautetaan NULL
     */
    free(item->header);
    free(item);
    return NULL;
  }
  
  /* 
   * Nyt meill� on listassa ainakin kaksi alkiota 
   *  
   */

  /* poistetaan listan viimeist� alkiota */

  if (item==item->header->tail){
    
    r=item->prev;
    item->header->tail=r;
    r->next=NULL;
    r=r->header->head;
    free(item);
    return r;
  }

  /*
   * Poistetaan listan ensimm�inen alkio.
   */  
  if (item==item->header->head) {
    
    r=item->next;
    item->header->head=r;
    r->prev=NULL;
    r=r->header->head;
    
    free(item);
    return r;
  }
  
  r=item->prev;

  item->prev->next=item->next;
  item->next->prev=item->prev;
  
  free(item);
  r=r->header->head;
  
  return r;
  
}
