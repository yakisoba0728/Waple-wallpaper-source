// Function: FUN_1403644c0
// Addr: 1403644c0
// Size: 427 bytes


void FUN_1403644c0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined2 local_86;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  uint local_60;
  byte local_5c;
  undefined2 local_5b;
  undefined1 local_59;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_a8;
  local_80 = (param_2 - param_1) / 0x14;
  lVar15 = (longlong)local_80 >> 1;
  if (0 < lVar15) {
    lVar13 = local_80 - 1;
    lVar12 = lVar13 >> 1;
    local_78 = lVar13;
    local_70 = lVar12;
    do {
      lVar15 = lVar15 + -1;
      local_86 = *(undefined2 *)(param_1 + 5 + lVar15 * 0x14);
      bVar4 = *(byte *)(param_1 + 4 + lVar15 * 0x14);
      uVar5 = *(uint *)(param_1 + lVar15 * 0x14);
      uVar6 = *(undefined4 *)(param_1 + 0x10 + lVar15 * 0x14);
      local_88 = *(undefined1 *)(param_1 + 7 + lVar15 * 0x14);
      local_68 = *(undefined8 *)(param_1 + 8 + lVar15 * 0x14);
      lVar14 = lVar15;
      local_5b = local_86;
      local_5c = bVar4;
      local_60 = uVar5;
      local_50 = uVar6;
      local_59 = local_88;
      local_58 = local_68;
      while (lVar14 < lVar12) {
        lVar13 = lVar14 * 2 + 2;
        uVar7 = *(uint *)(param_1 + -0x14 + lVar13 * 0x14);
        puVar1 = (uint *)(param_1 + lVar13 * 0x14);
        if (*puVar1 < uVar7) {
          iVar11 = -1;
        }
        else if (uVar7 < *puVar1) {
          iVar11 = 1;
        }
        else if ((byte)puVar1[1] < (byte)puVar1[-4]) {
          iVar11 = -1;
        }
        else if ((byte)puVar1[-4] < (byte)puVar1[1]) {
          iVar11 = 1;
        }
        else {
          iVar11 = FUN_1403b3920(puVar1 + 2,puVar1 + -3);
        }
        puVar2 = (undefined4 *)(param_1 + lVar14 * 0x14);
        lVar14 = lVar14 * 2 + 1;
        if (-1 < iVar11) {
          lVar14 = lVar13;
        }
        puVar3 = (undefined4 *)(param_1 + lVar14 * 0x14);
        uVar8 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        *puVar2 = *puVar3;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        puVar2[4] = *(undefined4 *)(param_1 + 0x10 + lVar14 * 0x14);
        lVar13 = local_78;
      }
      if ((lVar14 == lVar12) && ((local_80 & 1) == 0)) {
        puVar2 = (undefined4 *)(param_1 + lVar14 * 0x14);
        puVar3 = (undefined4 *)(param_1 + -0x14 + local_80 * 0x14);
        uVar8 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        *puVar2 = *puVar3;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        puVar2[4] = *(undefined4 *)(param_1 + -4 + local_80 * 0x14);
        lVar14 = lVar13;
      }
      while (lVar15 < lVar14) {
        lVar13 = lVar14 + -1 >> 1;
        uVar7 = *(uint *)(param_1 + lVar13 * 0x14);
        puVar2 = (undefined4 *)(param_1 + lVar13 * 0x14);
        if (uVar7 < uVar5) {
          iVar11 = -1;
        }
        else if (uVar5 < uVar7) {
          iVar11 = 1;
        }
        else if (*(byte *)(puVar2 + 1) < bVar4) {
          iVar11 = -1;
        }
        else if (bVar4 < *(byte *)(puVar2 + 1)) {
          iVar11 = 1;
        }
        else {
          iVar11 = FUN_1403b3920(puVar2 + 2,&local_58);
        }
        lVar12 = local_70;
        if (-1 < iVar11) break;
        puVar3 = (undefined4 *)(param_1 + lVar14 * 0x14);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar3[4] = puVar2[4];
        lVar14 = lVar13;
      }
      *(undefined2 *)(param_1 + 5 + lVar14 * 0x14) = local_86;
      *(undefined1 *)(param_1 + 7 + lVar14 * 0x14) = local_88;
      *(undefined8 *)(param_1 + 8 + lVar14 * 0x14) = local_68;
      *(uint *)(param_1 + lVar14 * 0x14) = uVar5;
      *(byte *)(param_1 + 4 + lVar14 * 0x14) = bVar4;
      *(undefined4 *)(param_1 + 0x10 + lVar14 * 0x14) = uVar6;
      lVar13 = local_80 - 1;
    } while (0 < lVar15);
  }
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_a8);
  return;
}

