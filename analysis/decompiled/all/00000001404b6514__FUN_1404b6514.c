// Function: FUN_1404b6514
// Addr: 1404b6514
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6514(longlong param_1)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_1 + 0x1b);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

