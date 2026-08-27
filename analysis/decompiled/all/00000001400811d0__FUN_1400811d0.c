// Function: FUN_1400811d0
// Addr: 1400811d0
// Size: 1384 bytes


ulonglong * FUN_1400811d0(longlong *param_1,ulonglong *param_2)

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
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint local_res8;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined4 local_a8;
  byte local_a0 [4];
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_88 [72];
  
  lVar18 = param_1[10];
  uVar9 = *(undefined4 *)((longlong)param_1 + 0x54);
  lVar14 = param_1[0xb];
  uVar10 = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_a8 = (undefined4)param_1[0xc];
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
    FUN_1404217a0((longlong)param_1 + lVar11 + 0x11,0,0x3f - lVar11);
    uVar16 = 0x40;
  }
  if (uVar16 < uVar21) {
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
  FUN_1400802f0(param_1,param_1 + 2);
  if (0x40 < uVar21) {
    FUN_1400802f0(param_1,local_88);
  }
  local_a0[0] = *(byte *)((longlong)param_1 + 0x53);
  local_a0[1] = *(undefined1 *)((longlong)param_1 + 0x52);
  local_a0[2] = *(undefined1 *)((longlong)param_1 + 0x51);
  local_a0[3] = (byte)param_1[10];
  *(int *)(param_1 + 10) = (int)lVar18;
  local_9c = *(undefined1 *)((longlong)param_1 + 0x57);
  local_9b = *(undefined1 *)((longlong)param_1 + 0x56);
  local_9a = *(undefined1 *)((longlong)param_1 + 0x55);
  local_99 = *(undefined1 *)((longlong)param_1 + 0x54);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar9;
  local_98 = *(undefined1 *)((longlong)param_1 + 0x5b);
  local_97 = *(undefined1 *)((longlong)param_1 + 0x5a);
  local_96 = *(undefined1 *)((longlong)param_1 + 0x59);
  local_95 = (undefined1)param_1[0xb];
  *(int *)(param_1 + 0xb) = (int)lVar14;
  local_94 = *(undefined1 *)((longlong)param_1 + 0x5f);
  local_93 = *(undefined1 *)((longlong)param_1 + 0x5e);
  local_92 = *(undefined1 *)((longlong)param_1 + 0x5d);
  local_91 = *(undefined1 *)((longlong)param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar10;
  local_90 = *(undefined1 *)((longlong)param_1 + 99);
  local_8f = *(undefined1 *)((longlong)param_1 + 0x62);
  local_8e = *(undefined1 *)((longlong)param_1 + 0x61);
  local_8d = (undefined1)param_1[0xc];
  *(undefined4 *)(param_1 + 0xc) = local_a8;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  FUN_140052fb0(param_2,0x28);
  uVar16 = 0;
  local_res8 = 0;
  while( true ) {
    bVar7 = local_a0[uVar16];
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
LAB_1400815b7:
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
LAB_140081734:
                    /* WARNING: Subroutine does not return */
        FUN_1400172e0();
      }
      uVar15 = uVar16 + 1 | 0xf;
      if (uVar15 < 0x8000000000000000) {
        if (0x7fffffffffffffff - (uVar21 >> 1) < uVar21) {
          uVar15 = 0x7fffffffffffffff;
          uVar19 = 0x8000000000000027;
          goto LAB_140081667;
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
            puVar20 = &uStack_c8;
            if (uVar19 <= uVar22) goto LAB_14008172e;
            goto LAB_140081667;
          }
          uVar22 = FUN_14028af20(uVar22);
        }
      }
      else {
        uVar15 = 0x7fffffffffffffff;
        uVar19 = 0x8000000000000027;
LAB_140081667:
        lVar18 = FUN_14028af20(uVar19);
        if (lVar18 == 0) goto LAB_140081727;
        uVar22 = lVar18 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar22 - 8) = lVar18;
      }
      param_2[2] = uVar16 + 1;
      param_2[3] = uVar15;
      if (uVar21 < 0x10) {
        FUN_1404210f0(uVar22,param_2,uVar16);
        *(char *)(uVar22 + uVar16) = cVar8;
        *(undefined1 *)(uVar22 + 1 + uVar16) = 0;
      }
      else {
        uVar15 = *param_2;
        FUN_1404210f0(uVar22,uVar15,uVar16);
        *(char *)(uVar22 + uVar16) = cVar8;
        *(undefined1 *)(uVar22 + 1 + uVar16) = 0;
        if (uVar21 + 1 < 0x1000) {
          thunk_FUN_14028af80(uVar15);
        }
        else {
          if (0x1f < (uVar15 - *(longlong *)(uVar15 - 8)) - 8) goto LAB_140081727;
          thunk_FUN_14028af80(*(longlong *)(uVar15 - 8),uVar21 + 0x28);
        }
      }
      *param_2 = uVar22;
    }
    local_res8 = local_res8 + 1;
    uVar16 = (ulonglong)local_res8;
    if (0x13 < (int)local_res8) {
      return param_2;
    }
  }
  if (uVar21 == 0x7fffffffffffffff) goto LAB_140081734;
  uVar15 = uVar21 + 1 | 0xf;
  if (uVar15 < 0x8000000000000000) {
    if (0x7fffffffffffffff - (uVar16 >> 1) < uVar16) {
      uVar15 = 0x7fffffffffffffff;
      uVar19 = 0x8000000000000027;
      goto LAB_14008150d;
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
        puVar20 = &uStack_c8;
        if (uVar19 <= uVar22) goto LAB_14008172e;
        goto LAB_14008150d;
      }
      uVar22 = FUN_14028af20(uVar22);
    }
LAB_140081534:
    param_2[3] = uVar15;
    param_2[2] = uVar21 + 1;
    if (uVar16 < 0x10) {
      FUN_1404210f0(uVar22,param_2,uVar21);
      *(char *)(uVar22 + uVar21) = cVar8;
      *(undefined1 *)(uVar22 + 1 + uVar21) = 0;
    }
    else {
      uVar15 = *param_2;
      FUN_1404210f0(uVar22,uVar15,uVar21);
      *(char *)(uVar22 + uVar21) = cVar8;
      *(undefined1 *)(uVar22 + 1 + uVar21) = 0;
      if (uVar16 + 1 < 0x1000) {
        thunk_FUN_14028af80(uVar15);
      }
      else {
        if (0x1f < (uVar15 - *(longlong *)(uVar15 - 8)) - 8) goto LAB_140081727;
        thunk_FUN_14028af80(*(longlong *)(uVar15 - 8),uVar16 + 0x28);
      }
    }
    *param_2 = uVar22;
    goto LAB_1400815b7;
  }
  uVar15 = 0x7fffffffffffffff;
  uVar19 = 0x8000000000000027;
LAB_14008150d:
  lVar18 = FUN_14028af20(uVar19);
  if (lVar18 != 0) {
    uVar22 = lVar18 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar22 - 8) = lVar18;
    goto LAB_140081534;
  }
LAB_140081727:
  pcVar12 = (code *)swi(0x29);
  (*pcVar12)(5);
  puVar20 = (undefined8 *)auStack_c0;
LAB_14008172e:
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar20 + -8) = &UNK_140081733;
  FUN_140017370();
}

