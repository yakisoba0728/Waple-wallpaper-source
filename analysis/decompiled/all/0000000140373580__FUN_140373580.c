// Function: FUN_140373580
// Addr: 140373580
// Size: 127 bytes


undefined8 FUN_140373580(char *param_1,byte *param_2,int param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  ulonglong uVar5;
  
  if ((*param_1 == '\0') || (param_3 == 0)) {
    return 1;
  }
  param_1[4] = -1;
  param_1[5] = -1;
  param_1[6] = -1;
  param_1[7] = -1;
  uVar3 = (uint)*param_2 * 0x100 + (uint)param_2[1];
  uVar5 = (ulonglong)uVar3;
  do {
    uVar7 = *(uint *)(param_1 + 8);
    plVar1 = (longlong *)(param_1 + 0x18);
    iVar2 = (int)(uVar5 >> 9);
    if (uVar7 < *(uint *)(param_1 + 0x14)) {
      if (*(int *)(*plVar1 + (ulonglong)uVar7 * 8) != iVar2)
      goto UNWIND_INFO_140373600_ExceptionHandler_1;
      puVar10 = (undefined4 *)
                (*(longlong *)(param_1 + 0x28) +
                (ulonglong)*(uint *)(*plVar1 + 4 + (ulonglong)uVar7 * 8) * 0x48);
    }
    else {
UNWIND_INFO_140373600_ExceptionHandler_1:
      iVar8 = 0;
      iVar9 = *(uint *)(param_1 + 0x14) - 1;
      if (-1 < iVar9) {
        do {
          uVar7 = (uint)(iVar9 + iVar8) >> 1;
          iVar6 = iVar2 - *(int *)(*plVar1 + (ulonglong)uVar7 * 8);
          if (iVar6 < 0) {
            iVar9 = uVar7 - 1;
          }
          else {
            if (iVar6 < 1) {
              *(uint *)(param_1 + 8) = uVar7;
              puVar10 = (undefined4 *)
                        (*(longlong *)(param_1 + 0x28) +
                        (ulonglong)*(uint *)(*plVar1 + 4 + (ulonglong)uVar7 * 8) * 0x48);
              goto code_r0x000140373636;
            }
            iVar8 = uVar7 + 1;
          }
        } while (iVar8 <= iVar9);
      }
      puVar10 = (undefined4 *)0x0;
    }
code_r0x000140373636:
    uVar7 = uVar3;
    do {
      uVar3 = (uint)uVar5;
      if (uVar3 < uVar7) {
        return 0;
      }
      if ((uVar3 != 0xffffffff) && (puVar10 != (undefined4 *)0x0)) {
        uVar5 = (ulonglong)((uint)(uVar5 >> 6) & 7);
        *(ulonglong *)(puVar10 + uVar5 * 2 + 2) =
             *(ulonglong *)(puVar10 + uVar5 * 2 + 2) | 1L << (ulonglong)(uVar3 & 0x3f);
        *puVar10 = 0xffffffff;
      }
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        return 1;
      }
      param_2 = param_2 + param_4;
      uVar4 = (uint)*param_2 * 0x100 + (uint)param_2[1];
      uVar5 = (ulonglong)uVar4;
      uVar7 = uVar3;
    } while (uVar4 < (uint)((iVar2 + 1) * 0x200));
  } while( true );
}

