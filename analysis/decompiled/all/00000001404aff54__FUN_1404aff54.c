// Function: FUN_1404aff54
// Addr: 1404aff54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aff54(char *param_1)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  char unaff_SPL;
  uint *unaff_RSI;
  
  uVar1 = in((short)((int)in_EAX >> 0x1f));
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RSI = *unaff_RSI & CONCAT31((int3)((uint)in_EAX >> 8),uVar1);
  *param_1 = *param_1 + (char)((uint)in_EAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

