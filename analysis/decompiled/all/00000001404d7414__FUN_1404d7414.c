// Function: FUN_1404d7414
// Addr: 1404d7414
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7414(undefined8 param_1,char param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  cRam00000001560a7456 = cRam00000001560a7456 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

