/*******************************************************************************
 *
 * Copyright (C) 2012 Jorge Aparicio <jorge.aparicio.r@gmail.com>
 *
 * This file is part of libstm32pp.
 *
 * libstm32pp is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * libstm32pp is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libstm32pp. If not, see <http://www.gnu.org/licenses/>.
 *
 ******************************************************************************/

#pragma once

#include "common.hpp"

namespace hash {
  struct Registers {
      __RW
      u32 CR;       // 0x00: Control
      __RW
      u32 DIN;      // 0x04: Data input
      __RW
      u32 STR;      // 0x08: Start
      __RW
      u32 HR[5];    // 0x0C: Digest
      __RW
      u32 IMR;      // 0x20: Interrupt enable
      __RW
      u32 SR;       // 0x24: Status
      u32 _RESERVED[52];
      __RW
      u32 CSR[51];  // 0xF8: Context swap
  };

  enum {
    ADDRESS = alias::AHB2 + 0x60400
  };

  namespace registers {
  // TODO HASH register bits
  }// namespace registers
}  // namespace hash
