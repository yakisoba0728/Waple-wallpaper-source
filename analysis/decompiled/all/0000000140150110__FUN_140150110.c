// Function: FUN_140150110
// Addr: 140150110
// Size: 1630 bytes


longlong FUN_140150110(longlong param_1,char *param_2,ulonglong param_3,char *param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  size_t sVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  char *pcVar13;
  char *pcVar14;
  ulonglong uVar15;
  undefined8 ****ppppuVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined8 ****ppppuVar26;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  size_t local_e8;
  undefined8 ***local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 ***local_b8;
  uint local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 ***local_88;
  uint local_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  char local_4e;
  undefined2 local_4d;
  char local_4b [11];
  
  puVar23 = auStack_108;
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = (undefined8 ****)0x0;
  uStack_d0 = 0;
  sVar6 = strlen(param_2);
  FUN_140017480(&local_d8,param_2,sVar6);
  uVar20 = local_c8;
  if (*(longlong *)(param_3 + 0x10) != 0) {
    if (local_c0 == local_c8) {
      local_e8 = 1;
      FUN_140053110(&local_d8,1,param_3 & 0xff,&DAT_1404752c0);
    }
    else {
      local_c8 = local_c8 + 1;
      ppppuVar7 = &local_d8;
      if (0xf < local_c0) {
        ppppuVar7 = (undefined8 ****)local_d8;
      }
      *(undefined2 *)((longlong)ppppuVar7 + uVar20) = 0x23;
    }
    puVar18 = *(undefined8 **)(param_3 + 8);
    for (puVar2 = (undefined8 *)*puVar18; puVar2 != puVar18; puVar2 = (undefined8 *)*puVar2) {
      FUN_140016fc0(&local_b8,puVar2 + 2);
      uVar20 = local_a8;
      ppppuVar7 = &local_b8;
      if (0xf < local_a0) {
        ppppuVar7 = (undefined8 ****)local_b8;
      }
      uVar21 = *(uint *)(puVar2 + 6);
      local_98 = CONCAT44(local_98._4_4_,uVar21);
      local_90 = local_c8;
      if (local_c0 - local_c8 < local_a8) {
        local_e8 = local_a8;
        FUN_140053110(&local_d8,local_a8,param_3 & 0xff);
        uVar21 = (uint)local_98;
      }
      else {
        ppppuVar16 = &local_d8;
        if (0xf < local_c0) {
          ppppuVar16 = (undefined8 ****)local_d8;
        }
        lVar12 = local_c8 + (longlong)ppppuVar16;
        local_c8 = local_c8 + local_a8;
        FUN_1404210f0(lVar12,ppppuVar7,local_a8);
        *(undefined1 *)((longlong)ppppuVar16 + local_90 + uVar20) = 0;
      }
      if (uVar21 < 10) {
        local_4d._1_1_ = (char)uVar21 + '0';
        pcVar14 = (char *)((longlong)&local_4d + 1);
      }
      else {
        pcVar14 = local_4b;
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + -2;
          uVar24 = uVar21 / 100;
          *(undefined2 *)pcVar14 = *(undefined2 *)(&DAT_140474390 + (ulonglong)(uVar21 % 100) * 2);
          uVar21 = uVar24;
        } while (9 < uVar24);
        if (uVar24 != 0) {
          pcVar14 = pcVar13 + -3;
          *pcVar14 = (char)uVar24 + '0';
        }
      }
      FUN_140053d10(&local_88,pcVar14,local_4b);
      uVar20 = uStack_70;
      ppppuVar7 = (undefined8 ****)local_88;
      ppppuVar16 = &local_88;
      if (0xf < uStack_70) {
        ppppuVar16 = (undefined8 ****)local_88;
      }
      local_90 = local_c8;
      if (local_c0 - local_c8 < local_78) {
        local_e8 = local_78;
        FUN_140053110(&local_d8,local_78,param_3 & 0xff);
        uVar20 = uStack_70;
        ppppuVar7 = (undefined8 ****)local_88;
      }
      else {
        ppppuVar26 = &local_d8;
        if (0xf < local_c0) {
          ppppuVar26 = (undefined8 ****)local_d8;
        }
        lVar12 = local_c8 + (longlong)ppppuVar26;
        local_c8 = local_78 + local_c8;
        FUN_1404210f0(lVar12,ppppuVar16,local_78);
        *(undefined1 *)((longlong)ppppuVar26 + local_90 + local_78) = 0;
      }
      if (0xf < uVar20) {
        ppppuVar16 = ppppuVar7;
        if ((0xfff < uVar20 + 1) &&
           (ppppuVar16 = (undefined8 ****)ppppuVar7[-1],
           0x1f < (ulonglong)((longlong)ppppuVar7 + (-8 - (longlong)ppppuVar16))))
        goto LAB_14015074e;
        thunk_FUN_14028af80(ppppuVar16);
      }
      FUN_140017240(&local_b8);
    }
  }
  if (param_4 != (char *)0x0) {
    sVar6 = strlen(param_4);
    if (local_c0 - local_c8 < sVar6) {
      local_e8 = sVar6;
      FUN_140053110(&local_d8,sVar6,param_3 & 0xff,param_4);
    }
    else {
      ppppuVar7 = &local_d8;
      if (0xf < local_c0) {
        ppppuVar7 = (undefined8 ****)local_d8;
      }
      lVar12 = (longlong)ppppuVar7 + local_c8;
      local_c8 = local_c8 + sVar6;
      FUN_1404210f0(lVar12,param_4,sVar6);
      *(undefined1 *)(lVar12 + sVar6) = 0;
    }
  }
  uVar25 = local_c0;
  uVar20 = local_c8;
  ppppuVar7 = (undefined8 ****)local_d8;
  uVar15 = 0xcbf29ce484222325;
  ppppuVar16 = &local_d8;
  if (0xf < local_c0) {
    ppppuVar16 = (undefined8 ****)local_d8;
  }
  uVar17 = 0;
  if (local_c8 != 0) {
    do {
      pbVar1 = (byte *)((longlong)ppppuVar16 + uVar17);
      uVar17 = uVar17 + 1;
      uVar15 = (uVar15 ^ *pbVar1) * 0x100000001b3;
    } while (uVar17 < local_c8);
  }
  uVar15 = uVar15 & *(ulonglong *)(param_1 + 0x30);
  lVar12 = *(longlong *)(param_1 + 8);
  lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar15 * 0x10);
  if (lVar22 != lVar12) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar15 * 0x10);
    while( true ) {
      puVar18 = (undefined8 *)(lVar22 + 0x10);
      if (0xf < *(ulonglong *)(lVar22 + 0x28)) {
        puVar18 = (undefined8 *)*puVar18;
      }
      ppppuVar16 = &local_d8;
      if (0xf < uVar25) {
        ppppuVar16 = ppppuVar7;
      }
      if ((uVar20 == *(ulonglong *)(lVar22 + 0x20)) &&
         ((uVar20 == 0 || (iVar5 = memcmp(ppppuVar16,puVar18,uVar20), iVar5 == 0))))
      goto LAB_1401504ee;
      if (lVar22 == lVar3) break;
      lVar22 = *(longlong *)(lVar22 + 8);
    }
  }
  lVar22 = 0;
