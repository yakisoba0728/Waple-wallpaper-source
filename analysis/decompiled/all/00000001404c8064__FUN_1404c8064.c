// Function: FUN_1404c8064
// Addr: 1404c8064
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8064(char *param_1)

{
  undefined8 in_RAX;
  byte unaff_BH;
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + 0x4c) = *(byte *)(unaff_RDI + 0x4c) & unaff_BH;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

