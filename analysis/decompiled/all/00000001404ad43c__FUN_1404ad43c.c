// Function: FUN_1404ad43c
// Addr: 1404ad43c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad43c(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  int unaff_ESI;
  
  *(int *)(param_2 + -0xb4dfff3) = *(int *)(param_2 + -0xb4dfff3) + unaff_ESI;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

