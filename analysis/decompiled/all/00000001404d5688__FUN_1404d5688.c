// Function: FUN_1404d5688
// Addr: 1404d5688
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5688(int *param_1)

{
  *param_1 = *param_1 + -1;
  iRam00000001825a5699 = iRam00000001825a5699 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

