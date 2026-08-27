// Function: FUN_140044160
// Addr: 140044160
// Size: 751 bytes


undefined8 FUN_140044160(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *local_68;
  uint local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_60 = CONCAT31(local_60._1_3_,7);
  local_60 = local_60 & 0xfffffeff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  plVar1 = (longlong *)FUN_14028af20(0x10);
  *plVar1 = 0;
  plVar1[1] = 0;
  lVar2 = FUN_14028af20(0x58);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *plVar1 = lVar2;
  local_68 = plVar1;
  FUN_140085610(param_2,&local_68);
  if ((byte)local_60 < 8) {
                    /* WARNING: Could not recover jumptable at 0x0001400441f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                      *(uint *)(&DAT_14004447c + (ulonglong)(byte)local_60 * 4)))
                      (IMAGE_DOS_HEADER_140000000.e_magic +
                       *(uint *)(&DAT_14004447c + (ulonglong)(byte)local_60 * 4));
    return uVar3;
  }
  FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  lVar2 = local_58;
  if (local_58 != 0) {
    FUN_140017240(local_58 + 0x40);
    FUN_140017240(lVar2 + 0x20);
    FUN_140017240(lVar2);
    thunk_FUN_14028af80(lVar2,0x60);
  }
  if (*(char *)(param_1 + 0x50) == '\a') {
    lVar2 = param_1 + 0x48;
    lVar4 = FUN_140087490(lVar2,"wproperties","");
    if (lVar4 != 0) {
      lVar4 = FUN_140086de0(lVar2,"wproperties","");
      if (*(char *)(lVar4 + 8) == '\a') {
        uVar3 = FUN_140086de0(lVar2,"wproperties","");
        FUN_140085520(param_2,uVar3);
        goto LAB_1400443f9;
      }
    }
    if (*(char *)(param_1 + 0x50) == '\a') {
      local_60 = CONCAT31(local_60._1_3_,7);
      local_60 = local_60 & 0xfffffeff;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      plVar1 = (longlong *)FUN_14028af20(0x10);
      *plVar1 = 0;
      plVar1[1] = 0;
      lVar2 = FUN_14028af20(0x58);
      *(longlong *)lVar2 = lVar2;
      *(longlong *)(lVar2 + 8) = lVar2;
      *(longlong *)(lVar2 + 0x10) = lVar2;
      *(undefined2 *)(lVar2 + 0x18) = 0x101;
      *plVar1 = lVar2;
      local_68 = plVar1;
      uVar3 = FUN_140086de0(param_1 + 0x48,"wproperties","");
      uVar3 = FUN_140085610(uVar3,&local_68);
      FUN_140085520(param_2,uVar3);
      if ((byte)local_60 < 8) {
                    /* WARNING: Could not recover jumptable at 0x000140044379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                          *(uint *)(&DAT_14004449c + (ulonglong)(byte)local_60 * 4)))
                          (IMAGE_DOS_HEADER_140000000.e_magic +
                           *(uint *)(&DAT_14004449c + (ulonglong)(byte)local_60 * 4));
        return uVar3;
      }
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      lVar2 = local_58;
      if (local_58 != 0) {
        FUN_140017240(local_58 + 0x40);
        FUN_140017240(lVar2 + 0x20);
        FUN_140017240(lVar2);
        thunk_FUN_14028af80(lVar2,0x60);
      }
LAB_1400443f9:
      lVar2 = param_1 + 0x48;
      if (*(char *)(param_1 + 0x50) == '\a') {
        lVar4 = FUN_140087490(lVar2,"wpropertiesvd","");
        if (lVar4 != 0) {
          lVar4 = FUN_140086de0(lVar2,"wpropertiesvd","");
          if (*(char *)(lVar4 + 8) == '\a') {
            uVar3 = FUN_140086de0(lVar2,"wpropertiesvd","");
            FUN_140085520(param_3,uVar3);
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

