// Function: FUN_140046620
// Addr: 140046620
// Size: 527 bytes


undefined8 FUN_140046620(longlong param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  size_t sVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *local_38;
  uint local_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uVar1 = FUN_140086de0(param_1 + 0x48,"general","");
  uVar1 = FUN_140086de0(uVar1,&DAT_1404737fc,&DAT_140473800);
  FUN_140085520(param_3,uVar1);
  lVar2 = FUN_140087490(param_3,"usermonitors","");
  if (lVar2 != 0) {
    lVar2 = FUN_140086de0(param_3,"usermonitors","");
    if (*(char *)(lVar2 + 8) == '\a') {
      sVar3 = strlen(param_2);
      lVar4 = FUN_140087490(lVar2,param_2,param_2 + sVar3);
      if (lVar4 != 0) {
        sVar3 = strlen(param_2);
        uVar1 = FUN_140086de0(lVar2,param_2,param_2 + sVar3);
        uVar5 = FUN_140086de0(param_3,"location","");
        FUN_140085520(uVar5,uVar1);
      }
    }
  }
  lVar2 = FUN_140086de0(param_3,"location","");
  if (*(char *)(lVar2 + 8) != '\a') {
    local_30 = CONCAT31(local_30._1_3_,7);
    local_30 = local_30 & 0xfffffeff;
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    plVar6 = (longlong *)FUN_14028af20(0x10);
    *plVar6 = 0;
    plVar6[1] = 0;
    lVar2 = FUN_14028af20(0x58);
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    *(undefined2 *)(lVar2 + 0x18) = 0x101;
    *plVar6 = lVar2;
    local_38 = plVar6;
    uVar1 = FUN_140086de0(param_3,"location","");
    FUN_140085610(uVar1,&local_38);
    if ((byte)local_30 < 8) {
                    /* WARNING: Could not recover jumptable at 0x0001400467b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                        *(uint *)(&LAB_140046848 + (ulonglong)(byte)local_30 * 4)))
                        (IMAGE_DOS_HEADER_140000000.e_magic +
                         *(uint *)(&LAB_140046848 + (ulonglong)(byte)local_30 * 4));
      return uVar1;
    }
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    lVar2 = local_28;
    if (local_28 != 0) {
      FUN_140017240(local_28 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  return 1;
}

