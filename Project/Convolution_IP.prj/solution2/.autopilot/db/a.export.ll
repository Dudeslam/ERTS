; ModuleID = 'C:/Users/Kristoffer/Documents/Embedded_Real_Time_Exercises/Project/Convolution_IP.prj/solution2/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@llvm_global_ctors_1 = appending global [0 x void ()*] zeroinitializer
@llvm_global_ctors_0 = appending global [0 x i32] zeroinitializer
@for_i_pixel_for_j_pi = internal unnamed_addr constant [24 x i8] c"for_i_pixel_for_j_pixel\00"
@conv_3x3_strm_str = internal unnamed_addr constant [14 x i8] c"conv_3x3_strm\00"
@ap_fifo_str = internal unnamed_addr constant [8 x i8] c"ap_fifo\00"
@p_str5 = private unnamed_addr constant [12 x i8] c"for_j_pixel\00", align 1
@p_str3 = private unnamed_addr constant [15 x i8] c"init_linebuf_2\00", align 1
@p_str2 = private unnamed_addr constant [15 x i8] c"init_linebuf_1\00", align 1
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str = internal unnamed_addr constant [1 x i8] zeroinitializer

declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

declare i11 @llvm.part.select.i11(i11, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define void @conv_3x3_strm(i8* %out_stream_V, i8* %in_stream_V) {
  %empty = call i32 (...)* @_ssdm_op_SpecInterface(i8* %in_stream_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 2, i32 2, i32 16, i32 16, [1 x i8]* @p_str, [1 x i8]* @p_str)
  %empty_8 = call i32 (...)* @_ssdm_op_SpecInterface(i8* %out_stream_V, [8 x i8]* @ap_fifo_str, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 2, i32 2, i32 16, i32 16, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %out_stream_V), !map !35
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %in_stream_V), !map !39
  call void (...)* @_ssdm_op_SpecTopModule([14 x i8]* @conv_3x3_strm_str) nounwind
  %line_buf_0 = alloca [256 x i8], align 1
  %line_buf_1 = alloca [256 x i8], align 1
  br label %1

; <label>:1                                       ; preds = %2, %0
  %x = phi i9 [ 254, %0 ], [ %x_1, %2 ]
  %exitcond1 = icmp eq i9 %x, -256
  br i1 %exitcond1, label %.preheader14.preheader, label %2

.preheader14.preheader:                           ; preds = %1
  br label %.preheader14

; <label>:2                                       ; preds = %1
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2)
  call void (...)* @_ssdm_op_SpecLoopName([15 x i8]* @p_str2) nounwind
  %tmp_5 = call i32 (...)* @_ssdm_op_SpecRegionBegin([15 x i8]* @p_str2)
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp = call i8 @_ssdm_op_Read.ap_fifo.volatile.i8P(i8* %in_stream_V)
  %tmp_1 = zext i9 %x to i64
  %line_buf_0_addr = getelementptr [256 x i8]* %line_buf_0, i64 0, i64 %tmp_1
  store i8 %tmp, i8* %line_buf_0_addr, align 1
  %empty_10 = call i32 (...)* @_ssdm_op_SpecRegionEnd([15 x i8]* @p_str2, i32 %tmp_5)
  %x_1 = add i9 %x, 1
  br label %1

.preheader14:                                     ; preds = %.preheader14.preheader, %3
  %x1 = phi i9 [ %x_2, %3 ], [ 0, %.preheader14.preheader ]
  %exitcond2 = icmp eq i9 %x1, -256
  %x_2 = add i9 %x1, 1
  br i1 %exitcond2, label %4, label %3

; <label>:3                                       ; preds = %.preheader14
  %empty_11 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 256, i64 256, i64 256)
  call void (...)* @_ssdm_op_SpecLoopName([15 x i8]* @p_str3) nounwind
  %tmp_7 = call i32 (...)* @_ssdm_op_SpecRegionBegin([15 x i8]* @p_str3)
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp_2 = call i8 @_ssdm_op_Read.ap_fifo.volatile.i8P(i8* %in_stream_V)
  %tmp_4 = zext i9 %x1 to i64
  %line_buf_1_addr_2 = getelementptr [256 x i8]* %line_buf_1, i64 0, i64 %tmp_4
  store i8 %tmp_2, i8* %line_buf_1_addr_2, align 1
  %empty_12 = call i32 (...)* @_ssdm_op_SpecRegionEnd([15 x i8]* @p_str3, i32 %tmp_7)
  br label %.preheader14

