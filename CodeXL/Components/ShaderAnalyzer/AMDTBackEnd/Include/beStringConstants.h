#ifndef __beStringConstants_h
#define __beStringConstants_h

#include <AMDTOSWrappers/Include/osOSDefinitions.h>
#include <AMDTOSWrappers/Include/osStringConstants.h>

#define SA_BE_STR_HLSL_optionsDefaultCompilerSubfolder       OS_STR_32BitDirectoryName
#define SA_BE_STR_HLSL_optionsDefaultCompilerFileName        L"D3DCompiler_47"
#define SA_BE_STR_HLSL_optionsDefaultCompilerFileExtension   OS_MODULE_EXTENSION

// *******************
// ISA OPCODES - BEGIN
// *******************

// ***************************
// SCALAR INSTRUCTIONS - BEGIN
// ***************************
#define SOP2_S_ADD_U32  "S_ADD_U32"
#define SOP2_S_SUB_U32  "S_SUB_U32"
#define SOP2_S_ADD_I32  "S_ADD_I32"
#define SOP2_S_SUB_I32  "S_SUB_I32"
#define SOP2_S_ADDC_U32 "S_ADDC_U32"
#define SOP2_S_SUBB_U32 "S_SUBB_U32"
#define SOP2_S_LSHL_B32 "S_LSHL_B32"
#define SOP2_S_LSHL_B64 "S_LSHL_B64"
#define SOP2_S_LSHR_B32 "S_LSHR_B32"
#define SOP2_S_LSHR_B64 "S_LSHR_B64"
#define SOP2_S_MUL_I32  "S_MUL_I32"
#define SOP2_S_AND_B32 "S_AND_B32"
#define SOP2_S_AND_B64 "S_AND_B64"
#define SOP2_S_OR_B32 "S_OR_B32"
#define SOP2_S_OR_B64 "S_OR_B64"
#define SOP2_S_XOR_B32 "S_XOR_B32"
#define SOP2_S_XOR_B64 "S_XOR_B64"
#define SOP2_S_ANDN2_B32 "S_ANDN2_B32"
#define SOP2_S_ANDN2_B64 "S_ANDN2_B64"
#define SOP2_S_ORN2_B32 "S_ORN2_B32"
#define SOP2_S_ORN2_B64 "S_ORN2_B64"
#define SOP2_S_NAND_B32 "S_NAND_B32"
#define SOP2_S_NAND_B64 "S_NAND_B64"
#define SOP2_S_NOR_B32 "S_NOR_B32"
#define SOP2_S_NOR_B64 "S_NOR_B64"
#define SOP2_S_XNOR_B32 "S_XNOR_B32"
#define SOP2_S_XNOR_B64 "S_XNOR_B64"
#define SOP1_S_MOV_B32 "S_MOV_B32"
#define SOP1_S_MOV_B64 "S_MOV_B64"
#define SOP1_S_CMOV_B32 "S_CMOV_B32"
#define SOP1_S_CMOV_B64 "S_CMOV_B64"
#define SOP1_S_NOT_B32 "S_NOT_B32"
#define SOP1_S_NOT_B64 "S_NOT_B64"

// Comparison.
#define SOPC_S_CMP_EQ_I32 "S_CMP_EQ_I32"
#define SOPC_S_CMP_NE_I32 "S_CMP_NE_I32"
#define SOPC_S_CMP_GT_I32 "S_CMP_GT_I32"
#define SOPC_S_CMP_GE_I32 "S_CMP_GE_I32"
#define SOPC_S_CMP_LE_I32 "S_CMP_LE_I32"
#define SOPC_S_CMP_LT_I32 "S_CMP_LT_I32"

#define SOPC_S_CMP_EQ_U32 "S_CMP_EQ_U32"
#define SOPC_S_CMP_NE_U32 "S_CMP_NE_U32"
#define SOPC_S_CMP_GT_U32 "S_CMP_GT_U32"
#define SOPC_S_CMP_GE_U32 "S_CMP_GE_U32"
#define SOPC_S_CMP_LE_U32 "S_CMP_LE_U32"
#define SOPC_S_CMP_LT_U32 "S_CMP_LT_U32"

#define SOPK_S_CMPK_EQ_I32 "S_CMPK_EQ_I32"
#define SOPK_S_CMPK_NE_I32 "S_CMPK_NE_I32"
#define SOPK_S_CMPK_GT_I32 "S_CMPK_GT_I32"
#define SOPK_S_CMPK_GE_I32 "S_CMPK_GE_I32"
#define SOPK_S_CMPK_LE_I32 "S_CMPK_LE_I32"
#define SOPK_S_CMPK_LT_I32 "S_CMPK_LT_I32"

#define SOPK_S_CMPK_EQ_U32 "S_CMPK_EQ_U32"
#define SOPK_S_CMPK_NE_U32 "S_CMPK_NE_U32"
#define SOPK_S_CMPK_GT_U32 "S_CMPK_GT_U32"
#define SOPK_S_CMPK_GE_U32 "S_CMPK_GE_U32"
#define SOPK_S_CMPK_LE_U32 "S_CMPK_LE_U32"
#define SOPK_S_CMPK_LT_U32 "S_CMPK_LT_U32"

#define SOPC_S_BITCMP0_B32 "S_BITCMP0_B32"
#define SOPC_S_BITCMP0_B64 "S_BITCMP0_B64"

