// Function: FUN_1404d77e4
// Addr: 1404d77e4
// Size: 1 bytes


void FUN_1404d77e4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  byte *unaff_RSI;
  byte *pbVar2;
  
  uVar1 = (int)CONCAT71((int7)(in_RAX >> 8),(char)(char *)(in_RAX | 1) + *(char *)(in_RAX | 1)) +
          0x27003e0;
  pbVar2 = (byte *)(ulonglong)uVar1;
  *pbVar2 = *pbVar2 ^ (byte)uVar1;
  *pbVar2 = *pbVar2 + (char)(uVar1 >> 8);
  *unaff_RSI = *unaff_RSI >> 1;
  *pbVar2 = *pbVar2 + (char)((ulonglong)param_2 >> 8);
  *pbVar2 = *pbVar2 + (byte)uVar1;
  *(uint *)(unaff_RSI + (longlong)pbVar2) = *(uint *)(unaff_RSI + (longlong)pbVar2) & uVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

