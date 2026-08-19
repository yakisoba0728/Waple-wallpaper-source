// Function: FUN_1404b19c8
// Addr: 1404b19c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b19c8(undefined8 param_1)

{
  longlong unaff_RBX;
  char acStackX_e [26];
  
  acStackX_e[unaff_RBX] = acStackX_e[unaff_RBX] + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

