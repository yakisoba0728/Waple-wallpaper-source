// Function: FUN_14028f860
// Addr: 14028f860
// Size: 1013 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14028f860(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  HANDLE hFile;
  HANDLE hFile_00;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  bool local_c8;
  undefined2 uStack_c7;
  undefined1 uStack_c5;
  uint uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  longlong local_70;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_f8;
  param_3 = param_3 & 0xf;
  if (param_3 == 2) {
LAB_14028fada:
    local_a8 = 0;
    local_c0 = 0x20;
    local_b8 = 0;
    uStack_b0 = 0;
    uVar2 = CopyFile2(param_1,param_2,&local_c0);
    local_c8 = (bool)((byte)(uVar2 >> 0x1f) ^ 1);
    uStack_c4 = 0;
    if ((int)uVar2 < 0) {
      uStack_c4 = uVar2 & 0xffff;
    }
    goto LAB_14028fb27;
  }
  local_a8 = 0;
  local_c0 = 0x100000020;
  local_b8 = 0;
  uStack_b0 = 0;
  uVar2 = CopyFile2(0,param_2,&local_c0);
  if ((int)uVar2 < 0) {
    uStack_c4 = uVar2 & 0xffff;
  }
  else {
    uStack_c4 = 0;
  }
  local_c8 = (int)uVar2 >= 0;
  uVar1 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
  if (uStack_c4 != 0x50) {
    return uVar1;
  }
  if (param_3 == 0) {
    return uVar1;
  }
  local_98 = 0;
  local_d8 = &local_a0;
  local_a0 = 0x20;
  uVar6 = 3;
  if (param_3 != 1) {
    uVar6 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  hFile = (HANDLE)CreateFile2(param_1,0x80,uVar6,3);
  if ((hFile == (HANDLE)0xffffffffffffffff) && (DVar3 = GetLastError(), DVar3 != 0)) {
    local_c8 = false;
    uStack_c4 = DVar3;
    goto LAB_14028fb27;
  }
  local_b8 = 0;
  local_d8 = &local_c0;
  local_c0 = 0x20;
  uStack_b0 = 0;
  local_a8 = 0;
  hFile_00 = (HANDLE)CreateFile2(param_2,0x80,uVar6,3);
  if ((hFile_00 == (HANDLE)0xffffffffffffffff) && (DVar3 = GetLastError(), DVar3 != 0)) {
    if ((hFile == (HANDLE)0xffffffffffffffff) || (BVar4 = CloseHandle(hFile), BVar4 != 0)) {
      local_c8 = false;
      uStack_c4 = DVar3;
      goto LAB_14028fb27;
    }
    goto LAB_14028fc4b;
  }
  if (param_3 == 4) {
    BVar4 = GetFileInformationByHandleEx(hFile,FileBasicInfo,local_80,0x28);
    lVar7 = local_70;
    if (BVar4 != 0) {
LAB_14028fa74:
      BVar4 = GetFileInformationByHandleEx(hFile_00,FileBasicInfo,local_80,0x28);
      if (BVar4 == 0) {
        DVar3 = GetLastError();
        if (DVar3 != 0) goto LAB_14028fa27;
        local_70 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      }
      if (local_70 < lVar7) {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar4 = CloseHandle(hFile_00), BVar4 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar4 = CloseHandle(hFile), BVar4 == 0)))
           ) goto LAB_14028fc4b;
        goto LAB_14028fada;
      }
      goto LAB_14028fb52;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0) {
      lVar7 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
      goto LAB_14028fa74;
    }
LAB_14028fa27:
    if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar4 = CloseHandle(hFile_00), BVar4 == 0)) ||
       ((hFile != (HANDLE)0xffffffffffffffff && (BVar4 = CloseHandle(hFile), BVar4 == 0)))) {
LAB_14028fc4b:
                    /* WARNING: Subroutine does not return */
      FUN_1402c97e4();
    }
  }
  else {
LAB_14028fb52:
    DVar3 = FUN_14028f640(hFile,local_80);
    if ((DVar3 == 0) && (DVar3 = FUN_14028f640(hFile_00,local_58), DVar3 == 0)) {
      iVar5 = memcmp(local_80,local_58,0x18);
      if (iVar5 == 0) {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar4 = CloseHandle(hFile_00), BVar4 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar4 = CloseHandle(hFile), BVar4 == 0)))
           ) {
LAB_14028fc51:
                    /* WARNING: Subroutine does not return */
          FUN_1402c97e4();
        }
        local_c8 = false;
        uStack_c4 = 0x20;
      }
      else {
        if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar4 = CloseHandle(hFile_00), BVar4 == 0)
            ) || ((hFile != (HANDLE)0xffffffffffffffff && (BVar4 = CloseHandle(hFile), BVar4 == 0)))
           ) goto LAB_14028fc51;
        local_c8 = false;
        uStack_c4 = 0;
      }
      goto LAB_14028fb27;
    }
    if (((hFile_00 != (HANDLE)0xffffffffffffffff) && (BVar4 = CloseHandle(hFile_00), BVar4 == 0)) ||
       ((hFile != (HANDLE)0xffffffffffffffff && (BVar4 = CloseHandle(hFile), BVar4 == 0))))
    goto LAB_14028fc51;
  }
  local_c8 = false;
  uStack_c4 = DVar3;
LAB_14028fb27:
  return CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,local_c8)));
}

