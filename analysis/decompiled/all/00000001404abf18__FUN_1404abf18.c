// Function: FUN_1404abf18
// Addr: 1404abf18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abf18(void)

{
  byte *pbVar1;
  char *pcVar2;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + -0x5f58fff1);
  *pbVar1 = *pbVar1 & 0xf;
  pcVar2 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x210049ec);
  *pcVar2 = *pcVar2 + unaff_BH;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar2 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x58fff060);
  *pcVar2 = *pcVar2 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

