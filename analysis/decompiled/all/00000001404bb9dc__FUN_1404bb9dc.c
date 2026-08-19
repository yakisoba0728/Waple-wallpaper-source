// Function: FUN_1404bb9dc
// Addr: 1404bb9dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb9dc(byte param_1)

{
  int *piVar1;
  byte bVar2;
  int in_EAX;
  undefined4 in_register_00000004;
  byte *unaff_RBX;
  longlong in_FS_OFFSET;
  
  bVar2 = *unaff_RBX;
  *unaff_RBX = *unaff_RBX + param_1;
  piVar1 = (int *)(in_FS_OFFSET + CONCAT44(in_register_00000004,in_EAX));
  *piVar1 = *piVar1 + in_EAX + (uint)CARRY1(bVar2,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

