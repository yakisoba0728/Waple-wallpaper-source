// Function: FUN_14007d6b0
// Addr: 14007d6b0
// Size: 575 bytes


longlong * FUN_14007d6b0(float *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  longlong local_28;
  longlong lStack_20;
  
  puVar8 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    puVar8 = (undefined8 *)*param_3;
  }
  uVar5 = 0;
  uVar9 = 0xcbf29ce484222325;
  if (param_3[2] * 2 != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar8 + uVar5);
      uVar5 = uVar5 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar5 < (ulonglong)(param_3[2] * 2));
  }
  FUN_14007cbd0(param_1,&local_28,param_3,uVar9);
  if (lStack_20 != 0) {
    *param_2 = lStack_20;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  plVar3 = (longlong *)FUN_14028af20(0x30);
  FUN_140016600(plVar3 + 2,param_3);
  uVar5 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar5) {
    fVar11 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar6 = 0;
    if ((DAT_140492974 <= fVar11) && (fVar11 = fVar11 - DAT_140492974, fVar11 < DAT_140492974)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar6)) {
      uVar7 = (longlong)fVar11 + lVar6;
    }
    uVar10 = uVar5;
    if ((uVar5 < uVar7) && ((0x1ff < uVar5 || (uVar10 = uVar5 * 8, uVar5 * 8 < uVar7)))) {
      uVar10 = uVar7;
    }
    FUN_14007f770(param_1,uVar10);
    plVar4 = (longlong *)FUN_14007cbd0(param_1,&local_28,plVar3 + 2,uVar9);
    local_28 = *plVar4;
  }
  plVar4 = *(longlong **)(local_28 + 8);
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *plVar3 = local_28;
  plVar3[1] = (longlong)plVar4;
  *plVar4 = (longlong)plVar3;
  *(longlong **)(local_28 + 8) = plVar3;
  lVar6 = *(longlong *)(param_1 + 6);
  uVar9 = *(ulonglong *)(param_1 + 0xc) & uVar9;
  lVar2 = *(longlong *)(lVar6 + uVar9 * 0x10);
  if (lVar2 == *(longlong *)(param_1 + 2)) {
    *(longlong **)(lVar6 + uVar9 * 0x10) = plVar3;
  }
  else {
    if (lVar2 == local_28) {
      *(longlong **)(lVar6 + uVar9 * 0x10) = plVar3;
      goto LAB_14007d8c5;
    }
    if (*(longlong **)(lVar6 + 8 + uVar9 * 0x10) != plVar4) goto LAB_14007d8c5;
  }
  *(longlong **)(lVar6 + 8 + uVar9 * 0x10) = plVar3;
LAB_14007d8c5:
  *param_2 = (longlong)plVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

