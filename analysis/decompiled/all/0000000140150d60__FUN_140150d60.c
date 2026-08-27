// Function: FUN_140150d60
// Addr: 140150d60
// Size: 1009 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_140150d60(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 local_118;
  uint local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined **local_d0;
  code *local_c8;
  longlong local_b8;
  undefined ***local_98;
  longlong local_90 [3];
  ulonglong local_78;
  undefined **local_68;
  longlong local_60;
  undefined ***local_30;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x158);
    (**(code **)(*plVar14 + 0x38))(plVar14,1);
    plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x158);
    (**(code **)(*plVar14 + 0x50))(plVar14,1);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
      lVar11 = puVar3[2];
      iVar1 = *(int *)(lVar11 + 0x2f8);
      lVar4 = *(longlong *)(lVar11 + 0xd0);
      if ((iVar1 != 0) && (lVar4 != 0)) {
        FUN_14015f7b0(lVar4,iVar1);
      }
      *(undefined4 *)(lVar11 + 0x2f8) = 0;
      plVar14 = (longlong *)(lVar11 + 0x200);
      if (0xf < *(ulonglong *)(lVar11 + 0x218)) {
        plVar14 = (longlong *)*plVar14;
      }
      FUN_1400d3f80(local_90,*(undefined8 *)(*(longlong *)(lVar11 + 200) + 0x1898),plVar14,1);
      local_110 = (local_110 >> 8 & 0xfffffe) << 8;
      uStack_e8 = 0;
      local_f0 = 0;
      local_e0 = 0;
      local_d8 = 0xf;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      cVar6 = FUN_140017840(local_90,&local_118,&local_f0);
      if (cVar6 != '\0') {
        lVar9 = FUN_140086de0(&local_118,"passes","");
        if ((*(char *)(lVar9 + 8) == '\x06') && (iVar7 = FUN_1400863a0(lVar9), iVar7 != 0)) {
          uVar10 = FUN_140086540(lVar9,0);
          FUN_140085520(&local_118,uVar10);
        }
        if (*(char *)(lVar11 + 0x228) == '\a') {
          uVar10 = FUN_140153200(&local_d0,&local_118,lVar11 + 0x220);
          FUN_140085610(&local_118,uVar10);
          FUN_140085440(&local_d0);
        }
        FUN_1401556e0(lVar11,&local_118);
      }
      if (iVar1 != 0) {
        if (*(longlong *)(lVar11 + 0xd0) != 0) {
          local_d0 = &PTR_LAB_14048b6d0;
          local_c8 = FUN_140157780;
          local_98 = &local_d0;
          local_b8 = lVar11;
          uVar8 = FUN_14015f330(*(longlong *)(lVar11 + 0xd0),&local_d0);
          *(undefined4 *)(lVar11 + 0x2f8) = uVar8;
        }
        if ((*(longlong *)(lVar11 + 0xd0) != 0) && (*(longlong *)(lVar11 + 0xd0) != lVar4)) {
          FUN_140157780(lVar11);
        }
      }
      if ((byte)local_110 < 8) {
                    /* WARNING: Could not recover jumptable at 0x000140150f96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                  *(uint *)((ulonglong)(byte)local_110 * 4 + 0x140151184)))
                  (IMAGE_DOS_HEADER_140000000.e_magic +
                   *(uint *)((ulonglong)(byte)local_110 * 4 + 0x140151184));
        return;
      }
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      lVar11 = local_108;
      local_118 = 0;
      if (local_108 != 0) {
        FUN_140017240(local_108 + 0x40);
        FUN_140017240(lVar11 + 0x20);
        FUN_140017240(lVar11);
        thunk_FUN_14028af80(lVar11,0x60);
      }
      if (0xf < local_d8) {
        uVar12 = local_d8 + 1;
        uVar13 = local_f0;
        if (0xfff < uVar12) {
          uVar13 = *(ulonglong *)(local_f0 - 8);
          if (0x1f < (local_f0 - uVar13) - 8) goto LAB_129152698;
          uVar12 = local_d8 + 0x28;
        }
        thunk_FUN_14028af80(uVar13,uVar12);
      }
      local_e0 = 0;
      local_d8 = 0xf;
      local_f0 = local_f0 & 0xffffffffffffff00;
      if (0xf < local_78) {
        uVar13 = local_78 + 1;
        lVar11 = local_90[0];
        if (0xfff < uVar13) {
          lVar11 = *(longlong *)(local_90[0] + -8);
          if (0x1f < (local_90[0] - lVar11) - 8U) {
LAB_129152698:
            pcVar5 = (code *)swi(0x29);
            (*pcVar5)(5);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar13 = local_78 + 0x28;
        }
        thunk_FUN_14028af80(lVar11,uVar13);
      }
    }
    FUN_140077f50(param_1 + 0x40);
    plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x158);
    (**(code **)(*plVar14 + 0x38))(plVar14,0);
    plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x158);
    (**(code **)(*plVar14 + 0x50))(plVar14,0);
    local_68 = &PTR_LAB_14048b4d0;
    local_30 = &local_68;
    plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x158);
    local_60 = param_1;
    (**(code **)(*plVar14 + 0x40))(plVar14,1,&local_68);
    FUN_1401511b0(param_1);
    if (local_30 != (undefined ***)0x0) {
      (*(code *)(*local_30)[4])
                (local_30,CONCAT71((int7)((ulonglong)&local_68 >> 8),local_30 != &local_68));
    }
  }
  return;
}

