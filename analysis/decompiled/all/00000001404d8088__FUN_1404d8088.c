// Function: FUN_1404d8088
// Addr: 1404d8088
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d8088(undefined8 param_1)

{
  char *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

