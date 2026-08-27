// Function: FUN_14001c0a0
// Addr: 14001c0a0
// Size: 2188 bytes


/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_14001c0a0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *_Buf1;
  double *pdVar15;
  size_t sVar16;
  int *piVar17;
  char *pcVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  bool bVar24;
  longlong *local_e8;
  uint local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  uint local_c0;
  uint local_bc;
  char local_b8;
  undefined7 uStack_b7;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  uint local_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined1 local_70 [56];
  
  bVar24 = false;
  FUN_140065be0(param_1,local_70);
  FUN_140084dd0(param_1,0);
  FUN_140016fc0(&local_b8,param_2 + 0x1c);
  iVar8 = (**(code **)(*param_2 + 0x20))(param_2);
  if ((iVar8 != 2) || (cVar7 = FUN_140018980(&local_b8), cVar7 == '\0')) {
    FUN_1400187b0(&local_b8);
  }
  local_e0 = CONCAT31(local_e0._1_3_,4);
  local_e0 = local_e0 | 0x100;
  local_d8 = 0.0;
  dStack_d0 = 0.0;
  pcVar18 = &local_b8;
  if (0xf < local_a0) {
    pcVar18 = (char *)CONCAT71(uStack_b7,local_b8);
  }
  local_c8 = 0.0;
  local_e8 = (longlong *)FUN_140084b30(pcVar18,local_a8 & 0xffffffff);
  uVar10 = FUN_140086de0(param_1,&DAT_140473b68,&DAT_140473b6c);
  FUN_140085610(uVar10,&local_e8);
  FUN_140085440(&local_e8);
  FUN_140084fe0(&local_e8,param_3);
  uVar10 = FUN_140086de0(param_1,"location","");
  FUN_140085610(uVar10,&local_e8);
  FUN_140085440(&local_e8);
  uVar10 = FUN_140086de0(local_70,"playlist","");
  uVar11 = FUN_140086de0(param_1,"playlist","");
  FUN_140085520(uVar11,uVar10);
  uVar10 = (**(code **)(*param_2 + 0x98))(param_2,&local_e8);
  uVar10 = FUN_140086de0(uVar10,"wproperties","");
  uVar11 = FUN_140086de0(param_1,"properties","");
  FUN_140085520(uVar11,uVar10);
  FUN_140085440(&local_e8);
  uVar10 = (**(code **)(*param_2 + 0x90))(param_2,&local_e8);
  uVar11 = FUN_140086de0(param_1,"defaultproperties","");
  FUN_140085610(uVar11,uVar10);
  FUN_140085440(&local_e8);
  iVar8 = 0;
  plVar12 = (longlong *)FUN_140086de0(param_1,"properties","");
  uVar21 = *(uint *)(plVar12 + 1) & 0xff;
  if (((uVar21 == 6) || (uVar21 == 7)) && ((undefined8 *)*plVar12 != (undefined8 *)0x0)) {
    bVar5 = false;
    plVar23 = (longlong *)**(undefined8 **)*plVar12;
  }
  else {
    plVar23 = (longlong *)0x0;
    bVar5 = true;
  }
  if (((uVar21 == 6) || (uVar21 == 7)) && ((undefined8 *)*plVar12 != (undefined8 *)0x0)) {
    plVar12 = *(longlong **)*plVar12;
    bVar4 = false;
    iVar8 = 0;
  }
  else {
    plVar12 = (longlong *)0x0;
    bVar4 = true;
  }
  while( true ) {
    bVar3 = bVar4;
    if (!bVar5) {
      bVar3 = plVar23 == plVar12;
    }
    if (bVar3) break;
    lVar13 = FUN_140086de0(plVar23 + 6,"order","");
    lVar14 = FUN_140086de0(plVar23 + 6,&DAT_140474874,&DAT_140474878);
    if ((*(byte *)(lVar13 + 8) - 1 < 3) && (iVar9 = FUN_140085ee0(lVar13), 99 < iVar9)) {
      if (*(char *)(lVar14 + 8) == '\x04') {
        bVar24 = true;
        _Buf1 = (undefined8 *)FUN_140085cc0(lVar14,&local_98);
        plVar19 = _Buf1 + 2;
        if (0xf < (ulonglong)_Buf1[3]) {
          _Buf1 = (undefined8 *)*_Buf1;
        }
        if ((*plVar19 == 0xc) && (iVar9 = memcmp(_Buf1,"usershortcut",0xc), iVar9 == 0))
        goto LAB_14001c398;
      }
      bVar3 = true;
    }
    else {
LAB_14001c398:
      bVar3 = false;
    }
    if ((bVar24) && (bVar24 = false, 0xf < uStack_80)) {
      uVar22 = uStack_80 + 1;
      plVar19 = local_98;
      if (0xfff < uVar22) {
        plVar19 = (longlong *)local_98[-1];
        if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)plVar19))) goto LAB_14001c94d;
        uVar22 = uStack_80 + 0x28;
      }
      thunk_FUN_14028af80(plVar19,uVar22);
    }
    plVar19 = (longlong *)plVar23[2];
    iVar8 = (iVar8 + 1) - (uint)!bVar3;
    if (*(char *)((longlong)plVar19 + 0x19) == '\0') {
      cVar7 = *(char *)(*plVar19 + 0x19);
      plVar23 = plVar19;
      while (cVar7 == '\0') {
        plVar23 = (longlong *)*plVar23;
        cVar7 = *(char *)(*plVar23 + 0x19);
      }
    }
    else {
      cVar7 = *(char *)(plVar23[1] + 0x19);
      plVar6 = (longlong *)plVar23[1];
      plVar19 = plVar23;
      while ((plVar23 = plVar6, cVar7 == '\0' && (plVar19 == (longlong *)plVar23[2]))) {
        cVar7 = *(char *)(plVar23[1] + 0x19);
        plVar6 = (longlong *)plVar23[1];
        plVar19 = plVar23;
      }
    }
  }
  local_e0 = CONCAT31(local_e0._1_3_,5);
  uVar21 = local_e0 & 0xfffffeff;
  local_e8 = (longlong *)CONCAT71(local_e8._1_7_,0 < iVar8);
  pdVar15 = (double *)FUN_140086de0(param_1,"cancreatepresets","");
  local_e0 = *(uint *)(pdVar15 + 1);
  *(uint *)(pdVar15 + 1) = uVar21;
  plVar12 = (longlong *)*pdVar15;
  *pdVar15 = (double)local_e8;
  dVar1 = pdVar15[2];
  pdVar15[2] = 0.0;
  dStack_d0 = pdVar15[3];
  local_c8 = pdVar15[4];
  pdVar15[3] = 0.0;
  pdVar15[4] = 0.0;
  local_e8 = plVar12;
  local_d8 = dVar1;
  FUN_140086d30(&local_e8);
  if (dVar1 != 0.0) {
    FUN_140017240((longlong)dVar1 + 0x40);
    FUN_140017240((longlong)dVar1 + 0x20);
    FUN_140017240(dVar1);
    thunk_FUN_14028af80(dVar1,0x60);
  }
  cVar7 = (**(code **)(*param_2 + 0x48))(param_2,&local_bc,&local_c0);
  if (cVar7 != '\0') {
    local_e0 = CONCAT31(local_e0._1_3_,3);
    uVar21 = local_e0 & 0xfffffeff;
    pdVar15 = (double *)FUN_140086de0(param_1,"aspect","");
    local_e0 = *(uint *)(pdVar15 + 1);
    *(uint *)(pdVar15 + 1) = uVar21;
    local_e8 = (longlong *)*pdVar15;
    *pdVar15 = (double)((float)local_bc / (float)local_c0);
    dVar1 = pdVar15[2];
    pdVar15[2] = 0.0;
    dStack_d0 = pdVar15[3];
    pdVar15[3] = 0.0;
    local_c8 = pdVar15[4];
    pdVar15[4] = 0.0;
    local_d8 = dVar1;
    FUN_140086d30(&local_e8);
    if (dVar1 != 0.0) {
      FUN_140017240((longlong)dVar1 + 0x40);
      FUN_140017240((longlong)dVar1 + 0x20);
      FUN_140017240(dVar1);
      thunk_FUN_14028af80(dVar1,0x60);
    }
  }
  uVar10 = FUN_140086de0(param_1,"presets","");
  local_90 = CONCAT31(local_90._1_3_,6);
  pcVar18 = &local_b8;
  if (0xf < local_a0) {
    pcVar18 = (char *)CONCAT71(uStack_b7,local_b8);
  }
  uVar21 = local_90 & 0xfffffeff;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = uVar21;
  plVar12 = (longlong *)FUN_14028af20(0x10);
  *plVar12 = 0;
  plVar12[1] = 0;
  lVar13 = FUN_14028af20(0x58);
  *(longlong *)lVar13 = lVar13;
  *(longlong *)(lVar13 + 8) = lVar13;
  *(longlong *)(lVar13 + 0x10) = lVar13;
  *(undefined2 *)(lVar13 + 0x18) = 0x101;
  *plVar12 = lVar13;
  local_98 = plVar12;
  uVar11 = FUN_140086de0(&DAT_1404df5e8,"general","");
  lVar13 = FUN_140087490(uVar11,"wpresets","");
  if (lVar13 != 0) {
    uVar11 = FUN_140086de0(uVar11,"wpresets","");
    FUN_140085520(&local_98,uVar11);
    uVar21 = local_90;
  }
  local_e0 = CONCAT31(local_e0._1_3_,6);
  local_e0 = local_e0 & 0xfffffeff;
  local_d8 = 0.0;
  dStack_d0 = 0.0;
  local_c8 = 0.0;
  plVar12 = (longlong *)FUN_14028af20(0x10);
  *plVar12 = 0;
  plVar12[1] = 0;
  lVar13 = FUN_14028af20(0x58);
  *(longlong *)lVar13 = lVar13;
  *(longlong *)(lVar13 + 8) = lVar13;
  *(longlong *)(lVar13 + 0x10) = lVar13;
  *(undefined2 *)(lVar13 + 0x18) = 0x101;
  *plVar12 = lVar13;
  local_e8 = plVar12;
  FUN_140085610(uVar10,&local_e8);
  if ((byte)local_e0 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014001c715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                       *(uint *)((ulonglong)(byte)local_e0 * 4 + 0x14001c954)))
                       (IMAGE_DOS_HEADER_140000000.e_magic +
                        *(uint *)((ulonglong)(byte)local_e0 * 4 + 0x14001c954));
    return uVar10;
  }
  FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  dVar1 = local_d8;
  if (local_d8 != 0.0) {
    FUN_140017240((longlong)local_d8 + 0x40);
    FUN_140017240((longlong)dVar1 + 0x20);
    FUN_140017240(dVar1);
    thunk_FUN_14028af80(dVar1,0x60);
  }
  if (((pcVar18 != (char *)0x0) && (*pcVar18 != '\0')) && ((char)uVar21 == '\a')) {
    sVar16 = strlen(pcVar18);
    lVar13 = FUN_140087490(&local_98,pcVar18,pcVar18 + sVar16);
    if (lVar13 != 0) {
      sVar16 = strlen(pcVar18);
      lVar13 = FUN_140086de0(&local_98,pcVar18,pcVar18 + sVar16);
      uVar21 = local_90;
      if (((*(char *)(lVar13 + 8) == '\a') &&
          (lVar14 = FUN_140087490(lVar13,"presets",""), uVar21 = local_90, lVar14 != 0)) &&
         (lVar14 = FUN_140086de0(lVar13,"presets",""), uVar21 = local_90,
         *(char *)(lVar14 + 8) == '\x06')) {
        uVar11 = FUN_140086de0(lVar13,"presets","");
        FUN_140085520(uVar10,uVar11);
        uVar21 = local_90;
      }
    }
  }
  plVar12 = local_98;
  switch(uVar21 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((uVar21 >> 8 & 1) != 0) {
      thunk_FUN_1402d9040(local_98);
    }
    break;
  case 6:
  case 7:
    if (local_98 != (longlong *)0x0) {
      FUN_140088e40(local_98);
      thunk_FUN_14028af80(plVar12,0x10);
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  lVar13 = local_88;
  if (local_88 != 0) {
    FUN_140017240(local_88 + 0x40);
    FUN_140017240(lVar13 + 0x20);
    FUN_140017240(lVar13);
    thunk_FUN_14028af80(lVar13,0x60);
  }
  if (0xf < local_a0) {
    lVar14 = CONCAT71(uStack_b7,local_b8);
    uVar22 = local_a0 + 1;
    lVar13 = lVar14;
    if (0xfff < uVar22) {
      lVar13 = *(longlong *)(lVar14 + -8);
      if (0x1f < (lVar14 - lVar13) - 8U) {
LAB_14001c94d:
        puVar20 = (undefined4 *)&DAT_00000005;
        pcVar2 = (code *)swi(0x29);
        piVar17 = (int *)(*pcVar2)();
        *puVar20 = 0x1c76800;
        *(char *)((longlong)piVar17 + -0x39) =
             *(char *)((longlong)piVar17 + -0x39) + (char)((ulonglong)puVar20 >> 8);
        *piVar17 = *piVar17 + (int)piVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar22 = local_a0 + 0x28;
    }
    thunk_FUN_14028af80(lVar13,uVar22);
  }
  local_a8 = 0;
  local_a0 = 0xf;
  local_b8 = '\0';
  FUN_140085440(local_70);
  return param_1;
}

