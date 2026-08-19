// Function: FUN_1402912a0
// Addr: 1402912a0
// Size: 74 bytes


int FUN_1402912a0(ushort *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    *param_1 = 0;
    return 0;
  }
  if (param_5[2] != 0) {
UNWIND_INFO_1402913a9_UnwindCodes_102__OffsetInProlog:
    *param_1 = (ushort)bVar1;
    return 1;
  }
  iVar2 = param_5[1];
  if (iVar2 == 1) {
code_r0x00014029142f:
    iVar2 = (*DAT_140426748)(*param_5,9,param_2,1,param_1,1);
    if (iVar2 != 0) {
      return 1;
    }
    goto code_r0x000140291459;
  }
  if (iVar2 == 2) {
    iVar2 = 1;
    if ((*(byte *)((ulonglong)(bVar1 >> 3) + 0xc + (longlong)param_5) & (byte)(1 << (bVar1 & 7))) !=
        0) {
      if (param_3 == 1) {
        return -2;
      }
      iVar2 = 2;
    }
    iVar3 = (*DAT_140426748)(*param_5,9,param_2,iVar2,param_1,1);
    if (iVar3 != 0) {
      return iVar2;
    }
    goto code_r0x000140291459;
  }
  if (iVar2 != 4) goto code_r0x00014029142f;
  if (-1 < (char)bVar1) goto UNWIND_INFO_1402913a9_UnwindCodes_102__OffsetInProlog;
  iVar2 = 1;
  if ((bVar1 & 0xe0) == 0xc0) {
    uVar4 = bVar1 & 0x1f;
    iVar3 = 1;
  }
  else {
    if ((bVar1 & 0xf0) != 0xe0) goto code_r0x000140291459;
    uVar4 = bVar1 & 0xf;
    iVar3 = 2;
  }
  do {
    if (param_3 <= (ulonglong)(longlong)iVar2) {
      return -2;
    }
    if ((param_2[iVar2] & 0xc0) != 0x80) goto code_r0x000140291459;
    uVar4 = param_2[iVar2] & 0x3f | uVar4 << 6;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (iVar2 == 2) {
    bVar5 = uVar4 < 0x80;
code_r0x00014029138d:
    if (bVar5) goto code_r0x000140291459;
  }
  else if (iVar2 == 3) {
    bVar5 = uVar4 < 0x800;
    goto code_r0x00014029138d;
  }
  if (0x7ff < uVar4 - 0xd800) {
    *param_1 = (ushort)uVar4;
    return iVar2;
  }
code_r0x000140291459:
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

