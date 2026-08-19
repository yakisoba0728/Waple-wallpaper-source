// Function: FUN_1404a2414
// Addr: 1404a2414
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2414(void)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined4 in_register_00000004;
  char in_CF;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '4' + in_CF);
  *(uint *)CONCAT44(in_register_00000004,uVar1) =
       *(uint *)CONCAT44(in_register_00000004,uVar1) | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

