// Function: FUN_1404c6dc8
// Addr: 1404c6dc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6dc8(char *param_1,longlong param_2)

{
  char cVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(char *)(param_2 + -0x6fffd10e) =
       *(char *)(param_2 + -0x6fffd10e) + (char)((ulonglong)param_2 >> 8);
  cVar1 = in(0x4a);
  *param_1 = *param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

