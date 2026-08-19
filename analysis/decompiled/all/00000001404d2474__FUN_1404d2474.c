// Function: FUN_1404d2474
// Addr: 1404d2474
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2474(undefined8 param_1)

{
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + -0x4ad7ffb3) =
       *(char *)(unaff_RBX + -0x4ad7ffb3) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

