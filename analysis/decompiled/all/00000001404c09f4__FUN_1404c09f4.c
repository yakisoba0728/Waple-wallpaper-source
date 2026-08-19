// Function: FUN_1404c09f4
// Addr: 1404c09f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c09f4(byte param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  byte unaff_BH;
  longlong unaff_RBP;
  
  pbVar2 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 0x21 +
                   CONCAT71(in_register_00000001,in_AL));
  *pbVar2 = *pbVar2 | param_1;
  pbVar2 = (byte *)(CONCAT71(in_register_00000001,in_AL) + CONCAT71(in_register_00000001,in_AL));
  *pbVar2 = *pbVar2 | in_AL;
  pbVar2 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 0xd);
  *pbVar2 = *pbVar2 | unaff_BH;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