#define SOPC_S_BITCMP1_B32 "S_BITCMP1_B32"
#define SOPC_S_BITCMP1_B64 "S_BITCMP1_B64"

// Other.
#define SOP2_S_MOVK_I32 "S_MOVK_I32"
#define SOP2_S_ASHR_I32 "S_ASHR_I32"
#define SOP2_S_ASHR_I64 "S_ASHR_I64"
#define SOP2_S_BFM_B32 "S_BFM_B32"
#define SOP2_S_BFM_B64 "S_BFM_B64"

#define SOP2_S_BFE_I32 "S_BFE_I32"
#define SOP2_S_BFE_I64 "S_BFE_I64"
#define SOP2_S_BFE_U32 "S_BFE_U32"
#define SOP2_S_BFE_U64 "S_BFE_U64"

#define SOP1_S_WQM_B32 "S_WQM_B32"
#define SOP1_S_WQM_B64 "S_WQM_B64"

#define SOP1_S_QUADMASK_B32 "S_QUADMASK_B32"
#define SOP1_S_QUADMASK_B64 "S_QUADMASK_B64"

#define SOP1_S_BREV_B32 "S_BREV_B32"
#define SOP1_S_BREV_B64 "S_BREV_B64"

#define SOP1_S_BCNT0_I32_B32 "S_BCNT0_I32_B32"
#define SOP1_S_BCNT0_I32_B64 "S_BCNT0_I32_B64"

#define SOP1_S_BCNT1_I32_B32 "S_BCNT1_I32_B32"
#define SOP1_S_BCNT1_I32_B64 "S_BCNT1_I32_B64"

#define SOP1_S_FF0_I32_B32 "S_FF0_I32_B32"
#define SOP1_S_FF0_I32_B64 "S_FF0_I32_B64"
#define SOP1_S_FF1_I32_B32 "S_FF1_I32_B32"
#define SOP1_S_FF1_I32_B64 "S_FF1_I32_B64"

#define SOP1_S_FLBIT_I32_B32 "S_FLBIT_I32_B32"
#define SOP1_S_FLBIT_I32_B64 "S_FLBIT_I32_B64"

#define SOP1_S_FLBIT_I32 "S_FLBIT_I32"
#define SOP1_S_FLBIT_I32_I64 "S_FLBIT_I32_I64"

#define SOP1_S_BITSET0_B32 "S_BITSET0_B32"
#define SOP1_S_BITSET0_B64 "S_BITSET0_B64"
#define SOP1_S_BITSET1_B32 "S_BITSET1_B32"
#define SOP1_S_BITSET1_B64 "S_BITSET1_B64"

#define SOP1_S_AND_SAVEEXEC_B64 "S_AND_SAVEEXEC_B64"
#define SOP1_S_OR_SAVEEXEC_B64 "S_OR_SAVEEXEC_B64"
#define SOP1_S_XOR_SAVEEXEC_B64 "S_XOR_SAVEEXEC_B64"
#define SOP1_S_ANDN2_SAVEEXEC_B64 "S_ANDN2_SAVEEXEC_B64"
#define SOP1_S_ORN2_SAVEEXEC_B64 "S_ORN2_SAVEEXEC_B64"
#define SOP1_S_NAND_SAVEEXEC_B64 "S_NAND_SAVEEXEC_B64"
#define SOP1_S_NOR_SAVEEXEC_B64 "S_NOR_SAVEEXEC_B64"
#define SOP1_S_XNOR_SAVEEXEC_B64 "S_XNOR_SAVEEXEC_B64"

#define SOP1_S_MOVRELS_B32 "S_MOVRELS_B32"
#define SOP1_S_MOVRELS_B64 "S_MOVRELS_B64"
#define SOP1_S_MOVRELD_B32 "S_MOVRELD_B32"
#define SOP1_S_MOVRELD_B64 "S_MOVRELD_B64"

#define SOPK_S_GETREG_B32 "S_GETREG_B32"
#define SOPK_S_SETREG_B32 "S_SETREG_B32"
#define SOPK_S_SETREG_IMM32_B32 "S_SETREG_IMM32_B32"

#define SOP2_S_CSELECT_B32 "S_CSELECT_B32"
#define SOP2_S_CSELECT_B64 "S_CSELECT_B64"

#define SOPK_S_CMOVK_I32 "S_CMOVK_I32"
#define SOP1_S_CMOV_B32 "S_CMOV_B32"
#define SOP1_S_CMOV_B64 "S_CMOV_B64"

#define SOP2_S_ABSDIFF_I32 "S_ABSDIFF_I32"
#define SOP2_S_MIN_I32 "S_MIN_I32"
#define SOP2_S_MIN_U32 "S_MIN_U32"
#define SOP2_S_MAX_I32 "S_MAX_I32"
#define SOP2_S_MAX_U32 "S_MAX_U32"
#define SOP1_S_ABS_I32 "S_ABS_I32"
#define SOP1_S_SEXT_I32_I8 "S_SEXT_I32_I8"
#define SOP1_S_SEXT_I32_I16 "S_SEXT_I32_I16"