LAB_1401504ee:
  if ((lVar22 == 0) || (lVar22 == lVar12)) {
    local_80 = (local_80 >> 8 & 0xfffffe) << 8;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar8 = FUN_140086de0(&local_88,"combos","");
    puVar18 = *(undefined8 **)(param_3 + 8);
    uVar21 = local_b0;
    for (puVar2 = (undefined8 *)*puVar18; local_b0._1_3_ = (undefined3)(uVar21 >> 8),
        puVar2 != puVar18; puVar2 = (undefined8 *)*puVar2) {
      uVar21 = *(uint *)(puVar2 + 6);
      puVar19 = puVar2 + 2;
      local_b0 = CONCAT31(local_b0._1_3_,2);
      uVar24 = local_b0 & 0xfffffeff;
      if (0xf < (ulonglong)puVar2[5]) {
        puVar19 = (undefined8 *)*puVar19;
      }
      puVar9 = (ulonglong *)FUN_140086de0(uVar8,puVar19,puVar2[4] + (longlong)puVar19);
      local_b0 = (uint)puVar9[1];
      *(uint *)(puVar9 + 1) = uVar24;
      local_b8 = (undefined8 ***)*puVar9;
      *puVar9 = (ulonglong)uVar21;
      uVar20 = puVar9[2];
      puVar9[2] = 0;
      local_98 = puVar9[4];
      local_a0 = puVar9[3];
      puVar9[3] = 0;
      puVar9[4] = 0;
      local_a8 = uVar20;
      FUN_140086d30(&local_b8);
      if (uVar20 != 0) {
        FUN_140017240(uVar20 + 0x40);
        FUN_140017240(uVar20 + 0x20);
        FUN_140017240(uVar20);
        thunk_FUN_14028af80(uVar20,0x60);
      }
      uVar21 = local_b0;
    }
    if (param_4 != (char *)0x0) {
      local_b0 = CONCAT31(local_b0._1_3_,4);
      sVar6 = strlen(param_4);
      puVar10 = (undefined4 *)_malloc_base((sVar6 & 0xffffffff) + 5);
      if (puVar10 == (undefined4 *)0x0) goto LAB_140150755;
      *puVar10 = (int)sVar6;
      uVar21 = local_b0 | 0x100;
      FUN_1404210f0(puVar10 + 1,param_4,sVar6 & 0xffffffff);
      *(undefined1 *)((longlong)puVar10 + (sVar6 & 0xffffffff) + 4) = 0;
      plVar11 = (longlong *)FUN_140086de0(&local_88,"shader","");
      local_b0 = *(uint *)(plVar11 + 1);
      *(uint *)(plVar11 + 1) = uVar21;
      local_b8 = (undefined8 ***)*plVar11;
      *plVar11 = (longlong)puVar10;
      uVar20 = plVar11[2];
      plVar11[2] = 0;
      local_98 = plVar11[4];
      local_a0 = plVar11[3];
      plVar11[3] = 0;
      plVar11[4] = 0;
      local_a8 = uVar20;
      FUN_140086d30(&local_b8);
      uVar21 = local_b0;
      if (uVar20 != 0) {
        FUN_140017240(uVar20 + 0x40);
        FUN_140017240(uVar20 + 0x20);
        FUN_140017240(uVar20);
        thunk_FUN_14028af80(uVar20,0x60);
        uVar21 = local_b0;
      }
    }
    local_b0 = uVar21;
    lVar12 = FUN_1401515b0(param_1,param_2,&local_88,0);
    *(uint *)(lVar12 + 0x1f8) = *(uint *)(lVar12 + 0x1f8) | 0x1000;
    plVar11 = (longlong *)FUN_140151f40(param_1,&local_d8);
    *plVar11 = lVar12;
    FUN_140085440(&local_88);
    ppppuVar7 = (undefined8 ****)local_d8;
    uVar25 = local_c0;
  }
  else {
    lVar12 = *(longlong *)(lVar22 + 0x30);
  }
  if (0xf < uVar25) {
    uVar20 = uVar25 + 1;
    ppppuVar16 = ppppuVar7;
    if (0xfff < uVar20) {
      ppppuVar16 = (undefined8 ****)ppppuVar7[-1];
      if (0x1f < (ulonglong)((longlong)ppppuVar7 + (-8 - (longlong)ppppuVar16))) {
LAB_14015074e:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar23 = auStack_100;
LAB_140150755:
        *(undefined8 *)(puVar23 + -8) = 0x140150765;
        FUN_140017170(&local_88,
                      "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                     );
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar23 + -8) = &UNK_14015076e;
        FUN_140084bc0(&local_88);
      }
      uVar20 = uVar25 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar16,uVar20);
  }
  return lVar12;
}

