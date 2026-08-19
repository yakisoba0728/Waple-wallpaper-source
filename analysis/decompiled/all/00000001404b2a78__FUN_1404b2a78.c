// Function: FUN_1404b2a78
// Addr: 1404b2a78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2a78(longlong param_1,undefined8 param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  undefined2 *unaff_RDI;
  undefined2 in_SS;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *unaff_RDI = in_SS;
  *(char *)(param_1 + -0x74) = *(char *)(param_1 + -0x74) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

