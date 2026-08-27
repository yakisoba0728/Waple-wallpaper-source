// Function: FUN_14030af50
// Addr: 14030af50
// Size: 422 bytes


void FUN_14030af50(longlong param_1,uint *param_2)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  ushort *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  ushort uVar11;
  longlong *plVar12;
  
  if (1 < *param_2) {
    if (*(char *)(param_1 + 0x2c6) == '\0') {
      return;
    }
LAB_14030afba:
    *(undefined4 *)(param_1 + 0x20) = 0x86;
    return;
  }
  bVar4 = *(byte *)(param_1 + 0x1f0) & 1;
  if (bVar4 == 0) {
    puVar6 = (ushort *)(param_1 + 0x78);
    plVar12 = (longlong *)(param_1 + 0x88);
  }
  else {
    puVar6 = (ushort *)(param_1 + 0x40);
    plVar12 = (longlong *)(param_1 + 0x50);
  }
  uVar2 = *(ushort *)(param_1 + 0x18e + ((ulonglong)bVar4 ^ 1) * 2);
  if (uVar2 < *puVar6) {
    lVar7 = (ulonglong)uVar2 * 8;
    lVar3 = *plVar12;
    iVar5 = (**(code **)(param_1 + 0x2d8))
                      (param_1,*(int *)(lVar7 + lVar3) - *(int *)(*(longlong *)(puVar6 + 4) + lVar7)
                       ,*(int *)(lVar7 + 4 + lVar3) -
                        *(int *)(*(longlong *)(puVar6 + 4) + 4 + lVar7));
    if (*(short *)(param_1 + 0x196) == 0) {
      uVar11 = *(ushort *)(param_1 + 0xb0);
    }
    else {
      if (*(short *)(param_1 + 0x196) != 1) {
        return;
      }
      if (*(ushort *)(param_1 + 0xb2) == 0) {
        return;
      }
      uVar11 = *(short *)(*(longlong *)(param_1 + 0xd8) + -2 +
                         (ulonglong)*(ushort *)(param_1 + 0xb2) * 2) + 1;
    }
    lVar7 = (longlong)*(int *)(param_1 + 0x2d0) * (longlong)iVar5;
    lVar8 = (longlong)*(int *)(param_1 + 0x2d4) * (longlong)iVar5;
    uVar10 = 0;
    if (uVar11 != 0) {
      do {
        lVar9 = *(longlong *)(param_1 + 0xc0);
        if ((lVar3 != lVar9) || (uVar2 != uVar10)) {
          if ((*(short *)(param_1 + 0x1a0) != 0) && (*(int *)(param_1 + 0x324) == 0)) {
            piVar1 = (int *)(lVar9 + (ulonglong)uVar10 * 8);
            *piVar1 = *piVar1 + (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
            lVar9 = *(longlong *)(param_1 + 0xc0);
          }
          if ((*(short *)(param_1 + 0x1a2) != 0) && (*(int *)(param_1 + 0x324) != 7)) {
            piVar1 = (int *)(lVar9 + 4 + (ulonglong)uVar10 * 8);
            *piVar1 = *piVar1 + (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar11);
    }
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') goto LAB_14030afba;
  return;
}

