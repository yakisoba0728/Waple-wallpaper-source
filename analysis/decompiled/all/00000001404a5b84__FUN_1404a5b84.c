// Function: FUN_1404a5b84
// Addr: 1404a5b84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5b84(void)

{
  uint in_EAX;
  undefined4 uVar1;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uVar1 = CONCAT31((int3)(in_EAX >> 8),0x91);
  *(byte *)CONCAT44(in_register_00000004,uVar1) =
       *(byte *)CONCAT44(in_register_00000004,uVar1) | 0x91;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

