// Function: FUN_1404a4180
// Addr: 1404a4180
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4180(byte *param_1)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  int unaff_ESP;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + unaff_ESP;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
  *param_1 = *param_1 & (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) - (byte)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

