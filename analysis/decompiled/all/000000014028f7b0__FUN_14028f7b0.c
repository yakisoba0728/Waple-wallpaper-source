// Function: FUN_14028f7b0
// Addr: 14028f7b0
// Size: 176 bytes


undefined8 FUN_14028f7b0(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_48 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                 (LPBOOL)0x0);
  if (local_48 == 0) {
    uStack_44 = GetLastError();
    if (uStack_44 != 0x3ec) goto LAB_14028f84e;
    local_48 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_48 == 0) {
      uStack_44 = GetLastError();
      goto LAB_14028f84e;
    }
  }
  uStack_44 = 0;
LAB_14028f84e:
  return CONCAT44(uStack_44,local_48);
}