; <label>:4                                       ; preds = %.preheader14
  %read_count_1 = alloca i32
  %window_0_1 = alloca i8
  %window_0_0 = alloca i8
  %window_0_0_1 = alloca i8
  %window_1_1_1 = alloca i8
  %window_1_0 = alloca i8
  %window_1_0_1 = alloca i8
  %window_2_1_1 = alloca i8
  %window_2_0 = alloca i8
  %window_2_0_1 = alloca i8
  %line_buf_0_addr_1 = getelementptr [256 x i8]* %line_buf_0, i64 0, i64 254
  %window_1_1 = load i8* %line_buf_0_addr_1, align 2
  %line_buf_0_addr_2 = getelementptr [256 x i8]* %line_buf_0, i64 0, i64 255
  %window_1_2 = load i8* %line_buf_0_addr_2, align 1
  %line_buf_1_addr = getelementptr [256 x i8]* %line_buf_1, i64 0, i64 254
  %window_2_1 = load i8* %line_buf_1_addr, align 2
  %line_buf_1_addr_1 = getelementptr [256 x i8]* %line_buf_1, i64 0, i64 255
  %window_2_2 = load i8* %line_buf_1_addr_1, align 1
  store i8 %window_2_1, i8* %window_2_0
  store i8 %window_2_2, i8* %window_2_1_1
  store i8 %window_1_1, i8* %window_1_0
  store i8 %window_1_2, i8* %window_1_1_1
  store i32 258, i32* %read_count_1
  br label %5

; <label>:5                                       ; preds = %4, %.loopexit
  %indvar_flatten = phi i17 [ 0, %4 ], [ %indvar_flatten_next, %.loopexit ]
  %y_assign = phi i9 [ 0, %4 ], [ %y_assign_mid2, %.loopexit ]
  %x_assign = phi i9 [ 0, %4 ], [ %j, %.loopexit ]
  %tmp_i = icmp ne i9 %y_assign, 0
  %i = add i9 %y_assign, 1
  %tmp_3 = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %i, i32 8)
  %rev = xor i1 %tmp_3, true
  %y_assign_2 = add i9 %y_assign, 2
  %tmp_6 = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %y_assign_2, i32 8)
  %rev1 = xor i1 %tmp_6, true
  %exitcond_flatten = icmp eq i17 %indvar_flatten, -65536
  %indvar_flatten_next = add i17 %indvar_flatten, 1
  br i1 %exitcond_flatten, label %6, label %.reset

.preheader.preheader:                             ; preds = %.reset
  %window_0_0_load = load i8* %window_0_0
  %window_1_0_load = load i8* %window_1_0
  %window_2_0_load = load i8* %window_2_0
  %tmp_23 = call i8 @_ssdm_op_Read.ap_fifo.volatile.i8P(i8* %in_stream_V)
  %read_count = add nsw i32 %read_count_1_load, 1
  store i8 %tmp_23, i8* %line_buf_1_addr_3, align 1
  store i8 %window_2_0_load, i8* %window_2_0_1
  store i8 %window_2_1_1_load, i8* %window_2_0
  store i8 %tmp_23, i8* %window_2_1_1
  store i8 %window_1_0_load, i8* %window_1_0_1
  store i8 %window_1_1_1_load, i8* %window_1_0
  store i8 %window_1_2_1, i8* %window_1_1_1
  store i8 %window_0_0_load, i8* %window_0_0_1
  store i8 %window_0_1_load, i8* %window_0_0
  store i8 %window_0_2, i8* %window_0_1
  store i32 %read_count, i32* %read_count_1
  br label %.loopexit

.loopexit:                                        ; preds = %.preheader.preheader, %.reset
  %empty_13 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str5, i32 %tmp_9)
  br label %5

