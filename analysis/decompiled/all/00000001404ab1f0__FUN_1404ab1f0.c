// Function: FUN_1404ab1f0
// Addr: 1404ab1f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab1f0(char *param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  char *unaff_RBX;
  int *unaff_RSI;
  
  in(param_2);
  *param_1 = *param_1 + 'J';
  *unaff_RBX = *unaff_RBX + (char)((uint)in_EAX >> 8);
  *unaff_RSI = *unaff_RSI + CONCAT31((int3)((uint)in_EAX >> 8),0x4a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

