// Function: FUN_1404a72f8
// Addr: 1404a72f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a72f8(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  uint uVar3;
  
  puVar1 = (uint *)(param_2 + CONCAT44(in_register_00000004,in_EAX));
  *puVar1 = *puVar1 & in_EAX;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uVar2 = in(0xfa);
  uVar3 = CONCAT31((int3)(in_EAX >> 8),uVar2);
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) | uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

