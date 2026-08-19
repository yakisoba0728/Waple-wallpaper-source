// Function: FUN_1404d77d0
// Addr: 1404d77d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d77d0(undefined8 param_1,char *param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *param_2 = *param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

