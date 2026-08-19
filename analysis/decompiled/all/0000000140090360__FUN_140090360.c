// Function: FUN_140090360
// Addr: 140090360
// Size: 377 bytes


undefined1
FUN_140090360(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4,int *param_5)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  char *pcVar21;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  pcVar17 = (char *)*param_3;
  if (param_4 - (longlong)pcVar17 < 4) {
    local_40 = 0;
    local_48 = (char *)func_0x00014028aff0(0x40);
    uVar5 = s_Bad_unicode_escape_sequence_in_s_140485478._24_8_;
    uVar4 = s_Bad_unicode_escape_sequence_in_s_140485478._16_8_;
    uVar3 = s_Bad_unicode_escape_sequence_in_s_140485478._8_8_;
    local_38 = 0x3c;
    *(undefined8 *)local_48 = s_Bad_unicode_escape_sequence_in_s_140485478._0_8_;
    *(undefined8 *)(local_48 + 8) = uVar3;
    uVar9 = s_Bad_unicode_escape_sequence_in_s_140485478._44_4_;
    uVar8 = s_Bad_unicode_escape_sequence_in_s_140485478._40_4_;
    uVar7 = s_Bad_unicode_escape_sequence_in_s_140485478._36_4_;
    uVar6 = s_Bad_unicode_escape_sequence_in_s_140485478._32_4_;
    local_30 = 0x3f;
    *(undefined8 *)(local_48 + 0x10) = uVar4;
    *(undefined8 *)(local_48 + 0x18) = uVar5;
    uVar13 = s_Bad_unicode_escape_sequence_in_s_140485478._56_4_;
    uVar12 = s_Bad_unicode_escape_sequence_in_s_140485478._52_4_;
    uVar11 = s_Bad_unicode_escape_sequence_in_s_140485478._48_4_;
    uVar10 = s_Bad_unicode_escape_sequence_in_s_140485478._44_4_;
    *(undefined4 *)(local_48 + 0x20) = uVar6;
    *(undefined4 *)(local_48 + 0x24) = uVar7;
    *(undefined4 *)(local_48 + 0x28) = uVar8;
    *(undefined4 *)(local_48 + 0x2c) = uVar9;
    *(undefined4 *)(local_48 + 0x2c) = uVar10;
    *(undefined4 *)(local_48 + 0x30) = uVar11;
    *(undefined4 *)(local_48 + 0x34) = uVar12;
    *(undefined4 *)(local_48 + 0x38) = uVar13;
    local_48[0x3c] = '\0';
    pcVar21 = pcVar17;
    goto UNWIND_INFO_1400904db_UnwindCodes_54__UnwindOpCode;
  }
  cVar1 = *pcVar17;
  iVar15 = (int)cVar1;
  pcVar21 = pcVar17 + 1;
  *param_3 = (longlong)pcVar21;
  if ((byte)(cVar1 - 0x30U) < 10) {
    iVar15 = iVar15 + -0x30;
LAB_14009040c:
    cVar1 = *pcVar21;
    iVar18 = (int)cVar1;
    pcVar21 = pcVar17 + 2;
    *param_3 = (longlong)pcVar21;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar18 = iVar18 + -0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar18 = iVar18 + -0x57;
    }
    else {
      if (5 < (byte)(cVar1 + 0xbfU)) goto UNWIND_INFO_1400904db_UnwindCodes_1__UnwindOpCode;
      iVar18 = iVar18 + -0x37;
    }
    cVar1 = *pcVar21;
    iVar16 = (int)cVar1;
    pcVar21 = pcVar17 + 3;
    *param_3 = (longlong)pcVar21;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar16 = iVar16 + -0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar16 = iVar16 + -0x57;
    }
    else {
      if (5 < (byte)(cVar1 + 0xbfU)) goto UNWIND_INFO_1400904db_UnwindCodes_1__UnwindOpCode;
      iVar16 = iVar16 + -0x37;
    }
    cVar1 = *pcVar21;
    iVar19 = (int)cVar1;
    iVar15 = (iVar16 + (iVar18 + iVar15 * 0x10) * 0x10) * 0x10;
    pcVar21 = pcVar17 + 4;
    *param_3 = (longlong)pcVar21;
    if ((byte)(cVar1 - 0x30U) < 10) {
      *param_5 = iVar19 + -0x30 + iVar15;
      return 1;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      *param_5 = iVar19 + -0x57 + iVar15;
      return 1;
    }
    if ((byte)(cVar1 + 0xbfU) < 6) {
      *param_5 = iVar19 + -0x37 + iVar15;
      return 1;
    }
  }
  else {
    if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar15 = iVar15 + -0x57;
      goto LAB_14009040c;
    }
    if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar15 = iVar15 + -0x37;
      goto LAB_14009040c;
    }
  }
