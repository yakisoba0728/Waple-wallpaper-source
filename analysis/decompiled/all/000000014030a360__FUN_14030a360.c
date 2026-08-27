// Function: FUN_14030a360
// Addr: 14030a360
// Size: 598 bytes


void FUN_14030a360(longlong param_1,ushort *param_2)

{
  ushort *puVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  
  uVar4 = *param_2;
  uVar10 = (ulonglong)uVar4;
  puVar1 = (ushort *)(param_1 + 0x18c);
  if ((*(ushort *)(param_1 + 0x78) <= uVar4) ||
     (uVar12 = (ulonglong)*puVar1, *(ushort *)(param_1 + 0x40) <= *puVar1)) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
    goto LAB_14030a585;
  }
  if ((*(short *)(param_1 + 0x192) == 0) || (*(short *)(param_1 + 0x194) == 0)) {
    uVar7 = (**(code **)(param_1 + 0x2e0))
                      (param_1,*(int *)(*(longlong *)(param_1 + 0x80) + uVar10 * 8) -
                               *(int *)(*(longlong *)(param_1 + 0x48) + uVar12 * 8),
                       *(int *)(*(longlong *)(param_1 + 0x80) + 4 + uVar10 * 8) -
                       *(int *)(*(longlong *)(param_1 + 0x48) + 4 + uVar12 * 8));
LAB_14030a49a:
    uVar12 = (ulonglong)uVar7;
  }
  else {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x90) + uVar10 * 8);
    piVar3 = (int *)(*(longlong *)(param_1 + 0x58) + uVar12 * 8);
    if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x164)) {
      lVar9 = (longlong)(*piVar2 - *piVar3) * (longlong)*(int *)(param_1 + 0x160);
      lVar8 = (longlong)(piVar2[1] - piVar3[1]) * (longlong)*(int *)(param_1 + 0x164);
      uVar7 = (**(code **)(param_1 + 0x2e0))
                        (param_1,lVar9 + (lVar9 >> 0x3f) + 0x8000 >> 0x10,
                         lVar8 + 0x8000 + (lVar8 >> 0x3f) >> 0x10);
      goto LAB_14030a49a;
    }
    iVar5 = (**(code **)(param_1 + 0x2e0))(param_1,*piVar2 - *piVar3,piVar2[1] - piVar3[1]);
    lVar8 = (longlong)iVar5 * (longlong)*(int *)(param_1 + 0x160);
    uVar12 = lVar8 + 0x8000 + (lVar8 >> 0x3f) >> 0x10;
  }
  iVar5 = *(int *)(param_1 + 0x1c4);
  if (0 < iVar5) {
    uVar7 = *(uint *)(param_1 + 0x1c8);
    iVar11 = (int)uVar12;
    if ((iVar11 < (int)(uVar7 + iVar5)) && ((int)(uVar7 - iVar5) < iVar11)) {
      if (iVar11 < 0) {
        uVar7 = -uVar7;
      }
      uVar12 = (ulonglong)uVar7;
    }
  }
  iVar5 = *(int *)(param_1 + 0x1ac + (ulonglong)(*(byte *)(param_1 + 0x1f0) & 3) * 4);
  iVar11 = (int)uVar12;
  if ((*(byte *)(param_1 + 0x1f0) & 4) == 0) {
    if (iVar11 < 0) {
      iVar6 = 0;
      if (iVar11 - iVar5 < 1) {
        iVar6 = iVar11 - iVar5;
      }
    }
    else {
      iVar6 = 0;
      if (-1 < iVar5 + iVar11) {
        iVar6 = iVar5 + iVar11;
      }
    }
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x2c8))(param_1,uVar12 & 0xffffffff,iVar5);
  }
  if ((*(byte *)(param_1 + 0x1f0) & 8) != 0) {
    iVar5 = *(int *)(param_1 + 0x1bc);
    if (iVar11 < 0) {
      if (-iVar5 < iVar6) {
        iVar6 = -iVar5;
      }
    }
    else if (iVar6 < iVar5) {
      iVar6 = iVar5;
    }
  }
  piVar2 = (int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*puVar1 * 8);
  iVar5 = (**(code **)(param_1 + 0x2d8))
                    (param_1,*(int *)(*(longlong *)(param_1 + 0x88) + uVar10 * 8) - *piVar2,
                     *(int *)(*(longlong *)(param_1 + 0x88) + 4 + uVar10 * 8) - piVar2[1]);
  (**(code **)(param_1 + 0x2f0))(param_1,param_1 + 0x78,uVar4,iVar6 - iVar5);
LAB_14030a585:
  *(ushort *)(param_1 + 0x18e) = *puVar1;
  *(ushort *)(param_1 + 400) = uVar4;
  if ((*(byte *)(param_1 + 0x1f0) & 0x10) != 0) {
    *puVar1 = uVar4;
  }
  return;
}

