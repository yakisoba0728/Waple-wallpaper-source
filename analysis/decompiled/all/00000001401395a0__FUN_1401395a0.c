// Function: FUN_1401395a0
// Addr: 1401395a0
// Size: 1265 bytes


/* WARNING: Removing unreachable block (ram,0x000140139854) */
/* WARNING: Removing unreachable block (ram,0x00014013985e) */
/* WARNING: Removing unreachable block (ram,0x000140139897) */
/* WARNING: Removing unreachable block (ram,0x0001401398ab) */
/* WARNING: Removing unreachable block (ram,0x0001401398b1) */
/* WARNING: Removing unreachable block (ram,0x00014013993b) */
/* WARNING: Removing unreachable block (ram,0x0001401398cf) */
/* WARNING: Removing unreachable block (ram,0x0001401398ef) */
/* WARNING: Removing unreachable block (ram,0x0001401398f4) */
/* WARNING: Removing unreachable block (ram,0x000140139903) */
/* WARNING: Removing unreachable block (ram,0x000140139909) */
/* WARNING: Removing unreachable block (ram,0x000140139956) */
/* WARNING: Removing unreachable block (ram,0x0001401399aa) */
/* WARNING: Removing unreachable block (ram,0x0001401399b0) */
/* WARNING: Removing unreachable block (ram,0x0001401399c1) */
/* WARNING: Removing unreachable block (ram,0x0001401399d6) */
/* WARNING: Removing unreachable block (ram,0x0001401399dd) */
/* WARNING: Removing unreachable block (ram,0x00014013995f) */
/* WARNING: Removing unreachable block (ram,0x000140139969) */
/* WARNING: Removing unreachable block (ram,0x000140139994) */
/* WARNING: Removing unreachable block (ram,0x000140139979) */
/* WARNING: Removing unreachable block (ram,0x00014013998e) */
/* WARNING: Removing unreachable block (ram,0x000140139997) */
/* WARNING: Removing unreachable block (ram,0x00014013999f) */
/* WARNING: Removing unreachable block (ram,0x0001401399e2) */
/* WARNING: Removing unreachable block (ram,0x0001401399ec) */
/* WARNING: Removing unreachable block (ram,0x000140139a02) */
/* WARNING: Removing unreachable block (ram,0x000140139a13) */
/* WARNING: Removing unreachable block (ram,0x000140139a1e) */
/* WARNING: Removing unreachable block (ram,0x000140139a23) */
/* WARNING: Removing unreachable block (ram,0x000140139a27) */
/* WARNING: Removing unreachable block (ram,0x000140139a2c) */
/* WARNING: Removing unreachable block (ram,0x000140139a3a) */

