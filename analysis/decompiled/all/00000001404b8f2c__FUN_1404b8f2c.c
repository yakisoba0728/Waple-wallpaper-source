// Function: FUN_1404b8f2c
// Addr: 1404b8f2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8f2c(char *param_1,char param_2)

{
  char cVar1;
  uint in_EAX;
  int *piVar2;
  int unaff_EBP;
  char *unaff_RSI;
  
  piVar2 = (int *)((ulonglong)(in_EAX & 0x21001368) ^ 0x2c);
  *param_1 = *param_1 + (char)((in_EAX & 0x21001368) >> 8);
  *piVar2 = *piVar2 + unaff_EBP;
  cVar1 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + param_2;
  if (!SCARRY1(cVar1,param_2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

