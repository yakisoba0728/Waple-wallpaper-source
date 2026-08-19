// Function: FUN_1404c9754
// Addr: 1404c9754
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9754(char *param_1,undefined8 param_2,char param_3)

{
  uint *in_RAX;
  uint *unaff_RSI;
  char unaff_R12B;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
    while( true ) {
      *in_RAX = *in_RAX ^ (uint)in_RAX;
      param_1 = param_1 + -1;
      if (param_1 == (char *)0x0 || *in_RAX == 0) break;
code_r0x0001404c9753:
      *(char *)((longlong)unaff_RSI + -7) =
           *(char *)((longlong)unaff_RSI + -7) + (char)((ulonglong)param_2 >> 8);
    }
    *in_RAX = *in_RAX ^ (uint)in_RAX;
    *param_1 = *param_1 + unaff_R12B;
    *(char *)unaff_RSI = (char)*unaff_RSI + (char)unaff_RSI;
    do {
      *(char *)((longlong)unaff_RSI + -7) = *(char *)((longlong)unaff_RSI + -7) + (char)param_2;
      *unaff_RSI = *unaff_RSI ^ (uint)unaff_RSI;
    } while (*unaff_RSI == 0);
    *unaff_RSI = *unaff_RSI ^ (uint)unaff_RSI;
    *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  goto code_r0x0001404c9753;
}

