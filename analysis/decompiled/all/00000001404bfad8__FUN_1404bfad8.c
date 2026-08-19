// Function: FUN_1404bfad8
// Addr: 1404bfad8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfad8(void)

{
  undefined8 in_RAX;
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

