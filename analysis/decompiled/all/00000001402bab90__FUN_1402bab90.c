// Function: FUN_1402bab90
// Addr: 1402bab90
// Size: 92 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402bab90(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong local_res8;
  longlong alStackX_18 [2];
  
  uVar8 = *(uint *)(param_3 + 0xc);
  uVar7 = (ulonglong)uVar8;
  iVar2 = FUN_1402bc220(param_3);
  local_res8 = *param_1;
  do {
    do {
      if (uVar8 == 0) goto UNWIND_INFO_1402bac24_UnwindCodes_22__UnwindOpCode;
      uVar8 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar8;
      lVar6 = (longlong)*(int *)(param_3 + 0x10) + uVar7 * 0x14 + param_2[1];
    } while ((iVar2 <= *(int *)(lVar6 + 4)) || (*(int *)(lVar6 + 8) < iVar2));
    puVar4 = (uint *)(*_UNK_140426538)(*param_2,alStackX_18,0);
    lVar10 = *(int *)(lVar6 + 0x10) + alStackX_18[0];
    uVar1 = *(uint *)(lVar6 + 0xc);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if ((longlong)*(int *)(lVar10 + 0xc + uVar5 * 0x14) == (ulonglong)*puVar4)
        goto code_r0x0001402bac40;
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
      } while (uVar3 < uVar1);
    }
  } while (uVar1 <= (uint)uVar5);
code_r0x0001402bac40:
  local_res8 = *(longlong *)((longlong)*(int *)(lVar10 + 0x10 + uVar5 * 0x14) + *param_1);
UNWIND_INFO_1402bac24_UnwindCodes_22__UnwindOpCode:
  iVar2 = FUN_1402bc220(param_3,param_2);
  uVar8 = *(uint *)(param_3 + 0xc);
  uVar7 = (ulonglong)uVar8;
  do {
    if (uVar8 == 0) {
      iVar9 = -1;
      break;
    }
    lVar6 = FUN_1402bbf90();
    uVar8 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar8;
    lVar6 = (longlong)*(int *)(param_3 + 0x10) + *(longlong *)(lVar6 + 0x60);
    iVar9 = *(int *)(lVar6 + 4 + uVar7 * 0x14);
  } while ((iVar2 <= iVar9) || (*(int *)(lVar6 + 8 + uVar7 * 0x14) < iVar2));
  func_0x0001402bea80(&local_res8,param_2,param_3,iVar9);
  return;
}

