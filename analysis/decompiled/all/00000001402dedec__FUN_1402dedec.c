// Function: FUN_1402dedec
// Addr: 1402dedec
// Size: 139 bytes


undefined8
FUN_1402dedec(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hFile;
  DWORD *pDVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  __acrt_lowio_lock_fh(*param_2);
  if ((*(byte *)((&DAT_1404e4890)[(longlong)(int)*(uint *)*param_3 >> 6] + 0x38 +
                (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_1402e47e0();
    BVar1 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar1 != 0) goto LAB_1402dee63;
    DVar2 = GetLastError();
    pDVar3 = (DWORD *)FUN_1402caf10();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_1402caf34();
  *puVar4 = 9;
  uVar5 = 0xffffffff;
LAB_1402dee63:
  __acrt_lowio_unlock_fh(*param_4);
  return uVar5;
}

