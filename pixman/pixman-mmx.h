/*
 * Copyright © 2004 Red Hat, Inc.
 * Copyright © 2005 Trolltech AS
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of Red Hat not be used in advertising or
 * publicity pertaining to distribution of the software without specific,
 * written prior permission.  Red Hat makes no representations about the
 * suitability of this software for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS, IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN
 * AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING
 * OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
 *
 * Author:  Søren Sandmann (sandmann@redhat.com)
 *          Lars Knoll (lars@trolltech.com)
 * 
 * Based on work by Owen Taylor
 */
#ifdef HAVE_DIX_CONFIG_H
#include <dix-config.h>
#endif

#include "pixman-private.h"

#ifdef USE_MMX

#if !defined(__amd64__) && !defined(__x86_64__)
pixman_bool_t fbHaveMMX(void);
#else
#define fbHaveMMX() TRUE
#endif

#else
#define fbHaveMMX() FALSE
#endif

#ifdef USE_MMX

void fbComposeSetupMMX(void);

void fbCompositeSolidMask_nx8888x0565Cmmx (pixman_op_t      op,
					   pixman_image_t * pSrc,
					   pixman_image_t * pMask,
					   pixman_image_t * pDst,
					   int16_t      xSrc,
					   int16_t      ySrc,
					   int16_t      xMask,
					   int16_t      yMask,
					   int16_t      xDst,
					   int16_t      yDst,
					   uint16_t     width,
					   uint16_t     height);
void fbCompositeSrcAdd_8888x8888mmx (pixman_op_t	op,
				     pixman_image_t *	pSrc,
				     pixman_image_t *	pMask,
				     pixman_image_t *	pDst,
				     int16_t	xSrc,
				     int16_t      ySrc,
				     int16_t      xMask,
				     int16_t      yMask,
				     int16_t      xDst,
				     int16_t      yDst,
				     uint16_t     width,
				     uint16_t     height);
void fbCompositeSrc_8888x8888mmx (pixman_op_t		op,
				  pixman_image_t *	pSrc,
				  pixman_image_t *	pMask,
				  pixman_image_t *	pDst,
				  int16_t		xSrc,
				  int16_t		ySrc,
				  int16_t		xMask,
				  int16_t		yMask,
				  int16_t		xDst,
				  int16_t		yDst,
				  uint16_t	width,
				  uint16_t	height);
void
fbCompositeSolidMaskSrc_nx8x8888mmx (pixman_op_t      op,
				     pixman_image_t * pSrc,
				     pixman_image_t * pMask,
				     pixman_image_t * pDst,
				     int16_t      xSrc,
				     int16_t      ySrc,
				     int16_t      xMask,
				     int16_t      yMask,
				     int16_t      xDst,
				     int16_t      yDst,
				     uint16_t     width,
				     uint16_t     height);
void
fbCompositeSrc_x888x8x8888mmx (pixman_op_t	op,
			       pixman_image_t * pSrc,
			       pixman_image_t * pMask,
			       pixman_image_t * pDst,
			       int16_t	xSrc,
			       int16_t	ySrc,
			       int16_t      xMask,
			       int16_t      yMask,
			       int16_t      xDst,
			       int16_t      yDst,
			       uint16_t     width,
			       uint16_t     height);
void fbCompositeSolidMask_nx8888x8888Cmmx (pixman_op_t	op,
					   pixman_image_t *	pSrc,
					   pixman_image_t *	pMask,
					   pixman_image_t *	pDst,
					   int16_t	xSrc,
					   int16_t	ySrc,
					   int16_t	xMask,
					   int16_t	yMask,
					   int16_t	xDst,
					   int16_t	yDst,
					   uint16_t	width,
					   uint16_t	height);
void fbCompositeSolidMask_nx8x8888mmx (pixman_op_t      op,
				       pixman_image_t * pSrc,
				       pixman_image_t * pMask,
				       pixman_image_t * pDst,
				       int16_t      xSrc,
				       int16_t      ySrc,
				       int16_t      xMask,
				       int16_t      yMask,
				       int16_t      xDst,
				       int16_t      yDst,
				       uint16_t     width,
				       uint16_t     height);
void fbCompositeIn_nx8x8mmx (pixman_op_t	op,
			pixman_image_t * pSrc,
			pixman_image_t * pMask,
			pixman_image_t * pDst,
			int16_t      xSrc,
			int16_t      ySrc,
			int16_t      xMask,
			int16_t      yMask,
			int16_t      xDst,
			int16_t      yDst,
			uint16_t     width,
			uint16_t     height);
void fbCompositeIn_8x8mmx (pixman_op_t	op,
		      pixman_image_t * pSrc,
		      pixman_image_t * pMask,
		      pixman_image_t * pDst,
		      int16_t      xSrc,
		      int16_t      ySrc,
		      int16_t      xMask,
		      int16_t      yMask,
		      int16_t      xDst,
		      int16_t      yDst,
		      uint16_t     width,
		      uint16_t     height);
