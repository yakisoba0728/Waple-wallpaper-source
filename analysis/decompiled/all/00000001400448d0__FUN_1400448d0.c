// Function: FUN_1400448d0
// Addr: 1400448d0
// Size: 680 bytes


void FUN_1400448d0(longlong param_1,char *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  size_t sVar4;
  longlong lVar5;
  uint uVar6;
  longlong *local_88;
  uint local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  longlong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_80 = CONCAT31(local_80._1_3_,6);
  uVar6 = local_80 & 0xfffffeff;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = uVar6;
  plVar1 = (longlong *)FUN_14028af20(0x10);
  *plVar1 = 0;
  plVar1[1] = 0;
  lVar2 = FUN_14028af20(0x58);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *plVar1 = lVar2;
  local_88 = plVar1;
  uVar3 = FUN_140086de0(param_1 + 0x48,"general","");
  lVar2 = FUN_140087490(uVar3,"wpresets","");
  if (lVar2 != 0) {
    uVar3 = FUN_140086de0(uVar3,"wpresets","");
    FUN_140085520(&local_88,uVar3);
    uVar6 = local_80;
  }
  local_58 = CONCAT31(local_58._1_3_,6);
  local_58 = local_58 & 0xfffffeff;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  plVar1 = (longlong *)FUN_14028af20(0x10);
  *plVar1 = 0;
  plVar1[1] = 0;
  lVar2 = FUN_14028af20(0x58);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *plVar1 = lVar2;
  local_60 = plVar1;
  FUN_140085610(param_3,&local_60);
  if (7 < (byte)local_58) {
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    lVar2 = local_50;
    if (local_50 != 0) {
      FUN_140017240(local_50 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
    if (((param_2 != (char *)0x0) && (*param_2 != '\0')) && ((char)uVar6 == '\a')) {
      sVar4 = strlen(param_2);
      lVar2 = FUN_140087490(&local_88,param_2,param_2 + sVar4);
      if (lVar2 != 0) {
        sVar4 = strlen(param_2);
        lVar2 = FUN_140086de0(&local_88,param_2,param_2 + sVar4);
        uVar6 = local_80;
        if (((*(char *)(lVar2 + 8) == '\a') &&
            (lVar5 = FUN_140087490(lVar2,"presets",""), uVar6 = local_80, lVar5 != 0)) &&
           (lVar5 = FUN_140086de0(lVar2,"presets",""), uVar6 = local_80,
           *(char *)(lVar5 + 8) == '\x06')) {
          uVar3 = FUN_140086de0(lVar2,"presets","");
          FUN_140085520(param_3,uVar3);
          uVar6 = local_80;
        }
      }
    }
    if (7 < (uVar6 & 0xff)) {
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      lVar2 = local_78;
      if (local_78 != 0) {
        FUN_140017240(local_78 + 0x40);
        FUN_140017240(lVar2 + 0x20);
        FUN_140017240(lVar2);
        thunk_FUN_14028af80(lVar2,0x60);
      }
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000140044b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
              *(uint *)(&LAB_140044c04 + (ulonglong)(uVar6 & 0xff) * 4)))
              (IMAGE_DOS_HEADER_140000000.e_magic +
               *(uint *)(&LAB_140044c04 + (ulonglong)(uVar6 & 0xff) * 4));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140044a0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_140044be4 + (ulonglong)(byte)local_58 * 4)))
            (IMAGE_DOS_HEADER_140000000.e_magic +
             *(uint *)(&DAT_140044be4 + (ulonglong)(byte)local_58 * 4));
  return;
}

