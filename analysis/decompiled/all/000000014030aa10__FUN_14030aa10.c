// Function: FUN_14030aa10
// Addr: 14030aa10
// Size: 494 bytes


void FUN_14030aa10(longlong param_1,ushort *param_2)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  ushort *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort uVar12;
  ushort uVar13;
  longlong *plVar14;
  
  uVar13 = *param_2;
  if (*(short *)(param_1 + 0x196) == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = *(ushort *)(param_1 + 0xb2);
  }
  if (uVar13 < uVar5) {
    bVar4 = *(byte *)(param_1 + 0x1f0) & 1;
    if (bVar4 == 0) {
      puVar8 = (ushort *)(param_1 + 0x78);
      plVar14 = (longlong *)(param_1 + 0x88);
    }
    else {
      puVar8 = (ushort *)(param_1 + 0x40);
      plVar14 = (longlong *)(param_1 + 0x50);
    }
    uVar5 = *(ushort *)(param_1 + 0x18e + ((ulonglong)bVar4 ^ 1) * 2);
    if (uVar5 < *puVar8) {
      lVar9 = (ulonglong)uVar5 * 8;
      lVar3 = *plVar14;
      iVar6 = (**(code **)(param_1 + 0x2d8))
                        (param_1,*(int *)(lVar9 + lVar3) -
                                 *(int *)(*(longlong *)(puVar8 + 4) + lVar9),
                         *(int *)(lVar9 + 4 + lVar3) -
                         *(int *)(*(longlong *)(puVar8 + 4) + 4 + lVar9));
      lVar9 = (longlong)*(int *)(param_1 + 0x2d0) * (longlong)iVar6;
      lVar10 = (longlong)*(int *)(param_1 + 0x2d4) * (longlong)iVar6;
      if (uVar13 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = (*(short *)(*(longlong *)(param_1 + 0xd8) + -2 + (ulonglong)uVar13 * 2) -
                 *(short *)(param_1 + 0xe0)) + 1;
      }
      if (*(short *)(param_1 + 0x196) == 0) {
        uVar13 = *(ushort *)(param_1 + 0xb0);
      }
      else {
        uVar13 = (*(short *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)uVar13 * 2) -
                 *(short *)(param_1 + 0xe0)) + 1;
      }
      if (uVar12 < uVar13) {
        uVar11 = (ulonglong)uVar12;
        do {
          lVar7 = *(longlong *)(param_1 + 0xc0);
          if ((lVar3 != lVar7) || (uVar5 != uVar12)) {
            if (*(short *)(param_1 + 0x1a0) != 0) {
              if (*(int *)(param_1 + 0x324) == 0) {
                piVar1 = (int *)(lVar7 + uVar11 * 8);
                *piVar1 = *piVar1 + (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
              }
              pbVar2 = (byte *)(*(longlong *)(param_1 + 0xd0) + uVar11);
              *pbVar2 = *pbVar2 | 8;
              lVar7 = *(longlong *)(param_1 + 0xc0);
            }
            if (*(short *)(param_1 + 0x1a2) != 0) {
              if (*(int *)(param_1 + 0x324) != 7) {
                piVar1 = (int *)(lVar7 + 4 + uVar11 * 8);
                *piVar1 = *piVar1 + (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
              }
              pbVar2 = (byte *)(*(longlong *)(param_1 + 0xd0) + uVar11);
              *pbVar2 = *pbVar2 | 0x10;
            }
          }
          uVar12 = uVar12 + 1;
          uVar11 = uVar11 + 1;
        } while (uVar12 < uVar13);
      }
    }
    else if (*(char *)(param_1 + 0x2c6) != '\0') goto LAB_14030aa9f;
    return;
  }
  if (*(char *)(param_1 + 0x2c6) == '\0') {
    return;
  }
LAB_14030aa9f:
  *(undefined4 *)(param_1 + 0x20) = 0x86;
  return;
}

