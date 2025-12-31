module cc_dir_ext(
  input  [9:0]   RW0_addr,
  input          RW0_clk,
  input  [135:0] RW0_wdata,
  output [135:0] RW0_rdata,
  input          RW0_en,
  input          RW0_wmode,
  input  [7:0]   RW0_wmask
);
  wire [9:0] mem_0_0_RW0_addr;
  wire  mem_0_0_RW0_clk;
  wire [16:0] mem_0_0_RW0_wdata;
  wire [16:0] mem_0_0_RW0_rdata;
  wire  mem_0_0_RW0_en;
  wire  mem_0_0_RW0_wmode;
  wire  mem_0_0_RW0_wmask;
  wire [9:0] mem_0_1_RW0_addr;
  wire  mem_0_1_RW0_clk;
  wire [16:0] mem_0_1_RW0_wdata;
  wire [16:0] mem_0_1_RW0_rdata;
  wire  mem_0_1_RW0_en;
  wire  mem_0_1_RW0_wmode;
  wire  mem_0_1_RW0_wmask;
  wire [9:0] mem_0_2_RW0_addr;
  wire  mem_0_2_RW0_clk;
  wire [16:0] mem_0_2_RW0_wdata;
  wire [16:0] mem_0_2_RW0_rdata;
  wire  mem_0_2_RW0_en;
  wire  mem_0_2_RW0_wmode;
  wire  mem_0_2_RW0_wmask;
  wire [9:0] mem_0_3_RW0_addr;
  wire  mem_0_3_RW0_clk;
  wire [16:0] mem_0_3_RW0_wdata;
  wire [16:0] mem_0_3_RW0_rdata;
  wire  mem_0_3_RW0_en;
  wire  mem_0_3_RW0_wmode;
  wire  mem_0_3_RW0_wmask;
  wire [9:0] mem_0_4_RW0_addr;
  wire  mem_0_4_RW0_clk;
  wire [16:0] mem_0_4_RW0_wdata;
  wire [16:0] mem_0_4_RW0_rdata;
  wire  mem_0_4_RW0_en;
  wire  mem_0_4_RW0_wmode;
  wire  mem_0_4_RW0_wmask;
  wire [9:0] mem_0_5_RW0_addr;
  wire  mem_0_5_RW0_clk;
  wire [16:0] mem_0_5_RW0_wdata;
  wire [16:0] mem_0_5_RW0_rdata;
  wire  mem_0_5_RW0_en;
  wire  mem_0_5_RW0_wmode;
  wire  mem_0_5_RW0_wmask;
  wire [9:0] mem_0_6_RW0_addr;
  wire  mem_0_6_RW0_clk;
  wire [16:0] mem_0_6_RW0_wdata;
  wire [16:0] mem_0_6_RW0_rdata;
  wire  mem_0_6_RW0_en;
  wire  mem_0_6_RW0_wmode;
  wire  mem_0_6_RW0_wmask;
  wire [9:0] mem_0_7_RW0_addr;
  wire  mem_0_7_RW0_clk;
  wire [16:0] mem_0_7_RW0_wdata;
  wire [16:0] mem_0_7_RW0_rdata;
  wire  mem_0_7_RW0_en;
  wire  mem_0_7_RW0_wmode;
  wire  mem_0_7_RW0_wmask;
  wire [16:0] RW0_rdata_0_0 = mem_0_0_RW0_rdata;
  wire [16:0] RW0_rdata_0_1 = mem_0_1_RW0_rdata;
  wire [16:0] RW0_rdata_0_2 = mem_0_2_RW0_rdata;
  wire [16:0] RW0_rdata_0_3 = mem_0_3_RW0_rdata;
  wire [16:0] RW0_rdata_0_4 = mem_0_4_RW0_rdata;
  wire [16:0] RW0_rdata_0_5 = mem_0_5_RW0_rdata;
  wire [16:0] RW0_rdata_0_6 = mem_0_6_RW0_rdata;
  wire [16:0] RW0_rdata_0_7 = mem_0_7_RW0_rdata;
  wire [118:0] _GEN_5 = {RW0_rdata_0_6,RW0_rdata_0_5,RW0_rdata_0_4,RW0_rdata_0_3,RW0_rdata_0_2,RW0_rdata_0_1,
    RW0_rdata_0_0};
  split_cc_dir_ext mem_0_0 (
    .RW0_addr(mem_0_0_RW0_addr),
    .RW0_clk(mem_0_0_RW0_clk),
    .RW0_wdata(mem_0_0_RW0_wdata),
    .RW0_rdata(mem_0_0_RW0_rdata),
    .RW0_en(mem_0_0_RW0_en),
    .RW0_wmode(mem_0_0_RW0_wmode),
    .RW0_wmask(mem_0_0_RW0_wmask)
  );
  split_cc_dir_ext mem_0_1 (
    .RW0_addr(mem_0_1_RW0_addr),
    .RW0_clk(mem_0_1_RW0_clk),
    .RW0_wdata(mem_0_1_RW0_wdata),
    .RW0_rdata(mem_0_1_RW0_rdata),
    .RW0_en(mem_0_1_RW0_en),
    .RW0_wmode(mem_0_1_RW0_wmode),
    .RW0_wmask(mem_0_1_RW0_wmask)
  );
  split_cc_dir_ext mem_0_2 (
    .RW0_addr(mem_0_2_RW0_addr),
    .RW0_clk(mem_0_2_RW0_clk),
    .RW0_wdata(mem_0_2_RW0_wdata),
    .RW0_rdata(mem_0_2_RW0_rdata),
    .RW0_en(mem_0_2_RW0_en),
    .RW0_wmode(mem_0_2_RW0_wmode),
    .RW0_wmask(mem_0_2_RW0_wmask)
  );
  split_cc_dir_ext mem_0_3 (
    .RW0_addr(mem_0_3_RW0_addr),
    .RW0_clk(mem_0_3_RW0_clk),
    .RW0_wdata(mem_0_3_RW0_wdata),
    .RW0_rdata(mem_0_3_RW0_rdata),
    .RW0_en(mem_0_3_RW0_en),
    .RW0_wmode(mem_0_3_RW0_wmode),
    .RW0_wmask(mem_0_3_RW0_wmask)
  );
  split_cc_dir_ext mem_0_4 (
    .RW0_addr(mem_0_4_RW0_addr),
    .RW0_clk(mem_0_4_RW0_clk),
    .RW0_wdata(mem_0_4_RW0_wdata),
    .RW0_rdata(mem_0_4_RW0_rdata),
    .RW0_en(mem_0_4_RW0_en),
    .RW0_wmode(mem_0_4_RW0_wmode),
    .RW0_wmask(mem_0_4_RW0_wmask)
  );
  split_cc_dir_ext mem_0_5 (
    .RW0_addr(mem_0_5_RW0_addr),
    .RW0_clk(mem_0_5_RW0_clk),
    .RW0_wdata(mem_0_5_RW0_wdata),
    .RW0_rdata(mem_0_5_RW0_rdata),
    .RW0_en(mem_0_5_RW0_en),
    .RW0_wmode(mem_0_5_RW0_wmode),
    .RW0_wmask(mem_0_5_RW0_wmask)
  );
  split_cc_dir_ext mem_0_6 (
    .RW0_addr(mem_0_6_RW0_addr),
    .RW0_clk(mem_0_6_RW0_clk),
    .RW0_wdata(mem_0_6_RW0_wdata),
    .RW0_rdata(mem_0_6_RW0_rdata),
    .RW0_en(mem_0_6_RW0_en),
    .RW0_wmode(mem_0_6_RW0_wmode),
    .RW0_wmask(mem_0_6_RW0_wmask)
  );
  split_cc_dir_ext mem_0_7 (
    .RW0_addr(mem_0_7_RW0_addr),
    .RW0_clk(mem_0_7_RW0_clk),
    .RW0_wdata(mem_0_7_RW0_wdata),
    .RW0_rdata(mem_0_7_RW0_rdata),
    .RW0_en(mem_0_7_RW0_en),
    .RW0_wmode(mem_0_7_RW0_wmode),
    .RW0_wmask(mem_0_7_RW0_wmask)
  );
  assign RW0_rdata = {RW0_rdata_0_7,_GEN_5};
  assign mem_0_0_RW0_addr = RW0_addr;
  assign mem_0_0_RW0_clk = RW0_clk;
  assign mem_0_0_RW0_wdata = RW0_wdata[16:0];
  assign mem_0_0_RW0_en = RW0_en;
  assign mem_0_0_RW0_wmode = RW0_wmode;
  assign mem_0_0_RW0_wmask = RW0_wmask[0];
  assign mem_0_1_RW0_addr = RW0_addr;
  assign mem_0_1_RW0_clk = RW0_clk;
  assign mem_0_1_RW0_wdata = RW0_wdata[33:17];
  assign mem_0_1_RW0_en = RW0_en;
  assign mem_0_1_RW0_wmode = RW0_wmode;
  assign mem_0_1_RW0_wmask = RW0_wmask[1];
  assign mem_0_2_RW0_addr = RW0_addr;
  assign mem_0_2_RW0_clk = RW0_clk;
  assign mem_0_2_RW0_wdata = RW0_wdata[50:34];
  assign mem_0_2_RW0_en = RW0_en;
  assign mem_0_2_RW0_wmode = RW0_wmode;
  assign mem_0_2_RW0_wmask = RW0_wmask[2];
  assign mem_0_3_RW0_addr = RW0_addr;
  assign mem_0_3_RW0_clk = RW0_clk;
  assign mem_0_3_RW0_wdata = RW0_wdata[67:51];
  assign mem_0_3_RW0_en = RW0_en;
  assign mem_0_3_RW0_wmode = RW0_wmode;
  assign mem_0_3_RW0_wmask = RW0_wmask[3];
  assign mem_0_4_RW0_addr = RW0_addr;
  assign mem_0_4_RW0_clk = RW0_clk;
  assign mem_0_4_RW0_wdata = RW0_wdata[84:68];
  assign mem_0_4_RW0_en = RW0_en;
  assign mem_0_4_RW0_wmode = RW0_wmode;
  assign mem_0_4_RW0_wmask = RW0_wmask[4];
  assign mem_0_5_RW0_addr = RW0_addr;
  assign mem_0_5_RW0_clk = RW0_clk;
  assign mem_0_5_RW0_wdata = RW0_wdata[101:85];
  assign mem_0_5_RW0_en = RW0_en;
  assign mem_0_5_RW0_wmode = RW0_wmode;
  assign mem_0_5_RW0_wmask = RW0_wmask[5];
  assign mem_0_6_RW0_addr = RW0_addr;
  assign mem_0_6_RW0_clk = RW0_clk;
  assign mem_0_6_RW0_wdata = RW0_wdata[118:102];
  assign mem_0_6_RW0_en = RW0_en;
  assign mem_0_6_RW0_wmode = RW0_wmode;
  assign mem_0_6_RW0_wmask = RW0_wmask[6];
  assign mem_0_7_RW0_addr = RW0_addr;
  assign mem_0_7_RW0_clk = RW0_clk;
  assign mem_0_7_RW0_wdata = RW0_wdata[135:119];
  assign mem_0_7_RW0_en = RW0_en;
  assign mem_0_7_RW0_wmode = RW0_wmode;
  assign mem_0_7_RW0_wmask = RW0_wmask[7];
