// Function: FUN_1404b85f4
// Addr: 1404b85f4
// Size: 1 bytes


void FUN_1404b85f4(longlong param_1)

{
  byte *pbVar1;
  char *unaff_RBX;
  
  pbVar1 = (byte *)(unaff_RBX + param_1 * 2 + 0x30b0100);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  *unaff_RBX = *unaff_RBX + (char)param_1;
  return;
}

