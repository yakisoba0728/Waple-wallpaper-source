// Function: FUN_1404a7338
// Addr: 1404a7338
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7338(void)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  uint uVar2;
  
  uVar1 = in(0xfa);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),uVar1);
  *(uint *)CONCAT44(in_register_00000004,uVar2) =
       *(uint *)CONCAT44(in_register_00000004,uVar2) | uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