endmodule

module cc_banks_0_ext(
  input  [13:0] RW0_addr,
  input         RW0_clk,
  input  [63:0] RW0_wdata,
  output [63:0] RW0_rdata,
  input         RW0_en,
  input         RW0_wmode
);
  wire [13:0] mem_0_0_RW0_addr;
  wire  mem_0_0_RW0_clk;
  wire [63:0] mem_0_0_RW0_wdata;
  wire [63:0] mem_0_0_RW0_rdata;
  wire  mem_0_0_RW0_en;
  wire  mem_0_0_RW0_wmode;
  split_cc_banks_0_ext mem_0_0 (
    .RW0_addr(mem_0_0_RW0_addr),
    .RW0_clk(mem_0_0_RW0_clk),
    .RW0_wdata(mem_0_0_RW0_wdata),
    .RW0_rdata(mem_0_0_RW0_rdata),
    .RW0_en(mem_0_0_RW0_en),
    .RW0_wmode(mem_0_0_RW0_wmode)
  );
  assign RW0_rdata = mem_0_0_RW0_rdata;
  assign mem_0_0_RW0_addr = RW0_addr;
  assign mem_0_0_RW0_clk = RW0_clk;
  assign mem_0_0_RW0_wdata = RW0_wdata;
  assign mem_0_0_RW0_en = RW0_en;
  assign mem_0_0_RW0_wmode = RW0_wmode;
endmodule

