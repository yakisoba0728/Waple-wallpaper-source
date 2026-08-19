// Function: FUN_1404aa070
// Addr: 1404aa070
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa070(undefined8 param_1)

{
  char unaff_BL;
  longlong unaff_RDI;
  char in_CF;
  
  *(char *)(unaff_RDI + 0x3401004a) = (*(char *)(unaff_RDI + 0x3401004a) - unaff_BL) - in_CF;
  cRam000000015f4b0f82 = cRam000000015f4b0f82 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

