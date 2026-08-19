// Function: FUN_1404afe60
// Addr: 1404afe60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afe60(byte *param_1)

{
  uint uVar1;
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  uint unaff_ESI;
  
  uVar1 = *(uint *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 10);
  *param_1 = *param_1 ^ in_AH;
  (&stack0x00000000)[(ulonglong)(unaff_ESI | uVar1) * 8] =
       (&stack0x00000000)[(ulonglong)(unaff_ESI | uVar1) * 8] + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

