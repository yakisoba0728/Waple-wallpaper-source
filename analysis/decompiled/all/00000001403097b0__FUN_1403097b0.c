// Function: FUN_1403097b0
// Addr: 1403097b0
// Size: 346 bytes


void FUN_1403097b0(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar5 = **(uint **)(*param_1 + 0x408);
  if (((int)param_1[5] - *(int *)((longlong)param_1 + 0x24)) + 1U <= uVar5) {
    *(undefined4 *)(param_1 + 4) = 0x82;
    return;
  }
  uVar6 = *(ulonglong *)(*(uint **)(*param_1 + 0x408) + 4);
  if (uVar6 == 0) {
    if (uVar5 != 0) {
      FUN_1404217a0(param_2,0,(ulonglong)uVar5 << 2);
    }
    goto LAB_1403098fc;
  }
  if (uVar5 == 0) goto LAB_1403098fc;
  uVar12 = 0;
  if ((uVar5 < 2) ||
     ((param_2 <= uVar6 + (ulonglong)(uVar5 - 1) * 4 &&
      (uVar6 <= param_2 + (ulonglong)(uVar5 - 1) * 4)))) goto LAB_1403098c0;
  if (uVar5 < 0x10) {
LAB_140309891:
    do {
      uVar4 = *(undefined8 *)(uVar6 + uVar12 * 4);
      *(ulonglong *)(param_2 + uVar12 * 4) =
           CONCAT44((int)((longlong)uVar4 >> 0x22),(int)uVar4 >> 2);
      uVar11 = (int)uVar12 + 2;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 < (uVar5 & 0xfffffffe));
  }
  else {
    do {
      piVar1 = (int *)(uVar6 + uVar12 * 4);
      iVar8 = piVar1[1];
      iVar9 = piVar1[2];
      iVar10 = piVar1[3];
      iVar7 = (int)uVar12;
      piVar2 = (int *)(param_2 + uVar12 * 4);
      *piVar2 = *piVar1 >> 2;
      piVar2[1] = iVar8 >> 2;
      piVar2[2] = iVar9 >> 2;
      piVar2[3] = iVar10 >> 2;
      piVar1 = (int *)(uVar6 + (ulonglong)(iVar7 + 4) * 4);
      iVar8 = piVar1[1];
      iVar9 = piVar1[2];
      iVar10 = piVar1[3];
      piVar2 = (int *)(param_2 + (ulonglong)(iVar7 + 4) * 4);
      *piVar2 = *piVar1 >> 2;
      piVar2[1] = iVar8 >> 2;
      piVar2[2] = iVar9 >> 2;
      piVar2[3] = iVar10 >> 2;
      piVar1 = (int *)(uVar6 + (ulonglong)(iVar7 + 8) * 4);
      iVar8 = piVar1[1];
      iVar9 = piVar1[2];
      iVar10 = piVar1[3];
      piVar2 = (int *)(param_2 + (ulonglong)(iVar7 + 8) * 4);
      *piVar2 = *piVar1 >> 2;
      piVar2[1] = iVar8 >> 2;
      piVar2[2] = iVar9 >> 2;
      piVar2[3] = iVar10 >> 2;
      uVar12 = (ulonglong)(iVar7 + 0x10U);
      piVar1 = (int *)(uVar6 + (ulonglong)(iVar7 + 0xc) * 4);
      iVar8 = piVar1[1];
      iVar9 = piVar1[2];
      iVar10 = piVar1[3];
      piVar2 = (int *)(param_2 + (ulonglong)(iVar7 + 0xc) * 4);
      *piVar2 = *piVar1 >> 2;
      piVar2[1] = iVar8 >> 2;
      piVar2[2] = iVar9 >> 2;
      piVar2[3] = iVar10 >> 2;
    } while (iVar7 + 0x10U < (uVar5 & 0xfffffff0));
    if (1 < ((byte)uVar5 & 0xf)) goto LAB_140309891;
  }
  if ((uint)uVar12 < uVar5) {
LAB_1403098c0:
    do {
      lVar3 = uVar12 * 4;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      *(int *)(lVar3 + param_2) = *(int *)(lVar3 + uVar6) >> 2;
    } while (uVar11 < uVar5);
    *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + uVar5;
    return;
  }
LAB_1403098fc:
  *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + uVar5;
  return;
}

