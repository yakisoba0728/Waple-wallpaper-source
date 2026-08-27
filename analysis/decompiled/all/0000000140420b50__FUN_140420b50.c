// Function: FUN_140420b50
// Addr: 140420b50
// Size: 74 bytes


double FUN_140420b50(int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  
  dVar2 = DAT_140495a88;
  if (param_1 != 0) {
    dVar2 = DAT_140495a90;
  }
  dVar2 = dVar2 * DAT_140495a88;
  puVar1 = (undefined4 *)FUN_1402caf34();
  *puVar1 = 0x22;
  return dVar2;
}

