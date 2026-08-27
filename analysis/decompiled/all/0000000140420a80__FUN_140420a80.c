// Function: FUN_140420a80
// Addr: 140420a80
// Size: 47 bytes


undefined4 FUN_140420a80(double param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0.0) {
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x22;
  }
  return SUB84(param_1,0);
}

