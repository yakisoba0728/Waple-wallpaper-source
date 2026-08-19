// Function: FUN_1404a214c
// Addr: 1404a214c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a214c(char *param_1,undefined8 param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  *param_1 = *param_1 + '\b';
  *(byte *)(CONCAT44(in_register_00000004,in_EAX) | 0x20) =
       *(char *)(CONCAT44(in_register_00000004,in_EAX) | 0x20) + ((byte)in_EAX | 0x20);
  *(char *)(CONCAT44(in_register_00000004,in_EAX) | 0x20) =
       *(char *)(CONCAT44(in_register_00000004,in_EAX) | 0x20) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

