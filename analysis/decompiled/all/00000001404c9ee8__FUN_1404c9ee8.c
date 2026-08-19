// Function: FUN_1404c9ee8
// Addr: 1404c9ee8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9ee8(undefined8 param_1,int param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  int *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + param_2;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

