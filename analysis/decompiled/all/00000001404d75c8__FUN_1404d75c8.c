// Function: FUN_1404d75c8
// Addr: 1404d75c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d75c8(byte param_1,longlong param_2,byte *param_3)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | (byte)((ulonglong)param_2 >> 8);
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)param_2;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) << (param_1 & 7) |
       *(byte *)CONCAT44(in_register_00000004,in_EAX) >> 8 - (param_1 & 7);
  *param_3 = *param_3 << (param_1 & 7) | *param_3 >> 8 - (param_1 & 7);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

