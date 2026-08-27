// Function: FUN_14020ae00
// Addr: 14020ae00
// Size: 2322 bytes


void FUN_14020ae00(longlong param_1,float param_2,float param_3)

{
  uint *puVar1;
  char *_Str;
  longlong *plVar2;
  uint *puVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  size_t sVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  float *pfVar22;
  uint *puVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  int local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  char local_98;
  undefined8 *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  puVar21 = auStack_d8;
  if ((*(longlong *)(param_1 + 0x4b8) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 8) != 0)) {
    puVar18 = *(undefined8 **)(param_1 + 0x490);
    if (puVar18 != (undefined8 *)0x0) {
      (**(code **)*puVar18)(puVar18,1);
    }
    *(undefined8 *)(param_1 + 0x490) = 0;
    puVar18 = *(undefined8 **)(*(longlong *)(param_1 + 0x4b8) + 0x3f8);
    if (puVar18 != (undefined8 *)0x0) {
      (**(code **)*puVar18)(puVar18,1);
    }
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x3f8) = 0;
    puVar18 = *(undefined8 **)(*(longlong *)(param_1 + 0x4b8) + 0x18);
    _Str = *(char **)*puVar18;
    local_88 = puVar18;
    sVar8 = strlen(_Str);
    FUN_140017480(&local_78,_Str,sVar8);
    local_80 = puVar18[0xb];
    iVar7 = *(int *)(puVar18 + 8);
    uVar25 = *(uint *)(puVar18 + 7);
    lVar16 = puVar18[9];
    uVar19 = (longlong)iVar7 / (longlong)*(int *)((longlong)puVar18 + 0x3c);
    bVar15 = (byte)((uint)*(undefined4 *)(*(longlong *)(param_1 + 0x4b8) + 0x390) >> 0x1f) ^ 1;
    local_b0 = *(int *)(puVar18 + 10) / 2;
    iVar26 = (int)uVar19;
    if ((((*(int *)(param_1 + 800) < 1) && ((*(uint *)(param_1 + 0x304) >> 4 & 1) == 0)) &&
        ((lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0xd0), lVar10 == 0 ||
         ((*(uint *)(lVar10 + 0x1c) >> 2 & 1) == 0)))) && (bVar15 == 0)) {
      bVar6 = true;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2);
      uVar9 = SUB168(ZEXT816(4) * auVar5,0);
      if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
        uVar9 = 0xffffffffffffffff;
      }
      lVar10 = thunk_FUN_14028af20(uVar9);
      FUN_1404210f0(lVar10,lVar16,(longlong)*(int *)(puVar18 + 8));
      iVar7 = 0;
      uVar28 = 0;
      do {
        iVar24 = (int)uVar28;
        if (iVar24 == 7) break;
        if (((&DAT_140484a20)[uVar28] & uVar25) != 0) {
          iVar7 = iVar7 + (&DAT_1404849b0)[uVar28];
        }
        if (iVar24 == 6) break;
        if (((&DAT_140484a24)[uVar28] & uVar25) != 0) {
          iVar7 = iVar7 + (&DAT_1404849b4)[uVar28];
        }
        uVar28 = (ulonglong)(iVar24 + 2U);
      } while ((int)(iVar24 + 2U) < 0x1a);
      iVar24 = 0;
      pfVar22 = (float *)(lVar10 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2) * 4);
      iVar7 = (int)(*(int *)((longlong)puVar18 + 0x3c) +
                   (*(int *)((longlong)puVar18 + 0x3c) >> 0x1f & 3U)) >> 2;
      if (3 < iVar26) {
        lVar16 = (longlong)iVar7;
        do {
          iVar24 = iVar24 + 4;
          *pfVar22 = param_2 * *pfVar22;
          pfVar22[1] = param_3 * pfVar22[1];
          pfVar22[lVar16] = param_2 * pfVar22[lVar16];
          pfVar22[lVar16 + 1] = param_3 * pfVar22[lVar16 + 1];
          pfVar22[lVar16 * 2] = param_2 * pfVar22[lVar16 * 2];
          pfVar22[lVar16 * 2 + 1] = param_3 * pfVar22[lVar16 * 2 + 1];
          pfVar22[lVar16 * 3] = param_2 * pfVar22[lVar16 * 3];
          pfVar22[lVar16 * 3 + 1] = param_3 * pfVar22[lVar16 * 3 + 1];
          pfVar22 = pfVar22 + lVar16 * 4;
        } while (iVar24 < iVar26 + -3);
      }
      for (; lVar16 = lVar10, iVar24 < iVar26; iVar24 = iVar24 + 1) {
        *pfVar22 = param_2 * *pfVar22;
        pfVar22[1] = param_3 * pfVar22[1];
        pfVar22 = pfVar22 + iVar7;
      }
    }
    else {
      bVar6 = false;
      lVar10 = lVar16;
      lVar16 = 0;
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    local_98 = ((byte)(*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x18) + 0x18) >> 3)
               & 1) * '\x02';
    local_a0 = 0;
    local_a8 = 0;
    local_b8 = local_80;
    uVar9 = (**(code **)(*plVar2 + 0x40))(plVar2,uVar25,lVar10,uVar19 & 0xffffffff);
    *(undefined8 *)(param_1 + 0x490) = uVar9;
    thunk_FUN_14028af80(lVar16);
    if (bVar15 != 0) {
      local_98 = '\0';
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x18);
      lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x4b8) + 0x390) * 200;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
      local_b0 = *(int *)(lVar10 + 0x50 + lVar16) / 2;
      local_a0 = 0;
      local_a8 = 0;
      local_b8 = *(undefined8 *)(lVar10 + 0x58 + lVar16);
      uVar9 = (**(code **)(*plVar2 + 0x40))
                        (plVar2,*(undefined4 *)(lVar10 + 0x38 + lVar16),
                         *(undefined8 *)(lVar10 + 0x48 + lVar16),
                         (longlong)*(int *)(lVar10 + 0x40 + lVar16) /
                         (longlong)*(int *)(lVar10 + 0x3c + lVar16) & 0xffffffff);
      *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x3f8) = uVar9;
    }
    if ((!bVar6) && (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 8) != 0)) {
      *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) | 0x10;
    }
    lVar16 = *(longlong *)(param_1 + 0x4b8);
    *(ushort *)(param_1 + 0x120) = *(ushort *)(param_1 + 0x120) & 0xffdf;
    lVar10 = *(longlong *)(lVar16 + 0x40);
    for (lVar11 = *(longlong *)(lVar16 + 0x38); lVar11 != lVar10; lVar11 = lVar11 + 0xf0) {
      if (*(int *)(lVar11 + 0x68) != 0) {
        *(ushort *)(param_1 + 0x120) = *(ushort *)(param_1 + 0x120) | 0x20;
      }
    }
    lVar10 = *(longlong *)(lVar16 + 0x18);
    if (((*(uint *)(lVar10 + 0x18) >> 3 & 1) == 0) &&
       (*(longlong *)(lVar10 + 0xb0) == *(longlong *)(lVar10 + 0xb8))) {
      puVar18 = *(undefined8 **)(lVar16 + 0x2a0);
      for (puVar13 = *(undefined8 **)(lVar16 + 0x298); puVar13 != puVar18; puVar13 = puVar13 + 1) {
        thunk_FUN_14028af80(*puVar13,0x1c);
      }
      lVar16 = *(longlong *)(param_1 + 0x4b8);
      if (*(longlong *)(lVar16 + 0x298) != *(longlong *)(lVar16 + 0x2a0)) {
        *(longlong *)(lVar16 + 0x2a0) = *(longlong *)(lVar16 + 0x298);
      }
    }
    else {
      puVar13 = *(undefined8 **)(lVar16 + 0x2a0);
      for (puVar20 = *(undefined8 **)(lVar16 + 0x298); puVar20 != puVar13; puVar20 = puVar20 + 1) {
        thunk_FUN_14028af80(*puVar20,0x1c);
      }
      lVar16 = *(longlong *)(param_1 + 0x4b8);
      if (*(longlong *)(lVar16 + 0x298) != *(longlong *)(lVar16 + 0x2a0)) {
        *(longlong *)(lVar16 + 0x2a0) = *(longlong *)(lVar16 + 0x298);
      }
      lVar16 = *(longlong *)(param_1 + 0x4b8);
      uVar19 = (ulonglong)*(uint *)(puVar18 + 0x14);
      lVar10 = *(longlong *)(lVar16 + 0x298);
      if ((ulonglong)(*(longlong *)(lVar16 + 0x2a8) - lVar10 >> 3) < uVar19) {
        lVar11 = *(longlong *)(lVar16 + 0x2a0);
        uVar28 = uVar19 * 8;
        if (uVar19 == 0) {
          uVar28 = 0;
        }
        else if (uVar28 < 0x1000) {
          uVar28 = FUN_14028af20();
        }
        else {
          if (uVar28 + 0x27 <= uVar28) {
LAB_14020b70e:
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          lVar12 = FUN_14028af20(uVar28 + 0x27);
          if (lVar12 == 0) goto LAB_14020b701;
          uVar28 = lVar12 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar28 - 8) = lVar12;
        }
        FUN_1404210f0(uVar28,*(longlong *)(lVar16 + 0x298),
                      *(longlong *)(lVar16 + 0x2a0) - *(longlong *)(lVar16 + 0x298));
        FUN_1400384c0(lVar16 + 0x298,uVar28,lVar11 - lVar10 >> 3,uVar19);
      }
      uVar25 = 0;
      if (*(int *)(local_88 + 0x14) != 0) {
        do {
          lVar16 = local_88[0x15];
          puVar13 = (undefined8 *)FUN_14028af20(0x1c);
          lVar10 = (longlong)(int)uVar25 * 0x10;
          uVar19 = 0;
          puVar13[1] = 0;
          *puVar13 = 0;
          *(undefined4 *)(puVar13 + 2) = 1;
          *(undefined4 *)(puVar13 + 3) = 0;
          *(uint *)((longlong)puVar13 + 0x14) = uVar25;
          *(int *)((longlong)puVar13 + 4) =
               *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x1f0) +
                       (ulonglong)*(uint *)(lVar16 + lVar10) * 4) + *(int *)(lVar16 + 4 + lVar10);
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(lVar16 + lVar10);
          *(undefined4 *)((longlong)puVar13 + 0xc) = *(undefined4 *)(lVar16 + 8 + lVar10);
          *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(lVar16 + 0xc + lVar10);
          lVar16 = *(longlong *)(param_1 + 0x4b8);
          puVar18 = *(undefined8 **)(lVar16 + 0x2a0);
          if (puVar18 == *(undefined8 **)(lVar16 + 0x2a8)) {
            uVar28 = (longlong)puVar18 - *(longlong *)(lVar16 + 0x298);
            lVar10 = (longlong)uVar28 >> 3;
            if (lVar10 == 0x1fffffffffffffff) goto LAB_14020b708;
            uVar14 = (longlong)*(undefined8 **)(lVar16 + 0x2a8) - *(longlong *)(lVar16 + 0x298) >> 3
            ;
            if (0x1fffffffffffffff - (uVar14 >> 1) < uVar14) goto LAB_14020b70e;
            uVar17 = lVar10 + 1;
            uVar14 = (uVar14 >> 1) + uVar14;
            uVar27 = uVar17;
            if (uVar17 <= uVar14) {
              uVar27 = uVar14;
            }
            if (0x1fffffffffffffff < uVar27) goto LAB_14020b70e;
            uVar14 = uVar27 * 8;
            if (uVar14 != 0) {
              if (uVar14 < 0x1000) {
                uVar19 = FUN_14028af20();
              }
              else {
                if (uVar14 + 0x27 <= uVar14) goto LAB_14020b70e;
                lVar10 = FUN_14028af20(uVar14 + 0x27);
                if (lVar10 == 0) goto LAB_14020b701;
                uVar19 = lVar10 + 0x27U & 0xffffffffffffffe0;
                *(longlong *)(uVar19 - 8) = lVar10;
              }
            }
            uVar28 = uVar28 & 0xfffffffffffffff8;
            *(undefined8 **)(uVar28 + uVar19) = puVar13;
            puVar13 = *(undefined8 **)(lVar16 + 0x298);
            if (puVar18 == *(undefined8 **)(lVar16 + 0x2a0)) {
              lVar10 = (longlong)*(undefined8 **)(lVar16 + 0x2a0) - (longlong)puVar13;
              uVar28 = uVar19;
              puVar18 = puVar13;
            }
            else {
              FUN_1404210f0(uVar19,puVar13,(longlong)puVar18 - (longlong)puVar13);
              uVar28 = uVar28 + 8 + uVar19;
              lVar10 = *(longlong *)(lVar16 + 0x2a0) - (longlong)puVar18;
            }
            FUN_1404210f0(uVar28,puVar18,lVar10);
            FUN_1400384c0(lVar16 + 0x298,uVar19,uVar17,uVar27);
          }
          else {
            *puVar18 = puVar13;
            *(longlong *)(lVar16 + 0x2a0) = *(longlong *)(lVar16 + 0x2a0) + 8;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < *(uint *)(local_88 + 0x14));
      }
      lVar16 = local_88[0x17];
      for (lVar10 = local_88[0x16]; lVar10 != lVar16; lVar10 = lVar10 + 0x50) {
        puVar3 = *(uint **)(lVar10 + 0x10);
        for (puVar23 = *(uint **)(lVar10 + 8); puVar23 != puVar3; puVar23 = puVar23 + 1) {
          puVar1 = (uint *)(*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x298) +
                             (ulonglong)*puVar23 * 8) + 0x18);
          *puVar1 = *puVar1 | 1;
        }
        puVar3 = *(uint **)(lVar10 + 0x28);
        for (puVar23 = *(uint **)(lVar10 + 0x20); puVar23 != puVar3; puVar23 = puVar23 + 1) {
          puVar1 = (uint *)(*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x298) +
                             (ulonglong)*puVar23 * 8) + 0x18);
          *puVar1 = *puVar1 | 8;
        }
        if ((*(uint *)(lVar10 + 0x44) >> 3 & 1) != 0) {
          puVar3 = *(uint **)(lVar10 + 0x10);
          for (puVar23 = *(uint **)(lVar10 + 8); puVar23 != puVar3; puVar23 = puVar23 + 1) {
            puVar1 = (uint *)(*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x298) +
                               (ulonglong)*puVar23 * 8) + 0x18);
            *puVar1 = *puVar1 | 4;
          }
        }
      }
    }
    FUN_14020b720(param_1);
    if (0xf < local_60) {
      uVar19 = local_60 + 1;
      lVar16 = local_78;
      if (0xfff < uVar19) {
        lVar16 = *(longlong *)(local_78 + -8);
        if (0x1f < (local_78 - lVar16) - 8U) {
LAB_14020b701:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar21 = auStack_d0;
LAB_14020b708:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar21 + -8) = &UNK_14020b70d;
          FUN_140013050();
        }
        uVar19 = local_60 + 0x28;
      }
      thunk_FUN_14028af80(lVar16,uVar19);
    }
  }
  return;
}

