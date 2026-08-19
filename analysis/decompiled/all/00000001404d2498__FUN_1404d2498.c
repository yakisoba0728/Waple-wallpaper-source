// Function: FUN_1404d2498
// Addr: 1404d2498
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2498(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint in_EAX;
  int *unaff_RSI;
  
  uVar1 = *param_2;
  *unaff_RSI = *unaff_RSI + in_EAX + uVar1 + (uint)CARRY4(in_EAX,*param_2);
  LOCK();
  *(char *)(param_1 + (longlong)param_2) = (char)(in_EAX + uVar1) + 'Y' + (char)*param_2;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

