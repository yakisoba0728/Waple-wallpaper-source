// Function: FUN_1404b2000
// Addr: 1404b2000
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2000(longlong param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte unaff_BL;
  
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) ^ unaff_BL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x59);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

