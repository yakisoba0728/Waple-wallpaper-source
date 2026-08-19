// Function: FUN_1404b802c
// Addr: 1404b802c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b802c(char *param_1)

{
  char cVar2;
  int in_EAX;
  uint uVar1;
  longlong unaff_RSI;
  uint unaff_EDI;
  
  uVar1 = (in_EAX + -0x4b7f2800) - (uint)CARRY4(unaff_EDI,(uint)param_1);
  cVar2 = (char)(uVar1 >> 8);
  *param_1 = *param_1 + cVar2;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *(char *)(unaff_RSI + -0x38ffe232) = *(char *)(unaff_RSI + -0x38ffe232) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

