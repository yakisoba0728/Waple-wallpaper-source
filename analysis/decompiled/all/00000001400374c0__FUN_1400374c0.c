// Function: FUN_1400374c0
// Addr: 1400374c0
// Size: 309 bytes


void FUN_1400374c0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 *unaff_RDI;
  undefined8 local_res18;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  local_res18 = param_3;
  if (param_2 <= (ulonglong)((longlong)(param_1[1] - *param_1) >> 3)) {
    FUN_1400325c0(*param_1,param_1[1],&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_2) {
LAB_1400375f0:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar2 = param_2 * 8;
  if (uVar2 == 0) {
    unaff_RDI = (undefined8 *)0x0;
LAB_140037557:
    uVar3 = *param_1;
    if (param_1[2] - uVar3 == 0) goto LAB_14003759e;
    uVar6 = uVar3;
    puVar7 = auStack_28;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - uVar3) >> 3) * 8)) &&
       (uVar6 = *(ulonglong *)(uVar3 - 8), puVar7 = auStack_28, 0x1f < (uVar3 - uVar6) - 8))
    goto LAB_14003758f;
  }
  else {
    if (uVar2 < 0x1000) {
      unaff_RDI = (undefined8 *)FUN_14028af20(uVar2);
      goto LAB_140037557;
    }
    if (uVar2 + 0x27 <= uVar2) goto LAB_1400375f0;
    lVar5 = FUN_14028af20();
    if (lVar5 != 0) {
      unaff_RDI = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      unaff_RDI[-1] = lVar5;
      goto LAB_140037557;
    }
LAB_14003758f:
    pcVar4 = (code *)swi(0x29);
    uVar6 = (*pcVar4)(5);
    puVar7 = auStack_20;
  }
  *(undefined8 *)(puVar7 + -8) = 0x14003759e;
  thunk_FUN_14028af80(uVar6);
LAB_14003759e:
  *param_1 = (ulonglong)unaff_RDI;
  puVar1 = unaff_RDI + param_2;
  param_1[1] = (ulonglong)puVar1;
  param_1[2] = (ulonglong)puVar1;
  if (uVar2 != 0) {
    do {
      *unaff_RDI = param_3;
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI != puVar1);
  }
  return;
}

