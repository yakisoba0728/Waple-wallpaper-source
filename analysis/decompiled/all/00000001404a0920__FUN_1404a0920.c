// Function: FUN_1404a0920
// Addr: 1404a0920
// Size: 1 bytes


byte FUN_1404a0920(char *param_1,char *param_2)

{
  byte bVar1;
  byte in_AL;
  byte *unaff_RBX;
  
  *param_1 = *param_1 + in_AL;
  bVar1 = *unaff_RBX;
  *param_2 = *param_2 + (char)param_1;
  return in_AL | bVar1;
}