module tag_array_ext(
  input  [5:0]   R0_addr,
  input          R0_clk,
  output [351:0] R0_data,
  input          R0_en,
  input  [5:0]   W0_addr,
  input          W0_clk,
  input  [351:0] W0_data,
  input          W0_en,
  input  [15:0]  W0_mask
);
  wire [5:0] mem_0_0_R0_addr;
  wire  mem_0_0_R0_clk;
  wire [21:0] mem_0_0_R0_data;
  wire  mem_0_0_R0_en;
  wire [5:0] mem_0_0_W0_addr;
  wire  mem_0_0_W0_clk;
  wire [21:0] mem_0_0_W0_data;
  wire  mem_0_0_W0_en;
  wire  mem_0_0_W0_mask;
  wire [5:0] mem_0_1_R0_addr;
  wire  mem_0_1_R0_clk;
  wire [21:0] mem_0_1_R0_data;
  wire  mem_0_1_R0_en;
  wire [5:0] mem_0_1_W0_addr;
  wire  mem_0_1_W0_clk;
  wire [21:0] mem_0_1_W0_data;
  wire  mem_0_1_W0_en;
  wire  mem_0_1_W0_mask;
  wire [5:0] mem_0_2_R0_addr;
  wire  mem_0_2_R0_clk;
  wire [21:0] mem_0_2_R0_data;
  wire  mem_0_2_R0_en;
  wire [5:0] mem_0_2_W0_addr;
  wire  mem_0_2_W0_clk;
  wire [21:0] mem_0_2_W0_data;
  wire  mem_0_2_W0_en;
  wire  mem_0_2_W0_mask;
  wire [5:0] mem_0_3_R0_addr;
  wire  mem_0_3_R0_clk;
  wire [21:0] mem_0_3_R0_data;
  wire  mem_0_3_R0_en;
  wire [5:0] mem_0_3_W0_addr;
  wire  mem_0_3_W0_clk;
  wire [21:0] mem_0_3_W0_data;
  wire  mem_0_3_W0_en;
  wire  mem_0_3_W0_mask;
  wire [5:0] mem_0_4_R0_addr;
  wire  mem_0_4_R0_clk;
  wire [21:0] mem_0_4_R0_data;
  wire  mem_0_4_R0_en;
  wire [5:0] mem_0_4_W0_addr;
  wire  mem_0_4_W0_clk;
  wire [21:0] mem_0_4_W0_data;
  wire  mem_0_4_W0_en;
  wire  mem_0_4_W0_mask;
  wire [5:0] mem_0_5_R0_addr;
  wire  mem_0_5_R0_clk;
  wire [21:0] mem_0_5_R0_data;
  wire  mem_0_5_R0_en;
  wire [5:0] mem_0_5_W0_addr;
  wire  mem_0_5_W0_clk;
  wire [21:0] mem_0_5_W0_data;
  wire  mem_0_5_W0_en;
  wire  mem_0_5_W0_mask;
  wire [5:0] mem_0_6_R0_addr;
  wire  mem_0_6_R0_clk;
  wire [21:0] mem_0_6_R0_data;
  wire  mem_0_6_R0_en;
  wire [5:0] mem_0_6_W0_addr;
  wire  mem_0_6_W0_clk;
  wire [21:0] mem_0_6_W0_data;
  wire  mem_0_6_W0_en;
  wire  mem_0_6_W0_mask;
  wire [5:0] mem_0_7_R0_addr;
  wire  mem_0_7_R0_clk;
  wire [21:0] mem_0_7_R0_data;
  wire  mem_0_7_R0_en;
  wire [5:0] mem_0_7_W0_addr;
  wire  mem_0_7_W0_clk;
  wire [21:0] mem_0_7_W0_data;
  wire  mem_0_7_W0_en;
  wire  mem_0_7_W0_mask;
  wire [5:0] mem_0_8_R0_addr;
  wire  mem_0_8_R0_clk;
  wire [21:0] mem_0_8_R0_data;
  wire  mem_0_8_R0_en;
  wire [5:0] mem_0_8_W0_addr;
  wire  mem_0_8_W0_clk;
  wire [21:0] mem_0_8_W0_data;
  wire  mem_0_8_W0_en;
  wire  mem_0_8_W0_mask;
  wire [5:0] mem_0_9_R0_addr;
  wire  mem_0_9_R0_clk;
  wire [21:0] mem_0_9_R0_data;
  wire  mem_0_9_R0_en;
  wire [5:0] mem_0_9_W0_addr;
  wire  mem_0_9_W0_clk;
  wire [21:0] mem_0_9_W0_data;
  wire  mem_0_9_W0_en;
  wire  mem_0_9_W0_mask;
  wire [5:0] mem_0_10_R0_addr;
  wire  mem_0_10_R0_clk;
  wire [21:0] mem_0_10_R0_data;
  wire  mem_0_10_R0_en;
  wire [5:0] mem_0_10_W0_addr;
  wire  mem_0_10_W0_clk;
  wire [21:0] mem_0_10_W0_data;
  wire  mem_0_10_W0_en;
  wire  mem_0_10_W0_mask;
  wire [5:0] mem_0_11_R0_addr;
  wire  mem_0_11_R0_clk;
  wire [21:0] mem_0_11_R0_data;
  wire  mem_0_11_R0_en;
  wire [5:0] mem_0_11_W0_addr;
  wire  mem_0_11_W0_clk;
  wire [21:0] mem_0_11_W0_data;
  wire  mem_0_11_W0_en;
  wire  mem_0_11_W0_mask;
  wire [5:0] mem_0_12_R0_addr;
  wire  mem_0_12_R0_clk;
  wire [21:0] mem_0_12_R0_data;
  wire  mem_0_12_R0_en;
  wire [5:0] mem_0_12_W0_addr;
  wire  mem_0_12_W0_clk;
  wire [21:0] mem_0_12_W0_data;
  wire  mem_0_12_W0_en;
  wire  mem_0_12_W0_mask;
  wire [5:0] mem_0_13_R0_addr;
  wire  mem_0_13_R0_clk;
  wire [21:0] mem_0_13_R0_data;
  wire  mem_0_13_R0_en;
  wire [5:0] mem_0_13_W0_addr;
  wire  mem_0_13_W0_clk;
  wire [21:0] mem_0_13_W0_data;
  wire  mem_0_13_W0_en;
  wire  mem_0_13_W0_mask;
  wire [5:0] mem_0_14_R0_addr;
  wire  mem_0_14_R0_clk;
  wire [21:0] mem_0_14_R0_data;
  wire  mem_0_14_R0_en;
  wire [5:0] mem_0_14_W0_addr;
  wire  mem_0_14_W0_clk;
  wire [21:0] mem_0_14_W0_data;
  wire  mem_0_14_W0_en;
  wire  mem_0_14_W0_mask;
  wire [5:0] mem_0_15_R0_addr;
  wire  mem_0_15_R0_clk;
  wire [21:0] mem_0_15_R0_data;
  wire  mem_0_15_R0_en;
  wire [5:0] mem_0_15_W0_addr;
  wire  mem_0_15_W0_clk;
  wire [21:0] mem_0_15_W0_data;
  wire  mem_0_15_W0_en;
  wire  mem_0_15_W0_mask;
  wire [21:0] R0_data_0_0 = mem_0_0_R0_data;
  wire [21:0] R0_data_0_1 = mem_0_1_R0_data;
  wire [21:0] R0_data_0_2 = mem_0_2_R0_data;
  wire [21:0] R0_data_0_3 = mem_0_3_R0_data;
  wire [21:0] R0_data_0_4 = mem_0_4_R0_data;
  wire [21:0] R0_data_0_5 = mem_0_5_R0_data;
  wire [21:0] R0_data_0_6 = mem_0_6_R0_data;
  wire [21:0] R0_data_0_7 = mem_0_7_R0_data;
  wire [21:0] R0_data_0_8 = mem_0_8_R0_data;
  wire [21:0] R0_data_0_9 = mem_0_9_R0_data;
  wire [21:0] R0_data_0_10 = mem_0_10_R0_data;
  wire [21:0] R0_data_0_11 = mem_0_11_R0_data;
  wire [21:0] R0_data_0_12 = mem_0_12_R0_data;
  wire [21:0] R0_data_0_13 = mem_0_13_R0_data;
  wire [21:0] R0_data_0_14 = mem_0_14_R0_data;
  wire [21:0] R0_data_0_15 = mem_0_15_R0_data;
  wire [219:0] _GEN_8 = {R0_data_0_9,R0_data_0_8,R0_data_0_7,R0_data_0_6,R0_data_0_5,R0_data_0_4,R0_data_0_3,R0_data_0_2
    ,R0_data_0_1,R0_data_0_0};
  wire [329:0] _GEN_13 = {R0_data_0_14,R0_data_0_13,R0_data_0_12,R0_data_0_11,R0_data_0_10,_GEN_8};
  split_tag_array_ext mem_0_0 (
    .R0_addr(mem_0_0_R0_addr),
    .R0_clk(mem_0_0_R0_clk),
    .R0_data(mem_0_0_R0_data),
    .R0_en(mem_0_0_R0_en),
    .W0_addr(mem_0_0_W0_addr),
    .W0_clk(mem_0_0_W0_clk),
    .W0_data(mem_0_0_W0_data),
    .W0_en(mem_0_0_W0_en),
    .W0_mask(mem_0_0_W0_mask)
  );
  split_tag_array_ext mem_0_1 (
    .R0_addr(mem_0_1_R0_addr),
    .R0_clk(mem_0_1_R0_clk),
    .R0_data(mem_0_1_R0_data),
    .R0_en(mem_0_1_R0_en),
    .W0_addr(mem_0_1_W0_addr),
    .W0_clk(mem_0_1_W0_clk),
    .W0_data(mem_0_1_W0_data),
    .W0_en(mem_0_1_W0_en),
    .W0_mask(mem_0_1_W0_mask)
  );
  split_tag_array_ext mem_0_2 (
    .R0_addr(mem_0_2_R0_addr),
    .R0_clk(mem_0_2_R0_clk),
    .R0_data(mem_0_2_R0_data),
    .R0_en(mem_0_2_R0_en),
    .W0_addr(mem_0_2_W0_addr),
    .W0_clk(mem_0_2_W0_clk),
    .W0_data(mem_0_2_W0_data),
    .W0_en(mem_0_2_W0_en),
    .W0_mask(mem_0_2_W0_mask)
  );
  split_tag_array_ext mem_0_3 (
    .R0_addr(mem_0_3_R0_addr),
    .R0_clk(mem_0_3_R0_clk),
    .R0_data(mem_0_3_R0_data),
    .R0_en(mem_0_3_R0_en),
    .W0_addr(mem_0_3_W0_addr),
    .W0_clk(mem_0_3_W0_clk),
    .W0_data(mem_0_3_W0_data),
    .W0_en(mem_0_3_W0_en),
    .W0_mask(mem_0_3_W0_mask)
  );
  split_tag_array_ext mem_0_4 (
    .R0_addr(mem_0_4_R0_addr),
    .R0_clk(mem_0_4_R0_clk),
    .R0_data(mem_0_4_R0_data),
    .R0_en(mem_0_4_R0_en),
    .W0_addr(mem_0_4_W0_addr),
    .W0_clk(mem_0_4_W0_clk),
    .W0_data(mem_0_4_W0_data),
    .W0_en(mem_0_4_W0_en),
    .W0_mask(mem_0_4_W0_mask)
  );
  split_tag_array_ext mem_0_5 (
    .R0_addr(mem_0_5_R0_addr),
    .R0_clk(mem_0_5_R0_clk),
    .R0_data(mem_0_5_R0_data),
    .R0_en(mem_0_5_R0_en),
    .W0_addr(mem_0_5_W0_addr),
    .W0_clk(mem_0_5_W0_clk),
    .W0_data(mem_0_5_W0_data),
    .W0_en(mem_0_5_W0_en),
    .W0_mask(mem_0_5_W0_mask)
  );
  split_tag_array_ext mem_0_6 (
    .R0_addr(mem_0_6_R0_addr),
    .R0_clk(mem_0_6_R0_clk),
    .R0_data(mem_0_6_R0_data),
    .R0_en(mem_0_6_R0_en),
    .W0_addr(mem_0_6_W0_addr),
    .W0_clk(mem_0_6_W0_clk),
    .W0_data(mem_0_6_W0_data),
    .W0_en(mem_0_6_W0_en),
    .W0_mask(mem_0_6_W0_mask)
  );
  split_tag_array_ext mem_0_7 (
    .R0_addr(mem_0_7_R0_addr),
    .R0_clk(mem_0_7_R0_clk),
    .R0_data(mem_0_7_R0_data),
    .R0_en(mem_0_7_R0_en),
    .W0_addr(mem_0_7_W0_addr),
    .W0_clk(mem_0_7_W0_clk),
    .W0_data(mem_0_7_W0_data),
    .W0_en(mem_0_7_W0_en),
    .W0_mask(mem_0_7_W0_mask)
  );
  split_tag_array_ext mem_0_8 (
    .R0_addr(mem_0_8_R0_addr),
    .R0_clk(mem_0_8_R0_clk),
    .R0_data(mem_0_8_R0_data),
    .R0_en(mem_0_8_R0_en),
    .W0_addr(mem_0_8_W0_addr),
    .W0_clk(mem_0_8_W0_clk),
    .W0_data(mem_0_8_W0_data),
    .W0_en(mem_0_8_W0_en),
    .W0_mask(mem_0_8_W0_mask)
  );
  split_tag_array_ext mem_0_9 (
    .R0_addr(mem_0_9_R0_addr),
    .R0_clk(mem_0_9_R0_clk),
    .R0_data(mem_0_9_R0_data),
    .R0_en(mem_0_9_R0_en),
    .W0_addr(mem_0_9_W0_addr),
    .W0_clk(mem_0_9_W0_clk),
    .W0_data(mem_0_9_W0_data),
    .W0_en(mem_0_9_W0_en),
    .W0_mask(mem_0_9_W0_mask)
  );
  split_tag_array_ext mem_0_10 (
    .R0_addr(mem_0_10_R0_addr),
    .R0_clk(mem_0_10_R0_clk),
    .R0_data(mem_0_10_R0_data),
    .R0_en(mem_0_10_R0_en),
    .W0_addr(mem_0_10_W0_addr),
    .W0_clk(mem_0_10_W0_clk),
    .W0_data(mem_0_10_W0_data),
    .W0_en(mem_0_10_W0_en),
    .W0_mask(mem_0_10_W0_mask)
  );
  split_tag_array_ext mem_0_11 (
    .R0_addr(mem_0_11_R0_addr),
    .R0_clk(mem_0_11_R0_clk),
    .R0_data(mem_0_11_R0_data),
    .R0_en(mem_0_11_R0_en),
    .W0_addr(mem_0_11_W0_addr),
    .W0_clk(mem_0_11_W0_clk),
    .W0_data(mem_0_11_W0_data),
    .W0_en(mem_0_11_W0_en),
    .W0_mask(mem_0_11_W0_mask)
  );
  split_tag_array_ext mem_0_12 (
    .R0_addr(mem_0_12_R0_addr),
    .R0_clk(mem_0_12_R0_clk),
    .R0_data(mem_0_12_R0_data),
    .R0_en(mem_0_12_R0_en),
    .W0_addr(mem_0_12_W0_addr),
    .W0_clk(mem_0_12_W0_clk),
    .W0_data(mem_0_12_W0_data),
    .W0_en(mem_0_12_W0_en),
    .W0_mask(mem_0_12_W0_mask)
  );
  split_tag_array_ext mem_0_13 (
    .R0_addr(mem_0_13_R0_addr),
    .R0_clk(mem_0_13_R0_clk),
    .R0_data(mem_0_13_R0_data),
    .R0_en(mem_0_13_R0_en),
    .W0_addr(mem_0_13_W0_addr),
    .W0_clk(mem_0_13_W0_clk),
    .W0_data(mem_0_13_W0_data),
    .W0_en(mem_0_13_W0_en),
    .W0_mask(mem_0_13_W0_mask)
  );
  split_tag_array_ext mem_0_14 (
    .R0_addr(mem_0_14_R0_addr),
    .R0_clk(mem_0_14_R0_clk),
    .R0_data(mem_0_14_R0_data),
    .R0_en(mem_0_14_R0_en),
    .W0_addr(mem_0_14_W0_addr),
    .W0_clk(mem_0_14_W0_clk),
    .W0_data(mem_0_14_W0_data),
    .W0_en(mem_0_14_W0_en),
    .W0_mask(mem_0_14_W0_mask)
  );
  split_tag_array_ext mem_0_15 (
    .R0_addr(mem_0_15_R0_addr),
    .R0_clk(mem_0_15_R0_clk),
    .R0_data(mem_0_15_R0_data),
    .R0_en(mem_0_15_R0_en),
    .W0_addr(mem_0_15_W0_addr),
    .W0_clk(mem_0_15_W0_clk),
    .W0_data(mem_0_15_W0_data),
    .W0_en(mem_0_15_W0_en),
    .W0_mask(mem_0_15_W0_mask)
  );
  assign R0_data = {R0_data_0_15,_GEN_13};
  assign mem_0_0_R0_addr = R0_addr;
  assign mem_0_0_R0_clk = R0_clk;
  assign mem_0_0_R0_en = R0_en;
  assign mem_0_0_W0_addr = W0_addr;
  assign mem_0_0_W0_clk = W0_clk;
  assign mem_0_0_W0_data = W0_data[21:0];
  assign mem_0_0_W0_en = W0_en;
  assign mem_0_0_W0_mask = W0_mask[0];
  assign mem_0_1_R0_addr = R0_addr;
  assign mem_0_1_R0_clk = R0_clk;
  assign mem_0_1_R0_en = R0_en;
  assign mem_0_1_W0_addr = W0_addr;
  assign mem_0_1_W0_clk = W0_clk;
  assign mem_0_1_W0_data = W0_data[43:22];
  assign mem_0_1_W0_en = W0_en;
  assign mem_0_1_W0_mask = W0_mask[1];
  assign mem_0_2_R0_addr = R0_addr;
  assign mem_0_2_R0_clk = R0_clk;
  assign mem_0_2_R0_en = R0_en;
  assign mem_0_2_W0_addr = W0_addr;
  assign mem_0_2_W0_clk = W0_clk;
  assign mem_0_2_W0_data = W0_data[65:44];
  assign mem_0_2_W0_en = W0_en;
  assign mem_0_2_W0_mask = W0_mask[2];
  assign mem_0_3_R0_addr = R0_addr;
  assign mem_0_3_R0_clk = R0_clk;
  assign mem_0_3_R0_en = R0_en;
  assign mem_0_3_W0_addr = W0_addr;
  assign mem_0_3_W0_clk = W0_clk;
  assign mem_0_3_W0_data = W0_data[87:66];
  assign mem_0_3_W0_en = W0_en;
  assign mem_0_3_W0_mask = W0_mask[3];
  assign mem_0_4_R0_addr = R0_addr;
  assign mem_0_4_R0_clk = R0_clk;
  assign mem_0_4_R0_en = R0_en;
  assign mem_0_4_W0_addr = W0_addr;
  assign mem_0_4_W0_clk = W0_clk;
  assign mem_0_4_W0_data = W0_data[109:88];
  assign mem_0_4_W0_en = W0_en;
  assign mem_0_4_W0_mask = W0_mask[4];
  assign mem_0_5_R0_addr = R0_addr;
  assign mem_0_5_R0_clk = R0_clk;
  assign mem_0_5_R0_en = R0_en;
  assign mem_0_5_W0_addr = W0_addr;
  assign mem_0_5_W0_clk = W0_clk;
  assign mem_0_5_W0_data = W0_data[131:110];
  assign mem_0_5_W0_en = W0_en;
  assign mem_0_5_W0_mask = W0_mask[5];
  assign mem_0_6_R0_addr = R0_addr;
  assign mem_0_6_R0_clk = R0_clk;
  assign mem_0_6_R0_en = R0_en;
  assign mem_0_6_W0_addr = W0_addr;
  assign mem_0_6_W0_clk = W0_clk;
  assign mem_0_6_W0_data = W0_data[153:132];
  assign mem_0_6_W0_en = W0_en;
  assign mem_0_6_W0_mask = W0_mask[6];
  assign mem_0_7_R0_addr = R0_addr;
  assign mem_0_7_R0_clk = R0_clk;
  assign mem_0_7_R0_en = R0_en;
  assign mem_0_7_W0_addr = W0_addr;
  assign mem_0_7_W0_clk = W0_clk;
  assign mem_0_7_W0_data = W0_data[175:154];
  assign mem_0_7_W0_en = W0_en;
  assign mem_0_7_W0_mask = W0_mask[7];
  assign mem_0_8_R0_addr = R0_addr;
  assign mem_0_8_R0_clk = R0_clk;
  assign mem_0_8_R0_en = R0_en;
  assign mem_0_8_W0_addr = W0_addr;
  assign mem_0_8_W0_clk = W0_clk;
  assign mem_0_8_W0_data = W0_data[197:176];
  assign mem_0_8_W0_en = W0_en;
  assign mem_0_8_W0_mask = W0_mask[8];
  assign mem_0_9_R0_addr = R0_addr;
  assign mem_0_9_R0_clk = R0_clk;
  assign mem_0_9_R0_en = R0_en;
  assign mem_0_9_W0_addr = W0_addr;
  assign mem_0_9_W0_clk = W0_clk;
  assign mem_0_9_W0_data = W0_data[219:198];
  assign mem_0_9_W0_en = W0_en;
  assign mem_0_9_W0_mask = W0_mask[9];
  assign mem_0_10_R0_addr = R0_addr;
  assign mem_0_10_R0_clk = R0_clk;
  assign mem_0_10_R0_en = R0_en;
  assign mem_0_10_W0_addr = W0_addr;
  assign mem_0_10_W0_clk = W0_clk;
  assign mem_0_10_W0_data = W0_data[241:220];
  assign mem_0_10_W0_en = W0_en;
  assign mem_0_10_W0_mask = W0_mask[10];
  assign mem_0_11_R0_addr = R0_addr;
  assign mem_0_11_R0_clk = R0_clk;
  assign mem_0_11_R0_en = R0_en;
  assign mem_0_11_W0_addr = W0_addr;
  assign mem_0_11_W0_clk = W0_clk;
  assign mem_0_11_W0_data = W0_data[263:242];
  assign mem_0_11_W0_en = W0_en;
  assign mem_0_11_W0_mask = W0_mask[11];
  assign mem_0_12_R0_addr = R0_addr;
  assign mem_0_12_R0_clk = R0_clk;
  assign mem_0_12_R0_en = R0_en;
  assign mem_0_12_W0_addr = W0_addr;
  assign mem_0_12_W0_clk = W0_clk;
  assign mem_0_12_W0_data = W0_data[285:264];
  assign mem_0_12_W0_en = W0_en;
  assign mem_0_12_W0_mask = W0_mask[12];
  assign mem_0_13_R0_addr = R0_addr;
  assign mem_0_13_R0_clk = R0_clk;
  assign mem_0_13_R0_en = R0_en;
  assign mem_0_13_W0_addr = W0_addr;
  assign mem_0_13_W0_clk = W0_clk;
  assign mem_0_13_W0_data = W0_data[307:286];
  assign mem_0_13_W0_en = W0_en;
  assign mem_0_13_W0_mask = W0_mask[13];
  assign mem_0_14_R0_addr = R0_addr;
  assign mem_0_14_R0_clk = R0_clk;
  assign mem_0_14_R0_en = R0_en;
  assign mem_0_14_W0_addr = W0_addr;
  assign mem_0_14_W0_clk = W0_clk;
  assign mem_0_14_W0_data = W0_data[329:308];
  assign mem_0_14_W0_en = W0_en;
  assign mem_0_14_W0_mask = W0_mask[14];
  assign mem_0_15_R0_addr = R0_addr;
  assign mem_0_15_R0_clk = R0_clk;
  assign mem_0_15_R0_en = R0_en;
  assign mem_0_15_W0_addr = W0_addr;
  assign mem_0_15_W0_clk = W0_clk;
  assign mem_0_15_W0_data = W0_data[351:330];
  assign mem_0_15_W0_en = W0_en;
  assign mem_0_15_W0_mask = W0_mask[15];
