// Function: FUN_1404b2a30
// Addr: 1404b2a30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2a30(int param_1)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  int *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX - param_1;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

