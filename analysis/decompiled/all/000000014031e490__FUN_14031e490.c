// Function: FUN_14031e490
// Addr: 14031e490
// Size: 1032 bytes


int FUN_14031e490(uint *param_1,longlong param_2,uint param_3,longlong param_4,int param_5,
                 uint param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  uint local_res10 [6];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 8) == 0) {
    return 3;
  }
  if (param_6 < 2) {
    if (param_6 == 0) {
      lVar11 = 4;
      puVar8 = param_1 + 3;
      puVar10 = (undefined8 *)&DAT_14043d150;
      do {
        uVar2 = puVar10[1];
        *(undefined8 *)puVar8 = *puVar10;
        *(undefined8 *)(puVar8 + 2) = uVar2;
        uVar2 = puVar10[3];
        *(undefined8 *)(puVar8 + 4) = puVar10[2];
        *(undefined8 *)(puVar8 + 6) = uVar2;
        uVar2 = puVar10[5];
        *(undefined8 *)(puVar8 + 8) = puVar10[4];
        *(undefined8 *)(puVar8 + 10) = uVar2;
        uVar2 = puVar10[7];
        *(undefined8 *)(puVar8 + 0xc) = puVar10[6];
        *(undefined8 *)(puVar8 + 0xe) = uVar2;
        uVar2 = puVar10[9];
        *(undefined8 *)(puVar8 + 0x10) = puVar10[8];
        *(undefined8 *)(puVar8 + 0x12) = uVar2;
        uVar2 = puVar10[0xb];
        *(undefined8 *)(puVar8 + 0x14) = puVar10[10];
        *(undefined8 *)(puVar8 + 0x16) = uVar2;
        uVar13 = *(uint *)((longlong)puVar10 + 100);
        uVar12 = *(uint *)(puVar10 + 0xd);
        uVar15 = *(uint *)((longlong)puVar10 + 0x6c);
        puVar8[0x18] = *(uint *)(puVar10 + 0xc);
        puVar8[0x19] = uVar13;
        puVar8[0x1a] = uVar12;
        puVar8[0x1b] = uVar15;
        uVar13 = *(uint *)((longlong)puVar10 + 0x74);
        uVar12 = *(uint *)(puVar10 + 0xf);
        uVar15 = *(uint *)((longlong)puVar10 + 0x7c);
        puVar8[0x1c] = *(uint *)(puVar10 + 0xe);
        puVar8[0x1d] = uVar13;
        puVar8[0x1e] = uVar12;
        puVar8[0x1f] = uVar15;
        lVar11 = lVar11 + -1;
        puVar8 = puVar8 + 0x20;
        puVar10 = puVar10 + 0x10;
      } while (lVar11 != 0);
    }
    else {
      if (param_6 != 1) {
        return 3;
      }
      lVar11 = 4;
      puVar8 = param_1 + 3;
      puVar10 = (undefined8 *)&DAT_14043d350;
      do {
        uVar2 = puVar10[1];
        *(undefined8 *)puVar8 = *puVar10;
        *(undefined8 *)(puVar8 + 2) = uVar2;
        uVar2 = puVar10[3];
        *(undefined8 *)(puVar8 + 4) = puVar10[2];
        *(undefined8 *)(puVar8 + 6) = uVar2;
        uVar2 = puVar10[5];
        *(undefined8 *)(puVar8 + 8) = puVar10[4];
        *(undefined8 *)(puVar8 + 10) = uVar2;
        uVar2 = puVar10[7];
        *(undefined8 *)(puVar8 + 0xc) = puVar10[6];
        *(undefined8 *)(puVar8 + 0xe) = uVar2;
        uVar2 = puVar10[9];
        *(undefined8 *)(puVar8 + 0x10) = puVar10[8];
        *(undefined8 *)(puVar8 + 0x12) = uVar2;
        uVar2 = puVar10[0xb];
        *(undefined8 *)(puVar8 + 0x14) = puVar10[10];
        *(undefined8 *)(puVar8 + 0x16) = uVar2;
        uVar13 = *(uint *)((longlong)puVar10 + 100);
        uVar12 = *(uint *)(puVar10 + 0xd);
        uVar15 = *(uint *)((longlong)puVar10 + 0x6c);
        puVar8[0x18] = *(uint *)(puVar10 + 0xc);
        puVar8[0x19] = uVar13;
        puVar8[0x1a] = uVar12;
        puVar8[0x1b] = uVar15;
        uVar13 = *(uint *)((longlong)puVar10 + 0x74);
        uVar12 = *(uint *)(puVar10 + 0xf);
        uVar15 = *(uint *)((longlong)puVar10 + 0x7c);
        puVar8[0x1c] = *(uint *)(puVar10 + 0xe);
        puVar8[0x1d] = uVar13;
        puVar8[0x1e] = uVar12;
        puVar8[0x1f] = uVar15;
        lVar11 = lVar11 + -1;
        puVar8 = puVar8 + 0x20;
        puVar10 = puVar10 + 0x10;
      } while (lVar11 != 0);
    }
    param_1[1] = param_6;
    param_1[2] = 0;
    iVar7 = FUN_14031e030(param_2);
    if (iVar7 == 0) {
      uVar13 = 0;
      lVar11 = 0;
      do {
        uVar1 = *(ushort *)((longlong)param_1 + lVar11 * 2 + 0xc);
        sVar5 = 0;
        if ((uVar1 != 0) && ((uint)uVar1 <= *(uint *)(param_2 + 0x18))) {
          sVar5 = *(short *)(*(longlong *)(param_2 + 0x10) + (ulonglong)uVar1 * 2);
        }
        if (sVar5 == 0) {
          pbVar14 = (byte *)((longlong)param_1 + lVar11 * 2 + 0x20c);
          pbVar14[0] = 0;
          pbVar14[1] = 0;
          pbVar14 = (byte *)((longlong)param_1 + lVar11 * 2 + 0xc);
          pbVar14[0] = 0;
          pbVar14[1] = 0;
        }
        else {
          *(short *)((longlong)param_1 + lVar11 * 2 + 0x20c) = sVar5;
          param_1[2] = uVar13 + 1;
        }
        uVar13 = uVar13 + 1;
        lVar11 = lVar11 + 1;
      } while (uVar13 < 0x100);
      return 0;
    }
    return iVar7;
  }
  FUN_1404217a0(param_1 + 3,0,0x200);
  FUN_1404217a0(param_1 + 0x83,0,0x200);
  param_1[1] = param_5 + param_6;
  local_res10[0] = FUN_1402f5c50(param_4);
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
  bVar3 = FUN_1402f55a0(param_4,local_res10);
  *param_1 = (uint)bVar3;
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
  bVar3 = FUN_1402f55a0(param_4,local_res10);
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
  uVar13 = (uint)bVar3;
  if ((*param_1 & 0x7f) == 0) {
    param_1[2] = bVar3 + 1;
    local_res10[0] = FUN_1402f4fe0(param_4,bVar3);
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    pbVar14 = *(byte **)(param_4 + 0x38);
    uVar12 = 1;
    if (uVar13 != 0) {
      do {
        bVar3 = *pbVar14;
        pbVar14 = pbVar14 + 1;
        if (uVar12 < param_3) {
          *(short *)((longlong)param_1 + (ulonglong)bVar3 * 2 + 0x20c) = (short)uVar12;
          *(undefined2 *)((longlong)param_1 + (ulonglong)bVar3 * 2 + 0xc) =
               *(undefined2 *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar12 * 2);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 <= uVar13);
    }
    FUN_1402f5100(param_4);
  }
  else {
    if ((*param_1 & 0x7f) != 1) {
      return 3;
    }
    uVar15 = 0;
    param_1[2] = 0;
    uVar12 = 1;
    if (uVar13 != 0) {
      do {
        bVar3 = FUN_1402f55a0(param_4,local_res10);
        if (local_res10[0] != 0) {
          return local_res10[0];
        }
        bVar4 = FUN_1402f55a0(param_4,local_res10);
        if (local_res10[0] != 0) {
          return local_res10[0];
        }
        uVar9 = (ulonglong)bVar3;
        uVar6 = bVar4 + 1;
        if (param_1[2] < uVar6) {
          param_1[2] = uVar6;
        }
        uVar6 = uVar6 + uVar12;
        for (; uVar12 < uVar6; uVar12 = uVar12 + 1) {
          if ((uVar12 < param_3) && ((uint)uVar9 < 0x100)) {
            *(short *)((longlong)param_1 + uVar9 * 2 + 0x20c) = (short)uVar12;
            *(undefined2 *)((longlong)param_1 + uVar9 * 2 + 0xc) =
                 *(undefined2 *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar12 * 2);
          }
          uVar9 = (ulonglong)((uint)uVar9 + 1);
        }
        uVar15 = uVar15 + 1;
        uVar12 = uVar6;
      } while (uVar15 < uVar13);
    }
    if (0x100 < param_1[2]) {
      param_1[2] = 0x100;
    }
  }
  if ((*param_1 & 0x80) == 0) {
    return local_res10[0];
  }
  bVar3 = FUN_1402f55a0(param_4,local_res10);
  if (local_res10[0] != 0) {
    return local_res10[0];
  }
  uVar13 = 0;
  if (bVar3 == 0) {
    return 0;
  }
  do {
    bVar4 = FUN_1402f55a0(param_4,local_res10);
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    sVar5 = FUN_1402f5ac0(param_4,local_res10);
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    *(short *)((longlong)param_1 + (ulonglong)bVar4 * 2 + 0xc) = sVar5;
    if (param_3 != 0) {
      uVar9 = 0;
      do {
        if (*(short *)(*(longlong *)(param_2 + 8) + uVar9 * 2) == sVar5) {
          *(short *)((longlong)param_1 + (ulonglong)bVar4 * 2 + 0x20c) = (short)uVar9;
          break;
        }
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
      } while (uVar12 < param_3);
    }
    uVar13 = uVar13 + 1;
    if (bVar3 <= uVar13) {
      return 0;
    }
  } while( true );
}

