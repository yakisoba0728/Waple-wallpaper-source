// Function: FUN_1404cd6b0
// Addr: 1404cd6b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd6b0(char *param_1)

{
  undefined8 in_RAX;
  byte unaff_BL;
  longlong unaff_RBP;
  
  *(byte *)(unaff_RBP + 0x4b) = *(byte *)(unaff_RBP + 0x4b) & unaff_BL;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

