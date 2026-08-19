// Function: FUN_1404a83e0
// Addr: 1404a83e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a83e0(undefined8 param_1,char param_2)

{
  ulonglong in_RAX;
  int *piVar1;
  longlong unaff_RSI;
  
  piVar1 = (int *)(in_RAX ^ 4);
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + param_2;
  *piVar1 = *piVar1 + (int)piVar1;
  cRam00000001004a8945 = cRam00000001004a8945 + (char)piVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