endmodule

module array_0_0_0_ext(
  input  [8:0]  R0_addr,
  input         R0_clk,
  output [63:0] R0_data,
  input         R0_en,
  input  [8:0]  W0_addr,
  input         W0_clk,
  input  [63:0] W0_data,
  input         W0_en
);
  wire [8:0] mem_0_0_R0_addr;
  wire  mem_0_0_R0_clk;
  wire [63:0] mem_0_0_R0_data;
  wire  mem_0_0_R0_en;
  wire [8:0] mem_0_0_W0_addr;
  wire  mem_0_0_W0_clk;
  wire [63:0] mem_0_0_W0_data;
  wire  mem_0_0_W0_en;
  split_array_0_0_0_ext mem_0_0 (
    .R0_addr(mem_0_0_R0_addr),
    .R0_clk(mem_0_0_R0_clk),
    .R0_data(mem_0_0_R0_data),
    .R0_en(mem_0_0_R0_en),
    .W0_addr(mem_0_0_W0_addr),
    .W0_clk(mem_0_0_W0_clk),
    .W0_data(mem_0_0_W0_data),
    .W0_en(mem_0_0_W0_en)
  );
  assign R0_data = mem_0_0_R0_data;
  assign mem_0_0_R0_addr = R0_addr;
  assign mem_0_0_R0_clk = R0_clk;
  assign mem_0_0_R0_en = R0_en;
  assign mem_0_0_W0_addr = W0_addr;
  assign mem_0_0_W0_clk = W0_clk;
  assign mem_0_0_W0_data = W0_data;
  assign mem_0_0_W0_en = W0_en;
