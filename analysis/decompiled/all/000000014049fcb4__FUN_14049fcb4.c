// Function: FUN_14049fcb4
// Addr: 14049fcb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fcb4(byte *param_1)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 in_register_00000004;
  
  iVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX & *param_1);
  *(int *)CONCAT44(in_register_00000004,iVar1) =
       *(int *)CONCAT44(in_register_00000004,iVar1) - iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

