// Function: FUN_14014cf90
// Addr: 14014cf90
// Size: 1386 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14014cf90(float *param_1,char *param_2,char param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 ******ppppppuVar5;
  char cVar6;
  int iVar7;
  size_t sVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *_Buf1;
  undefined8 *puVar13;
  undefined8 *******pppppppuVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  char *******pppppppcVar18;
  char *******pppppppcVar19;
  undefined1 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 ******local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  char ******local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 ******local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  puVar20 = auStack_c8;
  uVar22 = 0;
  local_78 = (char ******)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  sVar8 = strlen(param_2);
  FUN_140017480(&local_78,param_2,sVar8);
  FUN_1400187b0(&local_78);
  uVar12 = local_60;
  pppppppcVar19 = (char *******)local_78;
  pppppppcVar18 = &local_78;
  if (0xf < local_60) {
    pppppppcVar18 = (char *******)local_78;
  }
  sVar8 = strlen((char *)pppppppcVar18);
  uVar23 = 0xcbf29ce484222325;
  uVar15 = 0xcbf29ce484222325;
  if (sVar8 != 0) {
    do {
      pbVar1 = (byte *)((longlong)pppppppcVar18 + uVar22);
      uVar22 = uVar22 + 1;
      uVar15 = (uVar15 ^ *pbVar1) * 0x100000001b3;
    } while (uVar22 < sVar8);
  }
  lVar17 = *(longlong *)
            (*(longlong *)(param_1 + 6) + 8 + (uVar15 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  lVar9 = *(longlong *)(param_1 + 2);
  if (lVar17 == lVar9) {
    lVar17 = 0;
  }
  else {
    lVar9 = *(longlong *)
             (*(longlong *)(param_1 + 6) + (uVar15 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    cVar6 = FUN_14000d010(lVar17 + 0x10,pppppppcVar18);
    while (cVar6 == '\0') {
      if (lVar17 == lVar9) {
        lVar17 = 0;
        break;
      }
      lVar17 = *(longlong *)(lVar17 + 8);
      cVar6 = FUN_14000d010(lVar17 + 0x10,pppppppcVar18);
    }
    lVar9 = *(longlong *)(param_1 + 2);
  }
  if ((lVar17 == 0) || (lVar17 == lVar9)) {
    if (param_3 == '\0') {
      uVar10 = 0;
      goto LAB_14014d495;
    }
    pppppppcVar18 = &local_78;
    if (0xf < uVar12) {
      pppppppcVar18 = pppppppcVar19;
    }
    uVar15 = 0;
    local_48 = 0;
    local_40 = 0;
    local_58 = (undefined8 *******)0x0;
    uStack_50 = 0;
    sVar8 = strlen((char *)pppppppcVar18);
    FUN_140017480(&local_58,pppppppcVar18,sVar8);
    uVar12 = local_48;
    ppppppuVar5 = local_58;
    lVar17 = DAT_1404e7f58;
    uVar22 = 0xcbf29ce484222325;
    pppppppuVar14 = &local_58;
    if (0xf < local_40) {
      pppppppuVar14 = (undefined8 *******)local_58;
    }
    if (local_48 != 0) {
      do {
        pbVar1 = (byte *)((longlong)pppppppuVar14 + uVar15);
        uVar15 = uVar15 + 1;
        uVar22 = (uVar22 ^ *pbVar1) * 0x100000001b3;
      } while (uVar15 < local_48);
    }
    lVar9 = *(longlong *)(DAT_1404e7f68 + 8 + (uVar22 & _DAT_1404e7f80) * 0x10);
    uVar15 = local_40;
    if (lVar9 != DAT_1404e7f58) {
      lVar21 = *(longlong *)(DAT_1404e7f68 + (uVar22 & _DAT_1404e7f80) * 0x10);
      while( true ) {
        puVar11 = (undefined8 *)(lVar9 + 0x10);
        if (0xf < *(ulonglong *)(lVar9 + 0x28)) {
          puVar11 = (undefined8 *)*puVar11;
        }
        pppppppuVar14 = &local_58;
        if (0xf < uVar15) {
          pppppppuVar14 = (undefined8 *******)ppppppuVar5;
        }
        if ((uVar12 == *(ulonglong *)(lVar9 + 0x20)) &&
           ((uVar12 == 0 ||
            (iVar7 = memcmp(pppppppuVar14,puVar11,uVar12), uVar15 = local_40, iVar7 == 0))))
        goto LAB_14014d1bb;
        if (lVar9 == lVar21) break;
        lVar9 = *(longlong *)(lVar9 + 8);
      }
    }
    lVar9 = 0;
LAB_14014d1bb:
    uVar12 = 0;
    lVar21 = lVar17;
    if (lVar9 != 0) {
      lVar21 = lVar9;
    }
    if (uVar15 < 0x10) {
LAB_14014d1fc:
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x1518);
      lVar9 = *plVar2;
      if (lVar21 == lVar17) {
        uVar10 = (**(code **)(lVar9 + 0x60))(plVar2,pppppppcVar18);
      }
      else {
        uVar10 = FUN_14014cf90(param_1,"error",1);
        uVar10 = (**(code **)(lVar9 + 0x68))(plVar2,pppppppcVar18,uVar10);
      }
      pppppppcVar19 = &local_78;
      if (0xf < local_60) {
        pppppppcVar19 = (char *******)local_78;
      }
      local_88 = 0;
      local_98 = (undefined8 *******)0x0;
      uStack_90 = 0;
      uStack_80 = 0;
      sVar8 = strlen((char *)pppppppcVar19);
      FUN_140017480(&local_98,pppppppcVar19,sVar8);
      pppppppuVar14 = &local_98;
      if (0xf < uStack_80) {
        pppppppuVar14 = (undefined8 *******)local_98;
      }
      if (local_88 != 0) {
        do {
          pbVar1 = (byte *)((longlong)pppppppuVar14 + uVar12);
          uVar12 = uVar12 + 1;
          uVar23 = (uVar23 ^ *pbVar1) * 0x100000001b3;
        } while (uVar12 < local_88);
      }
      FUN_1400110a0(param_1,&local_a8,&local_98,uVar23);
      puVar11 = local_a0;
      if (local_a0 != (undefined8 *)0x0) goto LAB_14014d44a;
      if (*(longlong *)(param_1 + 4) == 0x492492492492492) goto LAB_14014d4ee;
      puVar11 = (undefined8 *)FUN_14028af20(0x38);
      puVar11[2] = local_98;
      puVar11[3] = uStack_90;
      puVar11[4] = local_88;
      puVar11[5] = uStack_80;
      local_88 = 0;
      uStack_80 = 0xf;
      local_98 = (undefined8 ******)((ulonglong)local_98 & 0xffffffffffffff00);
      puVar11[6] = 0;
      fVar24 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
      puVar13 = local_a8;
      if (*param_1 <= fVar24 && fVar24 != *param_1) {
        FUN_14014f1d0(param_1);
        puVar16 = *(undefined8 **)
                   (*(longlong *)(param_1 + 6) + 8 + (uVar23 & *(ulonglong *)(param_1 + 0xc)) * 0x10
                   );
        puVar13 = *(undefined8 **)(param_1 + 2);
        if (puVar16 != *(undefined8 **)(param_1 + 2)) {
          sVar8 = puVar11[4];
          puVar3 = *(undefined8 **)
                    (*(longlong *)(param_1 + 6) + (uVar23 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
          puVar13 = puVar16;
          while( true ) {
            puVar16 = puVar13 + 2;
            if (0xf < (ulonglong)puVar13[5]) {
              puVar16 = (undefined8 *)*puVar16;
            }
            if ((ulonglong)puVar11[5] < 0x10) {
              _Buf1 = puVar11 + 2;
            }
            else {
              _Buf1 = (undefined8 *)puVar11[2];
            }
            if ((sVar8 == puVar13[4]) &&
               ((sVar8 == 0 || (iVar7 = memcmp(_Buf1,puVar16,sVar8), iVar7 == 0)))) break;
            if (puVar13 == puVar3) goto LAB_14014d3ff;
            puVar13 = (undefined8 *)puVar13[1];
          }
          puVar13 = (undefined8 *)*puVar13;
        }
      }
LAB_14014d3ff:
      puVar16 = (undefined8 *)puVar13[1];
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
      *puVar11 = puVar13;
      puVar11[1] = puVar16;
      *puVar16 = puVar11;
      puVar13[1] = puVar11;
      lVar17 = *(longlong *)(param_1 + 6);
      uVar23 = *(ulonglong *)(param_1 + 0xc) & uVar23;
      puVar3 = *(undefined8 **)(lVar17 + uVar23 * 0x10);
      if (puVar3 == *(undefined8 **)(param_1 + 2)) {
        *(undefined8 **)(lVar17 + uVar23 * 0x10) = puVar11;
LAB_14014d445:
        *(undefined8 **)(lVar17 + 8 + uVar23 * 0x10) = puVar11;
      }
      else if (puVar3 == puVar13) {
        *(undefined8 **)(lVar17 + uVar23 * 0x10) = puVar11;
      }
      else if (*(undefined8 **)(lVar17 + 8 + uVar23 * 0x10) == puVar16) goto LAB_14014d445;
LAB_14014d44a:
      puVar11[6] = uVar10;
      pppppppcVar19 = (char *******)local_78;
      uVar12 = local_60;
      if (0xf < uStack_80) {
        uVar12 = uStack_80 + 1;
        pppppppuVar14 = (undefined8 *******)local_98;
        if (0xfff < uVar12) {
          pppppppuVar14 = (undefined8 *******)local_98[-1];
          if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppuVar14)))
          goto LAB_14014d4e7;
          uVar12 = uStack_80 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar14,uVar12);
        pppppppcVar19 = (char *******)local_78;
        uVar12 = local_60;
      }
      goto LAB_14014d495;
    }
    uVar22 = uVar15 + 1;
    pppppppuVar14 = (undefined8 *******)ppppppuVar5;
    if (uVar22 < 0x1000) {
LAB_14014d1f4:
      thunk_FUN_14028af80(pppppppuVar14,uVar22);
      goto LAB_14014d1fc;
    }
    pppppppuVar14 = (undefined8 *******)ppppppuVar5[-1];
    if ((ulonglong)((longlong)ppppppuVar5 + (-8 - (longlong)pppppppuVar14)) < 0x20) {
      uVar22 = uVar15 + 0x28;
      goto LAB_14014d1f4;
    }
  }
  else {
    uVar10 = *(undefined8 *)(lVar17 + 0x30);
LAB_14014d495:
    if (uVar12 < 0x10) {
      return uVar10;
    }
    uVar22 = uVar12 + 1;
    pppppppcVar18 = pppppppcVar19;
    if (uVar22 < 0x1000) {
LAB_14014d4c1:
      thunk_FUN_14028af80(pppppppcVar18,uVar22);
      return uVar10;
    }
    pppppppcVar18 = (char *******)pppppppcVar19[-1];
    if ((char *)((longlong)pppppppcVar19 + (-8 - (longlong)pppppppcVar18)) < (char *)0x20) {
      uVar22 = uVar12 + 0x28;
      goto LAB_14014d4c1;
    }
  }
LAB_14014d4e7:
  pcVar4 = (code *)swi(0x29);
  (*pcVar4)(5);
  puVar20 = auStack_c0;
LAB_14014d4ee:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar20 + -8) = &UNK_14014d4fa;
  FUN_14028c2e0("unordered_map/set too long");
}

