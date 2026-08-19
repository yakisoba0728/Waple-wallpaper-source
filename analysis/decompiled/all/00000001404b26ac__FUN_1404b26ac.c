// Function: FUN_1404b26ac
// Addr: 1404b26ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b26ac(undefined8 param_1,int param_2)

{
  int iVar1;
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int *unaff_RDI;
  
  iVar1 = *unaff_RDI;
  *(char *)(unaff_RBP + 0x521004b) = *(char *)(unaff_RBP + 0x521004b) + unaff_BH;
  *(char *)(unaff_RSI + 3) =
       *(char *)(unaff_RSI + 3) + (char)((uint)(param_2 + iVar1 + *unaff_RDI) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