void fbCompositeSrcAdd_8888x8x8mmx (pixman_op_t   op,
			       pixman_image_t * pSrc,
			       pixman_image_t * pMask,
			       pixman_image_t * pDst,
			       int16_t      xSrc,
			       int16_t      ySrc,
			       int16_t      xMask,
			       int16_t      yMask,
			       int16_t      xDst,
			       int16_t      yDst,
			       uint16_t     width,
			       uint16_t     height);
void fbCompositeSrcAdd_8000x8000mmx (pixman_op_t	op,
				     pixman_image_t * pSrc,
				     pixman_image_t * pMask,
				     pixman_image_t * pDst,
				     int16_t      xSrc,
				     int16_t      ySrc,
				     int16_t      xMask,
				     int16_t      yMask,
				     int16_t      xDst,
				     int16_t      yDst,
				     uint16_t     width,
				     uint16_t     height);
void fbCompositeSrc_8888RevNPx8888mmx (pixman_op_t      op,
				       pixman_image_t * pSrc,
				       pixman_image_t * pMask,
				       pixman_image_t * pDst,
				       int16_t      xSrc,
				       int16_t      ySrc,
				       int16_t      xMask,
				       int16_t      yMask,
				       int16_t      xDst,
				       int16_t      yDst,
				       uint16_t     width,
				       uint16_t     height);
void fbCompositeSrc_8888x0565mmx (pixman_op_t      op,
				  pixman_image_t * pSrc,
				  pixman_image_t * pMask,
				  pixman_image_t * pDst,
				  int16_t      xSrc,
				  int16_t      ySrc,
				  int16_t      xMask,
				  int16_t      yMask,
				  int16_t      xDst,
				  int16_t      yDst,
				  uint16_t     width,
				  uint16_t     height);
void fbCompositeSrc_8888RevNPx0565mmx (pixman_op_t      op,
				       pixman_image_t * pSrc,
				       pixman_image_t * pMask,
				       pixman_image_t * pDst,
				       int16_t      xSrc,
				       int16_t      ySrc,
				       int16_t      xMask,
				       int16_t      yMask,
				       int16_t      xDst,
				       int16_t      yDst,
				       uint16_t     width,
				       uint16_t     height);
void fbCompositeSolid_nx8888mmx (pixman_op_t		op,
				 pixman_image_t *	pSrc,
				 pixman_image_t *	pMask,
				 pixman_image_t *	pDst,
				 int16_t		xSrc,
				 int16_t		ySrc,
				 int16_t		xMask,
				 int16_t		yMask,
				 int16_t		xDst,
				 int16_t		yDst,
				 uint16_t		width,
				 uint16_t		height);
void fbCompositeSolid_nx0565mmx (pixman_op_t		op,
				 pixman_image_t *	pSrc,
				 pixman_image_t *	pMask,
				 pixman_image_t *	pDst,
				 int16_t		xSrc,
				 int16_t		ySrc,
				 int16_t		xMask,
				 int16_t		yMask,
				 int16_t		xDst,
				 int16_t		yDst,
				 uint16_t		width,
				 uint16_t		height);
void fbCompositeSolidMask_nx8x0565mmx (pixman_op_t      op,
				       pixman_image_t * pSrc,
				       pixman_image_t * pMask,
				       pixman_image_t * pDst,
				       int16_t      xSrc,
				       int16_t      ySrc,
				       int16_t      xMask,
				       int16_t      yMask,
				       int16_t      xDst,
				       int16_t      yDst,
				       uint16_t     width,
				       uint16_t     height);
void fbCompositeSrc_8888x8x8888mmx (pixman_op_t	op,
				    pixman_image_t *  pSrc,
				    pixman_image_t *  pMask,
				    pixman_image_t *  pDst,
				    int16_t	xSrc,
				    int16_t	ySrc,
				    int16_t       xMask,
				    int16_t       yMask,
				    int16_t       xDst,
				    int16_t       yDst,
				    uint16_t      width,
				    uint16_t      height);
#if 0
/* FIXME */
pixman_bool_t fbCopyAreammx (DrawablePtr	pSrc,
			     DrawablePtr	pDst,
			     int		src_x,
			     int		src_y,
			     int		dst_x,
			     int		dst_y,
			     int		width,
			     int		height);
#endif
void fbCompositeCopyAreammx (pixman_op_t	op,
			     pixman_image_t *	pSrc,
			     pixman_image_t *	pMask,
			     pixman_image_t *	pDst,
			     int16_t	xSrc,
			     int16_t      ySrc,
			     int16_t      xMask,
			     int16_t      yMask,
			     int16_t      xDst,
			     int16_t      yDst,
			     uint16_t     width,
			     uint16_t     height);
#if 0
/* FIXME */
pixman_bool_t fbSolidFillmmx (DrawablePtr	pDraw,
			      int		x,
			      int		y,
			      int		width,
			      int		height,
			      FbBits		xor);
#endif

#endif /* USE_MMX */