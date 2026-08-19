// Function: FUN_14030a690
// Addr: 14030a690
// Size: 397 bytes


void FUN_14030a690(longlong param_1,ushort *param_2)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar3 = *param_2;
  if (((uVar3 < *(ushort *)(param_1 + 0x78)) &&
      (*(int *)(param_2 + 2) + 1U < *(int *)(param_1 + 0x1f8) + 1U)) &&
     (*(ushort *)(param_1 + 0x18c) < *(ushort *)(param_1 + 0x40))) {
    if (*(int *)(param_2 + 2) == -1) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(param_1 + 0x308))(param_1);
    }
    uVar4 = *(uint *)(param_1 + 0x1c8);
    iVar7 = uVar4 - uVar6;
    if (-1 < (int)(uVar6 - uVar4)) {
      iVar7 = uVar6 - uVar4;
    }
    uVar10 = uVar6;
    if ((iVar7 < *(int *)(param_1 + 0x1c4)) && (uVar10 = uVar4, (int)uVar6 < 0)) {
      uVar10 = -uVar4;
    }
    if (*(short *)(param_1 + 0x194) == 0) {
      lVar2 = (ulonglong)uVar3 * 8;
      lVar9 = (longlong)*(short *)(param_1 + 0x1a0) * (longlong)(int)uVar10;
      *(int *)(lVar2 + *(longlong *)(param_1 + 0x80)) =
           (int)(lVar9 + 0x2000 + (lVar9 >> 0x3f) >> 0xe) +
           *(int *)(*(longlong *)(param_1 + 0x48) + (ulonglong)*(ushort *)(param_1 + 0x18c) * 8);
      lVar9 = (longlong)*(short *)(param_1 + 0x1a2) * (longlong)(int)uVar10;
      *(int *)(lVar2 + 4 + *(longlong *)(param_1 + 0x80)) =
           (int)(lVar9 + 0x2000 + (lVar9 >> 0x3f) >> 0xe) +
           *(int *)(*(longlong *)(param_1 + 0x48) + 4 + (ulonglong)*(ushort *)(param_1 + 0x18c) * 8)
      ;
      *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x88)) =
           *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x80));
    }
    lVar2 = (ulonglong)uVar3 * 8;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + (ulonglong)*(ushort *)(param_1 + 0x18c) * 8);
    uVar6 = (**(code **)(param_1 + 0x2e0))
                      (param_1,*(int *)(lVar2 + *(longlong *)(param_1 + 0x80)) - *piVar1,
                       *(int *)(lVar2 + 4 + *(longlong *)(param_1 + 0x80)) - piVar1[1]);
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(ushort *)(param_1 + 0x18c) * 8);
    iVar7 = (**(code **)(param_1 + 0x2d8))
                      (param_1,*(int *)(lVar2 + *(longlong *)(param_1 + 0x88)) - *piVar1,
                       *(int *)(lVar2 + 4 + *(longlong *)(param_1 + 0x88)) - piVar1[1]);
    if ((*(char *)(param_1 + 0x1d0) != '\0') && ((int)(uVar6 ^ uVar10) < 0)) {
      uVar10 = -uVar10;
    }
    iVar5 = *(int *)(param_1 + 0x1ac + (ulonglong)(*(byte *)(param_1 + 0x1f0) & 3) * 4);
    if ((*(byte *)(param_1 + 0x1f0) & 4) == 0) {
      if ((int)uVar10 < 0) {
        iVar8 = 0;
        if ((int)(uVar10 - iVar5) < 1) {
          iVar8 = uVar10 - iVar5;
        }
      }
      else {
        iVar8 = 0;
        if (-1 < (int)(iVar5 + uVar10)) {
          iVar8 = iVar5 + uVar10;
        }
      }
    }
    else {
      if (*(short *)(param_1 + 0x192) == *(short *)(param_1 + 0x194)) {
        iVar8 = uVar10 - uVar6;
        if (iVar8 < 0) {
          iVar8 = uVar6 - uVar10;
        }
        if (*(int *)(param_1 + 0x1c0) < iVar8) {
          uVar10 = uVar6;
        }
      }
      iVar8 = (**(code **)(param_1 + 0x2c8))(param_1,uVar10,iVar5);
    }
    if ((*(byte *)(param_1 + 0x1f0) & 8) != 0) {
      iVar5 = *(int *)(param_1 + 0x1bc);
      if ((int)uVar6 < 0) {
        if (-iVar5 < iVar8) {
          iVar8 = -iVar5;
        }
      }
      else if (iVar8 < iVar5) {
        iVar8 = iVar5;
      }
    }
    (**(code **)(param_1 + 0x2f0))(param_1,param_1 + 0x78,uVar3,iVar8 - iVar7);
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  *(undefined2 *)(param_1 + 0x18e) = *(undefined2 *)(param_1 + 0x18c);
  *(ushort *)(param_1 + 400) = uVar3;
  if ((*(byte *)(param_1 + 0x1f0) & 0x10) != 0) {
    *(ushort *)(param_1 + 0x18c) = uVar3;
  }
  return;
}

