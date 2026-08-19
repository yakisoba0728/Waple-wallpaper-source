// Function: FUN_1404c8a10
// Addr: 1404c8a10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8a10(undefined4 param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uVar1 = CONCAT31((int3)(in_EAX >> 8),uRam080031548c003153);
  *(undefined4 *)
   (CONCAT44(in_register_00000004,uVar1) + 0x21 + CONCAT44(in_register_00000004,uVar1)) = param_1;
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