longlong * FUN_1401395a0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  LPOLESTR pOVar2;
  HRESULT HVar3;
  int cbMultiByte;
  undefined8 uVar4;
  longlong lVar5;
  LPSTR lpMultiByteStr;
  longlong lVar6;
  LPCWSTR ***ppppWVar7;
  ulonglong uVar8;
  undefined **ppuVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  LPOLESTR local_res10;
  longlong *local_res18;
  undefined *puStackY_128;
  undefined1 auStackY_120 [24];
  LPCWSTR **local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  ulonglong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  IID local_68 [3];
  
  ppuVar9 = &puStackY_128;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (param_2 == (longlong *)0x0) {
    return param_1;
  }
  local_68[0].Data1 = 0;
  local_68[0].Data2 = 0;
  local_68[0].Data3 = 0;
  local_68[0].Data4[0] = '\0';
  local_68[0].Data4[1] = '\0';
  local_68[0].Data4[2] = '\0';
  local_68[0].Data4[3] = '\0';
  local_68[0].Data4[4] = '\0';
  local_68[0].Data4[5] = '\0';
  local_68[0].Data4[6] = '\0';
  local_68[0].Data4[7] = '\0';
  (**(code **)(*param_2 + 0x20))(param_2,local_68);
  local_res10 = (LPOLESTR)0x0;
  HVar3 = StringFromIID(local_68,&local_res10);
  pOVar2 = local_res10;
  if (-1 < HVar3) {
    local_d8 = 0;
    local_e8 = (LPCWSTR **)0x0;
    uStack_e0 = 0;
    local_d0 = 0;
    uVar4 = FUN_1402d6aa0(local_res10);
    FUN_140016170(&local_e8,pOVar2,uVar4);
    if (local_d8 == 0) {
LAB_140139712:
      local_98 = 0;
      uStack_a0 = 0;
      uStack_b0 = 0xf;
      local_a8 = 0;
      local_a8._0_4_ = 0;
      local_a8._4_4_ = 0;
      uStack_a0._0_4_ = 0;
      uStack_a0._4_4_ = 0;
      uStack_90 = 0xf;
      local_98._0_4_ = 0;
      local_98._4_4_ = 0;
      uStack_90._0_4_ = 0xf;
      uStack_90._4_4_ = 0;
      uVar11 = (undefined4)local_a8;
      uVar12 = local_a8._4_4_;
      uVar13 = (undefined4)uStack_a0;
      uVar14 = uStack_a0._4_4_;
      uVar15 = (undefined4)local_98;
      uVar16 = local_98._4_4_;
      uVar17 = (undefined4)uStack_90;
      uVar18 = uStack_90._4_4_;
    }
    else {
      ppppWVar7 = &local_e8;
      if (7 < local_d0) {
        ppppWVar7 = (LPCWSTR ***)local_e8;
      }
      cbMultiByte = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar7,(int)local_d8,(LPSTR)0x0,0,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
      if (cbMultiByte < 1) goto LAB_140139712;
      FUN_140016940(&local_c8,(longlong)cbMultiByte,0);
      lpMultiByteStr = (LPSTR)&local_c8;
      if (0xf < uStack_b0) {
        lpMultiByteStr = (LPSTR)CONCAT44(uStack_c4,local_c8);
      }
      ppppWVar7 = &local_e8;
      if (7 < local_d0) {
        ppppWVar7 = (LPCWSTR ***)local_e8;
      }
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar7,(int)local_d8,lpMultiByteStr,cbMultiByte,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      local_a8 = CONCAT44(uStack_c4,local_c8);
      uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
      uVar11 = local_c8;
      uVar12 = uStack_c4;
      uVar13 = uStack_c0;
      uVar14 = uStack_bc;
      uVar15 = (int)local_b8;
      uVar16 = (int)((ulonglong)local_b8 >> 0x20);
      uVar17 = (int)uStack_b0;
      uVar18 = (int)(uStack_b0 >> 0x20);
    }
    if (param_1 != &local_a8) {
      uVar8 = param_1[3];
      if (uVar8 < 0x10) {
LAB_140139787:
        *(undefined4 *)param_1 = uVar11;
        *(undefined4 *)((longlong)param_1 + 4) = uVar12;
        *(undefined4 *)(param_1 + 1) = uVar13;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar14;
        *(undefined4 *)(param_1 + 2) = uVar15;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar16;
        *(undefined4 *)(param_1 + 3) = uVar17;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar18;
        goto LAB_1401397c6;
      }
      lVar6 = *param_1;
      if (uVar8 + 1 < 0x1000) {
        thunk_FUN_14028af80(lVar6,uVar8 + 1,lVar6);
        goto LAB_140139787;
      }
      lVar5 = lVar6 - *(longlong *)(lVar6 + -8);
      bVar10 = lVar5 + -0x27 < 0;
      if (lVar5 - 8U < 0x20) {
        thunk_FUN_14028af80(*(longlong *)(lVar6 + -8),uVar8 + 0x28);
        *(undefined4 *)param_1 = uVar11;
        *(undefined4 *)((longlong)param_1 + 4) = uVar12;
        *(undefined4 *)(param_1 + 1) = uVar13;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar14;
        *(undefined4 *)(param_1 + 2) = uVar15;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar16;
        *(undefined4 *)(param_1 + 3) = uVar17;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar18;
        goto LAB_1401397c6;
      }
LAB_140139a83:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      ppuVar9 = (undefined **)auStackY_120;
      if (bVar10) {
                    /* WARNING: Subroutine does not return */
        puStackY_128 = &UNK_140139a91;
        FUN_1402c97e4();
      }
      goto LAB_140139a4c;
    }
    if (0xf < uStack_b0) {
      uVar8 = uStack_b0 + 1;
      lVar6 = local_a8;
      if (0xfff < uVar8) {
        lVar6 = *(longlong *)(local_a8 + -8);
        bVar10 = (local_a8 - lVar6) + -0x27 < 0;
        if (0x1f < (local_a8 - lVar6) - 8U) goto LAB_140139a83;
        uVar8 = uStack_b0 + 0x28;
      }
      thunk_FUN_14028af80(lVar6,uVar8);
    }
LAB_1401397c6:
    if (7 < local_d0) {
      uVar8 = local_d0 * 2 + 2;
      ppppWVar7 = (LPCWSTR ***)local_e8;
      if (0xfff < uVar8) {
        ppppWVar7 = (LPCWSTR ***)local_e8[-1];
        bVar10 = (longlong)local_e8 + (-0x27 - (longlong)ppppWVar7) < 0;
        if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)ppppWVar7))) goto LAB_140139a83;
        uVar8 = local_d0 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppWVar7,uVar8);
    }
    CoTaskMemFree(local_res10);
  }
  local_res18 = (longlong *)0x0;
  (**(code **)*param_2)(param_2,&DAT_14048b118,&local_res18);
  if (local_res18 == (longlong *)0x0) {
    return param_1;
  }
  (**(code **)(*local_res18 + 0x28))();
LAB_140139a4c:
  if (local_res18 != (longlong *)0x0) {
    pcVar1 = *(code **)(*local_res18 + 0x10);
    *(undefined8 *)((longlong)ppuVar9 + -8) = 0x140139a5b;
    (*pcVar1)();
  }
  return param_1;
}

