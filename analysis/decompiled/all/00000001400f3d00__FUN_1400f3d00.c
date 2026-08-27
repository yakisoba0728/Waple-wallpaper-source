// Function: FUN_1400f3d00
// Addr: 1400f3d00
// Size: 416 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_1400f3d00(undefined8 *param_1)

{
  undefined8 ******ppppppuVar1;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  int iVar10;
  char *pcVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 ******ppppppuVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  char *pcVar24;
  undefined1 *puVar25;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  undefined8 ******ppppppuStack_e8;
  undefined8 ******ppppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_58;
  undefined8 ******local_48;
  undefined8 ******ppppppuStack_40;
  undefined8 local_38;
  ulonglong local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  uVar9 = ppppppuStack_58._0_1_;
  local_20 = 0;
  pcVar11 = (char *)FUN_14028af20(0x20);
  uVar8 = s_float__deprFn_0__140487420._8_8_;
  local_18 = 0x10;
  *(undefined8 *)pcVar11 = s_float__deprFn_0__140487420._0_8_;
  *(undefined8 *)(pcVar11 + 8) = uVar8;
  pcVar11[0x10] = '\0';
  uVar22 = 0x1f;
  local_48 = (undefined8 ******)s_float_mod__140487438._0_8_;
  local_10 = 0x1f;
  local_38 = 10;
  local_30 = 0xf;
  ppppppuStack_40 = (undefined8 ******)(ulonglong)(ushort)s_float_mod__140487438._8_2_;
  puVar23 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar23 = (undefined8 *)*param_1;
  }
  local_28 = pcVar11;
  if (((9 < (ulonglong)param_1[2]) &&
      (lVar2 = param_1[2] + (longlong)puVar23,
      lVar12 = thunk_FUN_14028e750(puVar23,lVar2,&local_48,10), lVar12 != lVar2)) &&
     (lVar12 - (longlong)puVar23 != -1)) {
    FUN_140049580(param_1,lVar12 - (longlong)puVar23,local_38,&local_28);
    uVar22 = local_10;
    pcVar11 = local_28;
  }
  if (local_30 < 0x10) {
LAB_1400f3e41:
    local_38 = 0;
    local_30 = 0xf;
    local_48 = (undefined8 ******)((ulonglong)local_48 & 0xffffffffffffff00);
    if (uVar22 < 0x10) {
      return;
    }
    uVar20 = uVar22 + 1;
    pcVar24 = pcVar11;
    if (uVar20 < 0x1000) {
LAB_1400f3e83:
      thunk_FUN_14028af80(pcVar24,uVar20);
      return;
    }
    pcVar24 = *(char **)(pcVar11 + -8);
    if (pcVar11 + (-8 - (longlong)pcVar24) < (char *)0x20) {
      uVar20 = uVar22 + 0x28;
      goto LAB_1400f3e83;
    }
  }
  else {
    uVar20 = local_30 + 1;
    ppppppuVar17 = local_48;
    if (uVar20 < 0x1000) {
LAB_1400f3e3c:
      thunk_FUN_14028af80(ppppppuVar17,uVar20);
      goto LAB_1400f3e41;
    }
    ppppppuVar17 = (undefined8 ******)local_48[-1];
    if ((ulonglong)((longlong)local_48 + (-8 - (longlong)ppppppuVar17)) < 0x20) {
      uVar20 = local_30 + 0x28;
      goto LAB_1400f3e3c;
    }
  }
  pppppppuVar18 = (undefined8 *******)&DAT_00000005;
  pcVar5 = (code *)swi(0x29);
  (*pcVar5)();
  puVar21 = auStack_108;
  ppppppuStack_c0 = (undefined8 ******)0x0;
  local_48 = (undefined8 ******)0x0;
  ppppppuStack_b8 = (undefined8 ******)0x0;
  ppppppuStack_b0 = (undefined8 ******)0xf;
  pppppppuStack_c8 = (undefined8 *******)0x0;
  bVar7 = false;
  do {
    pppppppuVar15 = pppppppuVar18;
    if ((undefined8 ******)0xf < pppppppuVar18[3]) {
      pppppppuVar15 = (undefined8 *******)*pppppppuVar18;
    }
    if (((pppppppuVar18[2] <= local_48) ||
        (puVar25 = (undefined1 *)((longlong)pppppppuVar18[2] + (longlong)pppppppuVar15),
        puVar13 = (undefined1 *)
                  thunk_FUN_14028cf70((undefined1 *)((longlong)local_48 + (longlong)pppppppuVar15),
                                      puVar25,10), puVar13 == puVar25)) ||
       (ppppppuStack_40 = (undefined8 ******)(puVar13 + -(longlong)pppppppuVar15),
       ppppppuStack_40 == (undefined8 ******)0xffffffffffffffff)) {
      ppppppuStack_40 = pppppppuVar18[2];
    }
    ppppppuVar17 = local_48;
    pppppppuVar15 = pppppppuVar18;
    if ((undefined8 ******)0xf < pppppppuVar18[3]) {
      pppppppuVar15 = (undefined8 *******)*pppppppuVar18;
    }
    for (; (ppppppuVar17 < ppppppuStack_40 &&
           ((*(char *)((longlong)pppppppuVar15 + (longlong)ppppppuVar17) == ' ' ||
            (*(char *)((longlong)pppppppuVar15 + (longlong)ppppppuVar17) == '\t'))));
        ppppppuVar17 = (undefined8 ******)((longlong)ppppppuVar17 + 1)) {
    }
    pppppppuVar15 = pppppppuVar18;
    if ((undefined8 ******)0xf < pppppppuVar18[3]) {
      pppppppuVar15 = (undefined8 *******)*pppppppuVar18;
    }
    if ((ulonglong)((longlong)ppppppuStack_40 - (longlong)ppppppuVar17) < 5) {
LAB_1400f41f9:
      bVar6 = false;
      bVar4 = false;
      if (bVar7) goto LAB_1400f420f;
    }
    else {
      if (pppppppuVar18[2] < ppppppuVar17) {
        FUN_1400fa6a0();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar20 = (longlong)pppppppuVar18[2] - (longlong)ppppppuVar17;
      uVar22 = 5;
      if (uVar20 < 5) {
        uVar22 = uVar20;
      }
      iVar10 = memcmp((undefined1 *)((longlong)pppppppuVar15 + (longlong)ppppppuVar17),"const",
                      uVar22);
      if ((iVar10 != 0) || (uVar22 < 5)) goto LAB_1400f41f9;
      if ((undefined8 ******)((longlong)ppppppuVar17 + 5) != ppppppuStack_40) {
        bVar3 = ((undefined1 *)((longlong)pppppppuVar15 + (longlong)ppppppuVar17))[5];
        iVar10 = isalnum((uint)bVar3);
        if ((iVar10 != 0) || (bVar3 == 0x5f)) goto LAB_1400f41f9;
      }
      ppppppuVar19 = ppppppuStack_b0;
      bVar6 = true;
      if (!bVar7) {
        ppppppuStack_d0 = pppppppuVar18[2] + 8;
        if (ppppppuStack_b0 < ppppppuStack_d0) {
          ppppppuStack_d8 = ppppppuStack_b8;
          if (0x7fffffffffffffffU - (longlong)ppppppuStack_b8 <
              (ulonglong)((longlong)ppppppuStack_d0 - (longlong)ppppppuStack_b8))
          goto LAB_1400f4449;
          ppppppuStack_58 = (undefined8 ******)((ulonglong)ppppppuStack_d0 | 0xf);
          if (ppppppuStack_58 < (undefined8 ******)0x8000000000000000) {
            if ((undefined8 ******)(0x7fffffffffffffff - ((ulonglong)ppppppuStack_b0 >> 1)) <
                ppppppuStack_b0) {
              ppppppuStack_58 = (undefined8 ******)0x7fffffffffffffff;
              ppppppuVar14 = (undefined8 ******)0x8000000000000027;
              goto LAB_1400f40be;
            }
            ppppppuVar14 = (undefined8 ******)
                           (((ulonglong)ppppppuStack_b0 >> 1) + (longlong)ppppppuStack_b0);
            if (ppppppuStack_58 < ppppppuVar14) {
              ppppppuStack_58 = ppppppuVar14;
            }
            ppppppuVar1 = (undefined8 ******)((longlong)ppppppuStack_58 + 1);
            pppppppuVar15 = (undefined8 *******)0x0;
            if (ppppppuVar1 != (undefined8 ******)0x0) {
              if ((undefined8 ******)0xfff < ppppppuVar1) {
                ppppppuVar14 = ppppppuStack_58 + 5;
                if (ppppppuVar14 <= ppppppuVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_140017370();
                }
                goto LAB_1400f40be;
              }
              pppppppuVar15 = (undefined8 *******)FUN_14028af20(ppppppuVar1);
            }
          }
          else {
            ppppppuStack_58 = (undefined8 ******)0x7fffffffffffffff;
            ppppppuVar14 = (undefined8 ******)0x8000000000000027;
LAB_1400f40be:
            ppppppuVar14 = (undefined8 ******)FUN_14028af20(ppppppuVar14);
            if (ppppppuVar14 == (undefined8 ******)0x0) goto LAB_1400f4442;
            pppppppuVar15 =
                 (undefined8 *******)((longlong)ppppppuVar14 + 0x27U & 0xffffffffffffffe0);
            pppppppuVar15[-1] = ppppppuVar14;
          }
          pppppppuVar16 = pppppppuStack_c8;
          ppppppuStack_b8 = ppppppuStack_d0;
          ppppppuStack_b0 = ppppppuStack_58;
          if (ppppppuVar19 < (undefined8 ******)0x10) {
            FUN_1404210f0(pppppppuVar15,&pppppppuStack_c8,
                          (undefined1 *)((longlong)ppppppuStack_d8 + 1));
          }
          else {
            FUN_1404210f0(pppppppuVar15,pppppppuStack_c8,
                          (undefined1 *)((longlong)ppppppuStack_d8 + 1));
            if ((undefined1 *)((longlong)ppppppuVar19 + 1) < (undefined1 *)0x1000) {
              thunk_FUN_14028af80(pppppppuVar16);
            }
            else {
              if (0x1f < (ulonglong)((longlong)pppppppuVar16 + (-8 - (longlong)pppppppuVar16[-1])))
              goto LAB_1400f4442;
              thunk_FUN_14028af80(pppppppuVar16[-1],ppppppuVar19 + 5);
            }
          }
          ppppppuStack_b8 = ppppppuStack_d8;
          pppppppuStack_c8 = pppppppuVar15;
        }
        pppppppuVar15 = pppppppuVar18;
        if ((undefined8 ******)0xf < pppppppuVar18[3]) {
          pppppppuVar15 = (undefined8 *******)*pppppppuVar18;
        }
        if ((undefined8 ******)((longlong)ppppppuStack_b0 - (longlong)ppppppuStack_b8) < local_48) {
          ppppppuStack_e8 = local_48;
          FUN_140053110(&pppppppuStack_c8,local_48,uVar9);
          bVar7 = true;
          bVar6 = true;
        }
        else {
          pppppppuVar16 = &pppppppuStack_c8;
          if ((undefined8 ******)0xf < ppppppuStack_b0) {
            pppppppuVar16 = pppppppuStack_c8;
          }
          puVar25 = (undefined1 *)((longlong)pppppppuVar16 + (longlong)ppppppuStack_b8);
          ppppppuStack_b8 = (undefined8 ******)((longlong)ppppppuStack_b8 + (longlong)local_48);
          FUN_1404210f0(puVar25,pppppppuVar15,local_48);
          bVar7 = true;
          bVar6 = true;
          *(undefined1 *)((longlong)local_48 + (longlong)puVar25) = 0;
        }
      }
LAB_1400f420f:
      pppppppuVar15 = pppppppuVar18;
      if ((undefined8 ******)0xf < pppppppuVar18[3]) {
        pppppppuVar15 = (undefined8 *******)*pppppppuVar18;
      }
      puVar25 = (undefined1 *)((longlong)pppppppuVar15 + (longlong)local_48);
      local_48 = (undefined8 ******)((longlong)ppppppuVar17 - (longlong)local_48);
      if ((undefined8 ******)((longlong)ppppppuStack_b0 - (longlong)ppppppuStack_b8) < local_48) {
        ppppppuStack_e8 = local_48;
        FUN_140053110(&pppppppuStack_c8,local_48,uVar9);
      }
      else {
        pppppppuVar15 = &pppppppuStack_c8;
        if ((undefined8 ******)0xf < ppppppuStack_b0) {
          pppppppuVar15 = pppppppuStack_c8;
        }
        puVar13 = (undefined1 *)((longlong)pppppppuVar15 + (longlong)ppppppuStack_b8);
        ppppppuStack_b8 = (undefined8 ******)((longlong)ppppppuStack_b8 + (longlong)local_48);
        FUN_1404210f0(puVar13,puVar25,local_48);
        *(undefined1 *)((longlong)local_48 + (longlong)puVar13) = 0;
      }
      if (bVar6) {
        if ((ulonglong)((longlong)ppppppuStack_b0 - (longlong)ppppppuStack_b8) < 7) {
          ppppppuStack_e8 = (undefined8 ******)0x7;
          FUN_140053110(&pppppppuStack_c8,7,uVar9,"static ");
        }
        else {
          pppppppuVar15 = &pppppppuStack_c8;
          if ((undefined8 ******)0xf < ppppppuStack_b0) {
            pppppppuVar15 = pppppppuStack_c8;
          }
          puVar25 = (undefined1 *)((longlong)pppppppuVar15 + (longlong)ppppppuStack_b8);
          ppppppuStack_b8 = (undefined8 ******)((longlong)ppppppuStack_b8 + 7);
          FUN_1404210f0(puVar25,"static ",7);
          puVar25[7] = 0;
        }
      }
      ppppppuVar19 = (undefined8 ******)
                     ((longlong)ppppppuStack_40 +
                     ((ulonglong)(ppppppuStack_40 < pppppppuVar18[2]) - (longlong)ppppppuVar17));
      pppppppuVar15 = pppppppuVar18;
      if ((undefined8 ******)0xf < pppppppuVar18[3]) {
        pppppppuVar15 = (undefined8 *******)*pppppppuVar18;
      }
      bVar4 = bVar7;
      if ((undefined8 ******)((longlong)ppppppuStack_b0 - (longlong)ppppppuStack_b8) < ppppppuVar19)
      {
        ppppppuStack_e8 = ppppppuVar19;
        FUN_140053110(&pppppppuStack_c8,ppppppuVar19,uVar9);
      }
      else {
        pppppppuVar16 = &pppppppuStack_c8;
        if ((undefined8 ******)0xf < ppppppuStack_b0) {
          pppppppuVar16 = pppppppuStack_c8;
        }
        puVar25 = (undefined1 *)((longlong)pppppppuVar16 + (longlong)ppppppuStack_b8);
        ppppppuStack_b8 = (undefined8 ******)((longlong)ppppppuStack_b8 + (longlong)ppppppuVar19);
        FUN_1404210f0(puVar25,(undefined1 *)((longlong)pppppppuVar15 + (longlong)ppppppuVar17),
                      ppppppuVar19);
        *(undefined1 *)((longlong)ppppppuVar19 + (longlong)puVar25) = 0;
      }
    }
    local_48 = (undefined8 ******)((longlong)ppppppuStack_40 + 1);
  } while (local_48 <= pppppppuVar18[2]);
  if ((bVar4) && ((undefined8 ********)pppppppuVar18 != &pppppppuStack_c8)) {
    ppppppuVar17 = pppppppuVar18[3];
    if ((undefined8 ******)0xf < ppppppuVar17) {
      ppppppuVar14 = *pppppppuVar18;
      ppppppuVar19 = (undefined8 ******)((longlong)ppppppuVar17 + 1);
      if ((undefined8 ******)0xfff < ppppppuVar19) {
        if (0x1f < (ulonglong)((longlong)ppppppuVar14 + (-8 - (longlong)ppppppuVar14[-1]))) {
LAB_1400f4442:
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
          puVar21 = auStack_100;
LAB_1400f4449:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar21 + -8) = &UNK_1400f444e;
          FUN_1400172e0();
        }
        ppppppuVar19 = ppppppuVar17 + 5;
        ppppppuVar14 = (undefined8 ******)ppppppuVar14[-1];
      }
      thunk_FUN_14028af80(ppppppuVar14,ppppppuVar19);
    }
    *pppppppuVar18 = pppppppuStack_c8;
    pppppppuVar18[1] = ppppppuStack_c0;
    pppppppuVar18[2] = ppppppuStack_b8;
    pppppppuVar18[3] = ppppppuStack_b0;
  }
  else if ((undefined8 ******)0xf < ppppppuStack_b0) {
    ppppppuVar17 = (undefined8 ******)((longlong)ppppppuStack_b0 + 1);
    pppppppuVar18 = pppppppuStack_c8;
    if ((undefined8 ******)0xfff < ppppppuVar17) {
      pppppppuVar18 = (undefined8 *******)pppppppuStack_c8[-1];
      if (0x1f < (ulonglong)((longlong)pppppppuStack_c8 + (-8 - (longlong)pppppppuVar18)))
      goto LAB_1400f4442;
      ppppppuVar17 = ppppppuStack_b0 + 5;
    }
    thunk_FUN_14028af80(pppppppuVar18,ppppppuVar17);
  }
  return;
}