// SOPP - Program Control.
#define SOPP_S_NOP "S_NOP"
#define SOPP_S_ENDPGM "S_ENDPGM"
#define SOPP_S_TRAP "S_TRAP"
#define SOPP_S_RFE "S_RFE"
#define SOPP_S_SETPRIO "S_SETPRIO"
#define SOPP_S_SLEEP "S_SLEEP"
#define SOPP_S_SENDMSG "S_SENDMSG"
#define SOPP_S_BARRIER "S_BARRIER"
#define SOPP_S_SETHALT "S_SETHALT"
#define SOPP_S_SENDMSGHALT "S_SENDMSGHALT"
#define SOPP_S_ICACHE_INV "S_ICACHE_INV"
#define SOPP_S_INCPERFLEVEL "S_INCPERFLEVEL"
#define SOPP_S_DECPERFLEVEL "S_DECPERFLEVEL"
#define SOPP_S_TTRACEDATA "S_TTRACEDATA"

// SOPP - Branch.
#define SOPP_S_BRANCH "S_BRANCH"
#define SOPP_S_CBRANCH_SCC0 "S_CBRANCH_SCC0"
#define SOPP_S_CBRANCH_SCC1 "S_CBRANCH_SCC1"
#define SOPP_S_CBRANCH_VCCZ "S_CBRANCH_VCCZ"
#define SOPP_S_CBRANCH_VCCNZ "S_CBRANCH_VCCNZ"
#define SOPP_S_CBRANCH_EXECZ "S_CBRANCH_EXECZ"
#define SOPP_S_CBRANCH_EXECNZ "S_CBRANCH_EXECNZ"
#define SOPP_S_SETPC "S_SETPC"
#define SOPP_S_SWAPPC "S_SWAPPC"

// Prefixes.
#define SOPP_S_COND_BRANCH_PREFIX "S_CBRANCH_"


// Ops.
#define OP_S_WAITCNT               "S_WAITCNT"

// *************************
// SCALAR INSTRUCTIONS - END
// *************************

#define VOP1_V_FRACT_F32   "V_FRACT_F32"
#define VOP1_V_TRUNC_F32   "V_TRUNC_F32"
#define VOP2_V_MAX_LEGACY_F32   "V_MAX_LEGACY_F32"
#define VOP2_V_MIN_LEGACY_F32   "V_MIN_LEGACY_F32"
#define VOP2_V_MIN_F32   "V_MIN_F32"
#define VOP2_V_MAX_F32   "V_MAX_F32"
#define VOP2_V_CEIL_F32   "V_CEIL_F32"
#define VOP2_V_RNDNE_F32   "V_RNDNE_F32"
#define VOP2_V_FLOOR_F32   "V_FLOOR_F32"
#define VOP2_V_MOV_FED_B32 "V_MOV_FED_B32"
#define VOP2_V_MIN_I32   "V_MIN_I32"
#define VOP2_V_MAX_U32   "V_MAX_U32"
#define VOP2_V_MIN_U32   "V_MIN_U32"
#define VOP2_V_ASHR_I32   "V_ASHR_I32"



// ***************************
// VECTOR INSTRUCTIONS - BEGIN
// ***************************

// FULL-RATE

// Not implemented by the hardware (handled by sequencer).
#define VOP2_NO_HW_IMPL_V_MAC_F32          "V_MAC_F32"
#define VOP2_NO_HW_IMPL_V_MAC_LEGACY_F32   "V_MAC_LEGACY_F32"
#define VOP2_NO_HW_IMPL_V_SUBBREV_U32      "V_SUBBREV_U32"
#define VOP2_NO_HW_IMPL_V_SUB_F32          "V_SUB_F32"
#define VOP2_NO_HW_IMPL_V_SUBREV_F32       "V_SUBREV_F32"
#define VOP2_NO_HW_IMPL_V_SUBREV_I32       "V_SUBREV_I32"
#define VOP2_NO_HW_IMPL_V_MADMK_F32        "V_MADMK_F32"
#define VOP2_NO_HW_IMPL_V_MADAK_F32        "V_MADAK_F32"
#define VOP2_NO_HW_IMPL_V_SUBB_U32         "V_SUBB_U32"
#define VOP2_NO_HW_IMPL_V_LSHRREV_B32      "V_LSHRREV_B32"
#define VOP2_NO_HW_IMPL_V_ASHRREV_I32      "V_ASHRREV_I32"
#define VOP2_NO_HW_IMPL_V_LSHLREV_B32      "V_LSHLREV_B32"

// Not documented.
#define VOP2_NO_DOC_V_ADD_U32      "V_ADD_U32"
#define VOP2_NO_DOC_V_SUB_U32      "V_SUB_U32"

