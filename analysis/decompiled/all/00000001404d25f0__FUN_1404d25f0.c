// Function: FUN_1404d25f0
// Addr: 1404d25f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d25f0(char *param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  longlong unaff_RBP;
  
  pcVar2 = (code *)swi(0x39);
  cVar3 = (*pcVar2)();
  pcVar1 = (char *)(unaff_RBP + 0x16d80039 + (longlong)param_1 * 8);
  *pcVar1 = *pcVar1 + cVar3;
  *param_1 = *param_1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

