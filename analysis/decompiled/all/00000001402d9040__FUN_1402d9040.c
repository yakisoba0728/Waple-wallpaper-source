// Function: FUN_1402d9040
// Addr: 1402d9040
// Size: 60 bytes


void FUN_1402d9040(LPVOID param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_1404e4ed0,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVar4 = FUN_1402cadf4(DVar3);
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = uVar4;
  }
  return;
}