#define VOP1_V_MOV_B32 "V_MOV_B32"
#define VOP1_V_NOT_B32 "V_NOT_B32"
#define VOP1_V_CVT_F32_I32      "V_CVT_F32_I32"
#define VOP1_V_CVT_F32_U32      "V_CVT_F32_U32"
#define VOP1_V_CVT_U32_F32      "V_CVT_U32_F32"
#define VOP1_V_CVT_I32_F32      "V_CVT_I32_F32"
#define VOP1_V_CVT_RPI_I32_F32  "V_CVT_RPI_I32_F32"
#define VOP1_V_CVT_FLR_I32_F32  "V_CVT_FLR_I32_F32"
#define VOP1_V_CVT_OFF_F32_I4   "V_CVT_OFF_F32_I4"
#define VOP1_V_BFREV_B32        "V_BFREV_B32"
#define VOP2_V_MUL_I32_I24      "V_MUL_I32_I24"
#define VOP2_V_MUL_HI_I32_I24   "V_MUL_HI_I32_I24"
#define VOP2_V_MUL_U32_U24      "V_MUL_U32_U24"
#define VOP2_V_MUL_HI_U32_U24   "V_MUL_HI_U32_U24"
#define VOP2_V_MUL_F32          "V_MUL_F32"
#define VOP2_V_MUL_LEGACY_F32   "V_MUL_LEGACY_F32"
#define VOP2_V_ADD_F32          "V_ADD_F32"
#define VOP2_V_ADD_I32          "V_ADD_I32"
#define VOP2_V_ADDC_U32         "V_ADDC_U32"
#define VOP2_V_SUB_I32         "V_SUB_I32"
#define VOP2_V_LSHL_B32         "V_LSHL_B32"
#define VOP2_V_XOR_B32          "V_XOR_B32"
#define VOP2_V_OR_B32           "V_OR_B32"
#define VOP2_V_AND_B32          "V_AND_B32"
#define VOP3_V_MAD_LEGACY_F32   "V_MAD_LEGACY_F32"
#define VOP3_V_FMA_F32          "V_FMA_F32"
#define VOP3_V_MULLIT_F32       "V_MULLIT_F32"
#define VOP3_V_ADD_F64          "V_ADD_F64"
#define VOP3_V_MAD_I32_I24      "V_MAD_I32_I24"
#define VOP3_V_MAD_U32_U24      "V_MAD_U32_U24"
#define VOP3_V_MAD_F32          "V_MAD_F32"
#define VOP2_V_BFE_I32 "V_BFE_I32"
#define VOP3_V_ALIGNBIT_B32 "V_ALIGNBIT_B32"
#define VOP3_V_ALIGNBYTE_B32 "V_ALIGNBYTE_B32"
#define VOP2_V_BFM_B32 "V_BFM_B32"
#define VOP3_V_BFI_B32 "V_BFI_B32"
#define VOP2_V_BCNT_U32_B32 "V_BCNT_U32_B32"
#define VOP2_V_MBCNT_LO_U32_B32 "V_MBCNT_LO_U32_B32"
#define VOP2_V_MBCNT_HI_U32_B32 "V_MBCNT_HI_U32_B32"
#define VOP1_V_FFBH_U32 "V_FFBH_U32"
#define VOP1_V_FFBL_B32 "V_FFBL_B32"
#define VOP1_V_FFBH_I32 "V_FFBH_I32"
#define VOP3_V_SAD_U8 "V_SAD_U8"
#define VOP3_V_MSAD_U8 "V_MSAD_U8"
#define VOP3_V_SAD_HI_U8 "V_SAD_HI_U8"
#define VOP3_V_SAD_U16 "V_SAD_U16"
#define VOP3_V_SAD_U32 "V_SAD_U32"
#define VOP3_V_LERP_U8 "V_LERP_U8"
#define VOP1_V_CVT_F32_UBYTE0 "V_CVT_F32_UBYTE0"
#define VOP1_V_CVT_F32_UBYTE1 "V_CVT_F32_UBYTE1"
#define VOP1_V_CVT_F32_UBYTE2 "V_CVT_F32_UBYTE2"
#define VOP1_V_CVT_F32_UBYTE3 "V_CVT_F32_UBYTE3"
#define VOP1_V_CVT_OFF_F32_I4 "V_CVT_OFF_F32_I4"
#define VOP1_V_CVT_F16_F32 "V_CVT_F16_F32"
#define VOP2_V_CVT_PKRTZ_F16_F32 "V_CVT_PKRTZ_F16_F32"
#define VOP1_V_CVT_F32_F16 "V_CVT_F32_F16"
#define VOP2_V_CVT_PKNORM_I16_F32 "V_CVT_PKNORM_I16_F32"
#define VOP2_V_CVT_PKNORM_U16_F32 "V_CVT_PKNORM_U16_F32"
#define VOP2_V_CVT_PK_U16_U32 "V_CVT_PK_U16_U32"
#define VOP2_V_CVT_PK_I16_I32 "V_CVT_PK_I16_I32"
#define VOP3_V_FMA_F32 "V_FMA_F32"
#define VOP2_V_MUL_U32_U24 "V_MUL_U32_U24"
#define VOP2_V_MUL_HI_U32_U24 "V_MUL_HI_U32_U24"
#define VOP3_V_MAD_U32_U24 "V_MAD_U32_U24"
#define VOP3_V_MUL_I32_I24 "V_MUL_I32_I24"
#define VOP2_V_MUL_HI_I32_I24 "V_MUL_HI_I32_I24"
#define VOP3_V_MAD_I32_I24 "V_MAD_I32_I24"
#define VOP3_V_MULLIT_F32 "V_MULLIT_F32"
#define VOP2_V_CNDMASK_B32 "V_CNDMASK_B32"
#define VOP3_V_CUBEID_F32 "V_CUBEID_F32"
#define VOP3_V_CUBESC_F32 "V_CUBESC_F32"
#define VOP3_V_CUBETC_F32 "V_CUBETC_F32"
#define VOP3_V_CUBEMA_F32 "V_CUBEMA_F32"
#define VOP3_V_MAX_F32 "V_MAX3_F32"
#define VOP3_V_MAX_I32 "V_MAX3_I32"
#define VOP3_V_MAX_U32 "V_MAX3_U32"
#define VOP3_V_MIN3_F32 "V_MIN3_F32"
#define VOP3_V_MIN3_I32 "V_MIN3_I32"
#define VOP3_V_MIN3_U32 "V_MIN3_U32"
#define VOP3_V_MED3_F32 "V_MED3_F32"
#define VOP3_V_MED3_I32 "V_MED3_I32"
#define VOP3_V_MED3_U32 "V_MED3_U32"
#define VOP3_V_CVT_PK_U8_F32 "V_CVT_PK_U8_F32"
#define VOP1_V_FREXP_MANT_F32 "V_FREXP_MANT_F32"
#define VOP1_V_FREXP_EXP_I32_F32 "V_FREXP_EXP_I32_F32"
#define VOP2_V_LDEXP_F32 "V_LDEXP_F32"
#define VOPC_V_CMP_EQ_F32 "V_CMP_EQ_F32"
#define VOPC_V_CMP_LE_F32 "V_CMP_LE_F32"
#define VOPC_V_CMP_GT_F32 "V_CMP_GT_F32"
#define VOPC_V_CMP_LG_F32 "V_CMP_LG_F32"
#define VOPC_V_CMP_GE_F32 "V_CMP_GE_F32"
#define VOPC_V_CMP_O_F32 "V_CMP_O_F32"
#define VOPC_V_CMP_U_F32 "V_CMP_U_F32"
#define VOPC_V_CMP_NGE_F32 "V_CMP_NGE_F32"
#define VOPC_V_CMP_NLG_F32 "V_CMP_NLG_F32"
#define VOPC_V_CMP_NGT_F32 "V_CMP_NGT_F32"
#define VOPC_V_CMP_NLE_F32 "V_CMP_NLE_F32"
#define VOPC_V_CMP_NEQ_F32 "V_CMP_NEQ_F32"
#define VOPC_V_CMP_NLT_F32 "V_CMP_NLT_F32"
#define VOPC_V_CMP_TRU_F32 "V_CMP_TRU_F32"
#define VOPC_V_CMPX_NGE_F32 "V_CMPX_NGE_F32"
#define VOPC_V_CMPX_NLG_F32 "V_CMPX_NLG_F32"
#define VOPC_V_CMPX_NGT_F32 "V_CMPX_NGT_F32"
#define VOPC_V_CMPX_NLE_F32 "V_CMPX_NLE_F32"
#define VOPC_V_CMPX_NEQ_F32 "V_CMPX_NEQ_F32"
#define VOPC_V_CMPX_NLT_F32 "V_CMPX_NLT_F32"
#define VOPC_V_CMPX_TRU_F32 "V_CMPX_TRU_F32"
#define VOPC_V_CMP_F_I32 "V_CMP_F_I32"
#define VOPC_V_CMP_LT_I32 "V_CMP_LT_I32"
#define VOPC_V_CMP_EQ_I32 "V_CMP_EQ_I32"
#define VOPC_V_CMP_LE_I32 "V_CMP_LE_I32"
#define VOPC_V_CMP_GT_I32 "V_CMP_GT_I32"
#define VOPC_V_CMP_NE_I32 "V_CMP_NE_I32"
#define VOPC_V_CMP_GE_I32 "V_CMP_GE_I32"
#define VOPC_V_CMP_T_I32 "V_CMP_T_I32"
#define VOPC_V_CMPX_F_I32 "V_CMPX_F_I32"
#define VOPC_V_CMPX_LT_I32 "V_CMPX_LT_I32"
#define VOPC_V_CMPX_EQ_I32 "V_CMPX_EQ_I32"
#define VOPC_V_CMPX_LE_I32 "V_CMPX_LE_I32"
#define VOPC_V_CMPX_GT_I32 "V_CMPX_GT_I32"
#define VOPC_V_CMPX_NE_I32 "V_CMPX_NE_I32"
#define VOPC_V_CMPX_GE_I32 "V_CMPX_GE_I32"
#define VOPC_V_CMPX_T_I32 "V_CMPX_T_I32"
#define VOPC_V_CMP_F_U32 "V_CMP_F_U32"
#define VOPC_V_CMP_LT_U32 "V_CMP_LT_U32"
#define VOPC_V_CMP_EQ_U32 "V_CMP_EQ_U32"
#define VOPC_V_CMP_LE_U32 "V_CMP_LE_U32"
#define VOPC_V_CMP_GT_U32 "V_CMP_GT_U32"
#define VOPC_V_CMP_NE_U32 "V_CMP_NE_U32"
#define VOPC_V_CMP_GE_U32 "V_CMP_GE_U32"
#define VOPC_V_CMP_T_U32 "V_CMP_T_U32"
#define VOPC_V_CMPX_F_U32 "V_CMPX_F_U32"
#define VOPC_V_CMPX_LT_U32 "V_CMPX_LT_U32"
#define VOPC_V_CMPX_EQ_U32 "V_CMPX_EQ_U32"
#define VOPC_V_CMPX_LE_U32 "V_CMPX_LE_U32"
#define VOPC_V_CMPX_GT_U32 "V_CMPX_GT_U32"
#define VOPC_V_CMPX_NE_U32 "V_CMPX_NE_U32"
#define VOPC_V_CMPX_GE_U32 "V_CMPX_GE_U32"
#define VOPC_V_CMPX_T_U32 "V_CMPX_T_U32"
#define VOPC_V_CMP_CLASS_F32 "V_CMP_CLASS_F32"

