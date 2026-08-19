// Function: FUN_1404d62b0
// Addr: 1404d62b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d62b0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte in_AL;
  byte bVar3;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  
  bVar3 = in_AL & (byte)param_2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,bVar3) + 0x21000000);
  *pcVar1 = *pcVar1 + (byte)param_2;
  pbVar2 = (byte *)(CONCAT71(in_register_00000001,bVar3) + CONCAT71(in_register_00000001,bVar3));
  *pbVar2 = *pbVar2 | bVar3;
  pbVar2 = (byte *)(CONCAT71(in_register_00000001,bVar3) + unaff_RBX);
  *pbVar2 = *pbVar2 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

