/* vi:set et ai sw=2 sts=2 ts=2: */
/*-
 * Copyright (c) 2009 Jannis Pohlmann <jannis@xfce.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General 
 * Public License along with this library; if not, write to the 
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __PIXBUF_THUMBNAILER_H__
#define __PIXBUF_THUMBNAILER_H__

#include <glib-object.h>

G_BEGIN_DECLS;

#define TYPE_PIXBUF_THUMBNAILER            (pixbuf_thumbnailer_get_type ())
#define PIXBUF_THUMBNAILER(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PIXBUF_THUMBNAILER, PixbufThumbnailer))
#define PIXBUF_THUMBNAILER_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PIXBUF_THUMBNAILER, PixbufThumbnailerClass))
#define IS_PIXBUF_THUMBNAILER(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PIXBUF_THUMBNAILER))
#define IS_PIXBUF_THUMBNAILER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PIXBUF_THUMBNAILER)
#define PIXBUF_THUMBNAILER_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PIXBUF_THUMBNAILER, PixbufThumbnailerClass))

typedef struct _PixbufThumbnailerClass   PixbufThumbnailerClass;
typedef struct _PixbufThumbnailer        PixbufThumbnailer;

GType pixbuf_thumbnailer_get_type (void) G_GNUC_CONST;
void  pixbuf_thumbnailer_register (TumblerProviderPlugin *plugin);

G_END_DECLS;

#endif /* !__PIXBUF_THUMBNAILER_H__ */