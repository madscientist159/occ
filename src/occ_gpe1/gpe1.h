/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: src/occ_gpe1/gpe1.h $                                         */
/*                                                                        */
/* OpenPOWER OnChipController Project                                     */
/*                                                                        */
/* Contributors Listed Below - COPYRIGHT 2011,2017                        */
/* [+] International Business Machines Corp.                              */
/*                                                                        */
/*                                                                        */
/* Licensed under the Apache License, Version 2.0 (the "License");        */
/* you may not use this file except in compliance with the License.       */
/* You may obtain a copy of the License at                                */
/*                                                                        */
/*     http://www.apache.org/licenses/LICENSE-2.0                         */
/*                                                                        */
/* Unless required by applicable law or agreed to in writing, software    */
/* distributed under the License is distributed on an "AS IS" BASIS,      */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or        */
/* implied. See the License for the specific language governing           */
/* permissions and limitations under the License.                         */
/*                                                                        */
/* IBM_PROLOG_END_TAG                                                     */

#ifndef _GPE1_H
#define _GPE1_H

#include "gpe_export.h"

// Debug trace
#ifdef GPE1_DEBUG
  #define GPE1_DIMM_DBG(frmt,args...)  \
          PK_TRACE(frmt,##args)
  #define GPE1_DIMM_DBG_HEXDUMP(data, len, string)  \
          PK_TRACE_BIN(data, len, string)
#else
  #define GPE1_DIMM_DBG(frmt,args...)
  #define GPE1_DIMM_DBG_HEXDUMP(data, len, string)
#endif


void gpe_set_ffdc(GpeErrorStruct *o_error, uint32_t i_addr, uint32_t i_rc, uint64_t i_ffdc);

void gpe_dimm_sm(ipc_msg_t* cmd, void* arg);


#endif //_GPE1_H
