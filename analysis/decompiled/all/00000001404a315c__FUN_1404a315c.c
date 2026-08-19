// Function: FUN_1404a315c
// Addr: 1404a315c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a315c(longlong param_1,byte *param_2)

{
  char *pcVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *param_2 = *param_2 ^ (byte)param_1;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + param_1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

