// Function: FUN_1404ba190
// Addr: 1404ba190
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba190(void)

{
  char *pcVar1;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21004b);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

