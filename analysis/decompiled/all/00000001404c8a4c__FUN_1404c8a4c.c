// Function: FUN_1404c8a4c
// Addr: 1404c8a4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8a4c(uint param_1)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 in_register_00000004;
  uint *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX & param_1;
  iVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + -0x6c);
  *(uint *)CONCAT44(in_register_00000004,iVar1) =
       *(int *)CONCAT44(in_register_00000004,iVar1) + iVar1 +
       (uint)(0x9b < (byte)((char)in_EAX + 0x30U));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

