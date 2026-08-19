// Function: FUN_1404d657c
// Addr: 1404d657c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d657c(undefined8 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  uint unaff_EBP;
  uint *unaff_RSI;
  bool in_CF;
  bool in_ZF;
  byte *pbVar5;
  
  if (!in_CF && !in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar2 = (char)in_RAX + (char)((uint)param_2 >> 8);
  if (-1 < cVar2) {
    uVar4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2) + 0x12010b00;
    pbVar5 = (byte *)(ulonglong)uVar4;
    bVar3 = (byte)uVar4;
    pbVar5[(longlong)unaff_RSI * 2] = pbVar5[(longlong)unaff_RSI * 2] + bVar3;
    iVar1 = *(int *)(pbVar5 + 2);
    *pbVar5 = *pbVar5 ^ bVar3;
    *pbVar5 = *pbVar5 + (char)(uVar4 >> 8);
    *(byte *)unaff_RSI = (byte)*unaff_RSI >> 1;
    *pbVar5 = *pbVar5 + (char)((uint)(param_2 + iVar1) >> 8);
    *pbVar5 = *pbVar5 + bVar3;
    *unaff_RSI = *unaff_RSI & unaff_EBP;
    *pbVar5 = *pbVar5 | bVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

