// Function: FUN_14049fac8
// Addr: 14049fac8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fac8(void)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uVar1 = *(uint *)CONCAT44(in_register_00000004,in_EAX);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  iVar2 = CONCAT31((int3)(in_EAX >> 8),((char)in_EAX + '.') - CARRY4(uVar1,in_EAX));
  *(int *)CONCAT44(in_register_00000004,iVar2) =
       *(int *)CONCAT44(in_register_00000004,iVar2) + iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

