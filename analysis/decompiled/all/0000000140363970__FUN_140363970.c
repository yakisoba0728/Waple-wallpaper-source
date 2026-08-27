// Function: FUN_140363970
// Addr: 140363970
// Size: 699 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140363970(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
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
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  lVar13 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
  local_80 = (lVar13 >> 2) - (lVar13 >> 0x3f);
  lVar13 = (longlong)local_80 >> 1;
  if (0 < lVar13) {
    lVar16 = local_80 - 1;
    lVar15 = lVar16 >> 1;
    local_78 = lVar16;
    local_70 = lVar15;
    do {
      lVar13 = lVar13 + -1;
      local_86 = *(undefined2 *)(param_1 + 5 + lVar13 * 0x18);
      bVar4 = *(byte *)(param_1 + 4 + lVar13 * 0x18);
      uVar7 = *(undefined8 *)(param_1 + 0x10 + lVar13 * 0x18);
      uVar5 = *(uint *)(param_1 + lVar13 * 0x18);
      local_88 = *(undefined1 *)(param_1 + 7 + lVar13 * 0x18);
      local_68 = *(undefined8 *)(param_1 + 8 + lVar13 * 0x18);
      lVar11 = lVar13;
      local_5b = local_86;
      local_5c = bVar4;
      local_50 = uVar7;
      local_60 = uVar5;
      local_59 = local_88;
      local_58 = local_68;
      while (lVar11 < lVar15) {
        lVar16 = lVar11 * 2 + 2;
        uVar6 = *(uint *)(param_1 + -0x18 + lVar16 * 0x18);
        puVar1 = (uint *)(param_1 + lVar16 * 0x18);
        if (*puVar1 < uVar6) {
          iVar12 = -1;
        }
        else if (uVar6 < *puVar1) {
          iVar12 = 1;
        }
        else if ((byte)puVar1[1] < (byte)puVar1[-5]) {
          iVar12 = -1;
        }
        else if ((byte)puVar1[-5] < (byte)puVar1[1]) {
          iVar12 = 1;
        }
        else {
          iVar12 = FUN_1403b37e0(puVar1 + 2,puVar1 + -4);
        }
        lVar14 = lVar11 * 2 + 1;
        if (-1 < iVar12) {
          lVar14 = lVar16;
        }
        puVar2 = (undefined4 *)(param_1 + lVar14 * 0x18);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(param_1 + lVar11 * 0x18);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        *(undefined8 *)(param_1 + 0x10 + lVar11 * 0x18) =
             *(undefined8 *)(param_1 + 0x10 + lVar14 * 0x18);
        lVar11 = lVar14;
        lVar16 = local_78;
      }
      if ((lVar11 == lVar15) && ((local_80 & 1) == 0)) {
        puVar3 = (undefined4 *)(param_1 + -0x18 + local_80 * 0x18);
        uVar8 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        puVar2 = (undefined4 *)(param_1 + lVar11 * 0x18);
        *puVar2 = *puVar3;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        *(undefined8 *)(param_1 + 0x10 + lVar11 * 0x18) =
             *(undefined8 *)(param_1 + -8 + local_80 * 0x18);
        lVar11 = lVar16;
      }
      while (lVar13 < lVar11) {
        lVar16 = lVar11 + -1 >> 1;
        uVar6 = *(uint *)(param_1 + lVar16 * 0x18);
        puVar2 = (undefined4 *)(param_1 + lVar16 * 0x18);
        if (uVar6 < uVar5) {
          iVar12 = -1;
        }
        else if (uVar5 < uVar6) {
          iVar12 = 1;
        }
        else if (*(byte *)(puVar2 + 1) < bVar4) {
          iVar12 = -1;
        }
        else if (bVar4 < *(byte *)(puVar2 + 1)) {
          iVar12 = 1;
        }
        else {
          iVar12 = FUN_1403b37e0(puVar2 + 2,&local_58);
        }
        lVar15 = local_70;
        if (-1 < iVar12) break;
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(param_1 + lVar11 * 0x18);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        *(undefined8 *)(param_1 + 0x10 + lVar11 * 0x18) = *(undefined8 *)(puVar2 + 4);
        lVar11 = lVar16;
      }
      *(undefined2 *)(param_1 + 5 + lVar11 * 0x18) = local_86;
      *(undefined1 *)(param_1 + 7 + lVar11 * 0x18) = local_88;
      *(undefined8 *)(param_1 + 8 + lVar11 * 0x18) = local_68;
      *(uint *)(param_1 + lVar11 * 0x18) = uVar5;
      *(byte *)(param_1 + 4 + lVar11 * 0x18) = bVar4;
      *(undefined8 *)(param_1 + 0x10 + lVar11 * 0x18) = uVar7;
      lVar16 = local_80 - 1;
    } while (0 < lVar13);
  }
  return;
}

