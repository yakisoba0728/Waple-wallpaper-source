// Function: FUN_1404c946c
// Addr: 1404c946c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c946c(void)

{
  undefined1 uVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  uint uVar2;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
  uVar1 = in(0xca);
  uVar2 = CONCAT31((int3)(in_EAX >> 8),uVar1);
  *(uint *)CONCAT44(in_register_00000004,uVar2) =
       *(uint *)CONCAT44(in_register_00000004,uVar2) ^ uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

