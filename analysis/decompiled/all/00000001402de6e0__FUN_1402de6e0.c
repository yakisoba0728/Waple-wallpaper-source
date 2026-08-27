// Function: FUN_1402de6e0
// Addr: 1402de6e0
// Size: 51 bytes


void FUN_1402de6e0(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x22;
    return;
  }
  return;
}

