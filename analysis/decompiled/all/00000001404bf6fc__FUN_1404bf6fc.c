// Function: FUN_1404bf6fc
// Addr: 1404bf6fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf6fc(void)

{
  byte bVar1;
  uint in_EAX;
  byte *pbVar2;
  int unaff_EBX;
  int *unaff_RSI;
  
  pbVar2 = (byte *)(ulonglong)(in_EAX | 0xb600c70);
  bVar1 = (byte)(in_EAX | 0xb600c70);
  *pbVar2 = *pbVar2 + bVar1;
  *unaff_RSI = *unaff_RSI + unaff_EBX;
  *pbVar2 = *pbVar2 | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

