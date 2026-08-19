// Function: FUN_1404b36cc
// Addr: 1404b36cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b36cc(void)

{
  uint unaff_EBX;
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

