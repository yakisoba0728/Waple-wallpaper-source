// Function: FUN_1404ce9e4
// Addr: 1404ce9e4
// Size: 1 bytes


void FUN_1404ce9e4(int *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  char *pcVar6;
  byte bVar7;
  char unaff_BL;
  int unaff_ESP;
  uint unaff_EBP;
  byte *unaff_RSI;
  int *unaff_RDI;
  byte in_CF;
  byte *pbVar4;
  char *pcVar5;
  
  bVar7 = (byte)param_2;
  *unaff_RDI = (*unaff_RDI - (int)param_2) - (uint)in_CF;
  *(byte *)(param_2 + 0x60037004) =
       *(byte *)(param_2 + 0x60037004) | (byte)((ulonglong)param_2 >> 8);
  bVar2 = (byte)in_RAX & bVar7;
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  *pbVar4 = *pbVar4 + bVar7;
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar2;
  *param_1 = (*param_1 - unaff_ESP) - (uint)CARRY1(bVar1,bVar2);
  uVar3 = (int)pbVar4 + 0x3a010f00;
  pcVar5 = (char *)(ulonglong)uVar3;
  *pcVar5 = *pcVar5 + (char)param_1;
  pcVar6 = (char *)((longlong)param_1 + -1);
  if (pcVar6 == (char *)0x0 || *pcVar5 == '\0') {
    pcVar5[(longlong)unaff_RSI] = pcVar5[(longlong)unaff_RSI];
    *pcVar5 = *pcVar5 + (char)(uVar3 >> 8);
  }
  *unaff_RSI = *unaff_RSI >> 1;
  pcVar5[0x21000001] = pcVar5[0x21000001] + bVar7;
  *(uint *)((longlong)pcVar5 * 2) = *(uint *)((longlong)pcVar5 * 2) & (uint)pcVar6;
  *(uint *)(pcVar5 + 0x1a) = *(uint *)(pcVar5 + 0x1a) & unaff_EBP;
  *pcVar6 = *pcVar6 + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

