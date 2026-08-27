// Function: FUN_14040e7a0
// Addr: 14040e7a0
// Size: 786 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14040e7a0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  byte local_b8 [16];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  undefined1 local_98 [40];
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_d8;
  uVar14 = (uint)*(byte *)(param_4 + 2) * 0x100 + (uint)*(byte *)(param_4 + 3);
  if (uVar14 >> 0xf != 0) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x5c);
  }
  if ((uVar14 >> 0xd & 1) != 0) {
    uVar10 = *(int *)(param_2 + 0x5c) + 1;
    uVar8 = *(uint *)(param_2 + 0x60);
    if (uVar10 <= *(uint *)(param_2 + 0x60)) {
      uVar8 = uVar10;
    }
    *(uint *)(param_1 + 0x14) = uVar8;
  }
  if ((uVar14 & 0xf) != 0) {
    uVar8 = *(uint *)(param_1 + 0x10);
    if (uVar8 < *(uint *)(param_1 + 0x14)) {
      local_b8[0] = 0;
      local_b8[1] = 0x10;
      local_b8[2] = 1;
      local_b8[3] = 0x11;
      local_b8[4] = 0x20;
      local_b8[5] = 0x30;
      local_b8[6] = 2;
      local_b8[7] = 3;
      local_b8[8] = 0x12;
      local_b8[9] = 0x13;
      local_b8[10] = 0x21;
      local_b8[0xb] = 0x31;
      local_b8[0xc] = 0x22;
      local_b8[0xd] = 0x32;
      local_b8[0xe] = 0x23;
      local_b8[0xf] = 0x33;
      local_a4 = (uint)(local_b8[uVar14 & 0xf] >> 4);
      uVar10 = local_a4;
      if (1 < local_a4) {
        uVar10 = 2;
      }
      uVar15 = (ulonglong)uVar10;
      local_a0 = local_b8[uVar14 & 0xf] & 0xf;
      uVar14 = local_a0;
      if (1 < local_a0) {
        uVar14 = 2;
      }
      uVar13 = *(uint *)(param_1 + 0x14) - uVar8;
      if ((uVar14 + uVar10 <= uVar13) && (uVar13 < 0x41)) {
        uVar9 = *(int *)(param_2 + 0x5c) + 1;
        uVar13 = *(uint *)(param_2 + 0x60);
        if (uVar9 <= *(uint *)(param_2 + 0x60)) {
          uVar13 = uVar9;
        }
        local_a8 = uVar14;
        if (1 < uVar13 - uVar8) {
          if (*(uint *)(param_2 + 0x1c) < 2) {
            FUN_1403ec280(param_2,uVar8);
          }
          else {
            FUN_14040eef0();
          }
        }
        if (1 < (uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))) {
          if (*(uint *)(param_2 + 0x1c) < 2) {
            FUN_1403ec280(param_2);
          }
          else {
            FUN_14040eef0();
          }
        }
        lVar4 = *(longlong *)(param_2 + 0x70);
        lVar11 = uVar15 * 0x14;
        if (lVar11 != 0) {
          FUN_1404210f0(local_98,lVar4 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x14,lVar11);
        }
        iVar12 = uVar14 * 0x14;
        if (iVar12 != 0) {
          FUN_1404210f0(local_70,lVar4 + ((ulonglong)*(uint *)(param_1 + 0x14) - (ulonglong)uVar14)
                                         * 0x14,iVar12);
        }
        if (uVar10 != local_a8) {
          uVar8 = *(uint *)(param_1 + 0x10);
          FUN_1404210f0(lVar4 + ((ulonglong)uVar14 + (ulonglong)uVar8) * 0x14,
                        lVar4 + (uVar8 + uVar15) * 0x14,
                        (ulonglong)(((*(int *)(param_1 + 0x14) - local_a8) - uVar10) - uVar8) * 0x14
                       );
        }
        if (iVar12 != 0) {
          FUN_1404210f0(lVar4 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x14,local_70,iVar12);
        }
        if (lVar11 != 0) {
          FUN_1404210f0(lVar4 + (*(uint *)(param_1 + 0x14) - uVar15) * 0x14,local_98,lVar11);
        }
        if (local_a4 == 3) {
          uVar15 = (ulonglong)(*(int *)(param_1 + 0x14) - 1);
          puVar1 = (undefined8 *)(lVar4 + uVar15 * 0x14);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          uVar3 = *(undefined4 *)(lVar4 + 0x10 + uVar15 * 0x14);
          puVar1 = (undefined8 *)(lVar4 + uVar15 * 0x14);
          uVar15 = (ulonglong)(*(int *)(param_1 + 0x14) - 2);
          puVar2 = (undefined8 *)(lVar4 + uVar15 * 0x14);
          uVar7 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar7;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar4 + 0x10 + uVar15 * 0x14);
          uVar15 = (ulonglong)(*(int *)(param_1 + 0x14) - 2);
          puVar1 = (undefined8 *)(lVar4 + uVar15 * 0x14);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined4 *)(lVar4 + 0x10 + uVar15 * 0x14) = uVar3;
        }
        if (local_a0 == 3) {
          uVar15 = (ulonglong)*(uint *)(param_1 + 0x10);
          puVar1 = (undefined8 *)(lVar4 + uVar15 * 0x14);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          uVar3 = *(undefined4 *)(lVar4 + 0x10 + uVar15 * 0x14);
          puVar1 = (undefined8 *)(lVar4 + uVar15 * 0x14);
          uVar15 = (ulonglong)(*(uint *)(param_1 + 0x10) + 1);
          puVar2 = (undefined8 *)(lVar4 + uVar15 * 0x14);
          uVar7 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar7;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar4 + 0x10 + uVar15 * 0x14);
          uVar15 = (ulonglong)(*(int *)(param_1 + 0x10) + 1);
          puVar1 = (undefined8 *)(lVar4 + uVar15 * 0x14);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined4 *)(lVar4 + 0x10 + uVar15 * 0x14) = uVar3;
        }
      }
    }
  }
  return;
}

