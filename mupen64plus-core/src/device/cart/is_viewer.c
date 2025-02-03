/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *   Mupen64plus - is_viewer.c                                             *
 *   Mupen64Plus homepage: https://mupen64plus.org/                        *
 *   Copyright (C) 2021 loganmc10                                          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.          *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "is_viewer.h"

#define M64P_CORE_PROTOTYPES 1
#include "api/callbacks.h"
#include "main/util.h"

#define __STDC_FORMAT_MACROS
#include <inttypes.h>
#include <string.h>

#define IS_ADDR_MASK UINT32_C(0x00000fff)

void poweron_is_viewer(struct is_viewer* is_viewer)
{
    memset(is_viewer->data, 0, IS_BUFFER_SIZE);
    memset(is_viewer->output_buffer, 0, IS_BUFFER_SIZE);
    is_viewer->buffer_pos = 0;
}
