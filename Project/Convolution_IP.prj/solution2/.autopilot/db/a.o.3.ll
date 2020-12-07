; ModuleID = 'C:/Users/Kristoffer/Documents/Embedded_Real_Time_Exercises/Project/Convolution_IP.prj/solution2/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@llvm_global_ctors_1 = appending global [0 x void ()*] zeroinitializer ; [#uses=0 type=[0 x void ()*]*]
@llvm_global_ctors_0 = appending global [0 x i32] zeroinitializer ; [#uses=0 type=[0 x i32]*]
@for_i_pixel_for_j_pi = internal unnamed_addr constant [24 x i8] c"for_i_pixel_for_j_pixel\00" ; [#uses=1 type=[24 x i8]*]
@conv_3x3_strm_str = internal unnamed_addr constant [14 x i8] c"conv_3x3_strm\00" ; [#uses=1 type=[14 x i8]*]
@ap_fifo_str = internal unnamed_addr constant [8 x i8] c"ap_fifo\00" ; [#uses=2 type=[8 x i8]*]
@p_str5 = private unnamed_addr constant [12 x i8] c"for_j_pixel\00", align 1 ; [#uses=3 type=[12 x i8]*]
@p_str3 = private unnamed_addr constant [15 x i8] c"init_linebuf_2\00", align 1 ; [#uses=3 type=[15 x i8]*]
@p_str2 = private unnamed_addr constant [15 x i8] c"init_linebuf_1\00", align 1 ; [#uses=3 type=[15 x i8]*]
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=3 type=[1 x i8]*]
@p_str = internal unnamed_addr constant [1 x i8] zeroinitializer ; [#uses=12 type=[1 x i8]*]

; [#uses=1]
declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

; [#uses=2]
declare i11 @llvm.part.select.i11(i11, i32, i32) nounwind readnone

; [#uses=35]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=12]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=0]
define void @conv_3x3_strm(i8* %out_stream_V, i8* %in_stream_V) {
  %empty = call i32 (...)* @_ssdm_op_SpecInterface(i8* %in_stream_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 2, i32 2, i32 16, i32 16, [1 x i8]* @p_str, [1 x i8]* @p_str) ; [#uses=0 type=i32]
  %empty_8 = call i32 (...)* @_ssdm_op_SpecInterface(i8* %out_stream_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 2, i32 2, i32 16, i32 16, [1 x i8]* @p_str, [1 x i8]* @p_str) ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %out_stream_V), !map !35
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %in_stream_V), !map !39
  call void (...)* @_ssdm_op_SpecTopModule([14 x i8]* @conv_3x3_strm_str) nounwind
  %line_buf_0 = alloca [256 x i8], align 1        ; [#uses=4 type=[256 x i8]*]
  %line_buf_1 = alloca [256 x i8], align 1        ; [#uses=4 type=[256 x i8]*]
  call void @llvm.dbg.value(metadata !{i8* %out_stream_V}, i64 0, metadata !43), !dbg !111 ; [debug line = 42:41] [debug variable = out_stream.V]
  call void @llvm.dbg.value(metadata !{i8* %in_stream_V}, i64 0, metadata !112), !dbg !114 ; [debug line = 42:74] [debug variable = in_stream.V]
  call void @llvm.dbg.declare(metadata !{[256 x i8]* %line_buf_0}, metadata !115), !dbg !125 ; [debug line = 45:9] [debug variable = line_buf[0]]
  call void @llvm.dbg.declare(metadata !{[256 x i8]* %line_buf_1}, metadata !126), !dbg !125 ; [debug line = 45:9] [debug variable = line_buf[1]]
  br label %1, !dbg !127                          ; [debug line = 57:39]

; <label>:1                                       ; preds = %2, %0
  %x = phi i9 [ 254, %0 ], [ %x_1, %2 ]           ; [#uses=3 type=i9]
  %exitcond1 = icmp eq i9 %x, -256, !dbg !127     ; [#uses=1 type=i1] [debug line = 57:39]
  br i1 %exitcond1, label %.preheader14.preheader, label %2, !dbg !127 ; [debug line = 57:39]

.preheader14.preheader:                           ; preds = %1
  br label %.preheader14, !dbg !129               ; [debug line = 62:33]

; <label>:2                                       ; preds = %1
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecLoopName([15 x i8]* @p_str2) nounwind, !dbg !131 ; [debug line = 57:55]
  %tmp_5 = call i32 (...)* @_ssdm_op_SpecRegionBegin([15 x i8]* @p_str2), !dbg !131 ; [#uses=1 type=i32] [debug line = 57:55]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind, !dbg !133 ; [debug line = 58:1]
  call void @llvm.dbg.value(metadata !{i8* %in_stream_V}, i64 0, metadata !134), !dbg !139 ; [debug line = 129:56@59:19] [debug variable = stream<unsigned char>.V]
  %tmp = call i8 @_ssdm_op_Read.ap_fifo.volatile.i8P(i8* %in_stream_V), !dbg !141 ; [#uses=1 type=i8] [debug line = 131:9@59:19]
  call void @llvm.dbg.value(metadata !{i8 %tmp}, i64 0, metadata !143), !dbg !141 ; [debug line = 131:9@59:19] [debug variable = tmp]
  %tmp_1 = zext i9 %x to i64, !dbg !140           ; [#uses=1 type=i64] [debug line = 59:19]
  %line_buf_0_addr = getelementptr [256 x i8]* %line_buf_0, i64 0, i64 %tmp_1 ; [#uses=1 type=i8*]
  store i8 %tmp, i8* %line_buf_0_addr, align 1, !dbg !140 ; [debug line = 59:19]
  %empty_10 = call i32 (...)* @_ssdm_op_SpecRegionEnd([15 x i8]* @p_str2, i32 %tmp_5), !dbg !144 ; [#uses=0 type=i32] [debug line = 60:5]
  %x_1 = add i9 %x, 1, !dbg !145                  ; [#uses=1 type=i9] [debug line = 57:50]
  call void @llvm.dbg.value(metadata !{i9 %x_1}, i64 0, metadata !146), !dbg !145 ; [debug line = 57:50] [debug variable = x]
  br label %1, !dbg !145                          ; [debug line = 57:50]

.preheader14:                                     ; preds = %3, %.preheader14.preheader
  %x1 = phi i9 [ %x_2, %3 ], [ 0, %.preheader14.preheader ] ; [#uses=3 type=i9]
  %exitcond2 = icmp eq i9 %x1, -256, !dbg !129    ; [#uses=1 type=i1] [debug line = 62:33]
  %x_2 = add i9 %x1, 1, !dbg !148                 ; [#uses=1 type=i9] [debug line = 62:44]
  br i1 %exitcond2, label %4, label %3, !dbg !129 ; [debug line = 62:33]

; <label>:3                                       ; preds = %.preheader14
  %empty_11 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 256, i64 256, i64 256) ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecLoopName([15 x i8]* @p_str3) nounwind, !dbg !149 ; [debug line = 62:49]
  %tmp_7 = call i32 (...)* @_ssdm_op_SpecRegionBegin([15 x i8]* @p_str3), !dbg !149 ; [#uses=1 type=i32] [debug line = 62:49]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind, !dbg !151 ; [debug line = 63:1]
  call void @llvm.dbg.value(metadata !{i8* %in_stream_V}, i64 0, metadata !134), !dbg !152 ; [debug line = 129:56@64:19] [debug variable = stream<unsigned char>.V]
  %tmp_2 = call i8 @_ssdm_op_Read.ap_fifo.volatile.i8P(i8* %in_stream_V), !dbg !154 ; [#uses=1 type=i8] [debug line = 131:9@64:19]
  call void @llvm.dbg.value(metadata !{i8 %tmp_2}, i64 0, metadata !143), !dbg !154 ; [debug line = 131:9@64:19] [debug variable = tmp]
  %tmp_4 = zext i9 %x1 to i64, !dbg !153          ; [#uses=1 type=i64] [debug line = 64:19]
  %line_buf_1_addr_2 = getelementptr [256 x i8]* %line_buf_1, i64 0, i64 %tmp_4 ; [#uses=1 type=i8*]
  store i8 %tmp_2, i8* %line_buf_1_addr_2, align 1, !dbg !153 ; [debug line = 64:19]
  %empty_12 = call i32 (...)* @_ssdm_op_SpecRegionEnd([15 x i8]* @p_str3, i32 %tmp_7), !dbg !155 ; [#uses=0 type=i32] [debug line = 65:5]
  call void @llvm.dbg.value(metadata !{i9 %x_2}, i64 0, metadata !156), !dbg !148 ; [debug line = 62:44] [debug variable = x]
  br label %.preheader14, !dbg !148               ; [debug line = 62:44]

; <label>:4                                       ; preds = %.preheader14
  %read_count_1 = alloca i32                      ; [#uses=3 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %read_count_1}, metadata !157) ; [debug variable = read_count]
  %window_0_1 = alloca i8                         ; [#uses=2 type=i8*]
  call void @llvm.dbg.declare(metadata !{i8* %window_0_1}, metadata !158) ; [debug variable = window[0][1]]
  %window_0_0 = alloca i8                         ; [#uses=2 type=i8*]
  call void @llvm.dbg.declare(metadata !{i8* %window_0_0}, metadata !164) ; [debug variable = window[0][0]]
  %window_0_0_1 = alloca i8                       ; [#uses=2 type=i8*]
  call void @llvm.dbg.declare(metadata !{i8* %window_0_0_1}, metadata !164) ; [debug variable = window[0][0]]
  %window_1_1_1 = alloca i8                       ; [#uses=3 type=i8*]
  call void @llvm.dbg.declare(metadata !{i8* %window_1_1_1}, metadata !165) ; [debug variable = window[1][1]]
  %window_1_0 = alloca i8                         ; [#uses=3 type=i8*]
  call void @llvm.dbg.declare(metadata !{i8* %window_1_0}, metadata !166) ; [debug variable = window[1][0]]
  %window_1_0_1 = alloca i8                       ; [#uses=2 type=i8*]
  call void @llvm.dbg.declare(metadata !{i8* %window_1_0_1}, metadata !166) ; [debug variable = window[1][0]]
  %window_2_1_1 = alloca i8                       ; [#uses=3 type=i8*]
  call void @llvm.dbg.declare(metadata !{i8* %window_2_1_1}, metadata !167) ; [debug variable = window[2][1]]
  %window_2_0 = alloca i8                         ; [#uses=3 type=i8*]
  call void @llvm.dbg.declare(metadata !{i8* %window_2_0}, metadata !168) ; [debug variable = window[2][0]]
  %window_2_0_1 = alloca i8                       ; [#uses=2 type=i8*]
  call void @llvm.dbg.declare(metadata !{i8* %window_2_0_1}, metadata !168) ; [debug variable = window[2][0]]
  %line_buf_0_addr_1 = getelementptr [256 x i8]* %line_buf_0, i64 0, i64 254 ; [#uses=1 type=i8*]
  %window_1_1 = load i8* %line_buf_0_addr_1, align 2, !dbg !169 ; [#uses=1 type=i8] [debug line = 69:2]
  call void @llvm.dbg.value(metadata !{i8 %window_1_1}, i64 0, metadata !165), !dbg !169 ; [debug line = 69:2] [debug variable = window[1][1]]
  %line_buf_0_addr_2 = getelementptr [256 x i8]* %line_buf_0, i64 0, i64 255 ; [#uses=1 type=i8*]
  %window_1_2 = load i8* %line_buf_0_addr_2, align 1, !dbg !170 ; [#uses=1 type=i8] [debug line = 70:2]
  call void @llvm.dbg.value(metadata !{i8 %window_1_2}, i64 0, metadata !171), !dbg !170 ; [debug line = 70:2] [debug variable = window[1][2]]
  %line_buf_1_addr = getelementptr [256 x i8]* %line_buf_1, i64 0, i64 254 ; [#uses=1 type=i8*]
  %window_2_1 = load i8* %line_buf_1_addr, align 2, !dbg !172 ; [#uses=1 type=i8] [debug line = 71:2]
  call void @llvm.dbg.value(metadata !{i8 %window_2_1}, i64 0, metadata !167), !dbg !172 ; [debug line = 71:2] [debug variable = window[2][1]]
  %line_buf_1_addr_1 = getelementptr [256 x i8]* %line_buf_1, i64 0, i64 255 ; [#uses=1 type=i8*]
  %window_2_2 = load i8* %line_buf_1_addr_1, align 1, !dbg !173 ; [#uses=1 type=i8] [debug line = 72:2]
  call void @llvm.dbg.value(metadata !{i8 %window_2_2}, i64 0, metadata !174), !dbg !173 ; [debug line = 72:2] [debug variable = window[2][2]]
  store i8 %window_2_1, i8* %window_2_0, !dbg !172 ; [debug line = 71:2]
  store i8 %window_2_2, i8* %window_2_1_1, !dbg !173 ; [debug line = 72:2]
  store i8 %window_1_1, i8* %window_1_0, !dbg !169 ; [debug line = 69:2]
  store i8 %window_1_2, i8* %window_1_1_1, !dbg !170 ; [debug line = 70:2]
  store i32 258, i32* %read_count_1
  br label %5, !dbg !175                          ; [debug line = 76:30]

; <label>:5                                       ; preds = %.loopexit, %4
  %indvar_flatten = phi i17 [ 0, %4 ], [ %indvar_flatten_next, %.loopexit ] ; [#uses=2 type=i17]
  %y_assign = phi i9 [ 0, %4 ], [ %y_assign_mid2, %.loopexit ] ; [#uses=5 type=i9]
  %x_assign = phi i9 [ 0, %4 ], [ %j, %.loopexit ] ; [#uses=2 type=i9]
  %tmp_i = icmp ne i9 %y_assign, 0, !dbg !177     ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %i = add i9 %y_assign, 1, !dbg !182             ; [#uses=3 type=i9] [debug line = 30:9@83:24]
  %tmp_3 = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %i, i32 8), !dbg !177 ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %rev = xor i1 %tmp_3, true, !dbg !177           ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %y_assign_2 = add i9 %y_assign, 2, !dbg !182    ; [#uses=1 type=i9] [debug line = 30:9@83:24]
  %tmp_6 = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %y_assign_2, i32 8), !dbg !177 ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %rev1 = xor i1 %tmp_6, true, !dbg !177          ; [#uses=2 type=i1] [debug line = 19:2@30:9@83:24]
  call void @llvm.dbg.value(metadata !{i9 %i}, i64 0, metadata !201), !dbg !202 ; [debug line = 76:41] [debug variable = i]
  %exitcond_flatten = icmp eq i17 %indvar_flatten, -65536 ; [#uses=1 type=i1]
  %indvar_flatten_next = add i17 %indvar_flatten, 1 ; [#uses=1 type=i17]
  br i1 %exitcond_flatten, label %6, label %.reset

.preheader.preheader:                             ; preds = %.reset
  %window_0_0_load = load i8* %window_0_0, !dbg !203 ; [#uses=1 type=i8] [debug line = 106:7]
  %window_1_0_load = load i8* %window_1_0, !dbg !203 ; [#uses=1 type=i8] [debug line = 106:7]
  %window_2_0_load = load i8* %window_2_0, !dbg !203 ; [#uses=1 type=i8] [debug line = 106:7]
  call void @llvm.dbg.value(metadata !{i8* %in_stream_V}, i64 0, metadata !134), !dbg !209 ; [debug line = 129:56@95:14] [debug variable = stream<unsigned char>.V]
  %tmp_23 = call i8 @_ssdm_op_Read.ap_fifo.volatile.i8P(i8* %in_stream_V), !dbg !211 ; [#uses=2 type=i8] [debug line = 131:9@95:14]
  call void @llvm.dbg.value(metadata !{i8 %tmp_23}, i64 0, metadata !143), !dbg !211 ; [debug line = 131:9@95:14] [debug variable = tmp]
  call void @llvm.dbg.value(metadata !{i8 %tmp_23}, i64 0, metadata !212), !dbg !210 ; [debug line = 95:14] [debug variable = val_in]
  %read_count = add nsw i32 %read_count_1_load, 1, !dbg !213 ; [#uses=1 type=i32] [debug line = 96:5]
  call void @llvm.dbg.value(metadata !{i32 %read_count}, i64 0, metadata !157), !dbg !213 ; [debug line = 96:5] [debug variable = read_count]
  store i8 %tmp_23, i8* %line_buf_1_addr_3, align 1, !dbg !214 ; [debug line = 98:5]
  call void @llvm.dbg.value(metadata !{i8 %window_0_2}, i64 0, metadata !215), !dbg !216 ; [debug line = 113:6] [debug variable = window[0][2]]
  call void @llvm.dbg.value(metadata !{i8 %window_1_2_1}, i64 0, metadata !171), !dbg !216 ; [debug line = 113:6] [debug variable = window[1][2]]
  call void @llvm.dbg.value(metadata !{i8 %tmp_23}, i64 0, metadata !174), !dbg !216 ; [debug line = 113:6] [debug variable = window[2][2]]
  store i8 %window_2_0_load, i8* %window_2_0_1, !dbg !203 ; [debug line = 106:7]
  store i8 %window_2_1_1_load, i8* %window_2_0, !dbg !203 ; [debug line = 106:7]
  store i8 %tmp_23, i8* %window_2_1_1, !dbg !211  ; [debug line = 131:9@95:14]
  store i8 %window_1_0_load, i8* %window_1_0_1, !dbg !203 ; [debug line = 106:7]
  store i8 %window_1_1_1_load, i8* %window_1_0, !dbg !203 ; [debug line = 106:7]
  store i8 %window_1_2_1, i8* %window_1_1_1, !dbg !216 ; [debug line = 113:6]
  store i8 %window_0_0_load, i8* %window_0_0_1, !dbg !203 ; [debug line = 106:7]
  store i8 %window_0_1_load, i8* %window_0_0, !dbg !203 ; [debug line = 106:7]
  store i8 %window_0_2, i8* %window_0_1, !dbg !216 ; [debug line = 113:6]
  store i32 %read_count, i32* %read_count_1, !dbg !213 ; [debug line = 96:5]
  br label %.loopexit

.loopexit:                                        ; preds = %.reset, %.preheader.preheader
  %empty_13 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str5, i32 %tmp_9), !dbg !219 ; [#uses=0 type=i32] [debug line = 116:3]
  call void @llvm.dbg.value(metadata !{i9 %j}, i64 0, metadata !220), !dbg !221 ; [debug line = 78:42] [debug variable = j]
  br label %5, !dbg !221                          ; [debug line = 78:42]

.reset:                                           ; preds = %5
  %read_count_1_load = load i32* %read_count_1, !dbg !222 ; [#uses=2 type=i32] [debug line = 92:4]
  %window_0_1_load = load i8* %window_0_1, !dbg !223 ; [#uses=2 type=i8] [debug line = 31:6@83:24]
  %window_0_0_1_load = load i8* %window_0_0_1, !dbg !223 ; [#uses=1 type=i8] [debug line = 31:6@83:24]
  %window_1_1_1_load = load i8* %window_1_1_1, !dbg !223 ; [#uses=2 type=i8] [debug line = 31:6@83:24]
  %window_1_0_1_load = load i8* %window_1_0_1, !dbg !223 ; [#uses=1 type=i8] [debug line = 31:6@83:24]
  %window_2_1_1_load = load i8* %window_2_1_1, !dbg !223 ; [#uses=2 type=i8] [debug line = 31:6@83:24]
  %window_2_0_1_load = load i8* %window_2_0_1, !dbg !223 ; [#uses=1 type=i8] [debug line = 31:6@83:24]
  call void @llvm.dbg.value(metadata !{i9 %i}, i64 0, metadata !201), !dbg !202 ; [debug line = 76:41] [debug variable = i]
  call void (...)* @_ssdm_op_SpecLoopName([24 x i8]* @for_i_pixel_for_j_pi)
  %empty_14 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 65536, i64 65536, i64 65536) ; [#uses=0 type=i32]
  %exitcond = icmp eq i9 %x_assign, -256, !dbg !225 ; [#uses=5 type=i1] [debug line = 78:31]
  %x_assign_mid2 = select i1 %exitcond, i9 0, i9 %x_assign ; [#uses=4 type=i9]
  %tmp_i_mid1 = icmp ne i9 %i, 0, !dbg !177       ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %tmp_i_mid2 = select i1 %exitcond, i1 %tmp_i_mid1, i1 %tmp_i, !dbg !177 ; [#uses=2 type=i1] [debug line = 19:2@30:9@83:24]
  %tmp_i1_mid2 = select i1 %exitcond, i1 %rev1, i1 %rev, !dbg !177 ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %y_assign_2_mid1 = add i9 %y_assign, 3, !dbg !182 ; [#uses=1 type=i9] [debug line = 30:9@83:24]
  %tmp_10 = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %y_assign_2_mid1, i32 8), !dbg !177 ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %rev2 = xor i1 %tmp_10, true, !dbg !177         ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %tmp_i2_mid2 = select i1 %exitcond, i1 %rev2, i1 %rev1, !dbg !177 ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %y_assign_mid2 = select i1 %exitcond, i9 %i, i9 %y_assign ; [#uses=1 type=i9]
  call void (...)* @_ssdm_op_SpecLoopName([12 x i8]* @p_str5) nounwind, !dbg !226 ; [debug line = 79:4]
  %tmp_9 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str5), !dbg !226 ; [#uses=1 type=i32] [debug line = 79:4]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind, !dbg !227 ; [debug line = 80:1]
  call void @llvm.dbg.value(metadata !{i9 %y_assign}, i64 0, metadata !228) nounwind, !dbg !229 ; [debug line = 24:57@83:24] [debug variable = y]
  call void @llvm.dbg.value(metadata !{i9 %x_assign}, i64 0, metadata !230) nounwind, !dbg !231 ; [debug line = 24:64@83:24] [debug variable = x]
  call void @llvm.dbg.value(metadata !{i9 %y_assign}, i64 0, metadata !232), !dbg !233 ; [debug line = 18:21@30:9@83:24] [debug variable = y]
  call void @llvm.dbg.value(metadata !{i9 %x_assign}, i64 0, metadata !234), !dbg !235 ; [debug line = 18:28@30:9@83:24] [debug variable = x]
  %tmp_1_i = icmp ne i9 %x_assign_mid2, 0, !dbg !177 ; [#uses=2 type=i1] [debug line = 19:2@30:9@83:24]
  %or_cond1_i = and i1 %tmp_i_mid2, %tmp_1_i, !dbg !177 ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %tmp_151_cast = zext i8 %window_0_0_1_load to i9, !dbg !223 ; [#uses=1 type=i9] [debug line = 31:6@83:24]
  %tmp_8 = sub i9 0, %tmp_151_cast, !dbg !223     ; [#uses=1 type=i9] [debug line = 31:6@83:24]
  %result_2_i = select i1 %or_cond1_i, i9 %tmp_8, i9 0 ; [#uses=1 type=i9]
  %j = add i9 %x_assign_mid2, 1, !dbg !182        ; [#uses=2 type=i9] [debug line = 30:9@83:24]
  call void @llvm.dbg.value(metadata !{i9 %j}, i64 0, metadata !234), !dbg !235 ; [debug line = 18:28@30:9@83:24] [debug variable = x]
  %tmp_16 = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %j, i32 8), !dbg !177 ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %rev3 = xor i1 %tmp_16, true, !dbg !177         ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %tmp1 = and i1 %tmp_1_i, %rev3, !dbg !182       ; [#uses=1 type=i1] [debug line = 30:9@83:24]
  %brmerge_demorgan_i_0_1 = and i1 %tmp1, %tmp_i_mid2, !dbg !182 ; [#uses=2 type=i1] [debug line = 30:9@83:24]
  %result_2_i_0_0_s = select i1 %brmerge_demorgan_i_0_1, i9 %result_2_i, i9 0, !dbg !182 ; [#uses=1 type=i9] [debug line = 30:9@83:24]
  %x_assign_2 = add i9 %x_assign_mid2, 2, !dbg !182 ; [#uses=1 type=i9] [debug line = 30:9@83:24]
  call void @llvm.dbg.value(metadata !{i9 %x_assign_2}, i64 0, metadata !234), !dbg !235 ; [debug line = 18:28@30:9@83:24] [debug variable = x]
  %tmp_17 = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %x_assign_2, i32 8), !dbg !177 ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %rev4 = xor i1 %tmp_17, true, !dbg !177         ; [#uses=1 type=i1] [debug line = 19:2@30:9@83:24]
  %brmerge_demorgan_i_0_2 = and i1 %brmerge_demorgan_i_0_1, %rev4, !dbg !182 ; [#uses=2 type=i1] [debug line = 30:9@83:24]
  %tmp_15_0_2_cast = zext i8 %window_0_1_load to i9, !dbg !223 ; [#uses=1 type=i9] [debug line = 31:6@83:24]
  %result_0_2 = add i9 %tmp_15_0_2_cast, %result_2_i_0_0_s, !dbg !223 ; [#uses=1 type=i9] [debug line = 31:6@83:24]
  %result_2_i_0_2 = select i1 %brmerge_demorgan_i_0_2, i9 %result_0_2, i9 0 ; [#uses=1 type=i9]
  %result_2_i_0_2_cast = sext i9 %result_2_i_0_2 to i11 ; [#uses=1 type=i11]
  call void @llvm.dbg.value(metadata !{i9 %i}, i64 0, metadata !232), !dbg !233 ; [debug line = 18:21@30:9@83:24] [debug variable = y]
  %brmerge_demorgan_i_1 = and i1 %tmp_i1_mid2, %brmerge_demorgan_i_0_2, !dbg !182 ; [#uses=3 type=i1] [debug line = 30:9@83:24]
  %p_shl = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %window_1_0_1_load, i1 false), !dbg !223 ; [#uses=1 type=i9] [debug line = 31:6@83:24]
  %p_shl_cast = zext i9 %p_shl to i11, !dbg !223  ; [#uses=1 type=i11] [debug line = 31:6@83:24]
  %result_1 = sub i11 %result_2_i_0_2_cast, %p_shl_cast, !dbg !223 ; [#uses=1 type=i11] [debug line = 31:6@83:24]
  %result_2_i_1_0_s = select i1 %brmerge_demorgan_i_1, i11 %result_1, i11 0, !dbg !182 ; [#uses=1 type=i11] [debug line = 30:9@83:24]
  %tmp_16_1_2 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %window_1_1_1_load, i1 false), !dbg !223 ; [#uses=1 type=i9] [debug line = 31:6@83:24]
  %tmp_16_1_2_cast = zext i9 %tmp_16_1_2 to i11, !dbg !223 ; [#uses=1 type=i11] [debug line = 31:6@83:24]
  %result_1_2 = add i11 %tmp_16_1_2_cast, %result_2_i_1_0_s, !dbg !223 ; [#uses=1 type=i11] [debug line = 31:6@83:24]
  %result_2_i_1_2 = select i1 %brmerge_demorgan_i_1, i11 %result_1_2, i11 0 ; [#uses=1 type=i11]
  call void @llvm.dbg.value(metadata !{i9 %y_assign_2}, i64 0, metadata !232), !dbg !233 ; [debug line = 18:21@30:9@83:24] [debug variable = y]
  %brmerge_demorgan_i_2 = and i1 %tmp_i2_mid2, %brmerge_demorgan_i_1, !dbg !182 ; [#uses=2 type=i1] [debug line = 30:9@83:24]
  %tmp_15_2_cast = zext i8 %window_2_0_1_load to i11, !dbg !223 ; [#uses=1 type=i11] [debug line = 31:6@83:24]
  %result_2 = sub i11 %result_2_i_1_2, %tmp_15_2_cast, !dbg !223 ; [#uses=1 type=i11] [debug line = 31:6@83:24]
  %result_2_i_2_0_s = select i1 %brmerge_demorgan_i_2, i11 %result_2, i11 0, !dbg !182 ; [#uses=1 type=i11] [debug line = 30:9@83:24]
  %tmp_15_2_2_cast = zext i8 %window_2_1_1_load to i11, !dbg !223 ; [#uses=1 type=i11] [debug line = 31:6@83:24]
  %result_2_2 = add i11 %tmp_15_2_2_cast, %result_2_i_2_0_s, !dbg !223 ; [#uses=1 type=i11] [debug line = 31:6@83:24]
  %result_2_i_2_2 = select i1 %brmerge_demorgan_i_2, i11 %result_2_2, i11 0 ; [#uses=4 type=i11]
  %tmp_18 = call i1 @_ssdm_op_BitSelect.i1.i11.i32(i11 %result_2_i_2_2, i32 10), !dbg !197 ; [#uses=1 type=i1] [debug line = 83:24]
  %p_neg = sub i11 0, %result_2_i_2_2, !dbg !197  ; [#uses=1 type=i11] [debug line = 83:24]
  %tmp_11 = call i8 @_ssdm_op_PartSelect.i8.i11.i32.i32(i11 %p_neg, i32 2, i32 9), !dbg !197 ; [#uses=1 type=i8] [debug line = 83:24]
  %tmp_12 = sub i8 0, %tmp_11, !dbg !197          ; [#uses=1 type=i8] [debug line = 83:24]
  %tmp_13 = call i8 @_ssdm_op_PartSelect.i8.i11.i32.i32(i11 %result_2_i_2_2, i32 2, i32 9), !dbg !197 ; [#uses=1 type=i8] [debug line = 83:24]
  %tmp_14 = select i1 %tmp_18, i8 %tmp_12, i8 %tmp_13, !dbg !197 ; [#uses=2 type=i8] [debug line = 83:24]
  %tmp_19 = call i9 @_ssdm_op_PartSelect.i9.i11.i32.i32(i11 %result_2_i_2_2, i32 2, i32 10) ; [#uses=1 type=i9]
  %icmp = icmp sgt i9 %tmp_19, 0                  ; [#uses=1 type=i1]
  %tmp_15 = sub i8 0, %tmp_14                     ; [#uses=1 type=i8]
  %val_out = select i1 %icmp, i8 %tmp_14, i8 %tmp_15 ; [#uses=1 type=i8]
  call void @llvm.dbg.value(metadata !{i8 %val_out}, i64 0, metadata !236), !dbg !197 ; [debug line = 83:24] [debug variable = val_out]
  call void @llvm.dbg.value(metadata !{i8* %out_stream_V}, i64 0, metadata !237), !dbg !240 ; [debug line = 144:48@85:4] [debug variable = stream<unsigned char>.V]
  call void @llvm.dbg.value(metadata !{i8 %val_out}, i64 0, metadata !242), !dbg !244 ; [debug line = 145:31@85:4] [debug variable = tmp]
  call void @_ssdm_op_Write.ap_fifo.volatile.i8P(i8* %out_stream_V, i8 %val_out), !dbg !245 ; [debug line = 146:9@85:4]
  %tmp_s = zext i9 %x_assign_mid2 to i64, !dbg !246 ; [#uses=2 type=i64] [debug line = 88:4]
  %line_buf_0_addr_3 = getelementptr [256 x i8]* %line_buf_0, i64 0, i64 %tmp_s ; [#uses=2 type=i8*]
  %window_0_2 = load i8* %line_buf_0_addr_3, align 1, !dbg !246 ; [#uses=1 type=i8] [debug line = 88:4]
  call void @llvm.dbg.value(metadata !{i8 %window_0_2}, i64 0, metadata !247), !dbg !246 ; [debug line = 88:4] [debug variable = right[0]]
  %line_buf_1_addr_3 = getelementptr [256 x i8]* %line_buf_1, i64 0, i64 %tmp_s ; [#uses=2 type=i8*]
  %window_1_2_1 = load i8* %line_buf_1_addr_3, align 1, !dbg !252 ; [#uses=2 type=i8] [debug line = 89:4]
  store i8 %window_1_2_1, i8* %line_buf_0_addr_3, align 1, !dbg !252 ; [debug line = 89:4]
  call void @llvm.dbg.value(metadata !{i8 %window_1_2_1}, i64 0, metadata !253), !dbg !252 ; [debug line = 89:4] [debug variable = right[1]]
  %tmp_21 = call i16 @_ssdm_op_PartSelect.i16.i32.i32.i32(i32 %read_count_1_load, i32 16, i32 31), !dbg !222 ; [#uses=1 type=i16] [debug line = 92:4]
  %icmp1 = icmp slt i16 %tmp_21, 1, !dbg !222     ; [#uses=1 type=i1] [debug line = 92:4]
  br i1 %icmp1, label %.preheader.preheader, label %.loopexit, !dbg !222 ; [debug line = 92:4]

; <label>:6                                       ; preds = %5
  ret void, !dbg !254                             ; [debug line = 118:1]
}

; [#uses=1]
define weak void @_ssdm_op_Write.ap_fifo.volatile.i8P(i8*, i8) {
entry:
  %empty = call i8 @_autotb_FifoWrite_i8(i8* %0, i8 %1) ; [#uses=0 type=i8]
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=3]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=3]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=3]
define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

; [#uses=3]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=4]
define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

; [#uses=2]
define weak i32 @_ssdm_op_SpecInterface(...) {
entry:
  ret i32 0
}

; [#uses=2]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=3]
define weak i8 @_ssdm_op_Read.ap_fifo.volatile.i8P(i8*) {
entry:
  %empty = call i8 @_autotb_FifoRead_i8(i8* %0)   ; [#uses=1 type=i8]
  ret i8 %empty
}

; [#uses=1]
define weak i9 @_ssdm_op_PartSelect.i9.i11.i32.i32(i11, i32, i32) nounwind readnone {
entry:
  %empty = call i11 @llvm.part.select.i11(i11 %0, i32 %1, i32 %2) ; [#uses=1 type=i11]
  %empty_15 = trunc i11 %empty to i9              ; [#uses=1 type=i9]
  ret i9 %empty_15
}

; [#uses=2]
define weak i8 @_ssdm_op_PartSelect.i8.i11.i32.i32(i11, i32, i32) nounwind readnone {
entry:
  %empty = call i11 @llvm.part.select.i11(i11 %0, i32 %1, i32 %2) ; [#uses=1 type=i11]
  %empty_16 = trunc i11 %empty to i8              ; [#uses=1 type=i8]
  ret i8 %empty_16
}

; [#uses=1]
define weak i16 @_ssdm_op_PartSelect.i16.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_17 = trunc i32 %empty to i16             ; [#uses=1 type=i16]
  ret i16 %empty_17
}

; [#uses=5]
define weak i1 @_ssdm_op_BitSelect.i1.i9.i32(i9, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i9                     ; [#uses=1 type=i9]
  %empty_18 = shl i9 1, %empty                    ; [#uses=1 type=i9]
  %empty_19 = and i9 %0, %empty_18                ; [#uses=1 type=i9]
  %empty_20 = icmp ne i9 %empty_19, 0             ; [#uses=1 type=i1]
  ret i1 %empty_20
}

; [#uses=1]
define weak i1 @_ssdm_op_BitSelect.i1.i11.i32(i11, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i11                    ; [#uses=1 type=i11]
  %empty_21 = shl i11 1, %empty                   ; [#uses=1 type=i11]
  %empty_22 = and i11 %0, %empty_21               ; [#uses=1 type=i11]
  %empty_23 = icmp ne i11 %empty_22, 0            ; [#uses=1 type=i1]
  ret i1 %empty_23
}

; [#uses=2]
define weak i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8, i1) nounwind readnone {
entry:
  %empty = zext i8 %0 to i9                       ; [#uses=1 type=i9]
  %empty_24 = zext i1 %1 to i9                    ; [#uses=1 type=i9]
  %empty_25 = shl i9 %empty, 1                    ; [#uses=1 type=i9]
  %empty_26 = or i9 %empty_25, %empty_24          ; [#uses=1 type=i9]
  ret i9 %empty_26
}

; [#uses=1]
declare i8 @_autotb_FifoWrite_i8(i8*, i8)

; [#uses=1]
declare i8 @_autotb_FifoRead_i8(i8*)

!opencl.kernels = !{!0, !7, !10, !16, !22, !22, !22}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!28}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"int"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"y", metadata !"x"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !1, metadata !2, metadata !8, metadata !4, metadata !9, metadata !6}
!8 = metadata !{metadata !"kernel_arg_type", metadata !"hls::stream<data_t> &", metadata !"hls::stream<data_t> &"}
!9 = metadata !{metadata !"kernel_arg_name", metadata !"out_stream", metadata !"in_stream"}
!10 = metadata !{null, metadata !11, metadata !12, metadata !13, metadata !14, metadata !15, metadata !6}
!11 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!12 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!13 = metadata !{metadata !"kernel_arg_type", metadata !"const uchar &"}
!14 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!15 = metadata !{metadata !"kernel_arg_name", metadata !"din"}
!16 = metadata !{null, metadata !17, metadata !18, metadata !19, metadata !20, metadata !21, metadata !6}
!17 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 0, i32 0}
!18 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!19 = metadata !{metadata !"kernel_arg_type", metadata !"data_t (&)[3][3]", metadata !"int", metadata !"int", metadata !"int (&)[3][3]"}
!20 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!21 = metadata !{metadata !"kernel_arg_name", metadata !"window", metadata !"y", metadata !"x", metadata !"kernel"}
!22 = metadata !{null, metadata !23, metadata !24, metadata !25, metadata !26, metadata !27, metadata !6}
!23 = metadata !{metadata !"kernel_arg_addr_space"}
!24 = metadata !{metadata !"kernel_arg_access_qual"}
!25 = metadata !{metadata !"kernel_arg_type"}
!26 = metadata !{metadata !"kernel_arg_type_qual"}
!27 = metadata !{metadata !"kernel_arg_name"}
!28 = metadata !{metadata !29, [0 x i32]* @llvm_global_ctors_0}
!29 = metadata !{metadata !30}
!30 = metadata !{i32 0, i32 31, metadata !31}
!31 = metadata !{metadata !32}
!32 = metadata !{metadata !"llvm.global_ctors.0", metadata !33, metadata !"", i32 0, i32 31}
!33 = metadata !{metadata !34}
!34 = metadata !{i32 0, i32 0, i32 1}
!35 = metadata !{metadata !36}
!36 = metadata !{i32 0, i32 7, metadata !37}
!37 = metadata !{metadata !38}
!38 = metadata !{metadata !"out_stream.V", metadata !33, metadata !"unsigned char", i32 0, i32 7}
!39 = metadata !{metadata !40}
!40 = metadata !{i32 0, i32 7, metadata !41}
!41 = metadata !{metadata !42}
!42 = metadata !{metadata !"in_stream.V", metadata !33, metadata !"unsigned char", i32 0, i32 7}
!43 = metadata !{i32 790531, metadata !44, metadata !"out_stream.V", null, i32 42, metadata !108, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!44 = metadata !{i32 786689, metadata !45, metadata !"out_stream", metadata !46, i32 16777258, metadata !49, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!45 = metadata !{i32 786478, i32 0, metadata !46, metadata !"conv_3x3_strm", metadata !"conv_3x3_strm", metadata !"_Z13conv_3x3_strmRN3hls6streamIhEES2_", metadata !46, i32 42, metadata !47, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !60, i32 42} ; [ DW_TAG_subprogram ]
!46 = metadata !{i32 786473, metadata !"Convolution_IP.prj/conv_2d.cpp", metadata !"C:\5CUsers\5CKristoffer\5CDocuments\5CEmbedded_Real_Time_Exercises\5CProject", null} ; [ DW_TAG_file_type ]
!47 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !48, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!48 = metadata !{null, metadata !49, metadata !49}
!49 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !50} ; [ DW_TAG_reference_type ]
!50 = metadata !{i32 786434, metadata !51, metadata !"stream<unsigned char>", metadata !52, i32 79, i64 8, i64 8, i32 0, i32 0, null, metadata !53, i32 0, null, metadata !106} ; [ DW_TAG_class_type ]
!51 = metadata !{i32 786489, null, metadata !"hls", metadata !52, i32 69} ; [ DW_TAG_namespace ]
!52 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado/2017.4/common/technology/autopilot\5Chls_stream.h", metadata !"C:\5CUsers\5CKristoffer\5CDocuments\5CEmbedded_Real_Time_Exercises\5CProject", null} ; [ DW_TAG_file_type ]
!53 = metadata !{metadata !54, metadata !56, metadata !62, metadata !68, metadata !73, metadata !76, metadata !80, metadata !85, metadata !90, metadata !91, metadata !92, metadata !95, metadata !98, metadata !99, metadata !102}
!54 = metadata !{i32 786445, metadata !50, metadata !"V", metadata !52, i32 163, i64 8, i64 8, i64 0, i32 0, metadata !55} ; [ DW_TAG_member ]
!55 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!56 = metadata !{i32 786478, i32 0, metadata !50, metadata !"stream", metadata !"stream", metadata !"", metadata !52, i32 83, metadata !57, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !60, i32 83} ; [ DW_TAG_subprogram ]
!57 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !58, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!58 = metadata !{null, metadata !59}
!59 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !50} ; [ DW_TAG_pointer_type ]
!60 = metadata !{metadata !61}
!61 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!62 = metadata !{i32 786478, i32 0, metadata !50, metadata !"stream", metadata !"stream", metadata !"", metadata !52, i32 86, metadata !63, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !60, i32 86} ; [ DW_TAG_subprogram ]
!63 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !64, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!64 = metadata !{null, metadata !59, metadata !65}
!65 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !66} ; [ DW_TAG_pointer_type ]
!66 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !67} ; [ DW_TAG_const_type ]
!67 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!68 = metadata !{i32 786478, i32 0, metadata !50, metadata !"stream", metadata !"stream", metadata !"", metadata !52, i32 91, metadata !69, i1 false, i1 false, i32 0, i32 0, null, i32 257, i1 false, null, null, i32 0, metadata !60, i32 91} ; [ DW_TAG_subprogram ]
!69 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !70, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!70 = metadata !{null, metadata !59, metadata !71}
!71 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !72} ; [ DW_TAG_reference_type ]
!72 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !50} ; [ DW_TAG_const_type ]
!73 = metadata !{i32 786478, i32 0, metadata !50, metadata !"operator=", metadata !"operator=", metadata !"_ZN3hls6streamIhEaSERKS1_", metadata !52, i32 94, metadata !74, i1 false, i1 false, i32 0, i32 0, null, i32 257, i1 false, null, null, i32 0, metadata !60, i32 94} ; [ DW_TAG_subprogram ]
!74 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !75, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!75 = metadata !{metadata !49, metadata !59, metadata !71}
!76 = metadata !{i32 786478, i32 0, metadata !50, metadata !"operator>>", metadata !"operator>>", metadata !"_ZN3hls6streamIhErsERh", metadata !52, i32 101, metadata !77, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !60, i32 101} ; [ DW_TAG_subprogram ]
!77 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !78, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!78 = metadata !{null, metadata !59, metadata !79}
!79 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !55} ; [ DW_TAG_reference_type ]
!80 = metadata !{i32 786478, i32 0, metadata !50, metadata !"operator<<", metadata !"operator<<", metadata !"_ZN3hls6streamIhElsERKh", metadata !52, i32 105, metadata !81, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !60, i32 105} ; [ DW_TAG_subprogram ]
!81 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !82, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!82 = metadata !{null, metadata !59, metadata !83}
!83 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !84} ; [ DW_TAG_reference_type ]
!84 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !55} ; [ DW_TAG_const_type ]
!85 = metadata !{i32 786478, i32 0, metadata !50, metadata !"empty", metadata !"empty", metadata !"_ZNK3hls6streamIhE5emptyEv", metadata !52, i32 112, metadata !86, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !60, i32 112} ; [ DW_TAG_subprogram ]
!86 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !87, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!87 = metadata !{metadata !88, metadata !89}
!88 = metadata !{i32 786468, null, metadata !"bool", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 2} ; [ DW_TAG_base_type ]
!89 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !72} ; [ DW_TAG_pointer_type ]
!90 = metadata !{i32 786478, i32 0, metadata !50, metadata !"full", metadata !"full", metadata !"_ZNK3hls6streamIhE4fullEv", metadata !52, i32 117, metadata !86, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !60, i32 117} ; [ DW_TAG_subprogram ]
!91 = metadata !{i32 786478, i32 0, metadata !50, metadata !"read", metadata !"read", metadata !"_ZN3hls6streamIhE4readERh", metadata !52, i32 123, metadata !77, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !60, i32 123} ; [ DW_TAG_subprogram ]
!92 = metadata !{i32 786478, i32 0, metadata !50, metadata !"read", metadata !"read", metadata !"_ZN3hls6streamIhE4readEv", metadata !52, i32 129, metadata !93, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !60, i32 129} ; [ DW_TAG_subprogram ]
!93 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !94, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!94 = metadata !{metadata !55, metadata !59}
!95 = metadata !{i32 786478, i32 0, metadata !50, metadata !"read_nb", metadata !"read_nb", metadata !"_ZN3hls6streamIhE7read_nbERh", metadata !52, i32 136, metadata !96, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !60, i32 136} ; [ DW_TAG_subprogram ]
!96 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !97, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!97 = metadata !{metadata !88, metadata !59, metadata !79}
!98 = metadata !{i32 786478, i32 0, metadata !50, metadata !"write", metadata !"write", metadata !"_ZN3hls6streamIhE5writeERKh", metadata !52, i32 144, metadata !81, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !60, i32 144} ; [ DW_TAG_subprogram ]
!99 = metadata !{i32 786478, i32 0, metadata !50, metadata !"write_nb", metadata !"write_nb", metadata !"_ZN3hls6streamIhE8write_nbERKh", metadata !52, i32 150, metadata !100, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !60, i32 150} ; [ DW_TAG_subprogram ]
!100 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !101, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!101 = metadata !{metadata !88, metadata !59, metadata !83}
!102 = metadata !{i32 786478, i32 0, metadata !50, metadata !"size", metadata !"size", metadata !"_ZN3hls6streamIhE4sizeEv", metadata !52, i32 157, metadata !103, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !60, i32 157} ; [ DW_TAG_subprogram ]
!103 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !104, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!104 = metadata !{metadata !105, metadata !59}
!105 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!106 = metadata !{metadata !107}
!107 = metadata !{i32 786479, null, metadata !"__STREAM_T__", metadata !55, null, i32 0, i32 0} ; [ DW_TAG_template_type_parameter ]
!108 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !109} ; [ DW_TAG_pointer_type ]
!109 = metadata !{i32 786438, metadata !51, metadata !"stream<unsigned char>", metadata !52, i32 79, i64 8, i64 8, i32 0, i32 0, null, metadata !110, i32 0, null, metadata !106} ; [ DW_TAG_class_field_type ]
!110 = metadata !{metadata !54}
!111 = metadata !{i32 42, i32 41, metadata !45, null}
!112 = metadata !{i32 790531, metadata !113, metadata !"in_stream.V", null, i32 42, metadata !108, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!113 = metadata !{i32 786689, metadata !45, metadata !"in_stream", metadata !46, i32 33554474, metadata !49, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!114 = metadata !{i32 42, i32 74, metadata !45, null}
!115 = metadata !{i32 790529, metadata !116, metadata !"line_buf[0]", null, i32 45, metadata !124, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!116 = metadata !{i32 786688, metadata !117, metadata !"line_buf", metadata !46, i32 45, metadata !118, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!117 = metadata !{i32 786443, metadata !45, i32 42, i32 84, metadata !46, i32 1} ; [ DW_TAG_lexical_block ]
!118 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 4096, i64 8, i32 0, i32 0, metadata !119, metadata !121, i32 0, i32 0} ; [ DW_TAG_array_type ]
!119 = metadata !{i32 786454, null, metadata !"data_t", metadata !46, i32 31, i64 0, i64 0, i64 0, i32 0, metadata !120} ; [ DW_TAG_typedef ]
!120 = metadata !{i32 786454, null, metadata !"uint8_t", metadata !46, i32 36, i64 0, i64 0, i64 0, i32 0, metadata !55} ; [ DW_TAG_typedef ]
!121 = metadata !{metadata !122, metadata !123}
!122 = metadata !{i32 786465, i64 0, i64 1}       ; [ DW_TAG_subrange_type ]
!123 = metadata !{i32 786465, i64 0, i64 255}     ; [ DW_TAG_subrange_type ]
!124 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 2048, i64 8, i32 0, i32 0, metadata !119, metadata !121, i32 0, i32 0} ; [ DW_TAG_array_type ]
!125 = metadata !{i32 45, i32 9, metadata !117, null}
!126 = metadata !{i32 790529, metadata !116, metadata !"line_buf[1]", null, i32 45, metadata !124, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!127 = metadata !{i32 57, i32 39, metadata !128, null}
!128 = metadata !{i32 786443, metadata !117, i32 57, i32 19, metadata !46, i32 2} ; [ DW_TAG_lexical_block ]
!129 = metadata !{i32 62, i32 33, metadata !130, null}
!130 = metadata !{i32 786443, metadata !117, i32 62, i32 19, metadata !46, i32 4} ; [ DW_TAG_lexical_block ]
!131 = metadata !{i32 57, i32 55, metadata !132, null}
!132 = metadata !{i32 786443, metadata !128, i32 57, i32 54, metadata !46, i32 3} ; [ DW_TAG_lexical_block ]
!133 = metadata !{i32 58, i32 1, metadata !132, null}
!134 = metadata !{i32 790531, metadata !135, metadata !"stream<unsigned char>.V", null, i32 129, metadata !138, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!135 = metadata !{i32 786689, metadata !136, metadata !"this", metadata !52, i32 16777345, metadata !137, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!136 = metadata !{i32 786478, i32 0, metadata !51, metadata !"read", metadata !"read", metadata !"_ZN3hls6streamIhE4readEv", metadata !52, i32 129, metadata !93, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !92, metadata !60, i32 129} ; [ DW_TAG_subprogram ]
!137 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !50} ; [ DW_TAG_pointer_type ]
!138 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !109} ; [ DW_TAG_pointer_type ]
!139 = metadata !{i32 129, i32 56, metadata !136, metadata !140}
!140 = metadata !{i32 59, i32 19, metadata !132, null}
!141 = metadata !{i32 131, i32 9, metadata !142, metadata !140}
!142 = metadata !{i32 786443, metadata !136, i32 129, i32 63, metadata !52, i32 25} ; [ DW_TAG_lexical_block ]
!143 = metadata !{i32 786688, metadata !142, metadata !"tmp", metadata !52, i32 130, metadata !55, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!144 = metadata !{i32 60, i32 5, metadata !132, null}
!145 = metadata !{i32 57, i32 50, metadata !128, null}
!146 = metadata !{i32 786688, metadata !128, metadata !"x", metadata !46, i32 57, metadata !147, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!147 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!148 = metadata !{i32 62, i32 44, metadata !130, null}
!149 = metadata !{i32 62, i32 49, metadata !150, null}
!150 = metadata !{i32 786443, metadata !130, i32 62, i32 48, metadata !46, i32 5} ; [ DW_TAG_lexical_block ]
!151 = metadata !{i32 63, i32 1, metadata !150, null}
!152 = metadata !{i32 129, i32 56, metadata !136, metadata !153}
!153 = metadata !{i32 64, i32 19, metadata !150, null}
!154 = metadata !{i32 131, i32 9, metadata !142, metadata !153}
!155 = metadata !{i32 65, i32 5, metadata !150, null}
!156 = metadata !{i32 786688, metadata !130, metadata !"x", metadata !46, i32 62, metadata !147, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!157 = metadata !{i32 786688, metadata !117, metadata !"read_count", metadata !46, i32 66, metadata !147, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!158 = metadata !{i32 790529, metadata !159, metadata !"window[0][1]", null, i32 46, metadata !163, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!159 = metadata !{i32 786688, metadata !117, metadata !"window", metadata !46, i32 46, metadata !160, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!160 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 72, i64 8, i32 0, i32 0, metadata !119, metadata !161, i32 0, i32 0} ; [ DW_TAG_array_type ]
!161 = metadata !{metadata !162, metadata !162}
!162 = metadata !{i32 786465, i64 0, i64 2}       ; [ DW_TAG_subrange_type ]
!163 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 8, i64 8, i32 0, i32 0, metadata !119, metadata !161, i32 0, i32 0} ; [ DW_TAG_array_type ]
!164 = metadata !{i32 790529, metadata !159, metadata !"window[0][0]", null, i32 46, metadata !163, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!165 = metadata !{i32 790529, metadata !159, metadata !"window[1][1]", null, i32 46, metadata !163, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!166 = metadata !{i32 790529, metadata !159, metadata !"window[1][0]", null, i32 46, metadata !163, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!167 = metadata !{i32 790529, metadata !159, metadata !"window[2][1]", null, i32 46, metadata !163, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!168 = metadata !{i32 790529, metadata !159, metadata !"window[2][0]", null, i32 46, metadata !163, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!169 = metadata !{i32 69, i32 2, metadata !117, null}
!170 = metadata !{i32 70, i32 2, metadata !117, null}
!171 = metadata !{i32 790529, metadata !159, metadata !"window[1][2]", null, i32 46, metadata !163, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!172 = metadata !{i32 71, i32 2, metadata !117, null}
!173 = metadata !{i32 72, i32 2, metadata !117, null}
!174 = metadata !{i32 790529, metadata !159, metadata !"window[2][2]", null, i32 46, metadata !163, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!175 = metadata !{i32 76, i32 30, metadata !176, null}
!176 = metadata !{i32 786443, metadata !117, i32 76, i32 16, metadata !46, i32 6} ; [ DW_TAG_lexical_block ]
!177 = metadata !{i32 19, i32 2, metadata !178, metadata !182}
!178 = metadata !{i32 786443, metadata !179, i32 18, i32 30, metadata !46, i32 0} ; [ DW_TAG_lexical_block ]
!179 = metadata !{i32 786478, i32 0, metadata !46, metadata !"borders_ok", metadata !"borders_ok", metadata !"_Z10borders_okii", metadata !46, i32 18, metadata !180, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !60, i32 18} ; [ DW_TAG_subprogram ]
!180 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !181, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!181 = metadata !{metadata !88, metadata !147, metadata !147}
!182 = metadata !{i32 30, i32 9, metadata !183, metadata !197}
!183 = metadata !{i32 786443, metadata !184, i32 29, i32 32, metadata !46, i32 22} ; [ DW_TAG_lexical_block ]
!184 = metadata !{i32 786443, metadata !185, i32 29, i32 4, metadata !46, i32 21} ; [ DW_TAG_lexical_block ]
!185 = metadata !{i32 786443, metadata !186, i32 28, i32 30, metadata !46, i32 20} ; [ DW_TAG_lexical_block ]
!186 = metadata !{i32 786443, metadata !187, i32 28, i32 2, metadata !46, i32 19} ; [ DW_TAG_lexical_block ]
!187 = metadata !{i32 786443, metadata !188, i32 24, i32 94, metadata !46, i32 18} ; [ DW_TAG_lexical_block ]
!188 = metadata !{i32 786478, i32 0, metadata !46, metadata !"convolution_step<3, 3>", metadata !"convolution_step<3, 3>", metadata !"_Z16convolution_stepILi3ELi3EEiRAT__AT0__hiiRAT__AT0__i", metadata !46, i32 24, metadata !189, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, metadata !194, null, metadata !60, i32 24} ; [ DW_TAG_subprogram ]
!189 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !190, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!190 = metadata !{metadata !147, metadata !191, metadata !147, metadata !147, metadata !192}
!191 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !160} ; [ DW_TAG_reference_type ]
!192 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !193} ; [ DW_TAG_reference_type ]
!193 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 288, i64 32, i32 0, i32 0, metadata !147, metadata !161, i32 0, i32 0} ; [ DW_TAG_array_type ]
!194 = metadata !{metadata !195, metadata !196}
!195 = metadata !{i32 786480, null, metadata !"ROW", metadata !147, i64 3, null, i32 0, i32 0} ; [ DW_TAG_template_value_parameter ]
!196 = metadata !{i32 786480, null, metadata !"COLUMN", metadata !147, i64 3, null, i32 0, i32 0} ; [ DW_TAG_template_value_parameter ]
!197 = metadata !{i32 83, i32 24, metadata !198, null}
!198 = metadata !{i32 786443, metadata !199, i32 79, i32 3, metadata !46, i32 9} ; [ DW_TAG_lexical_block ]
!199 = metadata !{i32 786443, metadata !200, i32 78, i32 17, metadata !46, i32 8} ; [ DW_TAG_lexical_block ]
!200 = metadata !{i32 786443, metadata !176, i32 77, i32 2, metadata !46, i32 7} ; [ DW_TAG_lexical_block ]
!201 = metadata !{i32 786688, metadata !176, metadata !"i", metadata !46, i32 76, metadata !147, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!202 = metadata !{i32 76, i32 41, metadata !176, null}
!203 = metadata !{i32 106, i32 7, metadata !204, null}
!204 = metadata !{i32 786443, metadata !205, i32 103, i32 42, metadata !46, i32 14} ; [ DW_TAG_lexical_block ]
!205 = metadata !{i32 786443, metadata !206, i32 103, i32 15, metadata !46, i32 13} ; [ DW_TAG_lexical_block ]
!206 = metadata !{i32 786443, metadata !207, i32 102, i32 41, metadata !46, i32 12} ; [ DW_TAG_lexical_block ]
!207 = metadata !{i32 786443, metadata !208, i32 102, i32 14, metadata !46, i32 11} ; [ DW_TAG_lexical_block ]
!208 = metadata !{i32 786443, metadata !198, i32 93, i32 4, metadata !46, i32 10} ; [ DW_TAG_lexical_block ]
!209 = metadata !{i32 129, i32 56, metadata !136, metadata !210}
!210 = metadata !{i32 95, i32 14, metadata !208, null}
!211 = metadata !{i32 131, i32 9, metadata !142, metadata !210}
!212 = metadata !{i32 786688, metadata !117, metadata !"val_in", metadata !46, i32 49, metadata !119, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!213 = metadata !{i32 96, i32 5, metadata !208, null}
!214 = metadata !{i32 98, i32 5, metadata !208, null}
!215 = metadata !{i32 790529, metadata !159, metadata !"window[0][2]", null, i32 46, metadata !163, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!216 = metadata !{i32 113, i32 6, metadata !217, null}
!217 = metadata !{i32 786443, metadata !218, i32 110, i32 41, metadata !46, i32 16} ; [ DW_TAG_lexical_block ]
!218 = metadata !{i32 786443, metadata !208, i32 110, i32 14, metadata !46, i32 15} ; [ DW_TAG_lexical_block ]
!219 = metadata !{i32 116, i32 3, metadata !198, null}
!220 = metadata !{i32 786688, metadata !199, metadata !"j", metadata !46, i32 78, metadata !147, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!221 = metadata !{i32 78, i32 42, metadata !199, null}
!222 = metadata !{i32 92, i32 4, metadata !198, null}
!223 = metadata !{i32 31, i32 6, metadata !224, metadata !197}
!224 = metadata !{i32 786443, metadata !183, i32 30, i32 45, metadata !46, i32 23} ; [ DW_TAG_lexical_block ]
!225 = metadata !{i32 78, i32 31, metadata !199, null}
!226 = metadata !{i32 79, i32 4, metadata !198, null}
!227 = metadata !{i32 80, i32 1, metadata !198, null}
!228 = metadata !{i32 786689, metadata !188, metadata !"y", metadata !46, i32 33554456, metadata !147, i32 0, metadata !197} ; [ DW_TAG_arg_variable ]
!229 = metadata !{i32 24, i32 57, metadata !188, metadata !197}
!230 = metadata !{i32 786689, metadata !188, metadata !"x", metadata !46, i32 50331672, metadata !147, i32 0, metadata !197} ; [ DW_TAG_arg_variable ]
!231 = metadata !{i32 24, i32 64, metadata !188, metadata !197}
!232 = metadata !{i32 786689, metadata !179, metadata !"y", metadata !46, i32 16777234, metadata !147, i32 0, metadata !182} ; [ DW_TAG_arg_variable ]
!233 = metadata !{i32 18, i32 21, metadata !179, metadata !182}
!234 = metadata !{i32 786689, metadata !179, metadata !"x", metadata !46, i32 33554450, metadata !147, i32 0, metadata !182} ; [ DW_TAG_arg_variable ]
!235 = metadata !{i32 18, i32 28, metadata !179, metadata !182}
!236 = metadata !{i32 786688, metadata !117, metadata !"val_out", metadata !46, i32 48, metadata !119, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!237 = metadata !{i32 790531, metadata !238, metadata !"stream<unsigned char>.V", null, i32 144, metadata !138, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!238 = metadata !{i32 786689, metadata !239, metadata !"this", metadata !52, i32 16777360, metadata !137, i32 64, i32 0} ; [ DW_TAG_arg_variable ]
!239 = metadata !{i32 786478, i32 0, metadata !51, metadata !"write", metadata !"write", metadata !"_ZN3hls6streamIhE5writeERKh", metadata !52, i32 144, metadata !81, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !98, metadata !60, i32 144} ; [ DW_TAG_subprogram ]
!240 = metadata !{i32 144, i32 48, metadata !239, metadata !241}
!241 = metadata !{i32 85, i32 4, metadata !198, null}
!242 = metadata !{i32 786688, metadata !243, metadata !"tmp", metadata !52, i32 145, metadata !55, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!243 = metadata !{i32 786443, metadata !239, i32 144, i32 79, metadata !52, i32 17} ; [ DW_TAG_lexical_block ]
!244 = metadata !{i32 145, i32 31, metadata !243, metadata !241}
!245 = metadata !{i32 146, i32 9, metadata !243, metadata !241}
!246 = metadata !{i32 88, i32 4, metadata !198, null}
!247 = metadata !{i32 790529, metadata !248, metadata !"right[0]", null, i32 47, metadata !251, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!248 = metadata !{i32 786688, metadata !117, metadata !"right", metadata !46, i32 47, metadata !249, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!249 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 24, i64 8, i32 0, i32 0, metadata !119, metadata !250, i32 0, i32 0} ; [ DW_TAG_array_type ]
!250 = metadata !{metadata !162}
!251 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 8, i64 8, i32 0, i32 0, metadata !119, metadata !250, i32 0, i32 0} ; [ DW_TAG_array_type ]
!252 = metadata !{i32 89, i32 4, metadata !198, null}
!253 = metadata !{i32 790529, metadata !248, metadata !"right[1]", null, i32 47, metadata !251, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!254 = metadata !{i32 118, i32 1, metadata !117, null}
