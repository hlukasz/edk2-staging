/** @file
  CPU get interrupt state function for RISC-V

  Copyright (c) 2016, Hewlett Packard Enterprise Development LP. All rights reserved.<BR>

  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution. The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
**/

#include "BaseLibInternals.h"

extern UINT32 RiscVGetInterrupts (VOID);


/**
  Retrieves the current CPU interrupt state.

  Returns TRUE is interrupts are currently enabled. Otherwise
  returns FALSE.

  @retval TRUE  CPU interrupts are enabled.
  @retval FALSE CPU interrupts are disabled.

**/
BOOLEAN
EFIAPI
GetInterruptState (
  VOID
  )
{
  UINT32 RetValue;

  RetValue = RiscVGetInterrupts ();
  return (RetValue == 0)? FALSE: TRUE;
}


