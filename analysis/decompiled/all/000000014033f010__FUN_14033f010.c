// Function: FUN_14033f010
// Addr: 14033f010
// Size: 374 bytes


void FUN_14033f010(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar6 = (longlong)param_2 * 9 + 6;
  puVar1 = param_1 + lVar6 * 2;
  lVar7 = *(longlong *)(*(uint **)(param_1 + lVar6 * 2 + 0xe) + 2);
  uVar10 = **(uint **)(param_1 + lVar6 * 2 + 0xe);
  uVar4 = 0xc;
  if (param_2 == 0) {
    uVar4 = 3;
  }
  iVar5 = FUN_1402efa10(0x20,*(undefined4 *)
                              (((longlong)param_2 + 1) * 0xcc + *(longlong *)(param_1 + 10)));
  if (0xc < iVar5) {
    iVar5 = 0xc;
  }
  if (1 < uVar10) {
    uVar9 = *param_1;
    if (uVar9 == 0) goto LAB_14033f130;
    uVar2 = *(uint *)(lVar7 + 0x10);
    lVar7 = lVar7 + 0x18;
    uVar8 = (ulonglong)uVar9;
    if (uVar2 <= uVar9) {
      uVar8 = (ulonglong)uVar2;
    }
    do {
      uVar9 = *(uint *)(lVar7 + 0x10);
      if (*param_1 <= *(uint *)(lVar7 + 0x10)) {
        uVar9 = *param_1;
      }
      if ((uint)uVar8 < uVar9) {
        lVar6 = *(longlong *)(param_1 + 2);
        FUN_14033fe40(puVar1,lVar7);
        FUN_14033ff20(puVar1,uVar8 * 0x40 + lVar6,uVar9 - (uint)uVar8,iVar5,uVar4);
      }
      uVar10 = uVar10 - 1;
      lVar7 = lVar7 + 0x18;
      uVar8 = (ulonglong)uVar9;
    } while (1 < uVar10);
  }
  if (uVar10 == 1) {
    uVar10 = *param_1;
    uVar3 = *(undefined8 *)(param_1 + 2);
    FUN_14033fe40(puVar1,*(undefined8 *)(*(longlong *)(puVar1 + 0xe) + 8));
    FUN_14033ff20(puVar1,uVar3,uVar10,iVar5,uVar4);
  }
LAB_14033f130:
  lVar6 = *(longlong *)(param_1 + 2);
  for (uVar10 = *param_1; uVar10 != 0; uVar10 = uVar10 - 1) {
    if ((*(longlong *)(lVar6 + 0x28) != 0) && ((*(uint *)(lVar6 + 0x1c) & 0x10) == 0)) {
      *(uint *)(lVar6 + 0x1c) = *(uint *)(lVar6 + 0x1c) | 0x10;
    }
    lVar6 = lVar6 + 0x40;
  }
  return;
}