endmodule

module tag_array_0_ext(
  input  [5:0]  RW0_addr,
  input         RW0_clk,
  input  [83:0] RW0_wdata,
  output [83:0] RW0_rdata,
  input         RW0_en,
  input         RW0_wmode,
  input  [3:0]  RW0_wmask
);
  wire [5:0] mem_0_0_RW0_addr;
  wire  mem_0_0_RW0_clk;
  wire [20:0] mem_0_0_RW0_wdata;
  wire [20:0] mem_0_0_RW0_rdata;
  wire  mem_0_0_RW0_en;
  wire  mem_0_0_RW0_wmode;
  wire  mem_0_0_RW0_wmask;
  wire [5:0] mem_0_1_RW0_addr;
  wire  mem_0_1_RW0_clk;
  wire [20:0] mem_0_1_RW0_wdata;
  wire [20:0] mem_0_1_RW0_rdata;
  wire  mem_0_1_RW0_en;
  wire  mem_0_1_RW0_wmode;
  wire  mem_0_1_RW0_wmask;
  wire [5:0] mem_0_2_RW0_addr;
  wire  mem_0_2_RW0_clk;
  wire [20:0] mem_0_2_RW0_wdata;
  wire [20:0] mem_0_2_RW0_rdata;
  wire  mem_0_2_RW0_en;
  wire  mem_0_2_RW0_wmode;
  wire  mem_0_2_RW0_wmask;
  wire [5:0] mem_0_3_RW0_addr;
  wire  mem_0_3_RW0_clk;
  wire [20:0] mem_0_3_RW0_wdata;
  wire [20:0] mem_0_3_RW0_rdata;
  wire  mem_0_3_RW0_en;
  wire  mem_0_3_RW0_wmode;
  wire  mem_0_3_RW0_wmask;
  wire [20:0] RW0_rdata_0_0 = mem_0_0_RW0_rdata;
  wire [20:0] RW0_rdata_0_1 = mem_0_1_RW0_rdata;
  wire [20:0] RW0_rdata_0_2 = mem_0_2_RW0_rdata;
  wire [20:0] RW0_rdata_0_3 = mem_0_3_RW0_rdata;
  wire [62:0] _GEN_1 = {RW0_rdata_0_2,RW0_rdata_0_1,RW0_rdata_0_0};
  split_tag_array_0_ext mem_0_0 (
    .RW0_addr(mem_0_0_RW0_addr),
    .RW0_clk(mem_0_0_RW0_clk),
    .RW0_wdata(mem_0_0_RW0_wdata),
    .RW0_rdata(mem_0_0_RW0_rdata),
    .RW0_en(mem_0_0_RW0_en),
    .RW0_wmode(mem_0_0_RW0_wmode),
    .RW0_wmask(mem_0_0_RW0_wmask)
  );
  split_tag_array_0_ext mem_0_1 (
    .RW0_addr(mem_0_1_RW0_addr),
    .RW0_clk(mem_0_1_RW0_clk),
    .RW0_wdata(mem_0_1_RW0_wdata),
    .RW0_rdata(mem_0_1_RW0_rdata),
    .RW0_en(mem_0_1_RW0_en),
    .RW0_wmode(mem_0_1_RW0_wmode),
    .RW0_wmask(mem_0_1_RW0_wmask)
  );
  split_tag_array_0_ext mem_0_2 (
    .RW0_addr(mem_0_2_RW0_addr),
    .RW0_clk(mem_0_2_RW0_clk),
    .RW0_wdata(mem_0_2_RW0_wdata),
    .RW0_rdata(mem_0_2_RW0_rdata),
    .RW0_en(mem_0_2_RW0_en),
    .RW0_wmode(mem_0_2_RW0_wmode),
    .RW0_wmask(mem_0_2_RW0_wmask)
  );
  split_tag_array_0_ext mem_0_3 (
    .RW0_addr(mem_0_3_RW0_addr),
    .RW0_clk(mem_0_3_RW0_clk),
    .RW0_wdata(mem_0_3_RW0_wdata),
    .RW0_rdata(mem_0_3_RW0_rdata),
    .RW0_en(mem_0_3_RW0_en),
    .RW0_wmode(mem_0_3_RW0_wmode),
    .RW0_wmask(mem_0_3_RW0_wmask)
  );
  assign RW0_rdata = {RW0_rdata_0_3,_GEN_1};
  assign mem_0_0_RW0_addr = RW0_addr;
  assign mem_0_0_RW0_clk = RW0_clk;
  assign mem_0_0_RW0_wdata = RW0_wdata[20:0];
  assign mem_0_0_RW0_en = RW0_en;
  assign mem_0_0_RW0_wmode = RW0_wmode;
  assign mem_0_0_RW0_wmask = RW0_wmask[0];
  assign mem_0_1_RW0_addr = RW0_addr;
  assign mem_0_1_RW0_clk = RW0_clk;
  assign mem_0_1_RW0_wdata = RW0_wdata[41:21];
  assign mem_0_1_RW0_en = RW0_en;
  assign mem_0_1_RW0_wmode = RW0_wmode;
  assign mem_0_1_RW0_wmask = RW0_wmask[1];
  assign mem_0_2_RW0_addr = RW0_addr;
  assign mem_0_2_RW0_clk = RW0_clk;
  assign mem_0_2_RW0_wdata = RW0_wdata[62:42];
  assign mem_0_2_RW0_en = RW0_en;
  assign mem_0_2_RW0_wmode = RW0_wmode;
  assign mem_0_2_RW0_wmask = RW0_wmask[2];
  assign mem_0_3_RW0_addr = RW0_addr;
  assign mem_0_3_RW0_clk = RW0_clk;
  assign mem_0_3_RW0_wdata = RW0_wdata[83:63];
  assign mem_0_3_RW0_en = RW0_en;
  assign mem_0_3_RW0_wmode = RW0_wmode;
  assign mem_0_3_RW0_wmask = RW0_wmask[3];
endmodule

