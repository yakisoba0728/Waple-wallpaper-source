// Function: FUN_1403ab000
// Addr: 1403ab000
// Size: 538 bytes


undefined8 FUN_1403ab000(byte *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  
  uVar9 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar9 == 1) {
    FUN_1403f7ec0(param_2,(uint)param_1[3] + (uint)param_1[2] * 0x100);
    return 1;
  }
  lVar3 = *(longlong *)(param_2 + 0xa0);
  uVar7 = *(uint *)(lVar3 + 0x5c);
  uVar5 = (ulonglong)uVar7;
  lVar4 = *(longlong *)(lVar3 + 0x70);
  if (uVar9 != 0) {
    uVar8 = 0;
    uVar12 = *(ushort *)(lVar4 + 0xc + uVar5 * 0x14) >> 1 & 2;
    if (*(byte *)(lVar4 + 0xe + uVar5 * 0x14) < 0x20) {
      do {
        *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) + 0xe +
                 (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14) =
             (byte)uVar8 & 0xf;
        iVar6 = (uint)param_1[uVar8 * 2 + 3] + (uint)param_1[uVar8 * 2 + 2] * 0x100;
        FUN_1403a2580(param_2,iVar6,uVar12,0,1);
        FUN_1403ed4d0(*(undefined8 *)(param_2 + 0xa0),iVar6);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar9);
    }
    else {
      do {
        iVar6 = (uint)param_1[uVar8 * 2 + 2] * 0x100 + (uint)param_1[uVar8 * 2 + 3];
        FUN_1403a2580(param_2,iVar6,uVar12,0,1);
        FUN_1403ed4d0(*(undefined8 *)(param_2 + 0xa0),iVar6);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar9);
    }
    piVar1 = (int *)(*(longlong *)(param_2 + 0xa0) + 0x5c);
    *piVar1 = *piVar1 + 1;
    return 1;
  }
  uVar11 = uVar7 + 1;
  uVar9 = *(uint *)(lVar4 + 8 + uVar5 * 0x14);
  if ((*(uint *)(lVar3 + 0x60) <= uVar11) ||
     (uVar9 != *(uint *)(lVar4 + 8 + (ulonglong)uVar11 * 0x14))) {
    uVar2 = *(uint *)(lVar3 + 100);
    uVar8 = (ulonglong)uVar2;
    if (uVar2 == 0) {
      if (uVar11 < *(uint *)(lVar3 + 0x60)) {
        if (1 < *(uint *)(lVar3 + 0x1c)) {
          FUN_14040eef0();
          *(int *)(lVar3 + 0x5c) = *(int *)(lVar3 + 0x5c) + 1;
          return 1;
        }
        FUN_1403ec280(lVar3,uVar5,uVar7 + 2);
      }
    }
    else {
      uVar7 = *(uint *)(*(longlong *)(lVar3 + 0x78) + 8 + (ulonglong)(uVar2 - 1) * 0x14);
      if (uVar9 < uVar7) {
        uVar11 = *(uint *)(lVar4 + uVar5 * 0x14 + 4);
        while( true ) {
          uVar10 = (int)uVar8 - 1;
          uVar8 = (ulonglong)uVar10;
          lVar4 = *(longlong *)(lVar3 + 0x78) + uVar8 * 0x14;
          uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x78) + 8 + uVar8 * 0x14);
          if (uVar2 != uVar7) break;
          if (uVar2 != uVar9) {
            *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) ^ (*(uint *)(lVar4 + 4) ^ uVar11) & 7;
          }
          *(uint *)(lVar4 + 8) = uVar9;
          if (uVar10 == 0) {
            *(int *)(lVar3 + 0x5c) = *(int *)(lVar3 + 0x5c) + 1;
            return 1;
          }
        }
      }
    }
  }
  *(int *)(lVar3 + 0x5c) = *(int *)(lVar3 + 0x5c) + 1;
  return 1;
}

