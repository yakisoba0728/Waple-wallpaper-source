// Function: FUN_1404b7258
// Addr: 1404b7258
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7258(byte param_1)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL ^ param_1) + -0x57dffff3);
  *pcVar1 = *pcVar1 - unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

