// Function: FUN_1404ce608
// Addr: 1404ce608
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ce686) overlaps instruction at (ram,0x0001404ce684)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ce629) */
/* WARNING: Removing unreachable block (ram,0x0001404ce686) */
/* WARNING: Removing unreachable block (ram,0x0001404ce677) */
/* WARNING: Removing unreachable block (ram,0x0001404ce697) */

void FUN_1404ce608(uint param_1,undefined8 param_2,char param_3)

{
  char *in_RAX;
  longlong unaff_RBP;
  uint *unaff_RSI;
  char unaff_R13B;
  
  *in_RAX = *in_RAX + unaff_R13B;
  *unaff_RSI = *unaff_RSI ^ param_1;
  *(char *)(unaff_RBP + -0x1b) = *(char *)(unaff_RBP + -0x1b) + param_3;
  *(char *)unaff_RSI = (char)*unaff_RSI + param_3;
  *(char *)((longlong)unaff_RSI + 0x19002e02) =
       *(char *)((longlong)unaff_RSI + 0x19002e02) + (char)param_1;
  uRam0000000145aeef23 = uRam0000000145aeef23 | (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

