// Function: FUN_1404a8168
// Addr: 1404a8168
// Size: 1 bytes


void FUN_1404a8168(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte in_AL;
  byte bVar1;
  undefined7 in_register_00000001;
  char unaff_SPL;
  char *unaff_RSI;
  
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)((ulonglong)param_2 >> 8);
  bVar1 = in_AL | *(byte *)CONCAT71(in_register_00000001,in_AL);
  bVar1 = bVar1 | *(byte *)CONCAT71(in_register_00000001,bVar1);
  *param_4 = *param_4 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + param_1;
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(char *)CONCAT71(in_register_00000001,bVar1) + bVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