// New to Volcanic Islands (all Full Rate).
#define VI_V_ADD_F16 "V_ADD_F16"
#define VI_V_MUL_F16 "V_MUL_F16"
#define VI_V_MAD_F16 "V_MAD_F16"
#define VI_V_FMA_F16 "V_FMA_F16"
#define VI_V_DIV_SCALE_F16 "V_DIV_SCALE_F16"
#define VI_V_DIV_FMAS_F16 "V_DIV_FMAS_F16"
#define FRA "V_DIV_FIXUP_F16"
#define VI_V_FRACT_F16 "V_FRACT_F16"
#define VI_V_TRUNC_F16 "V_TRUNC_F16"
#define VI_V_CEIL_F16 "V_CEIL_F16"
#define VI_V_RNDNE_F16 "V_RNDNE_F16"
#define VI_V_FLOOR_F16 "V_FLOOR_F16"
#define VI_V_FREXP_MANT_F16 "V_FREXP_MANT_F16"
#define VI_V_FREXP_EXP_I16_F16 "V_FREXP_EXP_I16_F16"
#define VI_V_LDEXP_F16 "V_LDEXP_F16"
#define VI_V_MAX_F16 "V_MAX_F16"
#define VI_V_MIN_F16 "V_MIN_F16"
#define VI_V_INTERP_P1LL_F16 "V_INTERP_P1LL_F16"
#define VI_V_INTERP_P1LV_F16 "V_INTERP_P1LV_F16"
#define VI_V_INTERP_P2_F16 "V_INTERP_P2_F16"
#define VI_V_ADD_U16 "V_ADD_U16"
#define VI_V_SUB_I16 "V_SUB_I16"
#define VI_V_SUB_U16 "V_SUB_U16"
#define VI_V_MUL_I16 "V_MUL_I16"
#define VI_V_MUL_U16 "V_MUL_U16"
#define VI_V_MAD_I16 "V_MAD_I16"
#define VI_V_MAD_U16 "V_MAD_U16"
#define VI_V_MAX_I16 "V_MAX_I16"
#define VI_V_MIN_I16 "V_MIN_I16"
#define VI_V_MAX_U16 "V_MAX_U16"
#define VI_V_MIN_U16 "V_MIN_U16"
#define VI_V_ASHR_I16 "V_ASHR_I16"
#define VI_V_LSHR_B16 "V_LSHR_B16"
#define VI_V_LSHL_B16 "V_LSHL_B16"
#define VI_V_CVT_I16_F16 "V_CVT_I16_F16"
#define VI_V_CVT_U16_F16 "V_CVT_U16_F16"
#define VI_V_CVT_F16_I16 "V_CVT_F16_I16"
#define VI_V_CVT_F16_U16 "V_CVT_F16_U16"
#define VI_V_CVT_PERM_B32 "V_PERM_B32"

