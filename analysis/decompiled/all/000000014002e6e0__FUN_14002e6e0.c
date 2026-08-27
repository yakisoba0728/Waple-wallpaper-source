// Function: FUN_14002e6e0
// Addr: 14002e6e0
// Size: 2474 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_14002e6e0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  char *pcVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  size_t sVar15;
  longlong *******ppppppplVar16;
  longlong ******pppppplVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 *******pppppppuVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  bool bVar24;
  longlong *plVar25;
  uint uVar26;
  longlong *plVar27;
  undefined8 *puVar28;
  longlong *plVar29;
  bool bVar30;
  bool bVar31;
  longlong *******local_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  ulonglong uStack_c8;
  undefined8 local_c0;
  undefined8 *******local_b8;
  uint local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong *******local_58;
  ulonglong local_50;
  
  bVar24 = false;
  bVar7 = false;
  FUN_140088360(param_2,&local_70);
  local_78 = local_70;
  puVar18 = local_68;
  puVar14 = local_70;
  puVar28 = local_70;
  if (local_70 != local_68) {
LAB_14002e740:
    puVar14 = puVar28;
    if (0xf < (ulonglong)puVar28[3]) {
      puVar14 = (undefined8 *)*puVar28;
    }
    local_78 = puVar28;
    uVar12 = FUN_140086de0(param_2,puVar14,puVar28[2] + (longlong)puVar14);
    uVar26 = 0;
    local_80 = uVar12;
    iVar10 = FUN_1400863a0(param_1[3]);
    if (iVar10 != 0) {
      do {
        lVar13 = FUN_140086540(param_1[3],uVar26);
        if (*(char *)(lVar13 + 8) == '\x04') {
          bVar24 = true;
          puVar14 = (undefined8 *)FUN_140085cc0(lVar13,&local_b8);
          puVar18 = puVar28;
          if (0xf < (ulonglong)puVar28[3]) {
            puVar18 = (undefined8 *)*puVar28;
          }
          sVar15 = puVar14[2];
          if (0xf < (ulonglong)puVar14[3]) {
            puVar14 = (undefined8 *)*puVar14;
          }
          bVar7 = bVar24;
          if ((sVar15 != puVar28[2]) ||
             ((sVar15 != 0 && (iVar10 = memcmp(puVar14,puVar18,sVar15), iVar10 != 0))))
          goto LAB_14002e7dd;
          bVar31 = true;
        }
        else {
LAB_14002e7dd:
          bVar31 = false;
        }
        if ((bVar24) && (bVar24 = false, bVar7 = bVar24, 0xf < uStack_a0)) {
          uVar21 = uStack_a0 + 1;
          pppppppuVar20 = local_b8;
          if (0xfff < uVar21) {
            pppppppuVar20 = (undefined8 *******)local_b8[-1];
            if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pppppppuVar20)))
            goto LAB_14002f065;
            uVar21 = uStack_a0 + 0x28;
          }
          thunk_FUN_14028af80(pppppppuVar20,uVar21);
        }
        if (bVar31) {
          local_b0 = (local_b0 >> 8 & 0xfffffe) << 8;
          plVar25 = (longlong *)0x0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          FUN_140087f40(param_1[3],uVar26,&local_b8);
          pppppppuVar20 = local_b8;
          switch((undefined1)local_b0) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 5:
            break;
          case 4:
            if ((local_b0 >> 8 & 1) != 0) {
              thunk_FUN_1402d9040(local_b8);
            }
            break;
          case 6:
          case 7:
            if (local_b8 != (undefined8 *******)0x0) {
              FUN_140088e40(local_b8);
              thunk_FUN_14028af80(pppppppuVar20,0x10);
            }
            break;
          default:
            FID_conflict__assert
                      (L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
          }
          lVar13 = local_a8;
          if (local_a8 != 0) {
            FUN_140017240(local_a8 + 0x40);
            FUN_140017240(lVar13 + 0x20);
            FUN_140017240(lVar13);
            thunk_FUN_14028af80(lVar13,0x60);
          }
          plVar27 = (longlong *)param_1[2];
          uVar26 = *(uint *)(plVar27 + 1) & 0xff;
          if (((uVar26 == 6) || (uVar26 == 7)) && ((undefined8 *)*plVar27 != (undefined8 *)0x0)) {
            bVar31 = false;
            plVar25 = (longlong *)**(undefined8 **)*plVar27;
          }
          else {
            bVar31 = true;
          }
          if (((uVar26 == 6) || (uVar26 == 7)) && ((undefined8 *)*plVar27 != (undefined8 *)0x0)) {
            local_90 = *(longlong **)*plVar27;
            bVar6 = false;
            plVar27 = local_90;
          }
          else {
            local_90 = (longlong *)0x0;
            bVar6 = true;
            plVar27 = local_90;
          }
          goto LAB_14002e958;
        }
        uVar26 = uVar26 + 1;
        uVar11 = FUN_1400863a0();
      } while (uVar26 < uVar11);
    }
    goto LAB_14002ed0a;
  }
