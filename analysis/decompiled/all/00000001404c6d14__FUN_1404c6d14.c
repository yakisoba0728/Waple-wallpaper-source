// Function: FUN_1404c6d14
// Addr: 1404c6d14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6d14(int param_1,longlong param_2)

{
  undefined2 uVar1;
  longlong in_RAX;
  longlong unaff_RSI;
  
  *(int *)(unaff_RSI + in_RAX) = *(int *)(unaff_RSI + in_RAX) + param_1;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + (char)param_1;
  uVar1 = TaskRegister();
  *(undefined2 *)(param_2 * 5) = uVar1;
  *(byte *)(in_RAX + 7) = *(byte *)(in_RAX + 7) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

