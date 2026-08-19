// Function: FUN_1404a9130
// Addr: 1404a9130
// Size: 1 bytes


void FUN_1404a9130(undefined8 param_1)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x1a);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