module data_arrays_0_ext(
  input  [8:0]   RW0_addr,
  input          RW0_clk,
  input  [127:0] RW0_wdata,
  output [127:0] RW0_rdata,
  input          RW0_en,
  input          RW0_wmode,
  input  [3:0]   RW0_wmask
);
  wire [8:0] mem_0_0_RW0_addr;
  wire  mem_0_0_RW0_clk;
  wire [31:0] mem_0_0_RW0_wdata;
  wire [31:0] mem_0_0_RW0_rdata;
  wire  mem_0_0_RW0_en;
  wire  mem_0_0_RW0_wmode;
  wire  mem_0_0_RW0_wmask;
  wire [8:0] mem_0_1_RW0_addr;
  wire  mem_0_1_RW0_clk;
  wire [31:0] mem_0_1_RW0_wdata;
  wire [31:0] mem_0_1_RW0_rdata;
  wire  mem_0_1_RW0_en;
  wire  mem_0_1_RW0_wmode;
  wire  mem_0_1_RW0_wmask;
  wire [8:0] mem_0_2_RW0_addr;
  wire  mem_0_2_RW0_clk;
  wire [31:0] mem_0_2_RW0_wdata;
  wire [31:0] mem_0_2_RW0_rdata;
  wire  mem_0_2_RW0_en;
  wire  mem_0_2_RW0_wmode;
  wire  mem_0_2_RW0_wmask;
  wire [8:0] mem_0_3_RW0_addr;
  wire  mem_0_3_RW0_clk;
  wire [31:0] mem_0_3_RW0_wdata;
  wire [31:0] mem_0_3_RW0_rdata;
  wire  mem_0_3_RW0_en;
  wire  mem_0_3_RW0_wmode;
  wire  mem_0_3_RW0_wmask;
  wire [31:0] RW0_rdata_0_0 = mem_0_0_RW0_rdata;
  wire [31:0] RW0_rdata_0_1 = mem_0_1_RW0_rdata;
  wire [31:0] RW0_rdata_0_2 = mem_0_2_RW0_rdata;
  wire [31:0] RW0_rdata_0_3 = mem_0_3_RW0_rdata;
  wire [95:0] _GEN_1 = {RW0_rdata_0_2,RW0_rdata_0_1,RW0_rdata_0_0};
  split_data_arrays_0_ext mem_0_0 (
    .RW0_addr(mem_0_0_RW0_addr),
    .RW0_clk(mem_0_0_RW0_clk),
    .RW0_wdata(mem_0_0_RW0_wdata),
    .RW0_rdata(mem_0_0_RW0_rdata),
    .RW0_en(mem_0_0_RW0_en),
    .RW0_wmode(mem_0_0_RW0_wmode),
    .RW0_wmask(mem_0_0_RW0_wmask)
  );
  split_data_arrays_0_ext mem_0_1 (
    .RW0_addr(mem_0_1_RW0_addr),
    .RW0_clk(mem_0_1_RW0_clk),
    .RW0_wdata(mem_0_1_RW0_wdata),
    .RW0_rdata(mem_0_1_RW0_rdata),
    .RW0_en(mem_0_1_RW0_en),
    .RW0_wmode(mem_0_1_RW0_wmode),
    .RW0_wmask(mem_0_1_RW0_wmask)
  );
  split_data_arrays_0_ext mem_0_2 (
    .RW0_addr(mem_0_2_RW0_addr),
    .RW0_clk(mem_0_2_RW0_clk),
    .RW0_wdata(mem_0_2_RW0_wdata),
    .RW0_rdata(mem_0_2_RW0_rdata),
    .RW0_en(mem_0_2_RW0_en),
    .RW0_wmode(mem_0_2_RW0_wmode),
    .RW0_wmask(mem_0_2_RW0_wmask)
  );
  split_data_arrays_0_ext mem_0_3 (
    .RW0_addr(mem_0_3_RW0_addr),
    .RW0_clk(mem_0_3_RW0_clk),
    .RW0_wdata(mem_0_3_RW0_wdata),
    .RW0_rdata(mem_0_3_RW0_rdata),
    .RW0_en(mem_0_3_RW0_en),
    .RW0_wmode(mem_0_3_RW0_wmode),
    .RW0_wmask(mem_0_3_RW0_wmask)
  );
  assign RW0_rdata = {RW0_rdata_0_3,_GEN_1};
  assign mem_0_0_RW0_addr = RW0_addr;
  assign mem_0_0_RW0_clk = RW0_clk;
  assign mem_0_0_RW0_wdata = RW0_wdata[31:0];
  assign mem_0_0_RW0_en = RW0_en;
  assign mem_0_0_RW0_wmode = RW0_wmode;
  assign mem_0_0_RW0_wmask = RW0_wmask[0];
  assign mem_0_1_RW0_addr = RW0_addr;
  assign mem_0_1_RW0_clk = RW0_clk;
  assign mem_0_1_RW0_wdata = RW0_wdata[63:32];
  assign mem_0_1_RW0_en = RW0_en;
  assign mem_0_1_RW0_wmode = RW0_wmode;
  assign mem_0_1_RW0_wmask = RW0_wmask[1];
  assign mem_0_2_RW0_addr = RW0_addr;
  assign mem_0_2_RW0_clk = RW0_clk;
  assign mem_0_2_RW0_wdata = RW0_wdata[95:64];
  assign mem_0_2_RW0_en = RW0_en;
  assign mem_0_2_RW0_wmode = RW0_wmode;
  assign mem_0_2_RW0_wmask = RW0_wmask[2];
  assign mem_0_3_RW0_addr = RW0_addr;
  assign mem_0_3_RW0_clk = RW0_clk;
  assign mem_0_3_RW0_wdata = RW0_wdata[127:96];
  assign mem_0_3_RW0_en = RW0_en;
  assign mem_0_3_RW0_wmode = RW0_wmode;
  assign mem_0_3_RW0_wmask = RW0_wmask[3];
endmodule

