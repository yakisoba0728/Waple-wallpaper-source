// Function: FUN_140312e30
// Addr: 140312e30
// Size: 452 bytes


longlong FUN_140312e30(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort uVar12;
  int local_c8 [34];
  
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  bVar1 = false;
  bVar2 = false;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  uVar12 = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  local_c8[0xe] = 0;
  local_c8[0xf] = 0;
  local_c8[0x10] = 0;
  local_c8[0x11] = 0;
  local_c8[0x12] = 0;
  local_c8[0x13] = 0;
  local_c8[0x18] = 0;
  local_c8[0x19] = 0;
  local_c8[0x1a] = 0;
  local_c8[0x1b] = 0;
  local_c8[0x1c] = 0;
  local_c8[0x1d] = 0;
  local_c8[0x1e] = 0;
  local_c8[0x14] = 0;
  local_c8[0x15] = 0;
  local_c8[0x16] = 0;
  local_c8[0x17] = 0;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if (*(short *)(param_1 + 0xf4) != 0) {
    do {
      bVar3 = bVar6;
      bVar2 = bVar5;
      bVar1 = bVar4;
      iVar7 = *(int *)((ulonglong)uVar12 * 0x10 + *(longlong *)(param_1 + 0xf8));
      if (iVar7 == 0x63767420) {
        bVar1 = true;
        lVar11 = 0;
LAB_140312f00:
        iVar7 = 0;
        uVar10 = 0;
        do {
          if (*(int *)((ulonglong)uVar12 * 0x10 + 0xc + *(longlong *)(param_1 + 0xf8)) ==
              (&DAT_14043b7a4)[lVar11 * 2 + uVar10 * 6]) {
            if (iVar7 == 0) {
              iVar7 = FUN_140313920(param_1,uVar12);
            }
            puVar8 = &DAT_14043b7a0;
            if (*(int *)(&DAT_14043b7a0 + (uVar10 * 3 + lVar11) * 8) == iVar7) {
              local_c8[uVar10] = local_c8[uVar10] + 1;
            }
            if (local_c8[uVar10] == 3) goto LAB_140312fde;
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
        } while ((int)uVar9 < 0x1f);
      }
      else {
        if (iVar7 == 0x6670676d) {
          bVar2 = true;
          lVar11 = 1;
          goto LAB_140312f00;
        }
        if (iVar7 == 0x70726570) {
          bVar3 = true;
          lVar11 = 2;
          goto LAB_140312f00;
        }
      }
      uVar12 = uVar12 + 1;
      bVar4 = bVar1;
      bVar5 = bVar2;
      bVar6 = bVar3;
    } while (uVar12 < *(ushort *)(param_1 + 0xf4));
  }
  puVar8 = (undefined *)0x0;
  while( true ) {
    if ((!bVar1) && ((&DAT_14043b7a4)[(longlong)puVar8 * 6] == 0)) {
      local_c8[(longlong)puVar8] = local_c8[(longlong)puVar8] + 1;
    }
    if ((!bVar2) && ((&DAT_14043b7ac)[(longlong)puVar8 * 6] == 0)) {
      local_c8[(longlong)puVar8] = local_c8[(longlong)puVar8] + 1;
    }
    if ((!bVar3) && ((&DAT_14043b7b4)[(longlong)puVar8 * 6] == 0)) {
      local_c8[(longlong)puVar8] = local_c8[(longlong)puVar8] + 1;
    }
    if (local_c8[(longlong)puVar8] == 3) break;
    uVar9 = (int)puVar8 + 1;
    puVar8 = (undefined *)(ulonglong)uVar9;
    if (0x1e < (int)uVar9) {
      return (ulonglong)(uint3)(uVar9 >> 8) << 8;
    }
  }
LAB_140312fde:
  return CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
}

