// Function: FUN_1404a46c4
// Addr: 1404a46c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a46c4(undefined8 param_1,undefined8 param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(char *)(unaff_RBX + -0x73) = *(char *)(unaff_RBX + -0x73) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

