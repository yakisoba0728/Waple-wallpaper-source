// Function: FUN_14010a0e0
// Addr: 14010a0e0
// Size: 903 bytes


undefined8 * FUN_14010a0e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *local_68;
  uint local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_140488a40;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfffffeff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = *param_2;
  param_1[0xd] = param_2[1];
  param_1[0xe] = param_2[2];
  FUN_140016600(param_1 + 0xf,param_2 + 3);
  param_1[0x13] = param_2[7];
  iVar6 = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_2 + 0x44);
  *(undefined1 *)((longlong)param_1 + 0xa5) = *(undefined1 *)((longlong)param_2 + 0x45);
  *(undefined1 *)((longlong)param_1 + 0xa6) = *(undefined1 *)((longlong)param_2 + 0x46);
  param_1[0x15] = 0;
  DAT_1404e8c28 = DAT_1404e8c28 + 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xf;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0xf;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0xf;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0xf;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(int *)((longlong)param_1 + 0x154) = DAT_1404e8c28;
  LOCK();
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = 1;
  UNLOCK();
  do {
    if (iVar1 == 0) {
      *(undefined8 *)((longlong)param_1 + 0x144) = 0;
      *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
      local_60 = CONCAT31(local_60._1_3_,7);
      local_60 = local_60 & 0xfffffeff;
      local_58 = 0;
      uStack_50 = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      local_48 = 0;
      plVar2 = (longlong *)FUN_14028af20(0x10);
      *plVar2 = 0;
      plVar2[1] = 0;
      lVar3 = FUN_14028af20(0x58);
      *(longlong *)lVar3 = lVar3;
      *(longlong *)(lVar3 + 8) = lVar3;
      *(longlong *)(lVar3 + 0x10) = lVar3;
      *(undefined2 *)(lVar3 + 0x18) = 0x101;
      *plVar2 = lVar3;
      local_68 = plVar2;
      uVar4 = FUN_140086de0(param_1 + 7,"general","");
      FUN_140085610(uVar4,&local_68);
      if ((byte)local_60 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014010a33d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar5 = (undefined8 *)
                 (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                           *(uint *)(&DAT_14010a4d4 + (ulonglong)(byte)local_60 * 4)))
                           (IMAGE_DOS_HEADER_140000000.e_magic +
                            *(uint *)(&DAT_14010a4d4 + (ulonglong)(byte)local_60 * 4));
        return puVar5;
      }
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      lVar3 = local_58;
      if (local_58 != 0) {
        FUN_140017240(local_58 + 0x40);
        FUN_140017240(lVar3 + 0x20);
        FUN_140017240(lVar3);
        thunk_FUN_14028af80(lVar3,0x60);
      }
      local_60 = CONCAT31(local_60._1_3_,7);
      local_60 = local_60 & 0xfffffeff;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      plVar2 = (longlong *)FUN_14028af20(0x10);
      *plVar2 = 0;
      plVar2[1] = 0;
      lVar3 = FUN_14028af20(0x58);
      *(longlong *)lVar3 = lVar3;
      *(longlong *)(lVar3 + 8) = lVar3;
      *(longlong *)(lVar3 + 0x10) = lVar3;
      *(undefined2 *)(lVar3 + 0x18) = 0x101;
      *plVar2 = lVar3;
      local_68 = plVar2;
      uVar4 = FUN_140086de0(param_1 + 7,"wproperties","");
      FUN_140085610(uVar4,&local_68);
      if ((byte)local_60 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014010a441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar5 = (undefined8 *)
                 (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                           *(uint *)(&LAB_14010a4f4 + (ulonglong)(byte)local_60 * 4)))
                           (IMAGE_DOS_HEADER_140000000.e_magic +
                            *(uint *)(&LAB_14010a4f4 + (ulonglong)(byte)local_60 * 4));
        return puVar5;
      }
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      lVar3 = local_58;
      if (local_58 != 0) {
        FUN_140017240(local_58 + 0x40);
        FUN_140017240(lVar3 + 0x20);
        FUN_140017240(lVar3);
        thunk_FUN_14028af80(lVar3,0x60);
      }
      return param_1;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    while (iVar1 != 0) {
      iVar1 = iVar6;
      if (iVar6 == 0) {
LAB_14010a289:
        iVar6 = iVar6 * 2;
      }
      else {
        do {
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        if (iVar6 < 0x40) goto LAB_14010a289;
        iVar6 = 0x40;
      }
      iVar1 = *(int *)(param_1 + 0x28);
    }
    LOCK();
    iVar1 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = 1;
    UNLOCK();
  } while( true );
}