module mem_ext(
  input  [12:0] RW0_addr,
  input         RW0_clk,
  input  [63:0] RW0_wdata,
  output [63:0] RW0_rdata,
  input         RW0_en,
  input         RW0_wmode,
  input  [7:0]  RW0_wmask
);
  wire [12:0] mem_0_0_RW0_addr;
  wire  mem_0_0_RW0_clk;
  wire [7:0] mem_0_0_RW0_wdata;
  wire [7:0] mem_0_0_RW0_rdata;
  wire  mem_0_0_RW0_en;
  wire  mem_0_0_RW0_wmode;
  wire  mem_0_0_RW0_wmask;
  wire [12:0] mem_0_1_RW0_addr;
  wire  mem_0_1_RW0_clk;
  wire [7:0] mem_0_1_RW0_wdata;
  wire [7:0] mem_0_1_RW0_rdata;
  wire  mem_0_1_RW0_en;
  wire  mem_0_1_RW0_wmode;
  wire  mem_0_1_RW0_wmask;
  wire [12:0] mem_0_2_RW0_addr;
  wire  mem_0_2_RW0_clk;
  wire [7:0] mem_0_2_RW0_wdata;
  wire [7:0] mem_0_2_RW0_rdata;
  wire  mem_0_2_RW0_en;
  wire  mem_0_2_RW0_wmode;
  wire  mem_0_2_RW0_wmask;
  wire [12:0] mem_0_3_RW0_addr;
  wire  mem_0_3_RW0_clk;
  wire [7:0] mem_0_3_RW0_wdata;
  wire [7:0] mem_0_3_RW0_rdata;
  wire  mem_0_3_RW0_en;
  wire  mem_0_3_RW0_wmode;
  wire  mem_0_3_RW0_wmask;
  wire [12:0] mem_0_4_RW0_addr;
  wire  mem_0_4_RW0_clk;
  wire [7:0] mem_0_4_RW0_wdata;
  wire [7:0] mem_0_4_RW0_rdata;
  wire  mem_0_4_RW0_en;
  wire  mem_0_4_RW0_wmode;
  wire  mem_0_4_RW0_wmask;
  wire [12:0] mem_0_5_RW0_addr;
  wire  mem_0_5_RW0_clk;
  wire [7:0] mem_0_5_RW0_wdata;
  wire [7:0] mem_0_5_RW0_rdata;
  wire  mem_0_5_RW0_en;
  wire  mem_0_5_RW0_wmode;
  wire  mem_0_5_RW0_wmask;
  wire [12:0] mem_0_6_RW0_addr;
  wire  mem_0_6_RW0_clk;
  wire [7:0] mem_0_6_RW0_wdata;
  wire [7:0] mem_0_6_RW0_rdata;
  wire  mem_0_6_RW0_en;
  wire  mem_0_6_RW0_wmode;
  wire  mem_0_6_RW0_wmask;
  wire [12:0] mem_0_7_RW0_addr;
  wire  mem_0_7_RW0_clk;
  wire [7:0] mem_0_7_RW0_wdata;
  wire [7:0] mem_0_7_RW0_rdata;
  wire  mem_0_7_RW0_en;
  wire  mem_0_7_RW0_wmode;
  wire  mem_0_7_RW0_wmask;
  wire [7:0] RW0_rdata_0_0 = mem_0_0_RW0_rdata;
  wire [7:0] RW0_rdata_0_1 = mem_0_1_RW0_rdata;
  wire [7:0] RW0_rdata_0_2 = mem_0_2_RW0_rdata;
  wire [7:0] RW0_rdata_0_3 = mem_0_3_RW0_rdata;
  wire [7:0] RW0_rdata_0_4 = mem_0_4_RW0_rdata;
  wire [7:0] RW0_rdata_0_5 = mem_0_5_RW0_rdata;
  wire [7:0] RW0_rdata_0_6 = mem_0_6_RW0_rdata;
  wire [7:0] RW0_rdata_0_7 = mem_0_7_RW0_rdata;
  wire [55:0] _GEN_5 = {RW0_rdata_0_6,RW0_rdata_0_5,RW0_rdata_0_4,RW0_rdata_0_3,RW0_rdata_0_2,RW0_rdata_0_1,
    RW0_rdata_0_0};
  split_mem_ext mem_0_0 (
    .RW0_addr(mem_0_0_RW0_addr),
    .RW0_clk(mem_0_0_RW0_clk),
    .RW0_wdata(mem_0_0_RW0_wdata),
    .RW0_rdata(mem_0_0_RW0_rdata),
    .RW0_en(mem_0_0_RW0_en),
    .RW0_wmode(mem_0_0_RW0_wmode),
    .RW0_wmask(mem_0_0_RW0_wmask)
  );
  split_mem_ext mem_0_1 (
    .RW0_addr(mem_0_1_RW0_addr),
    .RW0_clk(mem_0_1_RW0_clk),
    .RW0_wdata(mem_0_1_RW0_wdata),
    .RW0_rdata(mem_0_1_RW0_rdata),
    .RW0_en(mem_0_1_RW0_en),
    .RW0_wmode(mem_0_1_RW0_wmode),
    .RW0_wmask(mem_0_1_RW0_wmask)
  );
  split_mem_ext mem_0_2 (
    .RW0_addr(mem_0_2_RW0_addr),
    .RW0_clk(mem_0_2_RW0_clk),
    .RW0_wdata(mem_0_2_RW0_wdata),
    .RW0_rdata(mem_0_2_RW0_rdata),
    .RW0_en(mem_0_2_RW0_en),
    .RW0_wmode(mem_0_2_RW0_wmode),
    .RW0_wmask(mem_0_2_RW0_wmask)
  );
  split_mem_ext mem_0_3 (
    .RW0_addr(mem_0_3_RW0_addr),
    .RW0_clk(mem_0_3_RW0_clk),
    .RW0_wdata(mem_0_3_RW0_wdata),
    .RW0_rdata(mem_0_3_RW0_rdata),
    .RW0_en(mem_0_3_RW0_en),
    .RW0_wmode(mem_0_3_RW0_wmode),
    .RW0_wmask(mem_0_3_RW0_wmask)
  );
  split_mem_ext mem_0_4 (
    .RW0_addr(mem_0_4_RW0_addr),
    .RW0_clk(mem_0_4_RW0_clk),
    .RW0_wdata(mem_0_4_RW0_wdata),
    .RW0_rdata(mem_0_4_RW0_rdata),
    .RW0_en(mem_0_4_RW0_en),
    .RW0_wmode(mem_0_4_RW0_wmode),
    .RW0_wmask(mem_0_4_RW0_wmask)
  );
  split_mem_ext mem_0_5 (
    .RW0_addr(mem_0_5_RW0_addr),
    .RW0_clk(mem_0_5_RW0_clk),
    .RW0_wdata(mem_0_5_RW0_wdata),
    .RW0_rdata(mem_0_5_RW0_rdata),
    .RW0_en(mem_0_5_RW0_en),
    .RW0_wmode(mem_0_5_RW0_wmode),
    .RW0_wmask(mem_0_5_RW0_wmask)
  );
  split_mem_ext mem_0_6 (
    .RW0_addr(mem_0_6_RW0_addr),
    .RW0_clk(mem_0_6_RW0_clk),
    .RW0_wdata(mem_0_6_RW0_wdata),
    .RW0_rdata(mem_0_6_RW0_rdata),
    .RW0_en(mem_0_6_RW0_en),
    .RW0_wmode(mem_0_6_RW0_wmode),
    .RW0_wmask(mem_0_6_RW0_wmask)
  );
  split_mem_ext mem_0_7 (
    .RW0_addr(mem_0_7_RW0_addr),
    .RW0_clk(mem_0_7_RW0_clk),
    .RW0_wdata(mem_0_7_RW0_wdata),
    .RW0_rdata(mem_0_7_RW0_rdata),
    .RW0_en(mem_0_7_RW0_en),
    .RW0_wmode(mem_0_7_RW0_wmode),
    .RW0_wmask(mem_0_7_RW0_wmask)
  );
  assign RW0_rdata = {RW0_rdata_0_7,_GEN_5};
  assign mem_0_0_RW0_addr = RW0_addr;
  assign mem_0_0_RW0_clk = RW0_clk;
  assign mem_0_0_RW0_wdata = RW0_wdata[7:0];
  assign mem_0_0_RW0_en = RW0_en;
  assign mem_0_0_RW0_wmode = RW0_wmode;
  assign mem_0_0_RW0_wmask = RW0_wmask[0];
  assign mem_0_1_RW0_addr = RW0_addr;
  assign mem_0_1_RW0_clk = RW0_clk;
  assign mem_0_1_RW0_wdata = RW0_wdata[15:8];
  assign mem_0_1_RW0_en = RW0_en;
  assign mem_0_1_RW0_wmode = RW0_wmode;
  assign mem_0_1_RW0_wmask = RW0_wmask[1];
  assign mem_0_2_RW0_addr = RW0_addr;
  assign mem_0_2_RW0_clk = RW0_clk;
  assign mem_0_2_RW0_wdata = RW0_wdata[23:16];
  assign mem_0_2_RW0_en = RW0_en;
  assign mem_0_2_RW0_wmode = RW0_wmode;
  assign mem_0_2_RW0_wmask = RW0_wmask[2];
  assign mem_0_3_RW0_addr = RW0_addr;
  assign mem_0_3_RW0_clk = RW0_clk;
  assign mem_0_3_RW0_wdata = RW0_wdata[31:24];
  assign mem_0_3_RW0_en = RW0_en;
  assign mem_0_3_RW0_wmode = RW0_wmode;
  assign mem_0_3_RW0_wmask = RW0_wmask[3];
  assign mem_0_4_RW0_addr = RW0_addr;
  assign mem_0_4_RW0_clk = RW0_clk;
  assign mem_0_4_RW0_wdata = RW0_wdata[39:32];
  assign mem_0_4_RW0_en = RW0_en;
  assign mem_0_4_RW0_wmode = RW0_wmode;
  assign mem_0_4_RW0_wmask = RW0_wmask[4];
  assign mem_0_5_RW0_addr = RW0_addr;
  assign mem_0_5_RW0_clk = RW0_clk;
  assign mem_0_5_RW0_wdata = RW0_wdata[47:40];
  assign mem_0_5_RW0_en = RW0_en;
  assign mem_0_5_RW0_wmode = RW0_wmode;
  assign mem_0_5_RW0_wmask = RW0_wmask[5];
  assign mem_0_6_RW0_addr = RW0_addr;
  assign mem_0_6_RW0_clk = RW0_clk;
  assign mem_0_6_RW0_wdata = RW0_wdata[55:48];
  assign mem_0_6_RW0_en = RW0_en;
  assign mem_0_6_RW0_wmode = RW0_wmode;
  assign mem_0_6_RW0_wmask = RW0_wmask[6];
  assign mem_0_7_RW0_addr = RW0_addr;
  assign mem_0_7_RW0_clk = RW0_clk;
  assign mem_0_7_RW0_wdata = RW0_wdata[63:56];
  assign mem_0_7_RW0_en = RW0_en;
  assign mem_0_7_RW0_wmode = RW0_wmode;
  assign mem_0_7_RW0_wmask = RW0_wmask[7];
endmodule

