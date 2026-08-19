// Function: FUN_1404d76b0
// Addr: 1404d76b0
// Size: 1 bytes


void FUN_1404d76b0(char *param_1,undefined8 param_2)

{
  byte bVar1;
  char unaff_BH;
  byte bVar3;
  uint unaff_EBP;
  uint *unaff_RSI;
  uint *unaff_retaddr;
  byte *pbVar2;
  
  bVar1 = (byte)unaff_retaddr;
  if ((byte)*unaff_retaddr <= bVar1) {
    if ((byte)*unaff_retaddr == bVar1) {
      *param_1 = *param_1 + (char)((ulonglong)unaff_retaddr >> 8);
      *(byte *)unaff_retaddr = (byte)*unaff_retaddr | bVar1;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *unaff_retaddr = *unaff_retaddr & (uint)unaff_retaddr;
    *(byte *)unaff_retaddr = (byte)*unaff_retaddr + bVar1;
    unaff_retaddr = (uint *)((ulonglong)unaff_retaddr | 0x37);
  }
  bVar3 = unaff_BH + (char)((ulonglong)param_1 >> 8);
  pbVar2 = (byte *)(((ulonglong)unaff_retaddr | 0x37) + 0x19004d64);
  bVar1 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar3;
  bVar1 = ((char)((ulonglong)unaff_retaddr | 0x37) - cRam00000001524e8227) - CARRY1(bVar1,bVar3);
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),bVar1);
  pbVar2[(longlong)unaff_RSI * 2] = pbVar2[(longlong)unaff_RSI * 2] + bVar1;
  *pbVar2 = *pbVar2 ^ bVar1;
  *pbVar2 = *pbVar2 + (char)((ulonglong)unaff_retaddr >> 8);
  *(byte *)unaff_RSI = (byte)*unaff_RSI >> 1;
  *pbVar2 = *pbVar2 + (char)((ulonglong)param_2 >> 8);
  *pbVar2 = *pbVar2 + bVar1;
  *unaff_RSI = *unaff_RSI & unaff_EBP;
  *pbVar2 = *pbVar2 | bVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

