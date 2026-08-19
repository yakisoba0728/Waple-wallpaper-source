// Function: FUN_1402c9360
// Addr: 1402c9360
// Size: 115 bytes


void FUN_1402c9360(uint param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [32];
  short local_18 [4];
  ulonglong local_10;
  
  local_10 = DAT_1404dc110 ^ (ulonglong)auStack_38;
  if (param_1 < 0x1b) {
    if (param_1 != 0) {
      local_18[0] = (short)param_1 + 0x40;
      local_18[1] = 0x3a;
      local_18[2] = 0x5c;
      local_18[3] = 0;
      (*DAT_140426508)(local_18);
    }
    func_0x0001402ed2f0(local_10 ^ (ulonglong)auStack_38);
    return;
  }
  puVar1 = (undefined4 *)FUN_1402cafe0();
  *puVar1 = 0xf;
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

