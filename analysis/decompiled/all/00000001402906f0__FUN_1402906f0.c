// Function: FUN_1402906f0
// Addr: 1402906f0
// Size: 813 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1402906f0(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  HANDLE pvVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_58;
  undefined2 uStack_57;
  undefined1 uStack_55;
  uint uStack_54;
  undefined1 local_50;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_1404dc040 ^ (ulonglong)auStack_88;
  uVar2 = FUN_140290580(&local_50,param_1,0x10180,0x2200000);
  if (uVar2 == 0) {
    pvVar5 = (HANDLE)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,local_50)));
    bVar1 = true;
LAB_14029073e:
    local_58 = 0x13;
    uStack_57 = 0;
    uStack_55 = 0;
    BVar3 = SetFileInformationByHandle(pvVar5,0x15,&local_58,4);
    if (BVar3 != 0) {
LAB_140290765:
      if ((pvVar5 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(pvVar5), BVar3 == 0)) {
LAB_140290a13:
                    /* WARNING: Subroutine does not return */
        FUN_1402c97e4();
      }
LAB_14029077c:
      local_58 = 1;
      uStack_54 = 0;
      goto LAB_1402909df;
    }
    uVar2 = GetLastError();
    if (((uVar2 != 1) && (uVar2 != 0x32)) && (uVar2 != 0x57)) {
LAB_14029081f:
      uStack_54 = uVar2;
      if (pvVar5 != (HANDLE)0xffffffffffffffff) {
        iVar4 = CloseHandle(pvVar5);
        goto joined_r0x0001402909d6;
      }
      goto LAB_1402909db;
    }
    uVar2 = FUN_14028f6e0(pvVar5);
    if (uVar2 == 0) goto LAB_140290765;
    if ((uVar2 != 5) || (!bVar1)) goto LAB_14029081f;
    BVar3 = GetFileInformationByHandleEx(pvVar5,FileBasicInfo,&local_48,0x28);
    if (BVar3 != 0) {
      if ((local_28 & 1) == 0) {
        if (pvVar5 != (HANDLE)0xffffffffffffffff) {
          iVar4 = CloseHandle(pvVar5);
joined_r0x000140290992:
          if (iVar4 == 0) goto LAB_140290a19;
        }
LAB_140290941:
        uStack_54 = 5;
        goto LAB_1402909db;
      }
      local_28 = local_28 ^ 1;
      BVar3 = SetFileInformationByHandle(pvVar5,FileBasicInfo,&local_48,0x28);
      if (BVar3 == 0) goto LAB_140290873;
      iVar4 = FUN_14028f6e0(pvVar5);
      if (iVar4 != 0) {
        if (iVar4 == 5) {
          local_28 = local_28 | 1;
          BVar3 = SetFileInformationByHandle(pvVar5,FileBasicInfo,&local_48,0x28);
          if (BVar3 != 0) {
            if (pvVar5 != (HANDLE)0xffffffffffffffff) {
              iVar4 = CloseHandle(pvVar5);
              goto joined_r0x000140290992;
            }
            goto LAB_140290941;
          }
          goto LAB_140290873;
        }
        uStack_54 = GetLastError();
        if (pvVar5 == (HANDLE)0xffffffffffffffff) goto LAB_140290892;
        BVar3 = CloseHandle(pvVar5);
        if (BVar3 == 0) goto LAB_140290a13;
        uStack_57 = uStack_4f;
        local_58 = 0;
        goto LAB_1402909e7;
      }
      if (pvVar5 == (HANDLE)0xffffffffffffffff) goto LAB_14029077c;
      BVar3 = CloseHandle(pvVar5);
      if (BVar3 == 0) goto LAB_140290a19;
      local_58 = 1;
      uStack_54 = 0;
      goto LAB_1402909df;
    }
LAB_140290873:
    uStack_54 = GetLastError();
    if ((pvVar5 != (HANDLE)0xffffffffffffffff) && (BVar3 = CloseHandle(pvVar5), BVar3 == 0)) {
LAB_140290a19:
                    /* WARNING: Subroutine does not return */
      FUN_1402c97e4();
    }
LAB_140290892:
    uStack_57 = uStack_4f;
    local_58 = 0;
  }
  else {
    if (uVar2 == 5) {
      local_40 = 0x2200000;
      local_68 = &local_48;
      local_48 = 0x20;
      bVar1 = false;
      local_38 = 0;
      uStack_30 = 0;
      pvVar5 = (HANDLE)CreateFile2(param_1,0x10000,7,3);
      if ((pvVar5 == (HANDLE)0xffffffffffffffff) && (uStack_54 = GetLastError(), uStack_54 != 0)) {
        uStack_57 = uStack_4f;
        uStack_55 = uStack_4d;
        local_58 = 0;
        goto LAB_1402909ee;
      }
      goto LAB_14029073e;
    }
    if (uVar2 < 0x41) {
      if (((uVar2 == 0x40) || (uVar2 == 2)) || ((uVar2 == 3 || (uVar2 == 0x35)))) {
LAB_1402909c1:
        uVar2 = 0;
      }
    }
    else if (((uVar2 == 0x7b) || (uVar2 == 0xa1)) || (uVar2 == 0x10b)) goto LAB_1402909c1;
    pvVar5 = (HANDLE)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,local_50)));
    uStack_54 = uVar2;
    if (pvVar5 != (HANDLE)0xffffffffffffffff) {
      iVar4 = CloseHandle(pvVar5);
joined_r0x0001402909d6:
      uStack_54 = uVar2;
      if (iVar4 == 0) goto LAB_140290a13;
    }
LAB_1402909db:
    local_58 = 0;
LAB_1402909df:
    uStack_57 = uStack_4f;
  }
LAB_1402909e7:
  uStack_55 = uStack_4d;
LAB_1402909ee:
  return CONCAT44(uStack_54,CONCAT13(uStack_55,CONCAT21(uStack_57,local_58)));
}

