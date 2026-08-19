// Function: FUN_14036b5e0
// Addr: 14036b5e0
// Size: 274 bytes


void FUN_14036b5e0(char *param_1,uint *param_2,int param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if ((*param_1 == '\0') || (param_3 == 0)) {
    return;
  }
  param_1[4] = -1;
  param_1[5] = -1;
  param_1[6] = -1;
  param_1[7] = -1;
  uVar9 = *param_2;
code_r0x00014036b630:
  uVar11 = *(uint *)(param_1 + 8);
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar10 = uVar9 >> 9;
  if (*(uint *)(param_1 + 0x14) <= uVar11) {
LAB_14036b665:
    iVar7 = *(uint *)(param_1 + 0x14) - 1;
    uVar6 = 0;
    if (iVar7 < 0) {
LAB_14036b693:
      uVar9 = *(uint *)(param_1 + 0x24);
      cVar3 = FUN_1403f8810(param_1,uVar9 + 1,CONCAT71((int7)((ulonglong)*plVar1 >> 8),1),0);
      if (cVar3 == '\0') {
        return;
      }
      uVar5 = (ulonglong)uVar9;
      lVar2 = *(longlong *)(param_1 + 0x28);
      *(undefined8 *)(lVar2 + 8 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x10 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x18 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x20 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x28 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x30 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x38 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x40 + uVar5 * 0x48) = 0;
      *(undefined4 *)(lVar2 + uVar5 * 0x48) = 0;
      lVar2 = *plVar1 + uVar6 * 8;
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar2 + 8,lVar2,(*(int *)(param_1 + 0x14) - (int)uVar6) * 8 + -8);
    }
    do {
      uVar11 = (uint)(iVar7 + (int)uVar6) >> 1;
      iVar4 = uVar10 - *(int *)(*plVar1 + (ulonglong)uVar11 * 8);
      if (iVar4 < 0) {
        iVar7 = uVar11 - 1;
      }
      else {
        if (iVar4 < 1) goto UNWIND_INFO_14036b6e5_UnwindCodes_29__UnwindOpCode;
        uVar6 = (ulonglong)(uVar11 + 1);
      }
      if (iVar7 < (int)uVar6) goto LAB_14036b693;
    } while( true );
  }
  if (*(uint *)(*plVar1 + (ulonglong)uVar11 * 8) != uVar10) goto LAB_14036b665;
  puVar8 = (undefined4 *)
           (*(longlong *)(param_1 + 0x28) +
           (ulonglong)*(uint *)(*plVar1 + 4 + (ulonglong)uVar11 * 8) * 0x48);
  goto UNWIND_INFO_14036b6e5_UnwindCodes_43__OffsetInProlog;
UNWIND_INFO_14036b6e5_UnwindCodes_29__UnwindOpCode:
  *(uint *)(param_1 + 8) = uVar11;
  puVar8 = (undefined4 *)
           (*(longlong *)(param_1 + 0x28) +
           (ulonglong)*(uint *)(*plVar1 + 4 + (ulonglong)uVar11 * 8) * 0x48);
UNWIND_INFO_14036b6e5_UnwindCodes_43__OffsetInProlog:
  if (puVar8 == (undefined4 *)0x0) {
    return;
  }
  do {
    if (uVar9 != 0xffffffff) {
      uVar6 = (ulonglong)(uVar9 >> 6 & 7);
      *(ulonglong *)(puVar8 + uVar6 * 2 + 2) =
           *(ulonglong *)(puVar8 + uVar6 * 2 + 2) | 1L << (uVar9 & 0x3f);
      *puVar8 = 0xffffffff;
    }
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      return;
    }
    param_2 = (uint *)((longlong)param_2 + (ulonglong)param_4);
    uVar9 = *param_2;
  } while ((uVar10 * 0x200 <= uVar9) && (uVar9 < uVar10 * 0x200 + 0x200));
  goto code_r0x00014036b630;
}

