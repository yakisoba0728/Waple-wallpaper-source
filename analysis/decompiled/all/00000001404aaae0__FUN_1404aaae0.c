// Function: FUN_1404aaae0
// Addr: 1404aaae0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aaae0(undefined8 param_1,char param_2)

{
  longlong unaff_RBP;
  bool in_CF;
  
  if (!in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + 0x69) = *(char *)(unaff_RBP + 0x69) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

