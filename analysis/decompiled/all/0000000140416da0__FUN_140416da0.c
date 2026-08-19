// Function: FUN_140416da0
// Addr: 140416da0
// Size: 119 bytes


void FUN_140416da0(char *param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1404dc110 ^ (ulonglong)auStack_78;
  if (((param_1 != (char *)0x0) && (param_2 != 0)) && (*param_1 != '\0')) {
    if (-1 < param_2) {
      iVar1 = 0x3f;
      if (param_2 < 0x40) {
        iVar1 = param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(local_58,param_1,iVar1);
    }
    FUN_1403ea720();
    func_0x0001402ed2f0(local_18 ^ (ulonglong)auStack_78);
    return;
  }
  func_0x0001402ed2f0(local_18 ^ (ulonglong)auStack_78);
  return;
}

