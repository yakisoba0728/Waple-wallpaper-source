// Function: FUN_1404b7130
// Addr: 1404b7130
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7130(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBP;
  int unaff_ESI;
  
  *(int *)(unaff_RBP + 0x1d) = *(int *)(unaff_RBP + 0x1d) + unaff_ESI;
  *(char *)(unaff_RBP + -0x18) = *(char *)(unaff_RBP + -0x18) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

