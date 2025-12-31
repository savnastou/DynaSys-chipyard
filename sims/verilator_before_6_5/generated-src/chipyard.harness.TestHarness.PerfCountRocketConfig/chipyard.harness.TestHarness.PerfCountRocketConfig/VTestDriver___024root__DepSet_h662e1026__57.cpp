// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2890(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2890\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_b_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__b_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_b_bits_param) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__param_2))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1076: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'B' channel param changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1076, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1078: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1078, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_b_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__b_first_counter)))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_b_bits_address 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__address_1)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1082: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'B' channel addresss changed with multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1082, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1084: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1084, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2891(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2891\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter)))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__opcode_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1088: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'C' channel opcode changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1088, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1090: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1090, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__param_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1094: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'C' channel param changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1094, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1096: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1096, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2892(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2892\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__size_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1100: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'C' channel size changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1100, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1102: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1102, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter)))) 
                     & ((0x100U | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__source_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1106: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'C' channel source changed within multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1106, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1108: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1108, "");
        }
    }
}

extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h52851b6f_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2893(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2893\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter)))) 
                     & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[1U] 
                          << 0x14U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xcU)) != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__address_2)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1112: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'C' channel address changed with multibeat operation (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1112, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1114: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1114, "");
        }
    }
    VL_SHIFTR_WWI(259,259,9, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_2) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                        & __Vtemp_1[0U])))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1118: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'A' channel re-used a source ID (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1118, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1120: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1120, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2894(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2894\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    // Body
    VL_SHIFTR_WWI(259,259,9, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                            & __Vtemp_1[0U]) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1124: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1124, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1126: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1126, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__same_cycle_resp))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1130: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1130, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1132: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1132, "");
        }
    }
}

extern const VlWide<33>/*1055:0*/ VTestDriver__ConstPool__CONST_hf1d86c7e_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2895(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2895\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_1;
    VlWide<33>/*1055:0*/ __Vtemp_3;
    VlWide<33>/*1055:0*/ __Vtemp_5;
    VlWide<33>/*1055:0*/ __Vtemp_7;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__same_cycle_resp))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1136: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1136, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1138: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1138, "");
        }
    }
    VL_SHIFTR_WWI(1036,1036,11, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source) 
                   << 2U));
    VL_SHIFTR_WWI(1036,1036,11, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source) 
                   << 2U));
    VL_SHIFTR_WWI(1036,1036,11, __Vtemp_5, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source) 
                   << 2U));
    VL_SHIFTR_WWI(1036,1036,11, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source) 
                   << 2U));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               ((VTestDriver__ConstPool__CONST_hf1d86c7e_0[0U] 
                                                 & __Vtemp_1[0U]) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & ((VTestDriver__ConstPool__CONST_hf1d86c7e_0[0U] 
                                                      & __Vtemp_3[0U]) 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & ((VTestDriver__ConstPool__CONST_hf1d86c7e_0[0U] 
                                                         & __Vtemp_5[0U]) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & ((VTestDriver__ConstPool__CONST_hf1d86c7e_0[0U] 
                                                               & __Vtemp_7[0U]) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1142: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1142, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1144: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1144, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2896(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2896\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_1;
    // Body
    VL_SHIFTR_WWI(1036,1036,11, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source) 
                   << 2U));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_size) 
                        != (7U & ((VTestDriver__ConstPool__CONST_hf1d86c7e_0[0U] 
                                   & __Vtemp_1[0U]) 
                                  >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1148: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1148, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1150: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1150, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_valid)) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source) 
                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source))) 
                       & (6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__full) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1154: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1154, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1156: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1156, "");
        }
    }
}

extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_hcc0376e0_0;
extern const VlWide<16>/*511:0*/ VTestDriver__ConstPool__CONST_h1c449781_0;
extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h09420029_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2897(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2897\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_4;
    VlWide<9>/*287:0*/ __Vtemp_8;
    // Body
    VL_SHIFTL_WWI(259,259,9, __Vtemp_1, VTestDriver__ConstPool__CONST_hcc0376e0_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_4, VTestDriver__ConstPool__CONST_h1c449781_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source));
    VL_SHIFTL_WWI(259,259,9, __Vtemp_8, VTestDriver__ConstPool__CONST_hcc0376e0_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ ((0U != ((((((((((VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                      ? 
                                                     __Vtemp_1[0U]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h09420029_0[0U])) 
                                                 ^ 
                                                 (VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64)
                                                      ? 
                                                     __Vtemp_4[0U]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h09420029_0[0U]))) 
                                                | ((VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                        ? 
                                                       __Vtemp_1[1U]
                                                        : 
                                                       VTestDriver__ConstPool__CONST_h09420029_0[1U])) 
                                                   ^ 
                                                   (VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64)
                                                        ? 
                                                       __Vtemp_4[1U]
                                                        : 
                                                       VTestDriver__ConstPool__CONST_h09420029_0[1U])))) 
                                               | ((VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                       ? 
                                                      __Vtemp_1[2U]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_h09420029_0[2U])) 
                                                  ^ 
                                                  (VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64)
                                                       ? 
                                                      __Vtemp_4[2U]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_h09420029_0[2U])))) 
                                              | ((VTestDriver__ConstPool__CONST_h52851b6f_0[3U] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                      ? 
                                                     __Vtemp_1[3U]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h09420029_0[3U])) 
                                                 ^ 
                                                 (VTestDriver__ConstPool__CONST_h52851b6f_0[3U] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64)
                                                      ? 
                                                     __Vtemp_4[3U]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h09420029_0[3U])))) 
                                             | ((VTestDriver__ConstPool__CONST_h52851b6f_0[4U] 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                     ? 
                                                    __Vtemp_1[4U]
                                                     : 
                                                    VTestDriver__ConstPool__CONST_h09420029_0[4U])) 
                                                ^ (
                                                   VTestDriver__ConstPool__CONST_h52851b6f_0[4U] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64)
                                                       ? 
                                                      __Vtemp_4[4U]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_h09420029_0[4U])))) 
                                            | ((VTestDriver__ConstPool__CONST_h52851b6f_0[5U] 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                    ? 
                                                   __Vtemp_1[5U]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h09420029_0[5U])) 
                                               ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[5U] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64)
                                                      ? 
                                                     __Vtemp_4[5U]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h09420029_0[5U])))) 
                                           | ((VTestDriver__ConstPool__CONST_h52851b6f_0[6U] 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                   ? 
                                                  __Vtemp_1[6U]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h09420029_0[6U])) 
                                              ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[6U] 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64)
                                                     ? 
                                                    __Vtemp_4[6U]
                                                     : 
                                                    VTestDriver__ConstPool__CONST_h09420029_0[6U])))) 
                                          | ((VTestDriver__ConstPool__CONST_h52851b6f_0[7U] 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                  ? 
                                                 __Vtemp_1[7U]
                                                  : 
                                                 VTestDriver__ConstPool__CONST_h09420029_0[7U])) 
                                             ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[7U] 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64)
                                                    ? 
                                                   __Vtemp_4[7U]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h09420029_0[7U])))) 
                                         | ((VTestDriver__ConstPool__CONST_h52851b6f_0[8U] 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                 ? 
                                                __Vtemp_1[8U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_h09420029_0[8U])) 
                                            ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[8U] 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_64)
                                                   ? 
                                                  __Vtemp_4[8U]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h09420029_0[8U]))))) 
                                 | (0U == (((((((((
                                                   VTestDriver__ConstPool__CONST_h09420029_0[0U] 
                                                   ^ 
                                                   (VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                        ? 
                                                       __Vtemp_8[0U]
                                                        : 
                                                       VTestDriver__ConstPool__CONST_h09420029_0[0U]))) 
                                                  | (VTestDriver__ConstPool__CONST_h09420029_0[1U] 
                                                     ^ 
                                                     (VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                          ? 
                                                         __Vtemp_8[1U]
                                                          : 
                                                         VTestDriver__ConstPool__CONST_h09420029_0[1U])))) 
                                                 | (VTestDriver__ConstPool__CONST_h09420029_0[2U] 
                                                    ^ 
                                                    (VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                         ? 
                                                        __Vtemp_8[2U]
                                                         : 
                                                        VTestDriver__ConstPool__CONST_h09420029_0[2U])))) 
                                                | (VTestDriver__ConstPool__CONST_h09420029_0[3U] 
                                                   ^ 
                                                   (VTestDriver__ConstPool__CONST_h52851b6f_0[3U] 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                        ? 
                                                       __Vtemp_8[3U]
                                                        : 
                                                       VTestDriver__ConstPool__CONST_h09420029_0[3U])))) 
                                               | (VTestDriver__ConstPool__CONST_h09420029_0[4U] 
                                                  ^ 
                                                  (VTestDriver__ConstPool__CONST_h52851b6f_0[4U] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                       ? 
                                                      __Vtemp_8[4U]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_h09420029_0[4U])))) 
                                              | (VTestDriver__ConstPool__CONST_h09420029_0[5U] 
                                                 ^ 
                                                 (VTestDriver__ConstPool__CONST_h52851b6f_0[5U] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                      ? 
                                                     __Vtemp_8[5U]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h09420029_0[5U])))) 
                                             | (VTestDriver__ConstPool__CONST_h09420029_0[6U] 
                                                ^ (
                                                   VTestDriver__ConstPool__CONST_h52851b6f_0[6U] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                       ? 
                                                      __Vtemp_8[6U]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_h09420029_0[6U])))) 
                                            | (VTestDriver__ConstPool__CONST_h09420029_0[7U] 
                                               ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[7U] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                      ? 
                                                     __Vtemp_8[7U]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h09420029_0[7U])))) 
                                           | (VTestDriver__ConstPool__CONST_h09420029_0[8U] 
                                              ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[8U] 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                     ? 
                                                    __Vtemp_8[8U]
                                                     : 
                                                    VTestDriver__ConstPool__CONST_h09420029_0[8U]))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1160: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1160, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1162: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1162, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == (((((((((VTestDriver__ConstPool__CONST_h09420029_0[0U] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight[0U]) 
                                                 | (VTestDriver__ConstPool__CONST_h09420029_0[1U] 
                                                    ^ 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight[1U])) 
                                                | (VTestDriver__ConstPool__CONST_h09420029_0[2U] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight[2U])) 
                                               | (VTestDriver__ConstPool__CONST_h09420029_0[3U] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight[3U])) 
                                              | (VTestDriver__ConstPool__CONST_h09420029_0[4U] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight[4U])) 
                                             | (VTestDriver__ConstPool__CONST_h09420029_0[5U] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight[5U])) 
                                            | (VTestDriver__ConstPool__CONST_h09420029_0[6U] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight[6U])) 
                                           | (VTestDriver__ConstPool__CONST_h09420029_0[7U] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight[7U])) 
                                          | (VTestDriver__ConstPool__CONST_h09420029_0[8U] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight[8U]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1166: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1166, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1168: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1168, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2898(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2898\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<9>/*287:0*/ __Vtemp_3;
    // Body
    VL_SHIFTR_WWI(259,259,9, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1, 
                  (0x100U | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                   >> 0xaU))));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_6) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                        & __Vtemp_1[0U])))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1172: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'C' channel re-used a source ID (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1172, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1174: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1174, "");
        }
    }
    VL_SHIFTR_WWI(259,259,9, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source));
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                        & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                            & __Vtemp_3[0U]) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                                & (IData)(
                                                          ((6U 
                                                            == 
                                                            (6U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                                                           & ((0x100U 
                                                               | (3U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 0xaU))) 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1178: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1178, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1180: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1180, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2899(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2899\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode))) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(((6U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                                     & ((0x100U | (3U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xaU))) 
                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source)))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_size) 
                        != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                  >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1184: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1184, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1186: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1186, "");
        }
    }
    VL_SHIFTR_WWI(1036,1036,11, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source) 
                   << 2U));
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode))) 
                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                             & (IData)(((6U == (6U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                                        & ((0x100U 
                                            | (3U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU))) 
                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source))))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_size) 
                        != (7U & ((VTestDriver__ConstPool__CONST_hf1d86c7e_0[0U] 
                                   & __Vtemp_1[0U]) 
                                  >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1190: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1190, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1192: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1192, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2900(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2900\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<9>/*287:0*/ __Vtemp_5;
    VlWide<16>/*511:0*/ __Vtemp_9;
    // Body
    if (VL_UNLIKELY((((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                            & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid)) 
                         & ((0x100U | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU))) 
                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source))) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode))) 
                       & (~ ((4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U])) 
                             | (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U]))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__full) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_c_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1196: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1196, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1198: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1198, "");
        }
    }
    VL_SHIFTL_WWI(259,259,9, __Vtemp_1, VTestDriver__ConstPool__CONST_hcc0376e0_0, 
                  (0x100U | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                   >> 0xaU))));
    VL_SHIFTL_WWI(259,259,9, __Vtemp_5, VTestDriver__ConstPool__CONST_hcc0376e0_0, 
                  (0x100U | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT___ram_ext_R0_data[0U] 
                                   >> 0xaU))));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_9, VTestDriver__ConstPool__CONST_h1c449781_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source));
    if (VL_UNLIKELY((((0U != (((((((((VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                          ? __Vtemp_1[0U]
                                          : VTestDriver__ConstPool__CONST_h09420029_0[0U])) 
                                     | (VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                            ? __Vtemp_1[1U]
                                            : VTestDriver__ConstPool__CONST_h09420029_0[1U]))) 
                                    | (VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                       & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                           ? __Vtemp_1[2U]
                                           : VTestDriver__ConstPool__CONST_h09420029_0[2U]))) 
                                   | (VTestDriver__ConstPool__CONST_h52851b6f_0[3U] 
                                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                          ? __Vtemp_1[3U]
                                          : VTestDriver__ConstPool__CONST_h09420029_0[3U]))) 
                                  | (VTestDriver__ConstPool__CONST_h52851b6f_0[4U] 
                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                         ? __Vtemp_1[4U]
                                         : VTestDriver__ConstPool__CONST_h09420029_0[4U]))) 
                                 | (VTestDriver__ConstPool__CONST_h52851b6f_0[5U] 
                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                        ? __Vtemp_1[5U]
                                        : VTestDriver__ConstPool__CONST_h09420029_0[5U]))) 
                                | (VTestDriver__ConstPool__CONST_h52851b6f_0[6U] 
                                   & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                       ? __Vtemp_1[6U]
                                       : VTestDriver__ConstPool__CONST_h09420029_0[6U]))) 
                               | (VTestDriver__ConstPool__CONST_h52851b6f_0[7U] 
                                  & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                      ? __Vtemp_1[7U]
                                      : VTestDriver__ConstPool__CONST_h09420029_0[7U]))) 
                              | (VTestDriver__ConstPool__CONST_h52851b6f_0[8U] 
                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                     ? __Vtemp_1[8U]
                                     : VTestDriver__ConstPool__CONST_h09420029_0[8U])))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (0U == ((((((((((VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                            ? __Vtemp_5[0U]
                                            : VTestDriver__ConstPool__CONST_h09420029_0[0U])) 
                                       ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[0U] 
                                          & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                                               & (0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                                              & (6U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode)))
                                              ? __Vtemp_9[0U]
                                              : VTestDriver__ConstPool__CONST_h09420029_0[0U]))) 
                                      | ((VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                          & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                              ? __Vtemp_5[1U]
                                              : VTestDriver__ConstPool__CONST_h09420029_0[1U])) 
                                         ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[1U] 
                                            & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode)))
                                                ? __Vtemp_9[1U]
                                                : VTestDriver__ConstPool__CONST_h09420029_0[1U])))) 
                                     | ((VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                         & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                             ? __Vtemp_5[2U]
                                             : VTestDriver__ConstPool__CONST_h09420029_0[2U])) 
                                        ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[2U] 
                                           & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                                                & (0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                                               & (6U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode)))
                                               ? __Vtemp_9[2U]
                                               : VTestDriver__ConstPool__CONST_h09420029_0[2U])))) 
                                    | ((VTestDriver__ConstPool__CONST_h52851b6f_0[3U] 
                                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                            ? __Vtemp_5[3U]
                                            : VTestDriver__ConstPool__CONST_h09420029_0[3U])) 
                                       ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[3U] 
                                          & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                                               & (0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                                              & (6U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode)))
                                              ? __Vtemp_9[3U]
                                              : VTestDriver__ConstPool__CONST_h09420029_0[3U])))) 
                                   | ((VTestDriver__ConstPool__CONST_h52851b6f_0[4U] 
                                       & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                           ? __Vtemp_5[4U]
                                           : VTestDriver__ConstPool__CONST_h09420029_0[4U])) 
                                      ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[4U] 
                                         & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                                              & (0U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                                             & (6U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode)))
                                             ? __Vtemp_9[4U]
                                             : VTestDriver__ConstPool__CONST_h09420029_0[4U])))) 
                                  | ((VTestDriver__ConstPool__CONST_h52851b6f_0[5U] 
                                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                          ? __Vtemp_5[5U]
                                          : VTestDriver__ConstPool__CONST_h09420029_0[5U])) 
                                     ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[5U] 
                                        & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                                             & (0U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                                            & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode)))
                                            ? __Vtemp_9[5U]
                                            : VTestDriver__ConstPool__CONST_h09420029_0[5U])))) 
                                 | ((VTestDriver__ConstPool__CONST_h52851b6f_0[6U] 
                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                         ? __Vtemp_5[6U]
                                         : VTestDriver__ConstPool__CONST_h09420029_0[6U])) 
                                    ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[6U] 
                                       & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                                            & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                                           & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode)))
                                           ? __Vtemp_9[6U]
                                           : VTestDriver__ConstPool__CONST_h09420029_0[6U])))) 
                                | ((VTestDriver__ConstPool__CONST_h52851b6f_0[7U] 
                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                        ? __Vtemp_5[7U]
                                        : VTestDriver__ConstPool__CONST_h09420029_0[7U])) 
                                   ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[7U] 
                                      & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                                          & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode)))
                                          ? __Vtemp_9[7U]
                                          : VTestDriver__ConstPool__CONST_h09420029_0[7U])))) 
                               | ((VTestDriver__ConstPool__CONST_h52851b6f_0[8U] 
                                   & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_4))
                                       ? __Vtemp_5[8U]
                                       : VTestDriver__ConstPool__CONST_h09420029_0[8U])) 
                                  ^ (VTestDriver__ConstPool__CONST_h52851b6f_0[8U] 
                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
                                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2))) 
                                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_opcode)))
                                         ? __Vtemp_9[8U]
                                         : VTestDriver__ConstPool__CONST_h09420029_0[8U])))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1202: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'C' and 'D' concurrent, despite minlatency > 0 (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1202, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1204: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1204, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2901(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2901\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == (((((((((VTestDriver__ConstPool__CONST_h09420029_0[0U] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1[0U]) 
                                                 | (VTestDriver__ConstPool__CONST_h09420029_0[1U] 
                                                    ^ 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1[1U])) 
                                                | (VTestDriver__ConstPool__CONST_h09420029_0[2U] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1[2U])) 
                                               | (VTestDriver__ConstPool__CONST_h09420029_0[3U] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1[3U])) 
                                              | (VTestDriver__ConstPool__CONST_h09420029_0[4U] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1[4U])) 
                                             | (VTestDriver__ConstPool__CONST_h09420029_0[5U] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1[5U])) 
                                            | (VTestDriver__ConstPool__CONST_h09420029_0[6U] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1[6U])) 
                                           | (VTestDriver__ConstPool__CONST_h09420029_0[7U] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1[7U])) 
                                          | (VTestDriver__ConstPool__CONST_h09420029_0[8U] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_1[8U]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1208: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1208, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1210: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1210, "");
        }
    }
    if (VL_UNLIKELY((0x7fU & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___d_first_T_3) 
                                & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_3)) 
                                   & ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_prio_0)) 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT____VdfgTmp_hde525748__0) 
                                             >> 1U))) 
                                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_prio_0)) 
                                         | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT____VdfgTmp_hde525748__0) 
                                            >> 2U))))) 
                               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_2) 
                                 >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_sink)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1214: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'D' channel re-used a sink ID (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1214, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1216: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1216, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2902(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2902\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_e_q__DOT__empty)) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (~ (0x7fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_set) 
                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_2)) 
                                    >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_36.sv:1220: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor: Assertion failed: 'E' channel acknowledged for nothing inflight (connected at generators/rocket-chip-inclusive-cache/design/craft/inclusivecache/src/Configs.scala:126:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1220, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_36.sv:1222: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_36.sv", 1222, "");
        }
    }
}

void VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(IData/*31:0*/ chip_id, QData/*63:0*/ mem_size, QData/*63:0*/ word_size, QData/*63:0*/ line_size, QData/*63:0*/ id_bits, QData/*63:0*/ clock_hz, QData/*63:0*/ mem_base, QData/*63:0*/ &memory_init__Vfuncrtn);
void VTestDriver___024unit____Vdpiimwrap_memory_tick_TOP____024unit(QData/*63:0*/ channel, CData/*0:0*/ reset, CData/*0:0*/ ar_valid, CData/*0:0*/ &ar_ready, QData/*63:0*/ ar_addr, IData/*31:0*/ ar_id, IData/*31:0*/ ar_size, IData/*31:0*/ ar_len, CData/*0:0*/ aw_valid, CData/*0:0*/ &aw_ready, QData/*63:0*/ aw_addr, IData/*31:0*/ aw_id, IData/*31:0*/ aw_size, IData/*31:0*/ aw_len, CData/*0:0*/ w_valid, CData/*0:0*/ &w_ready, IData/*31:0*/ w_strb, QData/*63:0*/ w_data, CData/*0:0*/ w_last, CData/*0:0*/ &r_valid, CData/*0:0*/ r_ready, IData/*31:0*/ &r_id, IData/*31:0*/ &r_resp, QData/*63:0*/ &r_data, CData/*0:0*/ &r_last, CData/*0:0*/ &b_valid, CData/*0:0*/ b_ready, IData/*31:0*/ &b_id, IData/*31:0*/ &b_resp);

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3601(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3601\n"); );
    // Init
    QData/*63:0*/ __Vfunc_memory_init__0__Vfuncout;
    __Vfunc_memory_init__0__Vfuncout = 0;
    CData/*0:0*/ __Vtask_memory_tick__1__ar_ready;
    __Vtask_memory_tick__1__ar_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__1__aw_ready;
    __Vtask_memory_tick__1__aw_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__1__w_ready;
    __Vtask_memory_tick__1__w_ready = 0;
    CData/*0:0*/ __Vtask_memory_tick__1__r_valid;
    __Vtask_memory_tick__1__r_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__1__r_id;
    __Vtask_memory_tick__1__r_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__1__r_resp;
    __Vtask_memory_tick__1__r_resp = 0;
    QData/*63:0*/ __Vtask_memory_tick__1__r_data;
    __Vtask_memory_tick__1__r_data = 0;
    CData/*0:0*/ __Vtask_memory_tick__1__r_last;
    __Vtask_memory_tick__1__r_last = 0;
    CData/*0:0*/ __Vtask_memory_tick__1__b_valid;
    __Vtask_memory_tick__1__b_valid = 0;
    IData/*31:0*/ __Vtask_memory_tick__1__b_id;
    __Vtask_memory_tick__1__b_id = 0;
    IData/*31:0*/ __Vtask_memory_tick__1__b_resp;
    __Vtask_memory_tick__1__b_resp = 0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h8582494a__0 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 
            << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
        = (1U | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h595d38b9__0 
                  << 2U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4) 
                            << 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___GEN_4 
        = (IData)((6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_opcode))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__beats1_1 
        = ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_opcode))
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_size)) 
                                         >> 3U)))) : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN 
        = (1U & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_h093aa888__0)) 
                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_4) 
                     >> 9U)) | (IData)(((0xc00U == 
                                         (0xc00U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_4))) 
                                        & (0U != (0xfffffffffffffULL 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_2))))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__initialized)))) {
            VTestDriver___024unit____Vdpiimwrap_memory_init_TOP____024unit(0U, 0x10000000ULL, 8ULL, 0x40ULL, 4ULL, 0x1dcd6500ULL, 0x80000000ULL, __Vfunc_memory_init__0__Vfuncout);
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__channel 
                = __Vfunc_memory_init__0__Vfuncout;
            vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__initialized = 1U;
        }
        VTestDriver___024unit____Vdpiimwrap_memory_tick_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__channel, 
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))), 
                                                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_ar_valid) 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_h1a71d5b7__0)), __Vtask_memory_tick__1__ar_ready, (QData)((IData)(
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                                                 ? 
                                                                                ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[0U] 
                                                                                >> 4U))
                                                                                 : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address))), vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id, 
                                                                       (7U 
                                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                                            ? 
                                                                           ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                             << 0x14U) 
                                                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                               >> 0xcU))
                                                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_size))), 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                                            ? 
                                                                           ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                             << 0x1cU) 
                                                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                               >> 4U))
                                                                            : 
                                                                           (~ 
                                                                            (0x7fffU 
                                                                             & (((IData)(0x7ffU) 
                                                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                                                >> 3U))))), 
                                                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_valid) 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_h42f03b9a__0)), __Vtask_memory_tick__1__aw_ready, (QData)((IData)(
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                                                 ? 
                                                                                ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[0U] 
                                                                                >> 4U))
                                                                                 : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address))), vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id, 
                                                                       (7U 
                                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                                            ? 
                                                                           ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                             << 0x14U) 
                                                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                               >> 0xcU))
                                                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_size))), 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                                                            ? 
                                                                           ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                             << 0x1cU) 
                                                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                                               >> 4U))
                                                                            : 
                                                                           (~ 
                                                                            (0x7fffU 
                                                                             & (((IData)(0x7ffU) 
                                                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                                                >> 3U))))), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_valid), __Vtask_memory_tick__1__w_ready, 
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full)
                                                                            ? 
                                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram[2U]
                                                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask))), 
                                                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full)
                                                                         ? 
                                                                        (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram[1U])) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram[0U])))
                                                                         : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_data), 
                                                                       (1U 
                                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full)
                                                                            ? 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram[2U] 
                                                                            >> 8U)
                                                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_w_bits_last))), __Vtask_memory_tick__1__r_valid, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_ready), __Vtask_memory_tick__1__r_id, __Vtask_memory_tick__1__r_resp, __Vtask_memory_tick__1__r_data, __Vtask_memory_tick__1__r_last, __Vtask_memory_tick__1__b_valid, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_ready), __Vtask_memory_tick__1__b_id, __Vtask_memory_tick__1__b_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready 
            = __Vtask_memory_tick__1__ar_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready 
            = __Vtask_memory_tick__1__aw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready 
            = __Vtask_memory_tick__1__w_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid 
            = __Vtask_memory_tick__1__r_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id 
            = __Vtask_memory_tick__1__r_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp 
            = __Vtask_memory_tick__1__r_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data 
            = __Vtask_memory_tick__1__r_data;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last 
            = __Vtask_memory_tick__1__r_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid 
            = __Vtask_memory_tick__1__b_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id 
            = __Vtask_memory_tick__1__b_id;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_resp 
            = __Vtask_memory_tick__1__b_resp;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg 
            = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid_reg 
            = vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg 
            = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id);
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_resp_reg 
            = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_resp);
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid_reg = 0U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4117(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4117\n"); );
    // Body
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[0U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[1U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[2U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[3U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[4U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__data[5U];
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap;
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___GEN_2) 
                       & (1U != vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__cmd)) 
                      & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__cmd)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TSIToTileLink.sv:151: Assertion failed in %NTestDriver.testHarness.ram.tsi2tl: Assertion failed: Bad TSI command\n    at TSIToTileLink.scala:137 assert(false.B, \"Bad TSI command\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TSIToTileLink.sv", 151, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TSIToTileLink.sv:153: Assertion failed in %NTestDriver.testHarness.ram.tsi2tl\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TSIToTileLink.sv", 153, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4118(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4118\n"); );
    // Body
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestDriver__DOT__reset)) 
                        & (IData)(vlSelf->TestDriver__DOT__verbose)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__do_deq)) 
                      & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__plusarg_reader_1__DOT__myplus)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_FWRITEF(0x80000002U,"UART TX (%x): %c\n",
                   8,vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory
                   [vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__deq_ptr_value],
                   8,vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory
                   [vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__deq_ptr_value]);
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__len 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__len;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__sample 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__sample;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__debounce 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__debounce;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__state 
        = vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__state;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__idx 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__idx;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter;
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ptr_match) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__maybe_full))))) {
        VL_WRITEF("[%0t] %%Error: UARTAdapter.sv:111: Assertion failed in %NTestDriver.testHarness.uart_sim_0_uartno0: Assertion failed\n    at SimUART.scala:48 when (txq.io.enq.valid) { assert(txq.io.enq.ready) }\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/UARTAdapter.sv", 111, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: UARTAdapter.sv:113: Assertion failed in %NTestDriver.testHarness.uart_sim_0_uartno0\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/UARTAdapter.sv", 113, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4119(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4119\n"); );
    // Body
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__success_exit_sim__DOT_____05Fin_bits_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__success_exit_sim__DOT_____05Fin_bits_reg;
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                     & (0U != (vlSelf->TestDriver__DOT__testHarness__DOT___jtag_exit 
                               >> 1U))))) {
        VL_WRITEF("[%0t] %%Error: TestHarness.sv:160: Assertion failed in %NTestDriver.testHarness: Assertion failed: *** FAILED *** (exit code = %10#)\n\n    at Periphery.scala:233 assert(io.exit < 2.U, \"*** FAILED *** (exit code = %%%%d)\\n\", io.exit >> 1.U)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,(vlSelf->TestDriver__DOT__testHarness__DOT___jtag_exit 
                      >> 1U));
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TestHarness.sv", 160, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TestHarness.sv:162: Assertion failed in %NTestDriver.testHarness\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TestHarness.sv", 162, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                     & (0U != (vlSelf->TestDriver__DOT__testHarness__DOT__success_exit_sim__DOT_____05Fexit_reg 
                               >> 1U))))) {
        VL_WRITEF("[%0t] %%Error: TestHarness.sv:166: Assertion failed in %NTestDriver.testHarness: Assertion failed: *** FAILED *** (exit code = %10#)\n\n    at SimTSI.scala:21 assert(!error, \"*** FAILED *** (exit code = %%%%d)\\n\", exit >> 1.U)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,(vlSelf->TestDriver__DOT__testHarness__DOT__success_exit_sim__DOT_____05Fexit_reg 
                      >> 1U));
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TestHarness.sv", 166, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TestHarness.sv:168: Assertion failed in %NTestDriver.testHarness\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TestHarness.sv", 168, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                         & ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                            & ((0U == ((0xf000U & ((IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 0x1cU)) 
                                                   << 0xcU)) 
                                       | (0xfffU & 
                                          (0x800U ^ (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                             >> 0x10U)))))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                         >> 0x1cU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:208: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 208, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:210: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 210, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4120(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4120\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                   ? 1U : 4U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:214: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 214, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:216: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 216, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (2U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:220: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 220, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:222: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 222, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4121(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4121\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0xfffU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0xff8U & ((IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                    >> 3U)) 
                                           << 3U)) 
                                | (IData)(vlSelf->__VdfgTmp_h9b436f0e__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:226: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 226, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:228: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 228, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0xffU != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:232: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 232, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:234: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 234, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4122(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4122\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0xdU <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:274: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 274, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:276: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 276, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_12)) 
                         | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                            & (((((((((0U == (0x7ffffU 
                                              & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                         >> 0xdU)))) 
                                      | (0U == ((0xfffeU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                    >> 0x10U)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                                                       >> 0x10U)))))) 
                                     | (0U == ((0x7ff00U 
                                                & ((IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 0x15U)) 
                                                   << 8U)) 
                                               | ((0xf0U 
                                                   & (0x80U 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                >> 0x11U)) 
                                                       << 4U))) 
                                                  | (0xfU 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                >> 0xcU))))))) 
                                    | (0U == ((0xfc00U 
                                               & ((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 0x1aU)) 
                                                  << 0xaU)) 
                                              | (0x3ffU 
                                                 & (0x200U 
                                                    ^ (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                               >> 0x10U))))))) 
                                   | (0U == ((0xfc000U 
                                              & ((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                          >> 0x1aU)) 
                                                 << 0xeU)) 
                                             | (0x3fffU 
                                                & (0x2010U 
                                                   ^ (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                              >> 0xcU))))))) 
                                  | (0U == ((0xf000U 
                                             & ((IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                         >> 0x1cU)) 
                                                << 0xcU)) 
                                            | (0xfffU 
                                               & (0x800U 
                                                  ^ (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                             >> 0x10U))))))) 
                                 | (0U == ((0x3cU & 
                                            ((IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                      >> 0x1cU)) 
                                             << 2U)) 
                                           | (3U & 
                                              (~ (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                          >> 0x1aU))))))) 
                                | (0U == ((0xe0000U 
                                           & ((IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                       >> 0x1dU)) 
                                              << 0x11U)) 
                                          | (0x1ffffU 
                                             & (0x10020U 
                                                ^ (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 0xcU))))))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                         >> 0x1cU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:280: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 280, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:282: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 282, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4123(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4123\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0xfffU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0xff8U & ((IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                    >> 3U)) 
                                           << 3U)) 
                                | (IData)(vlSelf->__VdfgTmp_h9b436f0e__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:286: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 286, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:288: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 288, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                      != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                              | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                             | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                   & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                      & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                 >> 1U)))))) 
                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                & (~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0))) 
                               & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                           << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                         | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                        | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                              & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 1U)))))) 
                                       | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                             & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 1U)))))) 
                                      << 6U) | ((((
                                                   ((2U 
                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                      & ((~ 
                                                          ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                      >> 1U)))) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                  | (((~ 
                                                       ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                   >> 1U)))) 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                 << 5U) 
                                                | ((((((2U 
                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                       | ((2U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                         & ((~ 
                                                             ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                         >> 1U)))) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                     | ((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                    << 4U) 
                                                   | ((8U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                             | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                & (2U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                            | ((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                               & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                  & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                           | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                               & (~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0))) 
                                                              & (3ULL 
                                                                 == 
                                                                 (3ULL 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                   & (2U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                  & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                              | ((~ 
                                                                  ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                   | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                        & (~ 
                                                                           ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                 | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                     & (~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & ((((2U 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                    | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                       & (2U 
                                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                                   | ((1U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                         & (~ 
                                                                            ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                             & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                  | ((~ 
                                                                      ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                        & (~ 
                                                                           ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:292: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 292, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:294: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 294, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4124(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4124\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                         & (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_12)) 
                            | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                               & ((0U == (0x7ffffU 
                                          & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                     >> 0xdU)))) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h033361d2__0))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:298: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 298, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:300: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 300, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0xfffU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0xff8U & ((IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                    >> 3U)) 
                                           << 3U)) 
                                | (IData)(vlSelf->__VdfgTmp_h9b436f0e__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:304: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 304, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:306: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 306, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4125(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4125\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                      != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                              | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                             | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                   & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                      & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                 >> 1U)))))) 
                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                & (~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0))) 
                               & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                           << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                         | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                        | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                              & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 1U)))))) 
                                       | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                             & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 1U)))))) 
                                      << 6U) | ((((
                                                   ((2U 
                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                      & ((~ 
                                                          ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                      >> 1U)))) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                  | (((~ 
                                                       ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                   >> 1U)))) 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                 << 5U) 
                                                | ((((((2U 
                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                       | ((2U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                         & ((~ 
                                                             ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                         >> 1U)))) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                     | ((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                    << 4U) 
                                                   | ((8U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                             | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                & (2U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                            | ((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                               & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                  & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                           | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                               & (~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0))) 
                                                              & (3ULL 
                                                                 == 
                                                                 (3ULL 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                   & (2U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                  & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                              | ((~ 
                                                                  ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                   | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                        & (~ 
                                                                           ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                 | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                     & (~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & ((((2U 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                    | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                       & (2U 
                                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                                   | ((1U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                         & (~ 
                                                                            ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                             & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                  | ((~ 
                                                                      ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                        & (~ 
                                                                           ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:310: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 310, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:312: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 312, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4126(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4126\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                         & (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_12)) 
                            | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                               & ((0U == (0x7ffffU 
                                          & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                     >> 0xdU)))) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h033361d2__0))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:316: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 316, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:318: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 318, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0xfffU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0xff8U & ((IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                    >> 3U)) 
                                           << 3U)) 
                                | (IData)(vlSelf->__VdfgTmp_h9b436f0e__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:322: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 322, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:324: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 324, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4127(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4127\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                             & (~ ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                       | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                      | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                            & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                               & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                          >> 1U)))))) 
                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                         & (~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0))) 
                                        & (3ULL == 
                                           (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                    << 7U) | ((((((2U 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                  | ((2U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                                 | ((1U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                                       & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                     >> 1U)))))) 
                                                | ((~ 
                                                    ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                    >> 1U)))))) 
                                               << 6U) 
                                              | ((((((2U 
                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                     | ((2U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                                    | ((1U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                       & ((~ 
                                                           ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                       >> 1U)))) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                   | (((~ 
                                                        ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                    >> 1U)))) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                  << 5U) 
                                                 | ((((((2U 
                                                         < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                        | ((2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                                       | ((1U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                          & ((~ 
                                                              ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                          >> 1U)))) 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                      | ((~ 
                                                          ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                         & ((~ 
                                                             ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                         >> 1U)))) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                     << 4U) 
                                                    | ((8U 
                                                        & (((((2U 
                                                               < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                              | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                 & (2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                             | ((1U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                   & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                            | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                & (~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0))) 
                                                               & (3ULL 
                                                                  == 
                                                                  (3ULL 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & (((((2U 
                                                                  < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                 | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                    & (2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                                | ((1U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                   & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                      & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                               | ((~ 
                                                                   ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                  & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & (((((2U 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                    | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                       & (2U 
                                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                                   | ((1U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                         & (~ 
                                                                            ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                             & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                  | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                      & (~ 
                                                                         ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & ((((2U 
                                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                     | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                        & (2U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                                    | ((1U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                          & (~ 
                                                                             ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                   | ((~ 
                                                                       ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                         & (~ 
                                                                            ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                             & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:328: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 328, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:330: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 330, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4128(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4128\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                         & ((4U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                            & ((0U == (0x7ffffU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 0xdU)))) 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_12) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h033361d2__0))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:334: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 334, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:336: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 336, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0xfffU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0xff8U & ((IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                    >> 3U)) 
                                           << 3U)) 
                                | (IData)(vlSelf->__VdfgTmp_h9b436f0e__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:340: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 340, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:342: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 342, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4129(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4129\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                      != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                              | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                             | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                   & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                      & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                 >> 1U)))))) 
                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                & (~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0))) 
                               & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                           << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                         | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                        | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                              & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 1U)))))) 
                                       | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                             & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 1U)))))) 
                                      << 6U) | ((((
                                                   ((2U 
                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                      & ((~ 
                                                          ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                      >> 1U)))) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                  | (((~ 
                                                       ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                   >> 1U)))) 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                 << 5U) 
                                                | ((((((2U 
                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                       | ((2U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                         & ((~ 
                                                             ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                         >> 1U)))) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                     | ((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                    << 4U) 
                                                   | ((8U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                             | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                & (2U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                            | ((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                               & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                  & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                           | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                               & (~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0))) 
                                                              & (3ULL 
                                                                 == 
                                                                 (3ULL 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                   & (2U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                  & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                              | ((~ 
                                                                  ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                   | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                        & (~ 
                                                                           ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                 | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                     & (~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & ((((2U 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                    | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                       & (2U 
                                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                                   | ((1U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                         & (~ 
                                                                            ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                             & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                  | ((~ 
                                                                      ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                        & (~ 
                                                                           ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:346: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 346, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:348: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 348, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4130(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4130\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                         & ((4U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                            & ((0U == (0x7ffffU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 0xdU)))) 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_12) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h033361d2__0))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:352: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 352, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:354: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 354, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0xfffU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0xff8U & ((IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                    >> 3U)) 
                                           << 3U)) 
                                | (IData)(vlSelf->__VdfgTmp_h9b436f0e__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:358: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 358, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:360: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 360, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4131(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4131\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                      != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                              | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                             | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                   & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                      & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                 >> 1U)))))) 
                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                & (~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0))) 
                               & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                           << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                         | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                        | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                              & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 1U)))))) 
                                       | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                             & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 1U)))))) 
                                      << 6U) | ((((
                                                   ((2U 
                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                      & ((~ 
                                                          ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                      >> 1U)))) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                  | (((~ 
                                                       ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                   >> 1U)))) 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                 << 5U) 
                                                | ((((((2U 
                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                       | ((2U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                         & ((~ 
                                                             ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                         >> 1U)))) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                     | ((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                    << 4U) 
                                                   | ((8U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                             | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                & (2U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                            | ((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                               & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                  & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                           | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                               & (~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0))) 
                                                              & (3ULL 
                                                                 == 
                                                                 (3ULL 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                   & (2U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                  & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                              | ((~ 
                                                                  ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                   | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                        & (~ 
                                                                           ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                 | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                     & (~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & ((((2U 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                    | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                       & (2U 
                                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                                   | ((1U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                         & (~ 
                                                                            ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                             & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                  | ((~ 
                                                                      ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                        & (~ 
                                                                           ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:364: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 364, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:366: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 366, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4132(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4132\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                         & (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_12)) 
                            | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                               & ((0U == ((0xf000U 
                                           & ((IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                       >> 0x1cU)) 
                                              << 0xcU)) 
                                          | (0xfffU 
                                             & (0x800U 
                                                ^ (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 0x10U)))))) 
                                  | (8U == (0xfU & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 0x1cU)))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:370: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 370, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:372: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 372, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     (0U != ((~ ((IData)(0xfffU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size))) 
                             & ((0xff8U & ((IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                    >> 3U)) 
                                           << 3U)) 
                                | (IData)(vlSelf->__VdfgTmp_h9b436f0e__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:376: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 376, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:378: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 378, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4133(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4133\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                                    ? 1U : 4U)))) & 
                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_mask) 
                      != ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                              | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                             | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                   & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                      & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                 >> 1U)))))) 
                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                & (~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0))) 
                               & (3ULL == (3ULL & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                           << 7U) | ((((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                         | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                        | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                              & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                            >> 1U)))))) 
                                       | ((~ ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0) 
                                             & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                           >> 1U)))))) 
                                      << 6U) | ((((
                                                   ((2U 
                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                      & ((~ 
                                                          ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                      >> 1U)))) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                  | (((~ 
                                                       ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                   >> 1U)))) 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                 << 5U) 
                                                | ((((((2U 
                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                       | ((2U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0))) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                         & ((~ 
                                                             ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                         >> 1U)))) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                     | ((~ 
                                                         ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                        & ((~ 
                                                            ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                        >> 1U)))) 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)))) 
                                                    << 4U) 
                                                   | ((8U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                             | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                & (2U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                            | ((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                               & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                  & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                           | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                               & (~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0))) 
                                                              & (3ULL 
                                                                 == 
                                                                 (3ULL 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                   & (2U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                  & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                     & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                              | ((~ 
                                                                  ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U)))))) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                   | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                        & (~ 
                                                                           ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                 | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                     & (~ 
                                                                        ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))) 
                                                                    & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)))) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & ((((2U 
                                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size)) 
                                                                    | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                       & (2U 
                                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)))) 
                                                                   | ((1U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3ffbc53__0)) 
                                                                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                         & (~ 
                                                                            ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                             & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))) 
                                                                  | ((~ 
                                                                      ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr))) 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0)) 
                                                                        & (~ 
                                                                           ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                                                                                >> 1U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:382: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 382, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:384: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 384, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4134(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4134\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:388: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel has invalid opcode (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 388, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:390: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 390, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                        >> 9U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:394: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 394, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:396: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 396, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:400: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 400, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:402: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 402, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4135(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4135\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:406: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 406, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:408: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 408, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xeU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:412: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 412, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:414: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 414, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                        >> 0xdU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:418: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 418, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:420: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 420, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4136(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4136\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x204U == (0x207U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:424: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 424, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:426: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 426, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:430: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 430, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:432: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 432, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4137(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4137\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x1cU == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:436: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 436, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:438: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 438, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x14U == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:442: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 442, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:444: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 444, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4138(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4138\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xeU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:448: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 448, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:450: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 450, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x205U == (0x207U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:454: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 454, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:456: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 456, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4139(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4139\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:460: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 460, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:462: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 462, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x1dU == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:466: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 466, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:468: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 468, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4140(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4140\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x15U == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:472: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 472, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:474: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 474, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xdU)) | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                                            >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:478: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 478, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:480: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 480, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4141(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4141\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x200U == (0x207U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:484: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 484, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:486: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 486, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:490: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 490, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:492: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 492, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4142(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4142\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xeU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:496: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 496, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:498: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 498, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x201U == (0x207U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:502: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 502, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:504: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 504, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4143(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4143\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:508: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 508, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:510: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 510, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xdU)) | (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                                            >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:514: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 514, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:516: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 516, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4144(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4144\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x202U == (0x207U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:520: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 520, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:522: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 522, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:526: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 526, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:528: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 528, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4145(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4145\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xeU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:532: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 532, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:534: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 534, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & (((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state))
                          ? 1U : 4U) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:538: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 538, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:540: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 540, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4146(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4146\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:544: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 544, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:546: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 546, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___tsi2tl_auto_out_a_bits_address 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:550: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 550, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:552: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 552, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:556: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at generators/testchipip/src/main/scala/tsi/TSIHarness.scala:76:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 556, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:558: Assertion failed in %NTestDriver.testHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/riscv/Documents/Chipyard/SavvinaThesis/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.PerfCountRocketConfig/gen-collateral/TLMonitor_62.sv", 558, "");
        }
    }
}
