// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3243(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3243\n"); );
    // Body
    vlSelf->__VdfgTmp_hc05a2ba5__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xfU] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xfU] 
                                                         >> 7U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xfU] 
                                                             >> 5U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xfU] 
                                                               >> 6U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xfU] 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xfU] 
                                                                  >> 5U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xfU] 
                                                                   >> 3U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xfU] 
                                                                     >> 4U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xfU] 
                                                                      >> 2U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xfU] 
                                                                        >> 3U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xfU] 
                                                                         >> 1U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xfU] 
                                                                           >> 2U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xfU]) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xfU] 
                                                                              >> 1U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xfU] 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xfU]))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xfU] 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xfU] 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xfU]))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x3cU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3244(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3244\n"); );
    // Body
    vlSelf->__VdfgTmp_h27530583__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                      >> 0x1fU))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                             >> 0x1dU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                               >> 0x1eU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                >> 0x1cU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                  >> 0x1dU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                   >> 0x1bU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                     >> 0x1cU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                      >> 0x1aU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                        >> 0x1bU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                         >> 0x19U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                           >> 0x1aU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                            >> 0x18U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                              >> 0x19U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                               >> 0x17U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                                >> 0x18U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xeU] 
                                                                            >> 8U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                               >> 0x10U)) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                              >> 0x18U))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x3bU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3245(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3245\n"); );
    // Body
    vlSelf->__VdfgTmp_h48d4cac1__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                         >> 0x17U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                             >> 0x15U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                               >> 0x16U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                >> 0x14U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                  >> 0x15U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                   >> 0x13U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                     >> 0x14U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                      >> 0x12U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                        >> 0x13U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                         >> 0x11U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                           >> 0x12U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                            >> 0x10U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                              >> 0x11U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                               >> 0xfU)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                                >> 0x10U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xeU]) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                               >> 8U)) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                                >> 0x10U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x3aU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3246(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3246\n"); );
    // Body
    vlSelf->__VdfgTmp_h4952683a__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                       >> 0xeU)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                         >> 0xfU)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                             >> 0xdU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                               >> 0xeU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                >> 0xcU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                  >> 0xdU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                   >> 0xbU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                     >> 0xcU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                      >> 0xaU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                        >> 0xbU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                         >> 9U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                           >> 0xaU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                            >> 8U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                              >> 9U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                               >> 7U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                                >> 8U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xeU] 
                                                                            << 8U)) 
                                                                        | ((0xff00U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU]) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                                >> 8U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x39U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3247(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3247\n"); );
    // Body
    vlSelf->__VdfgTmp_hc8e41b51__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                         >> 7U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                             >> 5U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                               >> 6U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                  >> 5U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                   >> 3U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                     >> 4U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                      >> 2U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                        >> 3U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                         >> 1U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                           >> 2U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU]) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU] 
                                                                              >> 1U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU]))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xeU] 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xeU] 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xeU]))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x38U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3248(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3248\n"); );
    // Body
    vlSelf->__VdfgTmp_h4c120660__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                      >> 0x1fU))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                             >> 0x1dU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                               >> 0x1eU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                >> 0x1cU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                  >> 0x1dU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                   >> 0x1bU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                     >> 0x1cU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                      >> 0x1aU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                        >> 0x1bU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                         >> 0x19U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                           >> 0x1aU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                            >> 0x18U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                              >> 0x19U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                               >> 0x17U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                                >> 0x18U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xdU] 
                                                                            >> 8U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                               >> 0x10U)) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                              >> 0x18U))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x37U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3249(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3249\n"); );
    // Body
    vlSelf->__VdfgTmp_hbac12305__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                         >> 0x17U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                             >> 0x15U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                               >> 0x16U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                >> 0x14U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                  >> 0x15U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                   >> 0x13U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                     >> 0x14U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                      >> 0x12U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                        >> 0x13U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                         >> 0x11U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                           >> 0x12U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                            >> 0x10U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                              >> 0x11U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                               >> 0xfU)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                                >> 0x10U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xdU]) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                               >> 8U)) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                                >> 0x10U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x36U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3250(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3250\n"); );
    // Body
    vlSelf->__VdfgTmp_hd9956d35__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                       >> 0xeU)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                         >> 0xfU)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                             >> 0xdU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                               >> 0xeU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                >> 0xcU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                  >> 0xdU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                   >> 0xbU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                     >> 0xcU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                      >> 0xaU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                        >> 0xbU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                         >> 9U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                           >> 0xaU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                            >> 8U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                              >> 9U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                               >> 7U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                                >> 8U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xdU] 
                                                                            << 8U)) 
                                                                        | ((0xff00U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU]) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                                >> 8U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x35U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3251(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3251\n"); );
    // Body
    vlSelf->__VdfgTmp_h874a0b50__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                         >> 7U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                             >> 5U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                               >> 6U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                  >> 5U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                   >> 3U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                     >> 4U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                      >> 2U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                        >> 3U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                         >> 1U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                           >> 2U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU]) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU] 
                                                                              >> 1U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU]))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xdU] 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xdU] 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xdU]))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x34U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3252(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3252\n"); );
    // Body
    vlSelf->__VdfgTmp_h3ef9a6af__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                      >> 0x1fU))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                             >> 0x1dU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                               >> 0x1eU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                >> 0x1cU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                  >> 0x1dU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                   >> 0x1bU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                     >> 0x1cU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                      >> 0x1aU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                        >> 0x1bU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                         >> 0x19U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                           >> 0x1aU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                            >> 0x18U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                              >> 0x19U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                               >> 0x17U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                                >> 0x18U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xcU] 
                                                                            >> 8U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                               >> 0x10U)) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                              >> 0x18U))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x33U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3253(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3253\n"); );
    // Body
    vlSelf->__VdfgTmp_h44a2619a__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                         >> 0x17U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                             >> 0x15U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                               >> 0x16U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                >> 0x14U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                  >> 0x15U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                   >> 0x13U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                     >> 0x14U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                      >> 0x12U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                        >> 0x13U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                         >> 0x11U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                           >> 0x12U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                            >> 0x10U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                              >> 0x11U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                               >> 0xfU)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                                >> 0x10U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xcU]) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                               >> 8U)) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                                >> 0x10U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x32U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3254(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3254\n"); );
    // Body
    vlSelf->__VdfgTmp_h5f81649e__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                       >> 0xeU)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                         >> 0xfU)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                             >> 0xdU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                               >> 0xeU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                >> 0xcU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                  >> 0xdU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                   >> 0xbU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                     >> 0xcU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                      >> 0xaU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                        >> 0xbU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                         >> 9U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                           >> 0xaU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                            >> 8U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                              >> 9U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                               >> 7U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                                >> 8U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xcU] 
                                                                            << 8U)) 
                                                                        | ((0xff00U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU]) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                                >> 8U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x31U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3255(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3255\n"); );
    // Body
    vlSelf->__VdfgTmp_hde2356eb__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                         >> 7U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                             >> 5U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                               >> 6U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                  >> 5U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                   >> 3U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                     >> 4U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                      >> 2U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                        >> 3U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                         >> 1U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                           >> 2U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU]) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU] 
                                                                              >> 1U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU]))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xcU] 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xcU] 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xcU]))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x30U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3256(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3256\n"); );
    // Body
    vlSelf->__VdfgTmp_h926bdf6e__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                      >> 0x1fU))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                             >> 0x1dU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                               >> 0x1eU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                >> 0x1cU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                  >> 0x1dU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                   >> 0x1bU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                     >> 0x1cU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                      >> 0x1aU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                        >> 0x1bU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                         >> 0x19U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                           >> 0x1aU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                            >> 0x18U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                              >> 0x19U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                               >> 0x17U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                                >> 0x18U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xbU] 
                                                                            >> 8U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                               >> 0x10U)) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                              >> 0x18U))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x2fU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3257(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3257\n"); );
    // Body
    vlSelf->__VdfgTmp_ha7cfefe2__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                         >> 0x17U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                             >> 0x15U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                               >> 0x16U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                >> 0x14U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                  >> 0x15U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                   >> 0x13U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                     >> 0x14U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                      >> 0x12U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                        >> 0x13U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                         >> 0x11U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                           >> 0x12U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                            >> 0x10U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                              >> 0x11U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                               >> 0xfU)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                                >> 0x10U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xbU]) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                               >> 8U)) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                                >> 0x10U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x2eU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3258(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3258\n"); );
    // Body
    vlSelf->__VdfgTmp_h4fca0c32__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                       >> 0xeU)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                         >> 0xfU)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                             >> 0xdU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                               >> 0xeU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                >> 0xcU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                  >> 0xdU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                   >> 0xbU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                     >> 0xcU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                      >> 0xaU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                        >> 0xbU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                         >> 9U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                           >> 0xaU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                            >> 8U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                              >> 9U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                               >> 7U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                                >> 8U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xbU] 
                                                                            << 8U)) 
                                                                        | ((0xff00U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU]) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                                >> 8U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x2dU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3259(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3259\n"); );
    // Body
    vlSelf->__VdfgTmp_hc847f0f3__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                         >> 7U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                             >> 5U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                               >> 6U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                  >> 5U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                   >> 3U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                     >> 4U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                      >> 2U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                        >> 3U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                         >> 1U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                           >> 2U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU]) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU] 
                                                                              >> 1U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU]))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xbU] 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xbU] 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xbU]))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x2cU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3260(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3260\n"); );
    // Body
    vlSelf->__VdfgTmp_hf59d281c__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                      >> 0x1fU))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                             >> 0x1dU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                               >> 0x1eU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                >> 0x1cU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                  >> 0x1dU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                   >> 0x1bU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                     >> 0x1cU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                      >> 0x1aU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                        >> 0x1bU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                         >> 0x19U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                           >> 0x1aU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                            >> 0x18U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                              >> 0x19U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                               >> 0x17U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                                >> 0x18U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xaU] 
                                                                            >> 8U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                               >> 0x10U)) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                              >> 0x18U))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x2bU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3261(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3261\n"); );
    // Body
    vlSelf->__VdfgTmp_h12f029ae__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                         >> 0x17U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                             >> 0x15U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                               >> 0x16U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                >> 0x14U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                  >> 0x15U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                   >> 0x13U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                     >> 0x14U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                      >> 0x12U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                        >> 0x13U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                         >> 0x11U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                           >> 0x12U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                            >> 0x10U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                              >> 0x11U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                               >> 0xfU)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                                >> 0x10U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xaU]) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                               >> 8U)) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                                >> 0x10U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x2aU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3262(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3262\n"); );
    // Body
    vlSelf->__VdfgTmp_h1d2ddbcd__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                       >> 0xeU)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                         >> 0xfU)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                             >> 0xdU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                               >> 0xeU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                >> 0xcU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                  >> 0xdU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                   >> 0xbU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                     >> 0xcU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                      >> 0xaU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                        >> 0xbU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                         >> 9U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                           >> 0xaU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                            >> 8U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                              >> 9U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                               >> 7U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                                >> 8U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xaU] 
                                                                            << 8U)) 
                                                                        | ((0xff00U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU]) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                                >> 8U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x29U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3263(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3263\n"); );
    // Body
    vlSelf->__VdfgTmp_h11d52baf__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                         >> 7U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                             >> 5U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                               >> 6U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                  >> 5U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                   >> 3U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                     >> 4U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                      >> 2U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                        >> 3U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                         >> 1U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                           >> 2U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU]) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU] 
                                                                              >> 1U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU]))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[0xaU] 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[0xaU] 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[0xaU]))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x28U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3264(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3264\n"); );
    // Body
    vlSelf->__VdfgTmp_h899bc2b1__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                      >> 0x1fU))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                             >> 0x1dU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                               >> 0x1eU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                >> 0x1cU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                  >> 0x1dU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                   >> 0x1bU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                     >> 0x1cU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                      >> 0x1aU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                        >> 0x1bU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                         >> 0x19U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                           >> 0x1aU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                            >> 0x18U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                              >> 0x19U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                               >> 0x17U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                                >> 0x18U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[9U] 
                                                                            >> 8U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                               >> 0x10U)) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                              >> 0x18U))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x27U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3265(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3265\n"); );
    // Body
    vlSelf->__VdfgTmp_h24e32323__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                         >> 0x17U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                             >> 0x15U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                               >> 0x16U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                >> 0x14U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                  >> 0x15U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                   >> 0x13U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                     >> 0x14U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                      >> 0x12U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                        >> 0x13U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                         >> 0x11U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                           >> 0x12U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                            >> 0x10U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                              >> 0x11U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                               >> 0xfU)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                                >> 0x10U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[9U]) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                               >> 8U)) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                                >> 0x10U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x26U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3266(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3266\n"); );
    // Body
    vlSelf->__VdfgTmp_hded5f7fe__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                       >> 0xeU)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                         >> 0xfU)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                             >> 0xdU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                               >> 0xeU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                >> 0xcU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                  >> 0xdU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                   >> 0xbU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                     >> 0xcU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                      >> 0xaU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                        >> 0xbU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                         >> 9U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                           >> 0xaU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                            >> 8U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                              >> 9U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                               >> 7U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                                >> 8U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[9U] 
                                                                            << 8U)) 
                                                                        | ((0xff00U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U]) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                                >> 8U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x25U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3267(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3267\n"); );
    // Body
    vlSelf->__VdfgTmp_hd351822e__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                         >> 7U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                             >> 5U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                               >> 6U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                  >> 5U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                   >> 3U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                     >> 4U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                      >> 2U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                        >> 3U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                         >> 1U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                           >> 2U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U]) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U] 
                                                                              >> 1U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U]))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[9U] 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[9U] 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[9U]))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x24U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3268(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3268\n"); );
    // Body
    vlSelf->__VdfgTmp_ha8b2fc25__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                      >> 0x1fU))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                             >> 0x1dU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                               >> 0x1eU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                >> 0x1cU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                  >> 0x1dU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                   >> 0x1bU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                     >> 0x1cU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                      >> 0x1aU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                        >> 0x1bU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                         >> 0x19U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                           >> 0x1aU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                            >> 0x18U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                              >> 0x19U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                               >> 0x17U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                                >> 0x18U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[8U] 
                                                                            >> 8U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                               >> 0x10U)) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                              >> 0x18U))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x23U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3269(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3269\n"); );
    // Body
    vlSelf->__VdfgTmp_h11f0af40__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                         >> 0x17U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                             >> 0x15U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                               >> 0x16U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                >> 0x14U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                  >> 0x15U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                   >> 0x13U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                     >> 0x14U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                      >> 0x12U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                        >> 0x13U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                         >> 0x11U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                           >> 0x12U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                            >> 0x10U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                              >> 0x11U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                               >> 0xfU)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                                >> 0x10U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[8U]) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                               >> 8U)) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                                >> 0x10U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x22U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3270(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3270\n"); );
    // Body
    vlSelf->__VdfgTmp_hdf342a5c__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                       >> 0xeU)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                         >> 0xfU)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                             >> 0xdU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                               >> 0xeU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                >> 0xcU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                  >> 0xdU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                   >> 0xbU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                     >> 0xcU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                      >> 0xaU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                        >> 0xbU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                         >> 9U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                           >> 0xaU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                            >> 8U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                              >> 9U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                               >> 7U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                                >> 8U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[8U] 
                                                                            << 8U)) 
                                                                        | ((0xff00U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U]) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                                >> 8U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x21U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3271(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3271\n"); );
    // Body
    vlSelf->__VdfgTmp_h87196b2e__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                         >> 7U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                             >> 5U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                               >> 6U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                  >> 5U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                   >> 3U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                     >> 4U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                      >> 2U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                        >> 3U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                         >> 1U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                           >> 2U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U]) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U] 
                                                                              >> 1U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U]))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[8U] 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[8U] 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[8U]))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x20U)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3272(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3272\n"); );
    // Body
    vlSelf->__VdfgTmp_heb6730bf__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                      >> 0x1fU))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                             >> 0x1dU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                               >> 0x1eU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                >> 0x1cU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                  >> 0x1dU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                   >> 0x1bU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                     >> 0x1cU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                      >> 0x1aU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                        >> 0x1bU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                         >> 0x19U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                           >> 0x1aU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                            >> 0x18U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                              >> 0x19U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                               >> 0x17U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                                >> 0x18U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[7U] 
                                                                            >> 8U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                               >> 0x10U)) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                              >> 0x18U))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x1fU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3273(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3273\n"); );
    // Body
    vlSelf->__VdfgTmp_hb09ede19__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                         >> 0x17U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                             >> 0x15U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                               >> 0x16U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                >> 0x14U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                  >> 0x15U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                   >> 0x13U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                     >> 0x14U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                      >> 0x12U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                        >> 0x13U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                         >> 0x11U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                           >> 0x12U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                            >> 0x10U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                              >> 0x11U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                               >> 0xfU)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                                >> 0x10U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[7U]) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                               >> 8U)) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                                >> 0x10U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x1eU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3274(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3274\n"); );
    // Body
    vlSelf->__VdfgTmp_hb0bfe336__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                       >> 0xeU)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                         >> 0xfU)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                             >> 0xdU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                               >> 0xeU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                >> 0xcU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                  >> 0xdU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                   >> 0xbU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                     >> 0xcU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                      >> 0xaU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                        >> 0xbU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                         >> 9U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                           >> 0xaU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                            >> 8U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                              >> 9U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                               >> 7U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                                >> 8U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[7U] 
                                                                            << 8U)) 
                                                                        | ((0xff00U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U]) 
                                                                           | (0xffU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                                >> 8U)))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x1dU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3275(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3275\n"); );
    // Body
    vlSelf->__VdfgTmp_hfaecf54d__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                       >> 6U)) 
                                                   | (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                         >> 7U)))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                             >> 5U)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                               >> 6U)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                  >> 5U)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                   >> 3U)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                     >> 4U)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                      >> 2U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                        >> 3U)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                         >> 1U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                           >> 2U)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U]) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U] 
                                                                              >> 1U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U]))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[7U] 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[7U] 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[7U]))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x1cU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3276(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3276\n"); );
    // Body
    vlSelf->__VdfgTmp_h28d9da2a__0 = (0xffU & (((((0xfU 
                                                   & (0xc8e6U 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                  >> 
                                                  ((2U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[6U] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[6U] 
                                                      >> 0x1fU))) 
                                                 << 0x1fU) 
                                                | ((0x40000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[6U] 
                                                             >> 0x1dU)) 
                                                         | (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[6U] 
                                                               >> 0x1eU)))) 
                                                       << 0x1eU)) 
                                                   | ((0x20000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[6U] 
                                                                >> 0x1cU)) 
                                                            | (1U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[6U] 
                                                                  >> 0x1dU)))) 
                                                          << 0x1dU)) 
                                                      | ((0x10000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[6U] 
                                                                   >> 0x1bU)) 
                                                               | (1U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[6U] 
                                                                     >> 0x1cU)))) 
                                                             << 0x1cU)) 
                                                         | ((0x8000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[6U] 
                                                                      >> 0x1aU)) 
                                                                  | (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[6U] 
                                                                        >> 0x1bU)))) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[6U] 
                                                                         >> 0x19U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[6U] 
                                                                           >> 0x1aU)))) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[6U] 
                                                                            >> 0x18U)) 
                                                                        | (1U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[6U] 
                                                                              >> 0x19U)))) 
                                                                      << 0x19U)) 
                                                                  | ((0x1000000U 
                                                                      & (((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[6U] 
                                                                               >> 0x17U)) 
                                                                           | (1U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[6U] 
                                                                                >> 0x18U)))) 
                                                                         << 0x18U)) 
                                                                     | ((0xff0000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_194[6U] 
                                                                            >> 8U)) 
                                                                        | ((0xff00U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data[6U] 
                                                                               >> 0x10U)) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata[6U] 
                                                                              >> 0x18U))))))))))) 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask 
                                                                                >> 0x1bU)))
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h04e15d74__0)
                                                                     : 0U), 3U))));
}
