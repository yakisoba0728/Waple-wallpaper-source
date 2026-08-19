// Function: FUN_1404caab0
// Addr: 1404caab0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404caab0(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *in_RAX;
  longlong unaff_RSI;
  
  *(uint *)(param_2 + (longlong)in_RAX) = *(uint *)(param_2 + (longlong)in_RAX) & (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + bVar2;
  bVar1 = *in_RAX;
  *in_RAX = *in_RAX + bVar2;
  *param_2 = *param_2 << 1 | CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

