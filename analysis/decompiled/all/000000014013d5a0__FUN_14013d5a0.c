// Function: FUN_14013d5a0
// Addr: 14013d5a0
// Size: 1343 bytes


/* WARNING: Removing unreachable block (ram,0x00014013d806) */

void FUN_14013d5a0(longlong param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  size_t _Size;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 *_Buf1;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  longlong lVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  ulonglong local_88;
  ulonglong local_80;
  float local_78 [2];
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  puVar16 = auStack_d8;
  local_78[0] = 0.0;
  uVar11 = 0;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  local_70 = (undefined8 *)FUN_14028af20(0x38);
  *local_70 = local_70;
  local_70[1] = local_70;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 7;
  local_40 = 8;
  local_78[0] = 1.0;
  FUN_140011f50(&local_60,0x10,local_70);
  lVar15 = *(longlong *)(param_1 + 0x60);
  for (lVar17 = *(longlong *)(param_1 + 0x58); lVar17 != lVar15; lVar17 = lVar17 + 0x48) {
    uVar2 = *(undefined4 *)(lVar17 + 0x40);
    puVar6 = (undefined4 *)FUN_1400ddcb0(local_78,lVar17);
    *puVar6 = uVar2;
  }
  if (local_68 == 0) goto LAB_14013da8f;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),&local_98);
  puVar13 = local_70;
  uVar14 = local_80;
  puVar18 = (undefined1 *)CONCAT71(uStack_97,local_98);
  uVar19 = 0xcbf29ce484222325;
  puVar10 = &local_98;
  if (0xf < local_80) {
    puVar10 = puVar18;
  }
  uVar9 = 0xcbf29ce484222325;
  if (local_88 != 0) {
    do {
      pbVar1 = puVar10 + uVar11;
      uVar11 = uVar11 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar11 < local_88);
  }
  puVar8 = *(undefined8 **)(local_60 + 8 + (local_48 & uVar9) * 0x10);
  if (puVar8 != local_70) {
    puVar7 = *(undefined8 **)(local_60 + (local_48 & uVar9) * 0x10);
    while( true ) {
      puVar12 = puVar8 + 2;
      if (0xf < (ulonglong)puVar8[5]) {
        puVar12 = (undefined8 *)*puVar12;
      }
      puVar10 = &local_98;
      if (0xf < uVar14) {
        puVar10 = puVar18;
      }
      if ((local_88 == puVar8[4]) &&
         ((local_88 == 0 || (iVar5 = memcmp(puVar10,puVar12,local_88), iVar5 == 0))))
      goto LAB_14013d748;
      if (puVar8 == puVar7) break;
      puVar8 = (undefined8 *)puVar8[1];
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_14013d748:
  puVar7 = puVar13;
  if (puVar8 != (undefined8 *)0x0) {
    puVar7 = puVar8;
  }
  if (puVar7 != puVar13) {
    uVar2 = *(undefined4 *)(puVar7 + 6);
    uVar11 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0xf;
    local_b8 = (ulonglong)CONCAT14(s_login_1404749a8[4],s_login_1404749a8._0_4_);
    local_a8 = 5;
    do {
      pbVar1 = (byte *)((longlong)&local_b8 + uVar11);
      uVar11 = uVar11 + 1;
      uVar19 = (uVar19 ^ *pbVar1) * 0x100000001b3;
    } while (uVar11 < 5);
    puVar8 = *(undefined8 **)(local_60 + 8 + (uVar19 & local_48) * 0x10);
    if (puVar8 != puVar13) {
      puVar7 = *(undefined8 **)(local_60 + (uVar19 & local_48) * 0x10);
      while( true ) {
        puVar13 = puVar8 + 2;
        if (0xf < (ulonglong)puVar8[5]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        if ((puVar8[4] == 5) && (iVar5 = memcmp(&local_b8,puVar13,5), iVar5 == 0))
        goto LAB_14013d9bc;
        puVar13 = puVar8;
        if (puVar8 == puVar7) break;
        puVar8 = (undefined8 *)puVar8[1];
      }
    }
    if (local_68 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("unordered_map/set too long");
    }
    puVar8 = (undefined8 *)FUN_14028af20(0x38);
    puVar8[2] = local_b8;
    puVar8[3] = uStack_b0;
    puVar8[4] = local_a8;
    puVar8[5] = uStack_a0;
    local_a8 = 0;
    uStack_a0 = 0xf;
    local_b8 = local_b8 & 0xffffffffffffff00;
    *(undefined4 *)(puVar8 + 6) = 0;
    if (local_78[0] < (float)(local_68 + 1) / (float)local_40) {
      FUN_1400e1120(local_78);
      puVar7 = *(undefined8 **)(local_60 + 8 + (uVar19 & local_48) * 0x10);
      puVar13 = local_70;
      if (puVar7 != local_70) {
        uVar11 = puVar8[5];
        _Size = puVar8[4];
        puVar12 = *(undefined8 **)(local_60 + (uVar19 & local_48) * 0x10);
        while( true ) {
          puVar13 = puVar7 + 2;
          if (0xf < (ulonglong)puVar7[5]) {
            puVar13 = (undefined8 *)*puVar13;
          }
          if (uVar11 < 0x10) {
            _Buf1 = puVar8 + 2;
          }
          else {
            _Buf1 = (undefined8 *)puVar8[2];
          }
          if ((_Size == puVar7[4]) &&
             ((_Size == 0 || (iVar5 = memcmp(_Buf1,puVar13,_Size), iVar5 == 0)))) break;
          puVar13 = puVar7;
          if (puVar7 == puVar12) goto LAB_14013d971;
          puVar7 = (undefined8 *)puVar7[1];
        }
        puVar13 = (undefined8 *)*puVar7;
      }
    }
LAB_14013d971:
    puVar7 = (undefined8 *)puVar13[1];
    local_68 = local_68 + 1;
    *puVar8 = puVar13;
    puVar8[1] = puVar7;
    *puVar7 = puVar8;
    puVar13[1] = puVar8;
    uVar19 = uVar19 & local_48;
    puVar12 = *(undefined8 **)(local_60 + uVar19 * 0x10);
    if (puVar12 == local_70) {
      *(undefined8 **)(local_60 + uVar19 * 0x10) = puVar8;
LAB_14013d9b7:
      *(undefined8 **)(local_60 + 8 + uVar19 * 0x10) = puVar8;
    }
    else if (puVar12 == puVar13) {
      *(undefined8 **)(local_60 + uVar19 * 0x10) = puVar8;
    }
    else if (*(undefined8 **)(local_60 + 8 + uVar19 * 0x10) == puVar7) goto LAB_14013d9b7;
LAB_14013d9bc:
    *(undefined4 *)(puVar8 + 6) = uVar2;
    if (0xf < uStack_a0) {
      uVar14 = uStack_a0 + 1;
      uVar11 = local_b8;
      if (0xfff < uVar14) {
        uVar11 = *(ulonglong *)(local_b8 - 8);
        if (0x1f < (local_b8 - uVar11) - 8) goto LAB_14013dac7;
        uVar14 = uStack_a0 + 0x28;
      }
      thunk_FUN_14028af80(uVar11,uVar14);
    }
    puVar18 = (undefined1 *)CONCAT71(uStack_97,local_98);
    uVar14 = local_80;
  }
  lVar15 = *(longlong *)(param_1 + 0xb8);
  lVar17 = *(longlong *)(param_1 + 0xc0);
  if (lVar15 != lVar17) {
    do {
      plVar3 = *(longlong **)(lVar15 + 0x38);
      if (plVar3 == (longlong *)0x0) goto LAB_14013dace;
      (**(code **)(*plVar3 + 0x10))(plVar3,local_78);
      lVar15 = lVar15 + 0x40;
    } while (lVar15 != lVar17);
    puVar18 = (undefined1 *)CONCAT71(uStack_97,local_98);
    uVar14 = local_80;
  }
  if (0xf < uVar14) {
    uVar11 = uVar14 + 1;
    puVar10 = puVar18;
    if (0xfff < uVar11) {
      puVar10 = *(undefined1 **)(puVar18 + -8);
      if ((undefined1 *)0x1f < puVar18 + (-8 - (longlong)puVar10)) {
LAB_14013dac7:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar16 = auStack_d0;
LAB_14013dace:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar16 + -8) = &UNK_14013dad3;
        FUN_14028c2c0();
      }
      uVar11 = uVar14 + 0x28;
    }
    thunk_FUN_14028af80(puVar10,uVar11);
  }
  local_88 = 0;
  local_80 = 0xf;
  local_98 = 0;
LAB_14013da8f:
  FUN_14000d9e0(&local_60);
  FUN_140030c70(&local_70);
  return;
}

