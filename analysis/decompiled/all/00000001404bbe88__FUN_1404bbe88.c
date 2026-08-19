// Function: FUN_1404bbe88
// Addr: 1404bbe88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbe88(void)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined4 in_register_00000004;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + 'X');
  *(uint *)CONCAT44(in_register_00000004,uVar1) =
       *(uint *)CONCAT44(in_register_00000004,uVar1) & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

