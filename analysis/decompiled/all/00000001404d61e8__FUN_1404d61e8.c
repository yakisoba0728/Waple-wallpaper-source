// Function: FUN_1404d61e8
// Addr: 1404d61e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d61e8(void)

{
  byte *pbVar1;
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 7);
  *pbVar1 = *pbVar1 | in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