// Full rate, 1/4 on hybrid architecture.
#define VOP3_V_DIV_SCALE_F32 "V_DIV_SCALE_F32"
#define VOP3_V_DIV_FMAS_F32 "V_DIV_FMAS_F32"
#define VOP3_V_DIV_FIXUP_F32 "V_DIV_FIXUP_F32"


// HALF RATE
#define VOP1_V_LOG_F32 "V_LOG_F32"
#define VOP1_V_LOG_CLAMP_F32 "V_LOG_CLAMP_F32"


// 1/2 rate, 1/8 on hybrid architecture:
#define VOP1_V_CVT_F32_F64 "V_CVT_F32_F64"
#define VOP1_V_CVT_I32_F64 "V_CVT_I32_F64"
#define VOP1_V_CVT_F64_I32 "V_CVT_F64_I32"
#define VOP1_V_CVT_U32_F64 "V_CVT_U32_F64"
#define VOP1_V_CVT_F64_U32 "V_CVT_F64_U32"
#define VOP3_V_MIN_F64 "V_MIN_F64"
#define VOP3_V_MAX_F64 "V_MAX_F64"
#define VOP3_V_LDEXP_F64 "V_LDEXP_F64"
#define VOP3_V_FREXP_MANT_F64 "V_FREXP_MANT_F64"
#define VOP3_V_FREXP_EXP_I32_F64 "V_FREXP_EXP_I32_F64"
#define VOP1_V_FRACT_F64 "V_FRACT_F64"
#define VOP1_V_TRUNC_F64 "V_TRUNC_F64"
#define VOP1_V_CEIL_F64 "V_CEIL_F64"
#define VOP1_V_RNDNE_F64 "V_RNDNE_F64"
#define VOP1_V_FLOOR_F64 "V_FLOOR_F64"
#define VOP3_V_ASHR_I64 "V_ASHR_I64"
#define VOP3_V_DIV_SCALE_F64 "V_DIV_SCALE_F64"
#define VOP3_V_DIV_FIXUP_F64 "V_DIV_FIXUP_F64"
#define VOPC_V_CMP_F_F64 "V_CMP_F_F64"
#define VOPC_V_CMP_LT_F64 "V_CMP_LT_F64"
#define VOPC_V_CMP_EQ_F64 "V_CMP_EQ_F64"
#define VOPC_V_CMP_LE_F64 "V_CMP_LE_F64"
#define VOPC_V_CMP_GT_F64 "V_CMP_GT_F64"
#define VOPC_V_CMP_LG_F64 "V_CMP_LG_F64"
#define VOPC_V_CMP_GE_F64 "V_CMP_GE_F64"
#define VOPC_V_CMP_O_F64 "V_CMP_O_F64"
#define VOPC_V_CMP_U_F64 "V_CMP_U_F64"
#define VOPC_V_CMP_NGE_F64 "V_CMP_NGE_F64"
#define VOPC_V_CMP_NLG_F64 "V_CMP_NLG_F64"
#define VOPC_V_CMP_NGT_F64 "V_CMP_NGT_F64"
#define VOPC_V_CMP_NLE_F64 "V_CMP_NLE_F64"
#define VOPC_V_CMP_NEQ_F64 "V_CMP_NEQ_F64"
#define VOPC_V_CMP_NLT_F64 "V_CMP_NLT_F64"
#define VOPC_V_CMP_TRU_F64 "V_CMP_TRU_F64"
#define VOPC_V_CMPX_F_F64 "V_CMPX_F_F64"
#define VOPC_V_CMPX_LT_F64 "V_CMPX_LT_F64"
#define VOPC_V_CMPX_EQ_F64 "V_CMPX_EQ_F64"
#define VOPC_V_CMPX_LE_F64 "V_CMPX_LE_F64"
#define VOPC_V_CMPX_GT_F64 "V_CMPX_GT_F64"
#define VOPC_V_CMPX_LG_F64 "V_CMPX_LG_F64"
#define VOPC_V_CMPX_GE_F64 "V_CMPX_GE_F64"
#define VOPC_V_CMPX_O_F64 "V_CMPX_O_F64"
#define VOPC_V_CMPX_U_F64 "V_CMPX_U_F64"
#define VOPC_V_CMPX_NGE_F64 "V_CMPX_NGE_F64"
#define VOPC_V_CMPX_NLG_F64 "V_CMPX_NLG_F64"
#define VOPC_V_CMPX_NGT_F64 "V_CMPX_NGT_F64"
#define VOPC_V_CMPX_NLE_F64 "V_CMPX_NLE_F64"
#define VOPC_V_CMPX_NEQ_F64 "V_CMPX_NEQ_F64"
#define VOPC_V_CMPX_NLT_F64 "V_CMPX_NLT_F64"
#define VOPC_V_CMPX_TRU_F64 "V_CMPX_TRU_F64"
#define VOPC_V_CMP_F_I64 "V_CMP_F_I64"
#define VOPC_V_CMP_LT_I64 "V_CMP_LT_I64"
#define VOPC_V_CMP_EQ_I64 "V_CMP_EQ_I64"
#define VOPC_V_CMP_LE_I64 "V_CMP_LE_I64"
#define VOPC_V_CMP_GT_I64 "V_CMP_GT_I64"
#define VOPC_V_CMP_LG_I64 "V_CMP_LG_I64"
#define VOPC_V_CMP_GE_I64 "V_CMP_GE_I64"
#define VOPC_V_CMP_T_I64 "V_CMP_T_I64"
#define VOPC_V_CMPX_F_I64 "V_CMPX_F_I64"
#define VOPC_V_CMPX_LT_I64 "V_CMPX_LT_I64"
#define VOPC_V_CMPX_EQ_I64 "V_CMPX_EQ_I64"
#define VOPC_V_CMPX_LE_I64 "V_CMPX_LE_I64"
#define VOPC_V_CMPX_GT_I64 "V_CMPX_GT_I64"
#define VOPC_V_CMPX_LG_I64 "V_CMPX_LG_I64"
#define VOPC_V_CMPX_GE_I64 "V_CMPX_GE_I64"
#define VOPC_V_CMPX_T_I64 "V_CMPX_T_I64"
#define VOPC_V_CMP_F_U64 "V_CMP_F_U64"
#define VOPC_V_CMP_LT_U64 "V_CMP_LT_U64"
#define VOPC_V_CMP_EQ_U64 "V_CMP_EQ_U64"
#define VOPC_V_CMP_LE_U64 "V_CMP_LE_U64"
#define VOPC_V_CMP_GT_U64 "V_CMP_GT_U64"
#define VOPC_V_CMP_LG_U64 "V_CMP_LG_U64"
#define VOPC_V_CMP_GE_U64 "V_CMP_GE_U64"
#define VOPC_V_CMP_T_U64 "V_CMP_T_U64"
#define VOPC_V_CMPX_F_U64 "V_CMPX_F_U64"
#define VOPC_V_CMPX_LT_U64 "V_CMPX_LT_U64"
#define VOPC_V_CMPX_EQ_U64 "V_CMPX_EQ_U64"
#define VOPC_V_CMPX_LE_U64 "V_CMPX_LE_U64"
#define VOPC_V_CMPX_GT_U64 "V_CMPX_GT_U64"
#define VOPC_V_CMPX_LG_U64 "V_CMPX_LG_U64"
#define VOPC_V_CMPX_GE_U64 "V_CMPX_GE_U64"
#define VOPC_V_CMPX_T_U64 "V_CMPX_T_U64"
#define VOPC_V_CMP_CLASS_F64 "V_CMP_CLASS_F64"
#define VOPC_V_CMPX_CLASS_F64 "V_CMPX_CLASS_F64"

