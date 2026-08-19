// Function: FUN_1404a6e78
// Addr: 1404a6e78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6e78(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  undefined3 uVar4;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uVar4 = (undefined3)(in_EAX >> 8);
  uVar3 = CONCAT31(uVar4,0xd5);
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) | uVar3;
  cVar2 = in(0xd5);
  uVar3 = CONCAT31(uVar4,cVar2);
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(uint *)CONCAT44(in_register_00000004,uVar3) | uVar3;
  puVar1 = (uint *)(param_2 + CONCAT44(in_register_00000004,uVar3));
  *puVar1 = *puVar1 & uVar3;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + cVar2;
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

