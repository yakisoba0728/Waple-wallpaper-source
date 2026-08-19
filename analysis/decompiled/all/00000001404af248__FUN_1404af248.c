// Function: FUN_1404af248
// Addr: 1404af248
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af248(longlong param_1,int *param_2)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  char *unaff_RSI;
  uint *unaff_RDI;
  byte in_CF;
  
  uVar2 = in_EAX + 0x15001634 + (uint)in_CF;
  pbVar3 = (byte *)(ulonglong)uVar2;
  *param_2 = *param_2 + (int)param_2;
  cVar1 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  bVar4 = (byte)(param_1 + -1);
  if (param_1 + -1 == 0 || *unaff_RSI == '\0') {
    if (!SCARRY1(cVar1,(char)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar3 = (byte *)((ulonglong)uVar2 | 0xf0);
  }
  else {
    pbVar3[(longlong)unaff_RSI * 8] = pbVar3[(longlong)unaff_RSI * 8] + bVar4;
  }
  *pbVar3 = *pbVar3 ^ bVar4;
  *unaff_RDI = *unaff_RDI &
               CONCAT22((short)((ulonglong)param_2 >> 0x10),
                        CONCAT11((byte)((ulonglong)param_2 >> 8) | pbVar3[9],(char)param_2));
  *pbVar3 = *pbVar3 | (byte)pbVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