// QUARTER RATE
#define VOP1_V_SQRT_F32 "V_SQRT_F32"
#define VOP3_V_MUL_LO_I32 "V_MUL_LO_I32"
#define VOP3_V_MUL_HI_I32 "V_MUL_HI_I32"
#define VOP3_V_MUL_LO_U32 "V_MUL_LO_U32"
#define VOP3_V_MUL_HI_U32 "V_MUL_HI_U32"
#define VOP3_V_MAD_U64_U32 "V_MAD_U64_U32"
#define VOP3_V_MAD_I64_I32 "V_MAD_I64_I32"
#define VOP1_V_EXP_F32 "V_EXP_F32"
#define VOP1_V_LOG_CLAMP_F32 "V_LOG_CLAMP_F32"
#define VOP1_V_RCP_CLAMP_F32 "V_RCP_CLAMP_F32"
#define VOP1_V_RCP_LEGACY_F32 "V_RCP_LEGACY_F32"
#define VOP1_V_RCP_F32 "V_RCP_F32"
#define VOP1_V_RCP_IFLAG_F32 "V_RCP_IFLAG_F32"
#define VOP1_V_RSQ_CLAMP_F32 "V_RSQ_CLAMP_F32"
#define VOP1_V_RSQ_LEGACY_F32 "V_RSQ_LEGACY_F32"
#define VOP1_V_RSQ_F32 "V_RSQ_F32"
#define VOP1_V_SQRT_F32 "V_SQRT_F32"
#define VOP1_V_SIN_F32 "V_SIN_F32"
#define VOP1_V_COS_F32 "V_COS_F32"
#define VOP1_V_RCP_F64 "V_RCP_F64"
#define VOP1_V_RCP_CLAMP_F64 "V_RCP_CLAMP_F64"
#define VOP1_V_RSQ_F64 "V_RSQ_F64"
#define VOP1_V_RSQ_CLAMP_F64 "V_RSQ_CLAMP_F64"
#define VOP3_V_TRIG_PREOP_F64 "V_TRIG_PREOP_F64"
#define VOP3_V_MUL_F64 "V_MUL_F64"
#define VOP3_V_FMA_F64 "V_FMA_F64"
#define VOP3_V_DIV_FMAS_F64 "V_DIV_FMAS_F64"
#define VOP3_V_MQSAD_PK_U16_U8 "V_MQSAD_PK_U16_U8"
#define VOP3_V_MQSAD_U32_U8 "V_MQSAD_U32_U8"


