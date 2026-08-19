// Function: FUN_1403a9790
// Addr: 1403a9790
// Size: 5 bytes


undefined8 FUN_1403a9790(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  
  pbVar8 = (byte *)&DAT_14045dde0;
  uVar5 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar5 == 0) {
    pbVar6 = (byte *)&DAT_14045dde0;
  }
  else {
    pbVar6 = (byte *)((ulonglong)uVar5 + param_1);
  }
  iVar11 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
  if (iVar11 == 1) {
    uVar5 = FUN_1403c71c0(pbVar6,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar11 != 2) {
      return 0;
    }
    uVar5 = FUN_1403c7240();
  }
  if (uVar5 == 0xffffffff) {
    return 0;
  }
  if (uVar5 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
    pbVar6 = (byte *)(param_1 + ((ulonglong)uVar5 + 3) * 2);
  }
  else {
    pbVar6 = (byte *)&DAT_14045dde0;
  }
  uVar5 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
  if (uVar5 != 0) {
    pbVar8 = (byte *)((ulonglong)uVar5 + param_1);
  }
  uVar5 = (uint)*pbVar8 * 0x100 + (uint)pbVar8[1];
  if (uVar5 == 1) {
    FUN_1403f7f90(param_2,(uint)pbVar8[3] + (uint)pbVar8[2] * 0x100);
    return 1;
  }
  lVar3 = *(longlong *)(param_2 + 0xa0);
  uVar9 = *(uint *)(lVar3 + 0x5c);
  uVar7 = (ulonglong)uVar9;
  lVar4 = *(longlong *)(lVar3 + 0x70);
  if (uVar5 != 0) {
    uVar10 = 0;
    uVar14 = *(ushort *)(lVar4 + 0xc + uVar7 * 0x14) >> 1 & 2;
    if (*(byte *)(lVar4 + 0xe + uVar7 * 0x14) < 0x20) {
      do {
        *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) + 0xe +
                 (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14) =
             (byte)uVar10 & 0xf;
        iVar11 = (uint)pbVar8[uVar10 * 2 + 3] + (uint)pbVar8[uVar10 * 2 + 2] * 0x100;
        func_0x0001403a2650(param_2,iVar11,uVar14,0,1);
        FUN_1403ed5a0(*(undefined8 *)(param_2 + 0xa0),iVar11);
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < uVar5);
    }
    else {
      do {
        iVar11 = (uint)pbVar8[uVar10 * 2 + 2] * 0x100 + (uint)pbVar8[uVar10 * 2 + 3];
        func_0x0001403a2650(param_2,iVar11,uVar14,0,1);
        FUN_1403ed5a0(*(undefined8 *)(param_2 + 0xa0),iVar11);
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < uVar5);
    }
    piVar1 = (int *)(*(longlong *)(param_2 + 0xa0) + 0x5c);
    *piVar1 = *piVar1 + 1;
    return 1;
  }
  uVar13 = uVar9 + 1;
  uVar5 = *(uint *)(lVar4 + 8 + uVar7 * 0x14);
  if ((*(uint *)(lVar3 + 0x60) <= uVar13) ||
     (uVar5 != *(uint *)(lVar4 + 8 + (ulonglong)uVar13 * 0x14))) {
    uVar2 = *(uint *)(lVar3 + 100);
    uVar10 = (ulonglong)uVar2;
    if (uVar2 == 0) {
      if (uVar13 < *(uint *)(lVar3 + 0x60)) {
        if (1 < *(uint *)(lVar3 + 0x1c)) {
          func_0x00014040efc0();
          *(int *)(lVar3 + 0x5c) = *(int *)(lVar3 + 0x5c) + 1;
          return 1;
        }
        FUN_1403ec350(lVar3,uVar7,uVar9 + 2);
      }
    }
    else {
      uVar9 = *(uint *)(*(longlong *)(lVar3 + 0x78) + 8 + (ulonglong)(uVar2 - 1) * 0x14);
      if (uVar5 < uVar9) {
        uVar13 = *(uint *)(lVar4 + uVar7 * 0x14 + 4);
        while( true ) {
          uVar12 = (int)uVar10 - 1;
          uVar10 = (ulonglong)uVar12;
          lVar4 = *(longlong *)(lVar3 + 0x78) + uVar10 * 0x14;
          uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x78) + 8 + uVar10 * 0x14);
          if (uVar2 != uVar9) break;
          if (uVar2 != uVar5) {
            *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) ^ (*(uint *)(lVar4 + 4) ^ uVar13) & 7;
          }
          *(uint *)(lVar4 + 8) = uVar5;
          if (uVar12 == 0) {
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

