/*
 * rt_zcfcn.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "CavLyriqModel".
 *
 * Model version              : 6.37
 * Simulink Coder version : 9.9 (R2023a) 19-Nov-2022
 * C++ source code generated on : Thu Jul 25 03:15:01 2024
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_rt_zcfcn_h_
#define RTW_HEADER_rt_zcfcn_h_
#include "zero_crossing_types.h"
#include "rtwtypes.h"
#ifndef slZcHadEvent
#define slZcHadEvent(ev, zcsDir)       (((ev) & (zcsDir)) != 0x00 )
#endif

#ifndef slZcUnAliasEvents
#define slZcUnAliasEvents(evL, evR)    ((((slZcHadEvent((evL), (SL_ZCS_EVENT_N2Z)) && slZcHadEvent((evR), (SL_ZCS_EVENT_Z2P))) || (slZcHadEvent((evL), (SL_ZCS_EVENT_P2Z)) && slZcHadEvent((evR), (SL_ZCS_EVENT_Z2N)))) ? (SL_ZCS_EVENT_NUL) : (evR)))
#endif

#ifdef __cplusplus

extern "C"
{

#endif

  extern ZCEventType rt_ZCFcn(ZCDirection zcDir, ZCSigState *prevZc, real_T
    currValue);

#ifdef __cplusplus

}                                      /* extern "C" */

#endif
#endif                                 /* RTW_HEADER_rt_zcfcn_h_ */
