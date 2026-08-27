// Function: FUN_14030ac00
// Addr: 14030ac00
// Size: 416 bytes


void FUN_14030ac00(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte *pbVar2;
  ushort uVar3;
  byte bVar4;
  int iVar5;
  ushort *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  
  iVar10 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x3c) < iVar10) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x81;
    }
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar10;
    bVar4 = *(byte *)(param_1 + 0x1f0) & 1;
    if (bVar4 == 0) {
      puVar6 = (ushort *)(param_1 + 0x78);
      plVar11 = (longlong *)(param_1 + 0x88);
    }
    else {
      puVar6 = (ushort *)(param_1 + 0x40);
      plVar11 = (longlong *)(param_1 + 0x50);
    }
    uVar3 = *(ushort *)(param_1 + 0x18e + ((ulonglong)bVar4 ^ 1) * 2);
    if (*puVar6 <= uVar3) {
      if (*(char *)(param_1 + 0x2c6) == '\0') {
        return;
      }
LAB_14030ac93:
      *(undefined4 *)(param_1 + 0x20) = 0x86;
      return;
    }
    lVar7 = (ulonglong)uVar3 * 8;
    iVar5 = (**(code **)(param_1 + 0x2d8))
                      (param_1,*(int *)(lVar7 + *plVar11) -
                               *(int *)(*(longlong *)(puVar6 + 4) + lVar7),
                       *(int *)(lVar7 + 4 + *plVar11) -
                       *(int *)(*(longlong *)(puVar6 + 4) + 4 + lVar7));
    lVar7 = (longlong)*(int *)(param_1 + 0x2d0) * (longlong)iVar5;
    lVar8 = (longlong)*(int *)(param_1 + 0x2d4) * (longlong)iVar5;
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar6 = (ushort *)(param_2 + -4);
      uVar9 = (ulonglong)*puVar6;
      param_2 = param_2 + -4;
      if (*puVar6 < *(ushort *)(param_1 + 0xb0)) {
        if (*(short *)(param_1 + 0x1a0) != 0) {
          if (*(int *)(param_1 + 0x324) == 0) {
            piVar1 = (int *)(*(longlong *)(param_1 + 0xc0) + uVar9 * 8);
            *piVar1 = *piVar1 + (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
          }
          pbVar2 = (byte *)(*(longlong *)(param_1 + 0xd0) + uVar9);
          *pbVar2 = *pbVar2 | 8;
        }
        if (*(short *)(param_1 + 0x1a2) != 0) {
          if (*(int *)(param_1 + 0x324) != 7) {
            piVar1 = (int *)(*(longlong *)(param_1 + 0xc0) + 4 + uVar9 * 8);
            *piVar1 = *piVar1 + (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
          }
          pbVar2 = (byte *)(*(longlong *)(param_1 + 0xd0) + uVar9);
          *pbVar2 = *pbVar2 | 0x10;
        }
      }
      else if (*(char *)(param_1 + 0x2c6) != '\0') goto LAB_14030ac93;
    }
  }
  *(undefined4 *)(param_1 + 0x1a4) = 1;
  return;
}

