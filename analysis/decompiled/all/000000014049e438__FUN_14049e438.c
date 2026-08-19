// Function: FUN_14049e438
// Addr: 14049e438
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e438(uint param_1,int param_2)

{
  int in_EAX;
  char *pcVar1;
  uint *unaff_RBX;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + param_2;
  pcVar1 = (char *)(ulonglong)(in_EAX + 0x14011600U);
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)param_1;
  LOCK();
  *(uint *)(pcVar1 + 8) = *(uint *)(pcVar1 + 8) | (uint)&stack0x00000000;
  UNLOCK();
  *pcVar1 = *pcVar1 + (char)(in_EAX + 0x14011600U);
  *unaff_RBX = *unaff_RBX & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

