// Function: FUN_1404bd1a8
// Addr: 1404bd1a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd1a8(undefined8 param_1)

{
  char *in_RAX;
  char in_CF;
  
  in_RAX[0x18] = in_RAX[0x18] + (char)((ulonglong)param_1 >> 8) + in_CF;
  *in_RAX = *in_RAX + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

