// Function: FUN_14049f5e8
// Addr: 14049f5e8
// Size: 1 bytes


void FUN_14049f5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x72fffe79);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(char *)(ulonglong)((int)CONCAT71(in_register_00000001,in_AL) + 0xf4f80001) = in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