// QUARTER RATE - VI NEW OPCODES
#define VI_V_RCP_F16 "V_RCP_F16"
#define VI_V_SQRT_F16 "V_SQRT_F16"
#define VI_V_RSQ_F16 "V_RSQ_F16"
#define VI_V_EXP_F16 "V_EXP_F16"
#define VI_V_LOG_F16 "V_LOG_F16"
#define VI_V_SIN_F16 "V_SIN_F16"
#define VI_V_COS_F16 "V_COS_F16"
#define VI_QSAD_PK_U16_U8 "V_QSAD_PK_U16_U8"

// 1/4 rate, 1/16 on hybrid architecture:
#define VOP3_V_MUL_F64 "V_MUL_F64"
#define VOP3_V_FMA_F64 "V_FMA_F64"
#define VOP1_V_SQRT_F64 "V_SQRT_F64"
#define VOP1_V_RSQ_CLAMP_F64 "V_RSQ_CLAMP_F64"
#define VOP1_V_RSQ_F64 "V_RSQ_F64"

// constants used for comma separated values string
#define COMMA_SEPARATOR ","
#define NEWLINE_SEPARATOR "\n"
#define DOUBLE_QUOTES "\""
#define NA_VALUE "Varies"
#define BRANCH_CYCLES "4|16"

// *************************
// VECTOR INSTRUCTIONS - END
// *************************

// Export instructions.
#define EXPORT_EXP "EXP"

// *******************
// ISA OPCODES - END
// *******************

// Functional units.
#define FUNC_UNIT_SCALAR                "Scalar"
#define FUNC_UNIT_VMEM                  "Vector Memory"
#define FUNC_UNIT_VALU                  "Vector ALU"
#define FUNC_UNIT_LDS                   "LDS"
#define FUNC_UNIT_GDS_EXPORT            "GDS/Export"
#define FUNC_UNIT_INTERNAL_FLOW         "Flow Control"
#define FUNC_UNIT_BRANCH                "Branch"
#define FUNC_UNIT_UNKNOWN               "Unknown"

// To be updated: no such functional unit,
// should collapse into the LDS probably.
#define FUNC_UNIT_ATOMICS               "Atomics"

// Device Names.
#define DEVICE_NAME_CYPRESS  "Cypress"
#define DEVICE_NAME_CEDAR    "Cedar"
#define DEVICE_NAME_TAHITI   "Tahiti"
#define DEVICE_NAME_HAWAII   "Hawaii"
#define DEVICE_NAME_KALINDI  "Kalindi"
#define DEVICE_NAME_GODAVARI "Godavari"
#define DEVICE_NAME_AMUR     "Amur"
#define DEVICE_NAME_NOLAN    "Nolan"
#define DEVICE_NAME_STONEY   "Stoney"

// DUMMY SHADERS.
#define BE_STR_DUMMY_VRTX_SHADER "#version 330 core\nlayout(location = 0) in vec3 vertexPosition_modelspace;\nvoid main()\n{}"
#define BE_STR_DUMMY_TESS_EVAL_SHADER "#version 430\nlayout(triangles, equal_spacing, cw) in;\nin vec3 tcPosition[];\nout vec3 tePosition;\nout vec3 tePatchDistance;\nuniform mat4 Projection;\nuniform mat4 Modelview;\nvoid main()\n{}"

#define BE_STR_FAILED_TO_PARSE_ISA_LINE L"Failed to parse ISA line: "

// Versions.
#define BE_STR_VULKAN_VERSION L"Based on Vulkan 1.0 Specification."

#endif // __beStringConstants_h
