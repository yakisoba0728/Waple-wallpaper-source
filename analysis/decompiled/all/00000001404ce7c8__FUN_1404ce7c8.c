// Function: FUN_1404ce7c8
// Addr: 1404ce7c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce7c8(void)

{
  byte *pbVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  byte unaff_BL;
  byte unaff_BH;
  
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + -0x57d7fff7);
  *pbVar1 = *pbVar1 ^ unaff_BH;
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,
                             in_AL | *(byte *)CONCAT71(in_register_00000001,in_AL)) + -0x77e4fff5);
  *pbVar1 = *pbVar1 & unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