LAB_14002ed23:
  puVar28 = puVar14;
  if (puVar14 != (undefined8 *)0x0) {
    for (; puVar28 != puVar18; puVar28 = puVar28 + 4) {
      FUN_140017240(puVar28);
    }
    uVar21 = local_60 - (longlong)puVar14 & 0xffffffffffffffe0;
    if (0xfff < uVar21) {
      if (0x1f < (ulonglong)((longlong)puVar14 + (-8 - (longlong)puVar14[-1]))) {
LAB_14002f065:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        return;
      }
      uVar21 = uVar21 + 0x27;
      puVar14 = (undefined8 *)puVar14[-1];
    }
    thunk_FUN_14028af80(puVar14,uVar21);
  }
  plVar25 = (longlong *)param_1[3];
  uVar26 = *(uint *)(plVar25 + 1) & 0xff;
  if (((uVar26 == 6) || (uVar26 == 7)) && ((undefined8 *)*plVar25 != (undefined8 *)0x0)) {
    bVar7 = false;
    plVar27 = (longlong *)**(undefined8 **)*plVar25;
  }
  else {
    plVar27 = (longlong *)0x0;
    bVar7 = true;
  }
  plVar29 = (longlong *)0x0;
  if (((uVar26 == 6) || (uVar26 == 7)) && ((undefined8 *)*plVar25 != (undefined8 *)0x0)) {
    plVar29 = *(longlong **)*plVar25;
    bVar24 = false;
  }
  else {
    bVar24 = true;
  }
  do {
    uVar21 = uStack_d8;
    plVar25 = (longlong *)0x0;
    bVar31 = bVar24;
    if (!bVar7) {
      bVar31 = plVar27 == plVar29;
    }
    if (bVar31) {
      return;
    }
    if ((char)plVar27[7] == '\x04') {
      uStack_d8 = CONCAT71(uStack_d8._1_7_,7);
      uStack_d8._4_4_ = SUB84(uVar21,4);
      uStack_d8 = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8) & 0xfffffffffffffeff;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      ppppppplVar16 = (longlong *******)FUN_14028af20(0x10);
      *ppppppplVar16 = (longlong ******)0x0;
      ppppppplVar16[1] = (longlong ******)0x0;
      pppppplVar17 = (longlong ******)FUN_14028af20(0x58);
      *pppppplVar17 = (longlong *****)pppppplVar17;
      pppppplVar17[1] = (longlong *****)pppppplVar17;
      pppppplVar17[2] = (longlong *****)pppppplVar17;
      *(undefined2 *)(pppppplVar17 + 3) = 0x101;
      *ppppppplVar16 = pppppplVar17;
      plVar4 = (longlong *)param_1[2];
      uVar26 = *(uint *)(plVar4 + 1) & 0xff;
      if (((uVar26 == 6) || (uVar26 == 7)) && ((undefined8 *)*plVar4 != (undefined8 *)0x0)) {
        bVar31 = false;
        plVar23 = (longlong *)**(undefined8 **)*plVar4;
      }
      else {
        bVar31 = true;
        plVar23 = plVar25;
      }
      local_e0 = ppppppplVar16;
      if (((uVar26 == 6) || (uVar26 == 7)) && ((undefined8 *)*plVar4 != (undefined8 *)0x0)) {
        plVar25 = *(longlong **)*plVar4;
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      while( true ) {
        bVar30 = bVar6;
        if (!bVar31) {
          bVar30 = plVar23 == plVar25;
        }
        if (bVar30) break;
        if ((char)plVar23[7] == '\x04') {
          FUN_140085cc0(plVar23 + 6,&local_b8);
          pppppppuVar20 = &local_b8;
          if (0xf < uStack_a0) {
            pppppppuVar20 = local_b8;
          }
          lVar13 = *param_1;
          uVar12 = FUN_140086de0(&local_e0,pppppppuVar20,local_a8 + (longlong)pppppppuVar20);
          FUN_140085520(uVar12,lVar13);
          if (0xf < uStack_a0) {
            uVar21 = uStack_a0 + 1;
            pppppppuVar20 = local_b8;
            if (0xfff < uVar21) {
              pppppppuVar20 = (undefined8 *******)local_b8[-1];
              if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pppppppuVar20)))
              goto LAB_14002f065;
              uVar21 = uStack_a0 + 0x28;
            }
            thunk_FUN_14028af80(pppppppuVar20,uVar21);
          }
        }
        plVar4 = (longlong *)plVar23[2];
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar4 + 0x19);
          plVar23 = plVar4;
          while (cVar2 == '\0') {
            plVar23 = (longlong *)*plVar23;
            cVar2 = *(char *)(*plVar23 + 0x19);
          }
        }
        else {
          cVar2 = *(char *)(plVar23[1] + 0x19);
          plVar9 = (longlong *)plVar23[1];
          plVar4 = plVar23;
          while ((plVar23 = plVar9, cVar2 == '\0' && (plVar4 == (longlong *)plVar23[2]))) {
            cVar2 = *(char *)(plVar23[1] + 0x19);
            plVar9 = (longlong *)plVar23[1];
            plVar4 = plVar23;
          }
        }
      }
      puVar18 = (undefined8 *)FUN_140085cc0(plVar27 + 6,&local_b8);
      puVar14 = puVar18;
      if (0xf < (ulonglong)puVar18[3]) {
        puVar14 = (undefined8 *)*puVar18;
      }
      uVar12 = FUN_140086de0(param_2,puVar14,puVar18[2] + (longlong)puVar14);
      FUN_140085520(uVar12,&local_e0);
      if (0xf < uStack_a0) {
        uVar21 = uStack_a0 + 1;
        pppppppuVar20 = local_b8;
        if (0xfff < uVar21) {
          pppppppuVar20 = (undefined8 *******)local_b8[-1];
          if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pppppppuVar20)))
          goto LAB_14002f065;
          uVar21 = uStack_a0 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar20,uVar21);
      }
      FUN_140085440(&local_e0);
    }
    plVar25 = (longlong *)plVar27[2];
    if (*(char *)((longlong)plVar25 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar25 + 0x19);
      plVar27 = plVar25;
      while (cVar2 == '\0') {
        plVar27 = (longlong *)*plVar27;
        cVar2 = *(char *)(*plVar27 + 0x19);
      }
    }
    else {
      cVar2 = *(char *)(plVar27[1] + 0x19);
      plVar4 = (longlong *)plVar27[1];
      plVar25 = plVar27;
      while ((plVar27 = plVar4, cVar2 == '\0' && (plVar25 == (longlong *)plVar27[2]))) {
        cVar2 = *(char *)(plVar27[1] + 0x19);
        plVar4 = (longlong *)plVar27[1];
        plVar25 = plVar27;
      }
    }
  } while( true );
