// Function: FUN_1404d3910
// Addr: 1404d3910
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3910(undefined8 param_1,uint *param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  uint unaff_ESP;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *param_2 = *param_2 & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

