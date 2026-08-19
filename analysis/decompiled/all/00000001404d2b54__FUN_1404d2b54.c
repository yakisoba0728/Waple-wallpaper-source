// Function: FUN_1404d2b54
// Addr: 1404d2b54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2b54(undefined8 param_1,longlong param_2)

{
  int unaff_EBX;
  
  *(int *)(&stack0x00000000 + param_2) = *(int *)(&stack0x00000000 + param_2) + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

