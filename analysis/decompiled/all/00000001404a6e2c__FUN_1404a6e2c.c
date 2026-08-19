// Function: FUN_1404a6e2c
// Addr: 1404a6e2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6e2c(uint param_1)

{
  uint in_EAX;
  uint uVar1;
  undefined4 in_register_00000004;
  uint *unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
  uVar1 = CONCAT31((int3)(in_EAX >> 8),(char)in_EAX + -0x2c);
  *(uint *)CONCAT44(in_register_00000004,uVar1) =
       *(uint *)CONCAT44(in_register_00000004,uVar1) | uVar1;
  *unaff_RSI = *unaff_RSI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

