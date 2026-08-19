// Function: FUN_1404aa38c
// Addr: 1404aa38c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa38c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  uint *unaff_RSI;
  byte in_CF;
  undefined1 auStack_8 [8];
  
  piVar1 = (int *)(CONCAT44(in_register_00000004,in_EAX) + 0x10);
  *piVar1 = *piVar1 + (int)&stack0x00000000 + (uint)in_CF;
  wrmsr(param_1,CONCAT44(param_2,in_EAX));
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *unaff_RSI = *unaff_RSI & (uint)auStack_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