module split_cc_dir_ext(
  input  [9:0]  RW0_addr,
  input         RW0_clk,
  input  [16:0] RW0_wdata,
  output [16:0] RW0_rdata,
  input         RW0_en,
  input         RW0_wmode,
  input         RW0_wmask
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [16:0] ram [0:1023];
  wire  ram_RW_0_r_en;
  wire [9:0] ram_RW_0_r_addr;
  wire [16:0] ram_RW_0_r_data;
  wire [16:0] ram_RW_0_w_data;
  wire [9:0] ram_RW_0_w_addr;
  wire  ram_RW_0_w_mask;
  wire  ram_RW_0_w_en;
  reg  ram_RW_0_r_en_pipe_0;
  reg [9:0] ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_en = ram_RW_0_r_en_pipe_0;
  assign ram_RW_0_r_addr = ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_data = ram[ram_RW_0_r_addr];
  assign ram_RW_0_w_data = RW0_wdata;
  assign ram_RW_0_w_addr = RW0_addr;
  assign ram_RW_0_w_mask = RW0_wmask;
  assign ram_RW_0_w_en = RW0_en & RW0_wmode;
  assign RW0_rdata = ram_RW_0_r_data;
  always @(posedge RW0_clk) begin
    if (ram_RW_0_w_en & ram_RW_0_w_mask) begin
      ram[ram_RW_0_w_addr] <= ram_RW_0_w_data;
    end
    ram_RW_0_r_en_pipe_0 <= RW0_en & ~RW0_wmode;
    if (RW0_en & ~RW0_wmode) begin
      ram_RW_0_r_addr_pipe_0 <= RW0_addr;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    ram[initvar] = _RAND_0[16:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ram_RW_0_r_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ram_RW_0_r_addr_pipe_0 = _RAND_2[9:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

module split_cc_banks_0_ext(
  input  [13:0] RW0_addr,
  input         RW0_clk,
  input  [63:0] RW0_wdata,
  output [63:0] RW0_rdata,
  input         RW0_en,
  input         RW0_wmode
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] ram [0:16383];
  wire  ram_RW_0_r_en;
  wire [13:0] ram_RW_0_r_addr;
  wire [63:0] ram_RW_0_r_data;
  wire [63:0] ram_RW_0_w_data;
  wire [13:0] ram_RW_0_w_addr;
  wire  ram_RW_0_w_mask;
  wire  ram_RW_0_w_en;
  reg  ram_RW_0_r_en_pipe_0;
  reg [13:0] ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_en = ram_RW_0_r_en_pipe_0;
  assign ram_RW_0_r_addr = ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_data = ram[ram_RW_0_r_addr];
  assign ram_RW_0_w_data = RW0_wdata;
  assign ram_RW_0_w_addr = RW0_addr;
  assign ram_RW_0_w_mask = 1'h1;
  assign ram_RW_0_w_en = RW0_en & RW0_wmode;
  assign RW0_rdata = ram_RW_0_r_data;
  always @(posedge RW0_clk) begin
    if (ram_RW_0_w_en & ram_RW_0_w_mask) begin
      ram[ram_RW_0_w_addr] <= ram_RW_0_w_data;
    end
    ram_RW_0_r_en_pipe_0 <= RW0_en & ~RW0_wmode;
    if (RW0_en & ~RW0_wmode) begin
      ram_RW_0_r_addr_pipe_0 <= RW0_addr;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 16384; initvar = initvar+1)
    ram[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ram_RW_0_r_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ram_RW_0_r_addr_pipe_0 = _RAND_2[13:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

module split_tag_array_ext(
  input  [5:0]  R0_addr,
  input         R0_clk,
  output [21:0] R0_data,
  input         R0_en,
  input  [5:0]  W0_addr,
  input         W0_clk,
  input  [21:0] W0_data,
  input         W0_en,
  input         W0_mask
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [21:0] ram [0:63];
  wire  ram_R_0_en;
  wire [5:0] ram_R_0_addr;
  wire [21:0] ram_R_0_data;
  wire [21:0] ram_W_0_data;
  wire [5:0] ram_W_0_addr;
  wire  ram_W_0_mask;
  wire  ram_W_0_en;
  reg  ram_R_0_en_pipe_0;
  reg [5:0] ram_R_0_addr_pipe_0;
  assign ram_R_0_en = ram_R_0_en_pipe_0;
  assign ram_R_0_addr = ram_R_0_addr_pipe_0;
  assign ram_R_0_data = ram[ram_R_0_addr];
  assign ram_W_0_data = W0_data;
  assign ram_W_0_addr = W0_addr;
  assign ram_W_0_mask = W0_mask;
  assign ram_W_0_en = W0_en;
  assign R0_data = ram_R_0_data;
  always @(posedge W0_clk) begin
    if (ram_W_0_en & ram_W_0_mask) begin
      ram[ram_W_0_addr] <= ram_W_0_data;
    end
  end
  always @(posedge R0_clk) begin
    ram_R_0_en_pipe_0 <= R0_en;
    if (R0_en) begin
      ram_R_0_addr_pipe_0 <= R0_addr;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    ram[initvar] = _RAND_0[21:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ram_R_0_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ram_R_0_addr_pipe_0 = _RAND_2[5:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

module split_array_0_0_0_ext(
  input  [8:0]  R0_addr,
  input         R0_clk,
  output [63:0] R0_data,
  input         R0_en,
  input  [8:0]  W0_addr,
  input         W0_clk,
  input  [63:0] W0_data,
  input         W0_en
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] ram [0:511];
  wire  ram_R_0_en;
  wire [8:0] ram_R_0_addr;
  wire [63:0] ram_R_0_data;
  wire [63:0] ram_W_0_data;
  wire [8:0] ram_W_0_addr;
  wire  ram_W_0_mask;
  wire  ram_W_0_en;
  reg  ram_R_0_en_pipe_0;
  reg [8:0] ram_R_0_addr_pipe_0;
  assign ram_R_0_en = ram_R_0_en_pipe_0;
  assign ram_R_0_addr = ram_R_0_addr_pipe_0;
  assign ram_R_0_data = ram[ram_R_0_addr];
  assign ram_W_0_data = W0_data;
  assign ram_W_0_addr = W0_addr;
  assign ram_W_0_mask = 1'h1;
  assign ram_W_0_en = W0_en;
  assign R0_data = ram_R_0_data;
  always @(posedge W0_clk) begin
    if (ram_W_0_en & ram_W_0_mask) begin
      ram[ram_W_0_addr] <= ram_W_0_data;
    end
  end
  always @(posedge R0_clk) begin
    ram_R_0_en_pipe_0 <= R0_en;
    if (R0_en) begin
      ram_R_0_addr_pipe_0 <= R0_addr;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 512; initvar = initvar+1)
    ram[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ram_R_0_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ram_R_0_addr_pipe_0 = _RAND_2[8:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

module split_tag_array_0_ext(
  input  [5:0]  RW0_addr,
  input         RW0_clk,
  input  [20:0] RW0_wdata,
  output [20:0] RW0_rdata,
  input         RW0_en,
  input         RW0_wmode,
  input         RW0_wmask
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [20:0] ram [0:63];
  wire  ram_RW_0_r_en;
  wire [5:0] ram_RW_0_r_addr;
  wire [20:0] ram_RW_0_r_data;
  wire [20:0] ram_RW_0_w_data;
  wire [5:0] ram_RW_0_w_addr;
  wire  ram_RW_0_w_mask;
  wire  ram_RW_0_w_en;
  reg  ram_RW_0_r_en_pipe_0;
  reg [5:0] ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_en = ram_RW_0_r_en_pipe_0;
  assign ram_RW_0_r_addr = ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_data = ram[ram_RW_0_r_addr];
  assign ram_RW_0_w_data = RW0_wdata;
  assign ram_RW_0_w_addr = RW0_addr;
  assign ram_RW_0_w_mask = RW0_wmask;
  assign ram_RW_0_w_en = RW0_en & RW0_wmode;
  assign RW0_rdata = ram_RW_0_r_data;
  always @(posedge RW0_clk) begin
    if (ram_RW_0_w_en & ram_RW_0_w_mask) begin
      ram[ram_RW_0_w_addr] <= ram_RW_0_w_data;
    end
    ram_RW_0_r_en_pipe_0 <= RW0_en & ~RW0_wmode;
    if (RW0_en & ~RW0_wmode) begin
      ram_RW_0_r_addr_pipe_0 <= RW0_addr;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 64; initvar = initvar+1)
    ram[initvar] = _RAND_0[20:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ram_RW_0_r_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ram_RW_0_r_addr_pipe_0 = _RAND_2[5:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

module split_data_arrays_0_ext(
  input  [8:0]  RW0_addr,
  input         RW0_clk,
  input  [31:0] RW0_wdata,
  output [31:0] RW0_rdata,
  input         RW0_en,
  input         RW0_wmode,
  input         RW0_wmask
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] ram [0:511];
  wire  ram_RW_0_r_en;
  wire [8:0] ram_RW_0_r_addr;
  wire [31:0] ram_RW_0_r_data;
  wire [31:0] ram_RW_0_w_data;
  wire [8:0] ram_RW_0_w_addr;
  wire  ram_RW_0_w_mask;
  wire  ram_RW_0_w_en;
  reg  ram_RW_0_r_en_pipe_0;
  reg [8:0] ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_en = ram_RW_0_r_en_pipe_0;
  assign ram_RW_0_r_addr = ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_data = ram[ram_RW_0_r_addr];
  assign ram_RW_0_w_data = RW0_wdata;
  assign ram_RW_0_w_addr = RW0_addr;
  assign ram_RW_0_w_mask = RW0_wmask;
  assign ram_RW_0_w_en = RW0_en & RW0_wmode;
  assign RW0_rdata = ram_RW_0_r_data;
  always @(posedge RW0_clk) begin
    if (ram_RW_0_w_en & ram_RW_0_w_mask) begin
      ram[ram_RW_0_w_addr] <= ram_RW_0_w_data;
    end
    ram_RW_0_r_en_pipe_0 <= RW0_en & ~RW0_wmode;
    if (RW0_en & ~RW0_wmode) begin
      ram_RW_0_r_addr_pipe_0 <= RW0_addr;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 512; initvar = initvar+1)
    ram[initvar] = _RAND_0[31:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ram_RW_0_r_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ram_RW_0_r_addr_pipe_0 = _RAND_2[8:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

module split_mem_ext(
  input  [12:0] RW0_addr,
  input         RW0_clk,
  input  [7:0]  RW0_wdata,
  output [7:0]  RW0_rdata,
  input         RW0_en,
  input         RW0_wmode,
  input         RW0_wmask
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] ram [0:8191];
  wire  ram_RW_0_r_en;
  wire [12:0] ram_RW_0_r_addr;
  wire [7:0] ram_RW_0_r_data;
  wire [7:0] ram_RW_0_w_data;
  wire [12:0] ram_RW_0_w_addr;
  wire  ram_RW_0_w_mask;
  wire  ram_RW_0_w_en;
  reg  ram_RW_0_r_en_pipe_0;
  reg [12:0] ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_en = ram_RW_0_r_en_pipe_0;
  assign ram_RW_0_r_addr = ram_RW_0_r_addr_pipe_0;
  assign ram_RW_0_r_data = ram[ram_RW_0_r_addr];
  assign ram_RW_0_w_data = RW0_wdata;
  assign ram_RW_0_w_addr = RW0_addr;
  assign ram_RW_0_w_mask = RW0_wmask;
  assign ram_RW_0_w_en = RW0_en & RW0_wmode;
  assign RW0_rdata = ram_RW_0_r_data;
  always @(posedge RW0_clk) begin
    if (ram_RW_0_w_en & ram_RW_0_w_mask) begin
      ram[ram_RW_0_w_addr] <= ram_RW_0_w_data;
    end
    ram_RW_0_r_en_pipe_0 <= RW0_en & ~RW0_wmode;
    if (RW0_en & ~RW0_wmode) begin
      ram_RW_0_r_addr_pipe_0 <= RW0_addr;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    ram[initvar] = _RAND_0[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ram_RW_0_r_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  ram_RW_0_r_addr_pipe_0 = _RAND_2[12:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
