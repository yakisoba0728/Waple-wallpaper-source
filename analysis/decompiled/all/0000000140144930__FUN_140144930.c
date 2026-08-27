// Function: FUN_140144930
// Addr: 140144930
// Size: 1496 bytes


ulonglong * FUN_140144930(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  code *pcVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint local_res8;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  byte local_88 [4];
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  
  lVar18 = param_1[10];
  uVar9 = *(undefined4 *)((longlong)param_1 + 0x54);
  lVar14 = param_1[0xb];
  uVar10 = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_98 = (undefined4)param_1[0xc];
  local_94 = *(undefined4 *)((longlong)param_1 + 100);
  local_90 = (undefined4)param_1[0xd];
  local_8c = *(undefined4 *)((longlong)param_1 + 0x6c);
  uVar16 = param_1[1];
  uVar15 = uVar16 * 8 & 0xfffffffffffffe00;
  uVar21 = uVar15 | 0x1c0;
  if (0x1c0 < ((uint)(uVar16 * 8) & 0x1ff | 1)) {
    uVar21 = uVar15 + 0x3c0;
  }
  uVar21 = uVar21 >> 3;
  if (uVar16 < 0x40) {
    *(undefined1 *)(uVar16 + 0x10 + (longlong)param_1) = 0x80;
  }
  else {
    local_88[0] = 0x80;
  }
  lVar11 = param_1[1];
  uVar16 = lVar11 + 1;
  if (uVar16 < 0x40) {
    puStack_c0 = (undefined *)0x1401449ee;
    FUN_1404217a0((longlong)param_1 + lVar11 + 0x11,0,0x3f - lVar11);
    uVar16 = 0x40;
  }
  if (uVar16 < uVar21) {
    puStack_c0 = (undefined *)0x140144a0a;
    FUN_1404217a0((longlong)&uStack_c8 + uVar16,0,uVar21 - uVar16);
  }
  uVar16 = param_1[1] + *param_1;
  if (uVar21 < 0x40) {
    plVar13 = param_1 + 2;
    lVar11 = (longlong)param_1 + 0x11;
    lVar1 = (longlong)param_1 + 0x12;
    lVar2 = (longlong)param_1 + 0x13;
    lVar3 = (longlong)param_1 + 0x14;
    lVar4 = (longlong)param_1 + 0x15;
    lVar5 = (longlong)param_1 + 0x16;
    lVar6 = (longlong)param_1 + 0x17;
  }
  else {
    plVar13 = &uStack_c8;
    lVar11 = (longlong)&uStack_c8 + 1;
    lVar1 = (longlong)&uStack_c8 + 2;
    lVar2 = (longlong)&uStack_c8 + 3;
    lVar3 = (longlong)&uStack_c8 + 4;
    lVar4 = (longlong)&uStack_c8 + 5;
    lVar5 = (longlong)&uStack_c8 + 6;
    lVar6 = (longlong)&uStack_c8 + 7;
  }
  *(char *)((longlong)plVar13 + uVar21) = (char)(uVar16 >> 0x35);
  *(char *)(lVar11 + uVar21) = (char)(uVar16 >> 0x2d);
  *(char *)(lVar1 + uVar21) = (char)(uVar16 >> 0x25);
  *(char *)(lVar2 + uVar21) = (char)(uVar16 >> 0x1d);
  *(char *)(lVar3 + uVar21) = (char)(uVar16 >> 0x15);
  *(char *)(lVar5 + uVar21) = (char)(uVar16 >> 5);
  *(char *)(lVar4 + uVar21) = (char)(uVar16 >> 0xd);
  *(char *)(lVar6 + uVar21) = (char)uVar16 * '\b';
  puStack_c0 = (undefined *)0x140144ad3;
  FUN_140141a80(param_1,param_1 + 2);
  if (0x40 < uVar21) {
    puStack_c0 = (undefined *)0x140144ae5;
    FUN_140141a80(param_1,local_88);
  }
  local_88[0] = *(byte *)((longlong)param_1 + 0x53);
  local_88[1] = *(undefined1 *)((longlong)param_1 + 0x52);
  local_88[2] = *(undefined1 *)((longlong)param_1 + 0x51);
  local_88[3] = (byte)param_1[10];
  *(int *)(param_1 + 10) = (int)lVar18;
  local_84 = *(undefined1 *)((longlong)param_1 + 0x57);
  local_83 = *(undefined1 *)((longlong)param_1 + 0x56);
  local_82 = *(undefined1 *)((longlong)param_1 + 0x55);
  local_81 = *(undefined1 *)((longlong)param_1 + 0x54);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar9;
  local_80 = *(undefined1 *)((longlong)param_1 + 0x5b);
  local_7f = *(undefined1 *)((longlong)param_1 + 0x5a);
  local_7e = *(undefined1 *)((longlong)param_1 + 0x59);
  local_7d = (undefined1)param_1[0xb];
  *(int *)(param_1 + 0xb) = (int)lVar14;
  local_7c = *(undefined1 *)((longlong)param_1 + 0x5f);
  local_7b = *(undefined1 *)((longlong)param_1 + 0x5e);
  local_7a = *(undefined1 *)((longlong)param_1 + 0x5d);
  local_79 = *(undefined1 *)((longlong)param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar10;
  local_78 = *(undefined1 *)((longlong)param_1 + 99);
  local_77 = *(undefined1 *)((longlong)param_1 + 0x62);
  local_76 = *(undefined1 *)((longlong)param_1 + 0x61);
  local_75 = (undefined1)param_1[0xc];
  *(undefined4 *)(param_1 + 0xc) = local_98;
  local_74 = *(undefined1 *)((longlong)param_1 + 0x67);
  local_73 = *(undefined1 *)((longlong)param_1 + 0x66);
  local_72 = *(undefined1 *)((longlong)param_1 + 0x65);
  local_71 = *(undefined1 *)((longlong)param_1 + 100);
  *(undefined4 *)((longlong)param_1 + 100) = local_94;
  local_70 = *(undefined1 *)((longlong)param_1 + 0x6b);
  local_6f = *(undefined1 *)((longlong)param_1 + 0x6a);
  local_6e = *(undefined1 *)((longlong)param_1 + 0x69);
  local_6d = (undefined1)param_1[0xd];
  *(undefined4 *)(param_1 + 0xd) = local_90;
  local_6c = *(undefined1 *)((longlong)param_1 + 0x6f);
  local_6b = *(undefined1 *)((longlong)param_1 + 0x6e);
  local_6a = *(undefined1 *)((longlong)param_1 + 0x6d);
  local_69 = *(undefined1 *)((longlong)param_1 + 0x6c);
  *(undefined4 *)((longlong)param_1 + 0x6c) = local_8c;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  puStack_c0 = (undefined *)0x140144c1b;
  FUN_140052fb0(param_2,0x40);
  uVar16 = 0;
  local_res8 = 0;
  while( true ) {
    bVar7 = local_88[uVar16];
    uVar16 = param_2[3];
    cVar8 = "0123456789abcdef"[bVar7 >> 4];
    uVar21 = param_2[2];
    if (uVar16 <= uVar21) break;
    param_2[2] = uVar21 + 1;
    puVar17 = param_2;
    if (0xf < uVar16) {
      puVar17 = (ulonglong *)*param_2;
    }
    *(char *)((longlong)puVar17 + uVar21) = cVar8;
    *(undefined1 *)((longlong)puVar17 + uVar21 + 1) = 0;
LAB_140144d8a:
    uVar16 = param_2[2];
    uVar21 = param_2[3];
    cVar8 = "0123456789abcdef"[bVar7 & 0xf];
    if (uVar16 < uVar21) {
      param_2[2] = uVar16 + 1;
      puVar17 = param_2;
      if (0xf < uVar21) {
        puVar17 = (ulonglong *)*param_2;
      }
      *(char *)((longlong)puVar17 + uVar16) = cVar8;
      *(undefined1 *)((longlong)puVar17 + uVar16 + 1) = 0;
    }
    else {
      if (uVar16 == 0x7fffffffffffffff) {
LAB_140144f04:
                    /* WARNING: Subroutine does not return */
        puStack_c0 = &UNK_140144f09;
        FUN_1400172e0();
      }
      uVar15 = uVar16 + 1 | 0xf;
      if (uVar15 < 0x8000000000000000) {
        if (0x7fffffffffffffff - (uVar21 >> 1) < uVar21) {
          uVar15 = 0x7fffffffffffffff;
          uVar19 = 0x8000000000000027;
          goto LAB_140144e3a;
        }
        uVar22 = (uVar21 >> 1) + uVar21;
        if (uVar15 < uVar22) {
          uVar15 = uVar22;
        }
        uVar22 = uVar15 + 1;
        if (uVar22 == 0) {
          uVar22 = 0;
        }
        else {
          if (0xfff < uVar22) {
            uVar19 = uVar15 + 0x28;
            puVar20 = auStack_b8;
            if (uVar19 <= uVar22) goto LAB_140144efe;
            goto LAB_140144e3a;
          }
          puStack_c0 = (undefined *)0x140144e5e;
          uVar22 = FUN_14028af20(uVar22);
        }
      }
      else {
        uVar15 = 0x7fffffffffffffff;
        uVar19 = 0x8000000000000027;
LAB_140144e3a:
        puStack_c0 = (undefined *)0x140144e3f;
        lVar18 = FUN_14028af20(uVar19);
        if (lVar18 == 0) goto LAB_140144ef7;
        uVar22 = lVar18 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar22 - 8) = lVar18;
      }
      param_2[2] = uVar16 + 1;
      param_2[3] = uVar15;
      if (uVar21 < 0x10) {
        puStack_c0 = (undefined *)0x140144ec5;
        FUN_1404210f0(uVar22,param_2,uVar16);
        *(char *)(uVar22 + uVar16) = cVar8;
        *(undefined1 *)(uVar22 + 1 + uVar16) = 0;
      }
      else {
        uVar15 = *param_2;
        puStack_c0 = (undefined *)0x140144e80;
        FUN_1404210f0(uVar22,uVar15,uVar16);
        *(char *)(uVar22 + uVar16) = cVar8;
        *(undefined1 *)(uVar22 + 1 + uVar16) = 0;
        if (uVar21 + 1 < 0x1000) {
          puStack_c0 = (undefined *)0x140144ebb;
          thunk_FUN_14028af80(uVar15);
        }
        else {
          if (0x1f < (uVar15 - *(longlong *)(uVar15 - 8)) - 8) goto LAB_140144ef7;
          puStack_c0 = (undefined *)0x140144eb1;
          thunk_FUN_14028af80(*(longlong *)(uVar15 - 8),uVar21 + 0x28);
        }
      }
      *param_2 = uVar22;
    }
    local_res8 = local_res8 + 1;
    uVar16 = (ulonglong)local_res8;
    if (0x1f < (int)local_res8) {
      return param_2;
    }
  }
  if (uVar21 == 0x7fffffffffffffff) goto LAB_140144f04;
  uVar15 = uVar21 + 1 | 0xf;
  if (uVar15 < 0x8000000000000000) {
    if (0x7fffffffffffffff - (uVar16 >> 1) < uVar16) {
      uVar15 = 0x7fffffffffffffff;
      uVar19 = 0x8000000000000027;
      goto LAB_140144ce0;
    }
    uVar22 = (uVar16 >> 1) + uVar16;
    if (uVar15 < uVar22) {
      uVar15 = uVar22;
    }
    uVar22 = uVar15 + 1;
    if (uVar22 == 0) {
      uVar22 = 0;
    }
    else {
      if (0xfff < uVar22) {
        uVar19 = uVar15 + 0x28;
        puVar20 = auStack_b8;
        if (uVar19 <= uVar22) goto LAB_140144efe;
        goto LAB_140144ce0;
      }
      puStack_c0 = (undefined *)0x140144d04;
      uVar22 = FUN_14028af20(uVar22);
    }
LAB_140144d07:
    param_2[3] = uVar15;
    param_2[2] = uVar21 + 1;
    if (uVar16 < 0x10) {
      puStack_c0 = (undefined *)0x140144d73;
      FUN_1404210f0(uVar22,param_2,uVar21);
      *(char *)(uVar22 + uVar21) = cVar8;
      *(undefined1 *)(uVar22 + 1 + uVar21) = 0;
    }
    else {
      uVar15 = *param_2;
      puStack_c0 = (undefined *)0x140144d2a;
      FUN_1404210f0(uVar22,uVar15,uVar21);
      *(char *)(uVar22 + uVar21) = cVar8;
      *(undefined1 *)(uVar22 + 1 + uVar21) = 0;
      if (uVar16 + 1 < 0x1000) {
        puStack_c0 = (undefined *)0x140144d69;
        thunk_FUN_14028af80(uVar15);
      }
      else {
        if (0x1f < (uVar15 - *(longlong *)(uVar15 - 8)) - 8) goto LAB_140144ef7;
        puStack_c0 = (undefined *)0x140144d5f;
        thunk_FUN_14028af80(*(longlong *)(uVar15 - 8),uVar16 + 0x28);
      }
    }
    *param_2 = uVar22;
    goto LAB_140144d8a;
  }
  uVar15 = 0x7fffffffffffffff;
  uVar19 = 0x8000000000000027;
LAB_140144ce0:
  puStack_c0 = (undefined *)0x140144ce5;
  lVar18 = FUN_14028af20(uVar19);
  if (lVar18 != 0) {
    uVar22 = lVar18 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar22 - 8) = lVar18;
    goto LAB_140144d07;
  }
LAB_140144ef7:
  pcVar12 = (code *)swi(0x29);
  (*pcVar12)(5);
  puVar20 = auStack_b0;
LAB_140144efe:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar20 + -8) = &UNK_140144f03;
  FUN_140017370();
}

