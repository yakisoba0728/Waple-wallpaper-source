// Function: FUN_1404a3fbc
// Addr: 1404a3fbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3fbc(undefined8 param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BH;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x21);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

