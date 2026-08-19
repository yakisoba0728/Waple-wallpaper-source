// Function: FUN_1404d7fac
// Addr: 1404d7fac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7fac(char *param_1,int param_2)

{
  uint in_EAX;
  undefined4 unaff_EBX;
  char *unaff_RSI;
  bool in_ZF;
  byte in_SF;
  byte in_OF;
  
  *param_1 = *param_1;
  if (!in_ZF && (in_OF & 1) == in_SF) {
    *param_1 = *param_1 + (char)((uint)unaff_EBX >> 8);
    *unaff_RSI = *unaff_RSI + (char)unaff_EBX + '\x02';
    return;
  }
  *(int *)(ulonglong)in_EAX = *(int *)(ulonglong)in_EAX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

