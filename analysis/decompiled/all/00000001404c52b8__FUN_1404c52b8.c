// Function: FUN_1404c52b8
// Addr: 1404c52b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c52b8(char param_1,int param_2)

{
  byte bVar1;
  int in_EAX;
  byte *pbVar2;
  longlong unaff_RSI;
  int *unaff_RDI;
  
  pbVar2 = (byte *)(ulonglong)(in_EAX + 0xd2006a00U);
  *(char *)(unaff_RSI + 0x42) = *(char *)(unaff_RSI + 0x42) + param_1;
  bVar1 = (byte)(in_EAX + 0xd2006a00U);
  *pbVar2 = *pbVar2 + bVar1;
  *unaff_RDI = *unaff_RDI + param_2;
  *pbVar2 = *pbVar2 | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

