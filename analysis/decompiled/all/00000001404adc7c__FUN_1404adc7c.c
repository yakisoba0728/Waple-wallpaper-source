// Function: FUN_1404adc7c
// Addr: 1404adc7c
// Size: 1 bytes


void FUN_1404adc7c(undefined8 param_1)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x3f);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

