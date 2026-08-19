// Function: FUN_1404b32dc
// Addr: 1404b32dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b32dc(uint param_1)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  uRam00000000d80017bf = uRam00000000d80017bf ^ param_1;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

