// Function: FUN_1404c3040
// Addr: 1404c3040
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3040(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 in_register_00000004;
  
  iVar1 = CONCAT31((int3)((uint)in_EAX >> 8),0x6d);
  *(int *)CONCAT44(in_register_00000004,iVar1) =
       *(int *)CONCAT44(in_register_00000004,iVar1) - iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

