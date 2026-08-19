// Function: FUN_14049ed14
// Addr: 14049ed14
// Size: 1 bytes


void FUN_14049ed14(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  int in_EAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL + param_2) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL + param_2) +
       ((byte)((uint)(in_EAX + -0x5ffff4ac) >> 8) & (byte)((uint)*unaff_RSI >> 8));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

