// Function: FUN_1404c4030
// Addr: 1404c4030
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4030(void)

{
  longlong lVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  int *unaff_RBX;
  int iVar2;
  
  lVar1 = -(longlong)
           *(int *)(CONCAT44(in_register_00000004,in_EAX) + CONCAT44(in_register_00000004,in_EAX));
  iVar2 = (int)lVar1;
  *unaff_RBX = (*unaff_RBX - iVar2) - (uint)(iVar2 != lVar1);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

