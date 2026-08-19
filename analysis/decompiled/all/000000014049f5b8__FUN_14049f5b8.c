// Function: FUN_14049f5b8
// Addr: 14049f5b8
// Size: 1 bytes


void FUN_14049f5b8(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  pcVar2 = (char *)(unaff_RSI + 1 + param_1);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(param_2 + -0x7cdcffff);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

