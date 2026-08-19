// Function: FUN_1404a446c
// Addr: 1404a446c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a446c(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined4 in_EAX;
  uint uVar3;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RSI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  byte *pbStack_8;
  
  pbStack_8 = param_1;
  if (!in_ZF && in_OF == in_SF) {
    *(char *)(unaff_RSI + 0x7e) = *(char *)(unaff_RSI + 0x7e) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = *param_1;
  *param_1 = *param_1 + (byte)&pbStack_8;
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '\x06' + CARRY1(bVar2,(byte)&pbStack_8))
  ;
  pcVar1 = (char *)((longlong)&pbStack_8 + unaff_RSI * 2);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) | uVar3;
  param_1[unaff_RBX] = param_1[unaff_RBX] + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

