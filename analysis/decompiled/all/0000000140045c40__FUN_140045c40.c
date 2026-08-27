// Function: FUN_140045c40
// Addr: 140045c40
// Size: 2038 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_140045c40(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined8 ******ppppppuVar10;
  char cVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  char cVar17;
  longlong *local_f8;
  uint local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 *****local_b0 [2];
  longlong local_a0;
  ulonglong local_98;
  undefined8 *****local_90 [2];
  longlong local_80;
  ulonglong local_78;
  longlong *local_70;
  uint local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  longlong local_38;
  ulonglong local_30;
  
  if (*(char *)(param_1 + 0x50) != '\a') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x98);
  uVar4 = FUN_140053e40(&local_d0,iVar1);
  FUN_14002fd20(local_90,&DAT_140476c08,uVar4);
  if (0xf < local_b8) {
    lVar3 = CONCAT71(uStack_cf,local_d0);
    uVar12 = local_b8 + 1;
    lVar6 = lVar3;
    if (0xfff < uVar12) {
      lVar6 = *(longlong *)(lVar3 + -8);
      uVar8 = (lVar3 - lVar6) - 8;
      cVar17 = uVar8 < 0x1f;
      if (0x1f < uVar8) goto LAB_1400464c0;
      uVar12 = local_b8 + 0x28;
    }
    thunk_FUN_14028af80(lVar6,uVar12);
  }
  uVar4 = FUN_140053e40(&local_d0,param_3);
  FUN_14002fd20(&local_48,&DAT_140476c08,uVar4);
  if (0xf < local_b8) {
    lVar3 = CONCAT71(uStack_cf,local_d0);
    uVar12 = local_b8 + 1;
    lVar6 = lVar3;
    if (0xfff < uVar12) {
      lVar6 = *(longlong *)(lVar3 + -8);
      uVar8 = (lVar3 - lVar6) - 8;
      cVar17 = uVar8 < 0x1f;
      if (0x1f < uVar8) goto LAB_1400464c0;
      uVar12 = local_b8 + 0x28;
    }
    thunk_FUN_14028af80(lVar6,uVar12);
  }
  local_68 = CONCAT31(local_68._1_3_,7);
  uVar16 = local_68 & 0xfffffeff;
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = uVar16;
  plVar5 = (longlong *)FUN_14028af20(0x10);
  *plVar5 = 0;
  plVar5[1] = 0;
  lVar6 = FUN_14028af20(0x58);
  param_1 = param_1 + 0x48;
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar6 + 8) = lVar6;
  *(longlong *)(lVar6 + 0x10) = lVar6;
  *(undefined2 *)(lVar6 + 0x18) = 0x101;
  *plVar5 = lVar6;
  local_70 = plVar5;
  lVar6 = FUN_140087490(param_1,"general","");
  if ((lVar6 != 0) && (lVar6 = FUN_140086de0(param_1,"general",""), *(char *)(lVar6 + 8) == '\a')) {
    uVar4 = FUN_140086de0(param_1,"general","");
    uVar7 = FUN_140053e40(&local_f8,iVar1);
    FUN_14002fd20(local_b0,"wallpaperconfigvd",uVar7);
    if (0xf < uStack_e0) {
      uVar12 = uStack_e0 + 1;
      plVar5 = local_f8;
      if (0xfff < uVar12) {
        plVar5 = (longlong *)local_f8[-1];
        uVar8 = (longlong)local_f8 + (-8 - (longlong)plVar5);
        cVar17 = uVar8 < 0x1f;
        if (0x1f < uVar8) goto LAB_1400464c0;
        uVar12 = uStack_e0 + 0x28;
      }
      thunk_FUN_14028af80(plVar5,uVar12);
    }
    uVar7 = FUN_140053e40(&local_f8,param_3);
    FUN_14002fd20(&local_d0,"wallpaperconfigvd",uVar7);
    if (0xf < uStack_e0) {
      uVar12 = uStack_e0 + 1;
      plVar5 = local_f8;
      if (0xfff < uVar12) {
        plVar5 = (longlong *)local_f8[-1];
        uVar8 = (longlong)local_f8 + (-8 - (longlong)plVar5);
        cVar17 = uVar8 < 0x1f;
        if (0x1f < uVar8) goto LAB_1400464c0;
        uVar12 = uStack_e0 + 0x28;
      }
      thunk_FUN_14028af80(plVar5,uVar12);
    }
    if (iVar1 < 0) {
LAB_140045efb:
      lVar6 = FUN_140087490(uVar4,"wallpaperconfig","");
      if ((lVar6 != 0) &&
         (lVar6 = FUN_140086de0(uVar4,"wallpaperconfig",""), *(char *)(lVar6 + 8) == '\a')) {
        pcVar15 = "";
        pcVar9 = "wallpaperconfig";
        goto LAB_140045f40;
      }
    }
    else {
      ppppppuVar10 = local_b0;
      if (0xf < local_98) {
        ppppppuVar10 = (undefined8 ******)local_b0[0];
      }
      lVar6 = FUN_140087490(uVar4,ppppppuVar10,(char *)(local_a0 + (longlong)ppppppuVar10));
      if (lVar6 == 0) goto LAB_140045efb;
      ppppppuVar10 = local_b0;
      if (0xf < local_98) {
        ppppppuVar10 = (undefined8 ******)local_b0[0];
      }
      lVar6 = FUN_140086de0(uVar4,ppppppuVar10,(char *)(local_a0 + (longlong)ppppppuVar10));
      if (*(char *)(lVar6 + 8) != '\a') goto LAB_140045efb;
      pcVar9 = (char *)local_b0;
      if (0xf < local_98) {
        pcVar9 = (char *)local_b0[0];
      }
      pcVar15 = (char *)(local_a0 + (longlong)pcVar9);
LAB_140045f40:
      uVar7 = FUN_140086de0(uVar4,pcVar9,pcVar15);
      FUN_140085520(&local_70,uVar7);
      uVar16 = local_68;
    }
    puVar13 = &local_d0;
    if (0xf < local_b8) {
      puVar13 = (undefined1 *)CONCAT71(uStack_cf,local_d0);
    }
    uVar4 = FUN_140086de0(uVar4,puVar13,puVar13 + local_c0);
    FUN_140085520(uVar4,&local_70);
    if (0xf < local_b8) {
      lVar3 = CONCAT71(uStack_cf,local_d0);
      uVar12 = local_b8 + 1;
      lVar6 = lVar3;
      if (0xfff < uVar12) {
        lVar6 = *(longlong *)(lVar3 + -8);
        uVar8 = (lVar3 - lVar6) - 8;
        cVar17 = uVar8 < 0x1f;
        if (0x1f < uVar8) goto LAB_1400464c0;
        uVar12 = local_b8 + 0x28;
      }
      thunk_FUN_14028af80(lVar6,uVar12);
    }
    local_c0 = 0;
    local_b8 = 0xf;
    local_d0 = 0;
    if (0xf < local_98) {
      uVar12 = local_98 + 1;
      ppppppuVar10 = (undefined8 ******)local_b0[0];
      if (0xfff < uVar12) {
        ppppppuVar10 = (undefined8 ******)local_b0[0][-1];
        pcVar9 = (char *)((longlong)local_b0[0] + (-8 - (longlong)ppppppuVar10));
        cVar17 = pcVar9 < (char *)0x1f;
        if ((char *)0x1f < pcVar9) goto LAB_1400464c0;
        uVar12 = local_98 + 0x28;
      }
      thunk_FUN_14028af80(ppppppuVar10,uVar12);
    }
  }
  lVar6 = FUN_140086de0(param_1,"wpropertiesvd","");
  if (*(char *)(lVar6 + 8) != '\a') {
    local_f0 = CONCAT31(local_f0._1_3_,7);
    local_f0 = local_f0 & 0xfffffeff;
    local_d8 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    plVar5 = (longlong *)FUN_14028af20(0x10);
    *plVar5 = 0;
    plVar5[1] = 0;
    lVar6 = FUN_14028af20(0x58);
    *(longlong *)lVar6 = lVar6;
    *(longlong *)(lVar6 + 8) = lVar6;
    *(longlong *)(lVar6 + 0x10) = lVar6;
    *(undefined2 *)(lVar6 + 0x18) = 0x101;
    *plVar5 = lVar6;
    local_f8 = plVar5;
    uVar4 = FUN_140086de0(param_1,"wpropertiesvd","");
    FUN_140085610(uVar4,&local_f8);
    if ((byte)local_f0 < 8) {
                    /* WARNING: Could not recover jumptable at 0x0001400460bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)((ulonglong)(byte)local_f0 * 4 + 0x1400464c8)))
                (IMAGE_DOS_HEADER_140000000.e_magic +
                 *(uint *)((ulonglong)(byte)local_f0 * 4 + 0x1400464c8));
      return;
    }
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    lVar6 = local_e8;
    if (local_e8 != 0) {
      FUN_140017240(local_e8 + 0x40);
      FUN_140017240(lVar6 + 0x20);
      FUN_140017240(lVar6);
      thunk_FUN_14028af80(lVar6,0x60);
    }
  }
  local_f0 = CONCAT31(local_f0._1_3_,7);
  uVar14 = local_f0 & 0xfffffeff;
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f0 = uVar14;
  plVar5 = (longlong *)FUN_14028af20(0x10);
  *plVar5 = 0;
  plVar5[1] = 0;
  lVar6 = FUN_14028af20(0x58);
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar6 + 8) = lVar6;
  *(longlong *)(lVar6 + 0x10) = lVar6;
  *(undefined2 *)(lVar6 + 0x18) = 0x101;
  *plVar5 = lVar6;
  local_f8 = plVar5;
  if (iVar1 < 0) {
LAB_140046246:
    lVar6 = FUN_140087490(param_1,"wproperties","");
    if ((lVar6 != 0) &&
       (lVar6 = FUN_140086de0(param_1,"wproperties",""), *(char *)(lVar6 + 8) == '\a')) {
      pcVar15 = "";
      pcVar9 = "wproperties";
      lVar6 = param_1;
      goto LAB_14004628e;
    }
  }
  else {
    uVar4 = FUN_140086de0(param_1,"wpropertiesvd","");
    ppppppuVar10 = local_90;
    if (0xf < local_78) {
      ppppppuVar10 = (undefined8 ******)local_90[0];
    }
    lVar6 = FUN_140087490(uVar4,ppppppuVar10,(char *)(local_80 + (longlong)ppppppuVar10));
    if (lVar6 == 0) goto LAB_140046246;
    uVar4 = FUN_140086de0(param_1,"wpropertiesvd","");
    ppppppuVar10 = local_90;
    if (0xf < local_78) {
      ppppppuVar10 = (undefined8 ******)local_90[0];
    }
    lVar6 = FUN_140086de0(uVar4,ppppppuVar10,(char *)(local_80 + (longlong)ppppppuVar10));
    if (*(char *)(lVar6 + 8) != '\a') goto LAB_140046246;
    lVar6 = FUN_140086de0(param_1,"wpropertiesvd","");
    pcVar9 = (char *)local_90;
    if (0xf < local_78) {
      pcVar9 = (char *)local_90[0];
    }
    pcVar15 = (char *)(local_80 + (longlong)pcVar9);
LAB_14004628e:
    uVar4 = FUN_140086de0(lVar6,pcVar9,pcVar15);
    FUN_140085520(&local_f8,uVar4);
    uVar14 = local_f0;
  }
  uVar4 = FUN_140086de0(param_1,"wpropertiesvd","");
  puVar13 = &local_48;
  if (0xf < local_30) {
    puVar13 = (undefined1 *)CONCAT71(uStack_47,local_48);
  }
  uVar4 = FUN_140086de0(uVar4,puVar13,puVar13 + local_38);
  FUN_140085520(uVar4,&local_f8);
  if ((uVar14 & 0xff) < 8) {
                    /* WARNING: Could not recover jumptable at 0x0001400462fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
              *(uint *)(&LAB_1400464e8 + (ulonglong)(uVar14 & 0xff) * 4)))
              (IMAGE_DOS_HEADER_140000000.e_magic +
               *(uint *)(&LAB_1400464e8 + (ulonglong)(uVar14 & 0xff) * 4));
    return;
  }
  FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  lVar6 = local_e8;
  if (local_e8 != 0) {
    FUN_140017240(local_e8 + 0x40);
    FUN_140017240(lVar6 + 0x20);
    FUN_140017240(lVar6);
    thunk_FUN_14028af80(lVar6,0x60);
  }
  if ((uVar16 & 0xff) < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014004638c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
              *(uint *)(&LAB_140046508 + (ulonglong)(uVar16 & 0xff) * 4)))
              (IMAGE_DOS_HEADER_140000000.e_magic +
               *(uint *)(&LAB_140046508 + (ulonglong)(uVar16 & 0xff) * 4));
    return;
  }
  FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  lVar6 = local_60;
  if (local_60 != 0) {
    FUN_140017240(local_60 + 0x40);
    FUN_140017240(lVar6 + 0x20);
    FUN_140017240(lVar6);
    thunk_FUN_14028af80(lVar6,0x60);
  }
  if (0xf < local_30) {
    lVar3 = CONCAT71(uStack_47,local_48);
    uVar12 = local_30 + 1;
    lVar6 = lVar3;
    if (0xfff < uVar12) {
      lVar6 = *(longlong *)(lVar3 + -8);
      uVar8 = (lVar3 - lVar6) - 8;
      cVar17 = uVar8 < 0x1f;
      if (0x1f < uVar8) goto LAB_1400464c0;
      uVar12 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(lVar6,uVar12);
  }
  local_38 = 0;
  local_30 = 0xf;
  local_48 = 0;
  if (0xf < local_78) {
    uVar12 = local_78 + 1;
    ppppppuVar10 = (undefined8 ******)local_90[0];
    if (0xfff < uVar12) {
      ppppppuVar10 = (undefined8 ******)local_90[0][-1];
      pcVar9 = (char *)((longlong)local_90[0] + (-8 - (longlong)ppppppuVar10));
      cVar17 = pcVar9 < (char *)0x1f;
      if ((char *)0x1f < pcVar9) {
LAB_1400464c0:
        cVar11 = (char)uVar12;
        lVar6 = 5;
        pcVar2 = (code *)swi(0x29);
        pcVar9 = (char *)(*pcVar2)();
        *(char *)(lVar6 + 4) = *(char *)(lVar6 + 4) + (char)((ulonglong)pcVar9 >> 8) + cVar17;
        *pcVar9 = *pcVar9 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar12 = local_78 + 0x28;
    }
    thunk_FUN_14028af80(ppppppuVar10,uVar12);
  }
  return;
}

