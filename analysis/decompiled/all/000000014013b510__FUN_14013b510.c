// Function: FUN_14013b510
// Addr: 14013b510
// Size: 1217 bytes


/* WARNING: Removing unreachable block (ram,0x00014013b7a3) */
/* WARNING: Removing unreachable block (ram,0x00014013b7ad) */
/* WARNING: Removing unreachable block (ram,0x00014013b7e6) */
/* WARNING: Removing unreachable block (ram,0x00014013b7fa) */
/* WARNING: Removing unreachable block (ram,0x00014013b800) */
/* WARNING: Removing unreachable block (ram,0x00014013b88a) */
/* WARNING: Removing unreachable block (ram,0x00014013b81e) */
/* WARNING: Removing unreachable block (ram,0x00014013b83e) */
/* WARNING: Removing unreachable block (ram,0x00014013b843) */
/* WARNING: Removing unreachable block (ram,0x00014013b852) */
/* WARNING: Removing unreachable block (ram,0x00014013b858) */
/* WARNING: Removing unreachable block (ram,0x00014013b8a5) */
/* WARNING: Removing unreachable block (ram,0x00014013b8f9) */
/* WARNING: Removing unreachable block (ram,0x00014013b8ff) */
/* WARNING: Removing unreachable block (ram,0x00014013b910) */
/* WARNING: Removing unreachable block (ram,0x00014013b925) */
/* WARNING: Removing unreachable block (ram,0x00014013b92c) */
/* WARNING: Removing unreachable block (ram,0x00014013b8ae) */
/* WARNING: Removing unreachable block (ram,0x00014013b8b8) */
/* WARNING: Removing unreachable block (ram,0x00014013b8e3) */
/* WARNING: Removing unreachable block (ram,0x00014013b8c8) */
/* WARNING: Removing unreachable block (ram,0x00014013b8dd) */
/* WARNING: Removing unreachable block (ram,0x00014013b8e6) */
/* WARNING: Removing unreachable block (ram,0x00014013b8ee) */
/* WARNING: Removing unreachable block (ram,0x00014013b931) */
/* WARNING: Removing unreachable block (ram,0x00014013b93b) */
/* WARNING: Removing unreachable block (ram,0x00014013b951) */
/* WARNING: Removing unreachable block (ram,0x00014013b962) */
/* WARNING: Removing unreachable block (ram,0x00014013b96d) */
/* WARNING: Removing unreachable block (ram,0x00014013b972) */
/* WARNING: Removing unreachable block (ram,0x00014013b976) */
/* WARNING: Removing unreachable block (ram,0x00014013b97b) */
/* WARNING: Removing unreachable block (ram,0x00014013b989) */

longlong * FUN_14013b510(longlong *param_1,longlong *param_2)

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
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  LPOLESTR local_res10;
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
  if (HVar3 < 0) goto LAB_14013b785;
  local_d8 = 0;
  local_e8 = (LPCWSTR **)0x0;
  uStack_e0 = 0;
  local_d0 = 0;
  uVar4 = FUN_1402d6aa0(local_res10);
  FUN_140016170(&local_e8,pOVar2,uVar4);
  if (local_d8 == 0) {
LAB_14013b682:
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
    uVar10 = (undefined4)local_a8;
    uVar11 = local_a8._4_4_;
    uVar12 = (undefined4)uStack_a0;
    uVar13 = uStack_a0._4_4_;
    uVar14 = (undefined4)local_98;
    uVar15 = local_98._4_4_;
    uVar16 = (undefined4)uStack_90;
    uVar17 = uStack_90._4_4_;
  }
  else {
    ppppWVar7 = &local_e8;
    if (7 < local_d0) {
      ppppWVar7 = (LPCWSTR ***)local_e8;
    }
    cbMultiByte = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar7,(int)local_d8,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    if (cbMultiByte < 1) goto LAB_14013b682;
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
    uVar10 = local_c8;
    uVar11 = uStack_c4;
    uVar12 = uStack_c0;
    uVar13 = uStack_bc;
    uVar14 = (int)local_b8;
    uVar15 = (int)((ulonglong)local_b8 >> 0x20);
    uVar16 = (int)uStack_b0;
    uVar17 = (int)(uStack_b0 >> 0x20);
  }
  if (param_1 == &local_a8) {
    if (0xf < uStack_b0) {
      uVar8 = uStack_b0 + 1;
      lVar6 = local_a8;
      if (0xfff < uVar8) {
        lVar6 = *(longlong *)(local_a8 + -8);
        bVar9 = (local_a8 - lVar6) + -0x27 < 0;
        if (0x1f < (local_a8 - lVar6) - 8U) goto LAB_14013b9c3;
        uVar8 = uStack_b0 + 0x28;
      }
      thunk_FUN_14028af80(lVar6,uVar8);
    }
  }
  else {
    uVar8 = param_1[3];
    if (0xf < uVar8) {
      lVar6 = *param_1;
      if (0xfff < uVar8 + 1) {
        lVar5 = lVar6 - *(longlong *)(lVar6 + -8);
        bVar9 = lVar5 + -0x27 < 0;
        if (0x1f < lVar5 - 8U) goto LAB_14013b9c3;
        thunk_FUN_14028af80(*(longlong *)(lVar6 + -8),uVar8 + 0x28);
        *(undefined4 *)param_1 = uVar10;
        *(undefined4 *)((longlong)param_1 + 4) = uVar11;
        *(undefined4 *)(param_1 + 1) = uVar12;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar13;
        *(undefined4 *)(param_1 + 2) = uVar14;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar15;
        *(undefined4 *)(param_1 + 3) = uVar16;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar17;
        goto LAB_14013b736;
      }
      thunk_FUN_14028af80(lVar6,uVar8 + 1,lVar6);
    }
    *(undefined4 *)param_1 = uVar10;
    *(undefined4 *)((longlong)param_1 + 4) = uVar11;
    *(undefined4 *)(param_1 + 1) = uVar12;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar13;
    *(undefined4 *)(param_1 + 2) = uVar14;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar15;
    *(undefined4 *)(param_1 + 3) = uVar16;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar17;
  }
LAB_14013b736:
  if (7 < local_d0) {
    uVar8 = local_d0 * 2 + 2;
    ppppWVar7 = (LPCWSTR ***)local_e8;
    if (0xfff < uVar8) {
      ppppWVar7 = (LPCWSTR ***)local_e8[-1];
      bVar9 = (longlong)local_e8 + (-0x27 - (longlong)ppppWVar7) < 0;
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)ppppWVar7))) {
LAB_14013b9c3:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        if (!bVar9) {
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402c97e4();
      }
      uVar8 = local_d0 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar7,uVar8);
  }
  CoTaskMemFree(local_res10);
LAB_14013b785:
  (**(code **)(*param_2 + 0x28))(param_2);
  return param_1;
}

