// Function: FUN_140329970
// Addr: 140329970
// Size: 576 bytes


int FUN_140329970(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  int local_res8 [2];
  
  lVar4 = *param_2;
  local_res8[0] = 0;
  if (lVar4 == 0) {
    return 0x23;
  }
  lVar5 = *(longlong *)(lVar4 + 0xd8);
  if ((lVar5 == 0) || (*(uint *)(lVar4 + 0x10) <= param_3)) {
    return 6;
  }
  if (param_3 == 0) {
    param_3 = (uint)*(byte *)(lVar5 + 0x6a);
  }
  else {
    param_3 = param_3 - 1;
  }
  sVar1 = *(short *)(lVar5 + 4);
  iVar9 = 4;
  if (sVar1 == 0x300) {
    iVar9 = 6;
  }
  iVar7 = 0x76;
  if (sVar1 == 0x300) {
    iVar7 = 0x94;
  }
  uVar13 = iVar9 * param_3 + iVar7;
  iVar9 = 2;
  if (sVar1 == 0x300) {
    iVar9 = 4;
  }
  if (uVar13 < (*(int *)(lVar5 + 8) - iVar9) - 2U) {
    puVar11 = (ushort *)((ulonglong)uVar13 + *(longlong *)(lVar5 + 0xa0));
    *(uint *)(param_1 + 0x6c) = (uint)*puVar11;
    if (sVar1 == 0x300) {
      uVar13 = (uint)*(uint3 *)((longlong)puVar11 + 3);
    }
    else {
      uVar13 = (uint)*(byte *)((longlong)puVar11 + 3);
    }
    uVar13 = uVar13 << 8 | (uint)(byte)puVar11[1];
    if (uVar13 < *(uint *)(lVar5 + 8)) {
      uVar2 = *(ushort *)(lVar5 + 0x60);
      *(uint *)(param_1 + 0x68) = (uint)uVar2;
      *(undefined1 *)(param_1 + 0x82) = 1;
      *(undefined4 *)(param_1 + 0x90) = 0;
      uVar3 = *(ushort *)(lVar5 + 0x50);
      *(uint *)(param_1 + 0x94) = (uint)uVar3;
      *(undefined4 *)(param_1 + 0x60) = 0x62697473;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x6c) << 6;
      *(uint *)(param_1 + 0x34) = (uint)uVar2 << 6;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x6c) << 6;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(uint *)(param_1 + 0x3c) = (uint)uVar3 << 6;
      FUN_1402f8f80();
      if ((param_4 >> 0x16 & 1) != 0) {
        return local_res8[0];
      }
      lVar4 = *(longlong *)(lVar5 + 0xa0);
      uVar14 = *(int *)(param_1 + 0x6c) + 7;
      uVar15 = uVar14 >> 3;
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x98);
      *(uint *)(param_1 + 0x70) = uVar15;
      if ((uVar14 >> 3 != 0) && (*(int *)(param_1 + 0x68) * uVar15 + uVar13 <= *(uint *)(lVar5 + 8))
         ) {
        puVar8 = (undefined1 *)FUN_1402f7ff0(uVar6,uVar15,0,*(int *)(param_1 + 0x68),0,local_res8);
        *(undefined1 **)(param_1 + 0x78) = puVar8;
        if (local_res8[0] != 0) {
          return local_res8[0];
        }
        puVar10 = (undefined1 *)((ulonglong)uVar13 + lVar4);
        do {
          puVar16 = puVar10 + *(uint *)(param_1 + 0x68);
          puVar12 = puVar8;
          for (; puVar10 < puVar16; puVar10 = puVar10 + 1) {
            *puVar12 = *puVar10;
            puVar12 = puVar12 + *(int *)(param_1 + 0x70);
          }
          puVar8 = puVar8 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 8) = 1;
        return 0;
      }
    }
  }
  return 3;
}