LAB_14002e958:
  bVar30 = bVar6;
  if (!bVar31) {
    bVar30 = plVar25 == plVar27;
  }
  puVar28 = local_78;
  bVar24 = bVar7;
  if (!bVar30) {
    if ((char)plVar25[7] == '\x04') {
      FUN_140085cc0(plVar25 + 6,&local_b8);
      pppppppuVar20 = &local_b8;
      if (0xf < uStack_a0) {
        pppppppuVar20 = local_b8;
      }
      lVar13 = FUN_140086de0(uVar12,pppppppuVar20,local_a8 + (longlong)pppppppuVar20);
      uVar21 = uStack_d8;
      local_88 = lVar13;
      if (*(char *)(lVar13 + 8) != '\a') {
        uStack_d8 = CONCAT71(uStack_d8._1_7_,7);
        uStack_d8._4_4_ = SUB84(uVar21,4);
        uStack_d8 = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8) & 0xfffffffffffffeff;
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = 0;
        ppppppplVar16 = (longlong *******)FUN_14028af20(0x10);
        *ppppppplVar16 = (longlong ******)0x0;
        ppppppplVar16[1] = (longlong ******)0x0;
        pppppplVar17 = (longlong ******)FUN_14028af20(0x58);
        *pppppplVar17 = (longlong *****)pppppplVar17;
        pppppplVar17[1] = (longlong *****)pppppplVar17;
        pppppplVar17[2] = (longlong *****)pppppplVar17;
        *(undefined2 *)(pppppplVar17 + 3) = 0x101;
        *ppppppplVar16 = pppppplVar17;
        local_e0 = ppppppplVar16;
        FUN_140085610(lVar13,&local_e0);
        FUN_140085440();
      }
      lVar8 = local_88;
      if ((*(char *)(lVar13 + 8) == '\a') &&
         (puVar14 = (undefined8 *)*param_1, *(char *)(puVar14 + 1) == '\a')) {
        plVar29 = *(longlong **)*puVar14;
        plVar4 = (longlong *)*plVar29;
        while (plVar4 != plVar29) {
          pcVar3 = (char *)plVar4[4];
          sVar15 = strlen(pcVar3);
          lVar13 = FUN_140087490(puVar14,pcVar3,pcVar3 + sVar15);
          if (lVar13 == 0) {
            lVar13 = FUN_140084ac0();
          }
          pcVar3 = (char *)plVar4[4];
          sVar15 = strlen(pcVar3);
          uVar12 = FUN_140086de0(lVar8,pcVar3,pcVar3 + sVar15);
          FUN_140085520(uVar12,lVar13);
          plVar23 = (longlong *)plVar4[2];
          plVar27 = local_90;
          if (*(char *)((longlong)plVar23 + 0x19) == '\0') {
            cVar2 = *(char *)(*plVar23 + 0x19);
            while (plVar4 = plVar23, cVar2 == '\0') {
              plVar23 = (longlong *)*plVar23;
              cVar2 = *(char *)(*plVar23 + 0x19);
            }
          }
          else {
            cVar2 = *(char *)(plVar4[1] + 0x19);
            plVar9 = (longlong *)plVar4[1];
            plVar23 = plVar4;
            while ((plVar4 = plVar9, cVar2 == '\0' && (plVar23 == (longlong *)plVar4[2]))) {
              cVar2 = *(char *)(plVar4[1] + 0x19);
              plVar9 = (longlong *)plVar4[1];
              plVar23 = plVar4;
            }
          }
        }
      }
      puVar18 = (undefined8 *)((undefined8 *)param_1[1])[1];
      for (puVar14 = *(undefined8 **)param_1[1]; puVar14 != puVar18; puVar14 = puVar14 + 4) {
        uVar21 = puVar14[2];
        ppppppplVar16 = (longlong *******)0x0;
        local_e0 = (longlong *******)0x0;
        uStack_d8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        puVar28 = puVar14;
        if (0xf < (ulonglong)puVar14[3]) {
          puVar28 = (undefined8 *)*puVar14;
        }
        if (0x7fffffffffffffff < uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_1400172e0();
        }
        if (uVar21 < 0x10) {
          uStack_c8 = 0xf;
          local_e0 = (longlong *******)*puVar28;
          uStack_d8 = puVar28[1];
          local_d0 = uVar21;
        }
        else {
          uVar22 = uVar21 | 0xf;
          if (uVar22 < 0x8000000000000000) {
            if (uVar22 < 0x16) {
              uVar22 = 0x16;
            }
            uVar1 = uVar22 + 1;
            if (uVar1 != 0) {
              if (0xfff < uVar1) {
                uVar19 = uVar22 + 0x28;
                if (uVar19 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_140017370();
                }
                goto LAB_14002eba1;
              }
              ppppppplVar16 = (longlong *******)FUN_14028af20(uVar1);
            }
          }
          else {
            uVar22 = 0x7fffffffffffffff;
            uVar19 = 0x8000000000000027;
LAB_14002eba1:
            pppppplVar17 = (longlong ******)FUN_14028af20(uVar19);
            if (pppppplVar17 == (longlong ******)0x0) goto LAB_14002f065;
            ppppppplVar16 = (longlong *******)((longlong)pppppplVar17 + 0x27U & 0xffffffffffffffe0);
            ppppppplVar16[-1] = pppppplVar17;
          }
          local_e0 = ppppppplVar16;
          local_d0 = uVar21;
          uStack_c8 = uVar22;
          FUN_1404210f0(ppppppplVar16,puVar28,uVar21 + 1);
        }
        local_58 = (longlong *******)&local_e0;
        if (0xf < uStack_c8) {
          local_58 = local_e0;
        }
        local_50 = local_d0;
        FUN_1400878f0(local_88,&local_58);
        if (0xf < uStack_c8) {
          uVar21 = uStack_c8 + 1;
          ppppppplVar16 = local_e0;
          if (0xfff < uVar21) {
            ppppppplVar16 = (longlong *******)local_e0[-1];
            if (0x1f < (ulonglong)((longlong)local_e0 + (-8 - (longlong)ppppppplVar16)))
            goto LAB_14002f065;
            uVar21 = uStack_c8 + 0x28;
          }
          thunk_FUN_14028af80(ppppppplVar16,uVar21);
        }
      }
      uVar12 = local_80;
      if (0xf < uStack_a0) {
        uVar21 = uStack_a0 + 1;
        pppppppuVar20 = local_b8;
        if (0xfff < uVar21) {
          pppppppuVar20 = (undefined8 *******)local_b8[-1];
          if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pppppppuVar20)))
          goto LAB_14002f065;
          uVar21 = uStack_a0 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar20,uVar21);
        uVar12 = local_80;
      }
    }
    plVar29 = (longlong *)plVar25[2];
    if (*(char *)((longlong)plVar29 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar29 + 0x19);
      plVar25 = plVar29;
      while (cVar2 == '\0') {
        plVar25 = (longlong *)*plVar25;
        cVar2 = *(char *)(*plVar25 + 0x19);
      }
    }
    else {
      cVar2 = *(char *)(plVar25[1] + 0x19);
      plVar4 = (longlong *)plVar25[1];
      plVar29 = plVar25;
      while ((plVar25 = plVar4, cVar2 == '\0' && (plVar29 == (longlong *)plVar25[2]))) {
        cVar2 = *(char *)(plVar25[1] + 0x19);
        plVar4 = (longlong *)plVar25[1];
        plVar29 = plVar25;
      }
    }
    goto LAB_14002e958;
  }
LAB_14002ed0a:
  local_78 = puVar28 + 4;
  puVar18 = local_68;
  puVar14 = local_70;
  puVar28 = local_78;
  if (local_78 == local_68) goto LAB_14002ed23;
  goto LAB_14002e740;
}