.reset:                                           ; preds = %5
  %read_count_1_load = load i32* %read_count_1
  %window_0_1_load = load i8* %window_0_1
  %window_0_0_1_load = load i8* %window_0_0_1
  %window_1_1_1_load = load i8* %window_1_1_1
  %window_1_0_1_load = load i8* %window_1_0_1
  %window_2_1_1_load = load i8* %window_2_1_1
  %window_2_0_1_load = load i8* %window_2_0_1
  call void (...)* @_ssdm_op_SpecLoopName([24 x i8]* @for_i_pixel_for_j_pi)
  %empty_14 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 65536, i64 65536, i64 65536)
  %exitcond = icmp eq i9 %x_assign, -256
  %x_assign_mid2 = select i1 %exitcond, i9 0, i9 %x_assign
  %tmp_i_mid1 = icmp ne i9 %i, 0
  %tmp_i_mid2 = select i1 %exitcond, i1 %tmp_i_mid1, i1 %tmp_i
  %tmp_i1_mid2 = select i1 %exitcond, i1 %rev1, i1 %rev
  %y_assign_2_mid1 = add i9 %y_assign, 3
  %tmp_10 = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %y_assign_2_mid1, i32 8)
  %rev2 = xor i1 %tmp_10, true
  %tmp_i2_mid2 = select i1 %exitcond, i1 %rev2, i1 %rev1
  %y_assign_mid2 = select i1 %exitcond, i9 %i, i9 %y_assign
  call void (...)* @_ssdm_op_SpecLoopName([12 x i8]* @p_str5) nounwind
  %tmp_9 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str5)
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp_1_i = icmp ne i9 %x_assign_mid2, 0
  %or_cond1_i = and i1 %tmp_i_mid2, %tmp_1_i
  %tmp_151_cast = zext i8 %window_0_0_1_load to i9
  %tmp_8 = sub i9 0, %tmp_151_cast
  %result_2_i = select i1 %or_cond1_i, i9 %tmp_8, i9 0
  %j = add i9 %x_assign_mid2, 1
  %tmp_16 = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %j, i32 8)
  %rev3 = xor i1 %tmp_16, true
  %tmp1 = and i1 %tmp_1_i, %rev3
  %brmerge_demorgan_i_0_1 = and i1 %tmp1, %tmp_i_mid2
  %result_2_i_0_0_s = select i1 %brmerge_demorgan_i_0_1, i9 %result_2_i, i9 0
  %x_assign_2 = add i9 %x_assign_mid2, 2
  %tmp_17 = call i1 @_ssdm_op_BitSelect.i1.i9.i32(i9 %x_assign_2, i32 8)
  %rev4 = xor i1 %tmp_17, true
  %brmerge_demorgan_i_0_2 = and i1 %brmerge_demorgan_i_0_1, %rev4
  %tmp_15_0_2_cast = zext i8 %window_0_1_load to i9
  %result_0_2 = add i9 %tmp_15_0_2_cast, %result_2_i_0_0_s
  %result_2_i_0_2 = select i1 %brmerge_demorgan_i_0_2, i9 %result_0_2, i9 0
  %result_2_i_0_2_cast = sext i9 %result_2_i_0_2 to i11
  %brmerge_demorgan_i_1 = and i1 %tmp_i1_mid2, %brmerge_demorgan_i_0_2
  %p_shl = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %window_1_0_1_load, i1 false)
  %p_shl_cast = zext i9 %p_shl to i11
  %result_1 = sub i11 %result_2_i_0_2_cast, %p_shl_cast
  %result_2_i_1_0_s = select i1 %brmerge_demorgan_i_1, i11 %result_1, i11 0
  %tmp_16_1_2 = call i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8 %window_1_1_1_load, i1 false)
  %tmp_16_1_2_cast = zext i9 %tmp_16_1_2 to i11
  %result_1_2 = add i11 %tmp_16_1_2_cast, %result_2_i_1_0_s
  %result_2_i_1_2 = select i1 %brmerge_demorgan_i_1, i11 %result_1_2, i11 0
  %brmerge_demorgan_i_2 = and i1 %tmp_i2_mid2, %brmerge_demorgan_i_1
  %tmp_15_2_cast = zext i8 %window_2_0_1_load to i11
  %result_2 = sub i11 %result_2_i_1_2, %tmp_15_2_cast
  %result_2_i_2_0_s = select i1 %brmerge_demorgan_i_2, i11 %result_2, i11 0
  %tmp_15_2_2_cast = zext i8 %window_2_1_1_load to i11
  %result_2_2 = add i11 %tmp_15_2_2_cast, %result_2_i_2_0_s
  %result_2_i_2_2 = select i1 %brmerge_demorgan_i_2, i11 %result_2_2, i11 0
  %tmp_18 = call i1 @_ssdm_op_BitSelect.i1.i11.i32(i11 %result_2_i_2_2, i32 10)
  %p_neg = sub i11 0, %result_2_i_2_2
  %tmp_11 = call i8 @_ssdm_op_PartSelect.i8.i11.i32.i32(i11 %p_neg, i32 2, i32 9)
  %tmp_12 = sub i8 0, %tmp_11
  %tmp_13 = call i8 @_ssdm_op_PartSelect.i8.i11.i32.i32(i11 %result_2_i_2_2, i32 2, i32 9)
  %tmp_14 = select i1 %tmp_18, i8 %tmp_12, i8 %tmp_13
  %tmp_19 = call i9 @_ssdm_op_PartSelect.i9.i11.i32.i32(i11 %result_2_i_2_2, i32 2, i32 10)
  %icmp = icmp sgt i9 %tmp_19, 0
  %tmp_15 = sub i8 0, %tmp_14
  %val_out = select i1 %icmp, i8 %tmp_14, i8 %tmp_15
  call void @_ssdm_op_Write.ap_fifo.volatile.i8P(i8* %out_stream_V, i8 %val_out)
  %tmp_s = zext i9 %x_assign_mid2 to i64
  %line_buf_0_addr_3 = getelementptr [256 x i8]* %line_buf_0, i64 0, i64 %tmp_s
  %window_0_2 = load i8* %line_buf_0_addr_3, align 1
  %line_buf_1_addr_3 = getelementptr [256 x i8]* %line_buf_1, i64 0, i64 %tmp_s
  %window_1_2_1 = load i8* %line_buf_1_addr_3, align 1
  store i8 %window_1_2_1, i8* %line_buf_0_addr_3, align 1
  %tmp_21 = call i16 @_ssdm_op_PartSelect.i16.i32.i32.i32(i32 %read_count_1_load, i32 16, i32 31)
  %icmp1 = icmp slt i16 %tmp_21, 1
  br i1 %icmp1, label %.preheader.preheader, label %.loopexit