UNWIND_INFO_1400904db_UnwindCodes_1__UnwindOpCode:
  local_40 = 0;
  local_48 = (char *)func_0x00014028aff0(0x50);
  uVar5 = s_Bad_unicode_escape_sequence_in_s_140485430._24_8_;
  uVar4 = s_Bad_unicode_escape_sequence_in_s_140485430._16_8_;
  uVar3 = s_Bad_unicode_escape_sequence_in_s_140485430._8_8_;
  *(undefined8 *)local_48 = s_Bad_unicode_escape_sequence_in_s_140485430._0_8_;
  *(undefined8 *)(local_48 + 8) = uVar3;
  uVar9 = s_Bad_unicode_escape_sequence_in_s_140485430._44_4_;
  uVar8 = s_Bad_unicode_escape_sequence_in_s_140485430._40_4_;
  uVar7 = s_Bad_unicode_escape_sequence_in_s_140485430._36_4_;
  uVar6 = s_Bad_unicode_escape_sequence_in_s_140485430._32_4_;
  local_38 = 0x42;
  *(undefined8 *)(local_48 + 0x10) = uVar4;
  *(undefined8 *)(local_48 + 0x18) = uVar5;
  uVar13 = s_Bad_unicode_escape_sequence_in_s_140485430._60_4_;
  uVar12 = s_Bad_unicode_escape_sequence_in_s_140485430._56_4_;
  uVar11 = s_Bad_unicode_escape_sequence_in_s_140485430._52_4_;
  uVar10 = s_Bad_unicode_escape_sequence_in_s_140485430._48_4_;
  local_30 = 0x4f;
  *(undefined4 *)(local_48 + 0x20) = uVar6;
  *(undefined4 *)(local_48 + 0x24) = uVar7;
  *(undefined4 *)(local_48 + 0x28) = uVar8;
  *(undefined4 *)(local_48 + 0x2c) = uVar9;
  *(undefined4 *)(local_48 + 0x30) = uVar10;
  *(undefined4 *)(local_48 + 0x34) = uVar11;
  *(undefined4 *)(local_48 + 0x38) = uVar12;
  *(undefined4 *)(local_48 + 0x3c) = uVar13;
  *(undefined2 *)(local_48 + 0x40) = s_Bad_unicode_escape_sequence_in_s_140485430._64_2_;
  local_48[0x42] = '\0';
UNWIND_INFO_1400904db_UnwindCodes_54__UnwindOpCode:
  uVar14 = FUN_1400905b0(param_1,&local_48,param_2,pcVar21);
  if (0xf < local_30) {
    uVar20 = local_30 + 1;
    pcVar17 = local_48;
    if (0xfff < uVar20) {
      pcVar17 = *(char **)(local_48 + -8);
      if ((char *)0x1f < local_48 + (-8 - (longlong)pcVar17)) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        uVar14 = (*pcVar2)();
        return uVar14;
      }
      uVar20 = local_30 + 0x28;
    }
    func_0x00014028b040(pcVar17,uVar20);
  }
  return uVar14;
}

