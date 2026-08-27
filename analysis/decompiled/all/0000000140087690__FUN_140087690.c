// Function: FUN_140087690
// Addr: 140087690
// Size: 514 bytes


longlong * FUN_140087690(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  undefined4 extraout_XMM0_Da;
  longlong *local_78;
  uint local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((char)param_1[1] == '\0') {
    local_70 = CONCAT31(local_70._1_3_,6);
    local_70 = local_70 & 0xfffffeff;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    plVar3 = (longlong *)FUN_14028af20(0x10);
    *plVar3 = 0;
    plVar3[1] = 0;
    lVar4 = FUN_14028af20(0x58);
    *(longlong *)lVar4 = lVar4;
    *(longlong *)(lVar4 + 8) = lVar4;
    *(longlong *)(lVar4 + 0x10) = lVar4;
    *(undefined2 *)(lVar4 + 0x18) = 0x101;
    *plVar3 = lVar4;
    local_78 = plVar3;
    FUN_140085610(param_1,&local_78);
    if ((byte)local_70 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014008772d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar5 = (undefined8 *)
               (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                         *(uint *)(&DAT_1400878cc + (ulonglong)(byte)local_70 * 4)))
                         (IMAGE_DOS_HEADER_140000000.e_magic +
                          *(uint *)(&DAT_1400878cc + (ulonglong)(byte)local_70 * 4));
      return puVar5;
    }
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    lVar4 = local_68;
    if (local_68 != 0) {
      FUN_140017240(local_68 + 0x40);
      FUN_140017240(lVar4 + 0x20);
      FUN_140017240(lVar4);
      thunk_FUN_14028af80(lVar4,0x60);
    }
  }
  plVar3 = (longlong *)*param_1;
  uVar2 = FUN_1400863a0(param_1);
  lVar4 = *plVar3;
  plVar6 = (longlong *)FUN_14028af20(0x58);
  plVar6[4] = 0;
  *(undefined4 *)(plVar6 + 5) = uVar2;
  uVar2 = FUN_140085350(plVar6 + 6,param_2);
  *plVar6 = lVar4;
  plVar6[1] = lVar4;
  plVar6[2] = lVar4;
  *(undefined2 *)(plVar6 + 3) = 0;
  plVar7 = (longlong *)*plVar3;
  plVar9 = (longlong *)plVar7[1];
  plVar8 = plVar9;
  if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
    do {
      plVar9 = plVar8;
      cVar1 = FUN_140084ca0(plVar9 + 4,plVar6 + 4);
      if (cVar1 == '\0') {
        plVar8 = (longlong *)*plVar9;
        plVar7 = plVar9;
      }
      else {
        plVar8 = (longlong *)plVar9[2];
      }
      uVar10 = (uint)(cVar1 == '\0');
      uVar2 = extraout_XMM0_Da;
    } while (*(char *)((longlong)plVar8 + 0x19) == '\0');
  }
  else {
    uVar10 = 0;
  }
  if ((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
     (cVar1 = FUN_1400897a0(uVar2,plVar6 + 4,plVar7 + 4), cVar1 == '\0')) {
    FUN_140085440(plVar6 + 6);
    if ((plVar6[4] != 0) && (((byte)(int)plVar6[5] & 3) == 1)) {
      thunk_FUN_1402d9040();
    }
    thunk_FUN_14028af80(plVar6,0x58);
  }
  else {
    if (plVar3[1] == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
      FUN_14003a750();
    }
    local_78 = plVar9;
    local_70 = uVar10;
    plVar7 = (longlong *)FUN_1400371e0(plVar3,&local_78,plVar6);
  }
  return plVar7 + 6;
}

