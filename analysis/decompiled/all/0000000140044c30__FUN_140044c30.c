// Function: FUN_140044c30
// Addr: 140044c30
// Size: 957 bytes


void FUN_140044c30(longlong param_1,char *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  size_t sVar4;
  longlong lVar5;
  longlong *local_68;
  uint local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  longlong local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  if (*(char *)(param_3 + 8) == '\x06') {
    local_60 = CONCAT31(local_60._1_3_,7);
    local_60 = local_60 & 0xfffffeff;
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
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
    uVar3 = FUN_140086de0(param_1 + 0x48,"general","");
    lVar2 = FUN_140087490(uVar3,"wpresets","");
    if (lVar2 != 0) {
      uVar3 = FUN_140086de0(uVar3,"wpresets","");
      FUN_140085520(&local_68,uVar3);
    }
    sVar4 = strlen(param_2);
    lVar2 = FUN_140087490(&local_68,param_2,param_2 + sVar4);
    if (lVar2 == 0) {
      local_38 = CONCAT31(local_38._1_3_,7);
      local_38 = local_38 & 0xfffffeff;
      local_30 = 0;
      uStack_28 = 0;
      local_20 = 0;
      plVar1 = (longlong *)FUN_14028af20(0x10);
      *plVar1 = 0;
      plVar1[1] = 0;
      lVar2 = FUN_14028af20(0x58);
      *(longlong *)lVar2 = lVar2;
      *(longlong *)(lVar2 + 8) = lVar2;
      *(longlong *)(lVar2 + 0x10) = lVar2;
      *(undefined2 *)(lVar2 + 0x18) = 0x101;
      *plVar1 = lVar2;
      local_40 = plVar1;
      uVar3 = FUN_140086de0(&local_40,"presets","");
      FUN_140085520(uVar3,param_3);
      sVar4 = strlen(param_2);
      uVar3 = FUN_140086de0(&local_68,param_2,param_2 + sVar4);
      FUN_140085520(uVar3,&local_40);
      if ((byte)local_38 < 8) {
                    /* WARNING: Could not recover jumptable at 0x000140044f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                  *(uint *)(&DAT_1400450ac + (ulonglong)(byte)local_38 * 4)))
                  (IMAGE_DOS_HEADER_140000000.e_magic +
                   *(uint *)(&DAT_1400450ac + (ulonglong)(byte)local_38 * 4));
        return;
      }
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      lVar2 = local_30;
      if (local_30 != 0) {
        FUN_140017240(local_30 + 0x40);
        FUN_140017240(lVar2 + 0x20);
        FUN_140017240(lVar2);
        thunk_FUN_14028af80(lVar2,0x60);
      }
    }
    else {
      sVar4 = strlen(param_2);
      lVar2 = FUN_140086de0(&local_68,param_2,param_2 + sVar4);
      if (*(char *)(lVar2 + 8) != '\a') {
        local_38 = CONCAT31(local_38._1_3_,7);
        local_38 = local_38 & 0xfffffeff;
        local_30 = 0;
        uStack_28 = 0;
        local_20 = 0;
        plVar1 = (longlong *)FUN_14028af20(0x10);
        *plVar1 = 0;
        plVar1[1] = 0;
        lVar5 = FUN_14028af20(0x58);
        *(longlong *)lVar5 = lVar5;
        *(longlong *)(lVar5 + 8) = lVar5;
        *(longlong *)(lVar5 + 0x10) = lVar5;
        *(undefined2 *)(lVar5 + 0x18) = 0x101;
        *plVar1 = lVar5;
        local_40 = plVar1;
        FUN_140085610(lVar2,&local_40);
        if ((byte)local_38 < 8) {
                    /* WARNING: Could not recover jumptable at 0x000140044dc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                    *(uint *)(&DAT_14004508c + (ulonglong)(byte)local_38 * 4)))
                    (IMAGE_DOS_HEADER_140000000.e_magic +
                     *(uint *)(&DAT_14004508c + (ulonglong)(byte)local_38 * 4));
          return;
        }
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
        lVar5 = local_30;
        if (local_30 != 0) {
          FUN_140017240(local_30 + 0x40);
          FUN_140017240(lVar5 + 0x20);
          FUN_140017240(lVar5);
          thunk_FUN_14028af80(lVar5,0x60);
        }
      }
      uVar3 = FUN_140086de0(lVar2,"presets","");
      FUN_140085520(uVar3,param_3);
    }
    uVar3 = FUN_140086de0(param_1 + 0x48,"general","");
    uVar3 = FUN_140086de0(uVar3,"wpresets","");
    FUN_140085520(uVar3,&local_68);
    if ((byte)local_60 < 8) {
                    /* WARNING: Could not recover jumptable at 0x000140044ff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)(&LAB_1400450cc + (ulonglong)(byte)local_60 * 4)))
                (IMAGE_DOS_HEADER_140000000.e_magic +
                 *(uint *)(&LAB_1400450cc + (ulonglong)(byte)local_60 * 4));
      return;
    }
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    lVar2 = local_58;
    if (local_58 != 0) {
      FUN_140017240(local_58 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  return;
}