; <label>:6                                       ; preds = %5
  ret void
}

define weak void @_ssdm_op_Write.ap_fifo.volatile.i8P(i8*, i8) {
entry:
  %empty = call i8 @_autotb_FifoWrite_i8(i8* %0, i8 %1)
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecInterface(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i8 @_ssdm_op_Read.ap_fifo.volatile.i8P(i8*) {
entry:
  %empty = call i8 @_autotb_FifoRead_i8(i8* %0)
  ret i8 %empty
}

define weak i9 @_ssdm_op_PartSelect.i9.i11.i32.i32(i11, i32, i32) nounwind readnone {
entry:
  %empty = call i11 @llvm.part.select.i11(i11 %0, i32 %1, i32 %2)
  %empty_15 = trunc i11 %empty to i9
  ret i9 %empty_15
}

define weak i8 @_ssdm_op_PartSelect.i8.i11.i32.i32(i11, i32, i32) nounwind readnone {
entry:
  %empty = call i11 @llvm.part.select.i11(i11 %0, i32 %1, i32 %2)
  %empty_16 = trunc i11 %empty to i8
  ret i8 %empty_16
}

define weak i16 @_ssdm_op_PartSelect.i16.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_17 = trunc i32 %empty to i16
  ret i16 %empty_17
}

define weak i1 @_ssdm_op_BitSelect.i1.i9.i32(i9, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i9
  %empty_18 = shl i9 1, %empty
  %empty_19 = and i9 %0, %empty_18
  %empty_20 = icmp ne i9 %empty_19, 0
  ret i1 %empty_20
}

define weak i1 @_ssdm_op_BitSelect.i1.i11.i32(i11, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i11
  %empty_21 = shl i11 1, %empty
  %empty_22 = and i11 %0, %empty_21
  %empty_23 = icmp ne i11 %empty_22, 0
  ret i1 %empty_23
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i8.i1(i8, i1) nounwind readnone {
entry:
  %empty = zext i8 %0 to i9
  %empty_24 = zext i1 %1 to i9
  %empty_25 = shl i9 %empty, 1
  %empty_26 = or i9 %empty_25, %empty_24
  ret i9 %empty_26
}

declare i8 @_autotb_FifoWrite_i8(i8*, i8)

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
