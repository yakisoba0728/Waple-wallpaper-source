// Function: FUN_140073d00
// Addr: 140073d00
// Size: 972 bytes


void FUN_140073d00(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  undefined8 ***local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined1 local_d8 [8];
  uint local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  uint local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  longlong local_50;
  
  puVar14 = auStack_118;
  local_80 = (local_80 >> 8 & 0xfffffe) << 8;
  local_d0 = (local_d0 >> 8 & 0xfffffe) << 8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  puVar11 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar11 = (undefined8 *)*param_2;
  }
  FUN_140046620(&PTR_s_wallpaperconfig_1404df5a0,puVar11,local_88);
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_140042e10(&PTR_s_wallpaperconfig_1404df5a0,param_2,param_3,local_d8);
  FUN_140088360(param_4,&local_60);
  for (puVar10 = local_60; puVar10 != local_58; puVar10 = puVar10 + 4) {
    uVar12 = puVar10[2];
    local_f8 = (undefined8 ****)0x0;
    uStack_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    puVar15 = puVar10;
    if (0xf < puVar10[3]) {
      puVar15 = (ulonglong *)*puVar10;
    }
    if (0x7fffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_1400172e0();
    }
    puVar16 = local_60;
    if (uVar12 < 0x10) {
      local_e0 = 0xf;
      local_f8 = (undefined8 ***)*puVar15;
      uStack_f0 = puVar15[1];
      local_e8 = uVar12;
    }
    else {
      uVar13 = uVar12 | 0xf;
      if (uVar13 < 0x8000000000000000) {
        if (uVar13 < 0x16) {
          uVar13 = 0x16;
        }
        uVar1 = uVar13 + 1;
        ppppuVar4 = (undefined8 ****)0x0;
        if (uVar1 != 0) {
          if (0xfff < uVar1) {
            uVar9 = uVar13 + 0x28;
            if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_140017370();
            }
            goto LAB_140073e50;
          }
          ppppuVar4 = (undefined8 ****)FUN_14028af20(uVar1);
        }
      }
      else {
        uVar13 = 0x7fffffffffffffff;
        uVar9 = 0x8000000000000027;
LAB_140073e50:
        pppuVar3 = (undefined8 ***)FUN_14028af20(uVar9);
        if (pppuVar3 == (undefined8 ***)0x0) goto LAB_140074043;
        ppppuVar4 = (undefined8 ****)((longlong)pppuVar3 + 0x27U & 0xffffffffffffffe0);
        ppppuVar4[-1] = pppuVar3;
      }
      local_f8 = ppppuVar4;
      local_e8 = uVar12;
      local_e0 = uVar13;
      FUN_1404210f0(ppppuVar4,puVar15,uVar12 + 1);
    }
    ppppuVar4 = &local_f8;
    if (0xf < local_e0) {
      ppppuVar4 = (undefined8 ****)local_f8;
    }
    lVar5 = FUN_140087490(local_d8,ppppuVar4,local_e8 + (longlong)ppppuVar4);
    if (lVar5 == 0) {
      local_a8 = CONCAT31(local_a8._1_3_,7);
      local_a8 = local_a8 & 0xfffffeff;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      plVar6 = (longlong *)FUN_14028af20(0x10);
      *plVar6 = 0;
      plVar6[1] = 0;
      lVar5 = FUN_14028af20(0x58);
      *(longlong *)lVar5 = lVar5;
      *(longlong *)(lVar5 + 8) = lVar5;
      *(longlong *)(lVar5 + 0x10) = lVar5;
      *(undefined2 *)(lVar5 + 0x18) = 0x101;
      *plVar6 = lVar5;
      ppppuVar4 = &local_f8;
      if (0xf < local_e0) {
        ppppuVar4 = (undefined8 ****)local_f8;
      }
      local_b0 = plVar6;
      uVar7 = FUN_140086de0(local_d8,ppppuVar4,local_e8 + (longlong)ppppuVar4);
      FUN_140085610(uVar7,&local_b0);
      FUN_140085440(&local_b0);
    }
    ppppuVar4 = &local_f8;
    if (0xf < local_e0) {
      ppppuVar4 = (undefined8 ****)local_f8;
    }
    uVar7 = FUN_140086de0(param_4,ppppuVar4,local_e8 + (longlong)ppppuVar4);
    ppppuVar4 = &local_f8;
    if (0xf < local_e0) {
      ppppuVar4 = (undefined8 ****)local_f8;
    }
    uVar8 = FUN_140086de0(local_d8,ppppuVar4,local_e8 + (longlong)ppppuVar4);
    uVar8 = FUN_140086de0(uVar8,"value","");
    FUN_140085520(uVar8,uVar7);
    if (0xf < local_e0) {
      uVar12 = local_e0 + 1;
      ppppuVar4 = (undefined8 ****)local_f8;
      if (0xfff < uVar12) {
        ppppuVar4 = (undefined8 ****)local_f8[-1];
        if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)ppppuVar4))) goto LAB_140074043;
        uVar12 = local_e0 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar4,uVar12);
    }
  }
  puVar10 = local_60;
  if (local_60 != (ulonglong *)0x0) {
    for (; puVar10 != local_58; puVar10 = puVar10 + 4) {
      FUN_140017240(puVar10);
    }
    puVar10 = local_60;
    puVar14 = auStack_118;
    if (0xfff < (local_50 - (longlong)local_60 & 0xffffffffffffffe0U)) {
      puVar10 = (ulonglong *)local_60[-1];
      puVar16 = (ulonglong *)((longlong)local_60 + (-8 - (longlong)puVar10));
      puVar14 = auStack_118;
      if ((ulonglong *)0x1f < puVar16) {
LAB_140074043:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar10 = puVar16;
        puVar14 = auStack_110;
      }
    }
    *(undefined8 *)(puVar14 + -8) = 0x140074052;
    thunk_FUN_14028af80(puVar10);
  }
  *(undefined8 *)(puVar14 + -8) = 0x14007406c;
  uVar7 = FUN_140086de0(param_5,"general","");
  *(undefined8 *)(puVar14 + -8) = 0x140074078;
  FUN_140085520(uVar7,local_88);
  *(undefined8 *)(puVar14 + -8) = 0x14007408e;
  uVar7 = FUN_140086de0(param_5,"wproperties","");
  *(undefined8 *)(puVar14 + -8) = 0x14007409b;
  FUN_140085520(uVar7,puVar14 + 0x40);
  *(undefined8 *)(puVar14 + -8) = 0x1400740a5;
  FUN_140085440(puVar14 + 0x40);
  *(undefined8 *)(puVar14 + -8) = 0x1400740ae;
  FUN_140085440(local_88);
  return;
}

