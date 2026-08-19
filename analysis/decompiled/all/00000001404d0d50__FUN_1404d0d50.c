// Function: FUN_1404d0d50
// Addr: 1404d0d50
// Size: 1 bytes


void FUN_1404d0d50(char *param_1)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (char)in_EAX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

