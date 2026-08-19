// Function: FUN_1404b3c8c
// Addr: 1404b3c8c
// Size: 1 bytes


void FUN_1404b3c8c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  short sVar2;
  byte in_AL;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  sVar2 = (ushort)in_AL * (ushort)*(byte *)(unaff_RBP + 0x18);
  pcVar1 = (char *)(unaff_RBX + 0x4b + unaff_RDI);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + (char)((ushort)sVar2 >> 8);
  *unaff_RSI = *unaff_RSI + (char)sVar2;
  *(char *)CONCAT62(in_register_00000002,sVar2) =
       *(char *)CONCAT62(in_register_00000002,sVar2) + (char)sVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

