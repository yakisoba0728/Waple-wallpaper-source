// Function: FUN_1404b6340
// Addr: 1404b6340
// Size: 1 bytes


void FUN_1404b6340(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int *in_RAX;
  char unaff_SPL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *(char *)((longlong)in_RAX + 0x1b) =
       *(char *)((longlong)in_RAX + 0x1b) + (char)((ulonglong)param_1 >> 8);
  pbVar1 = unaff_RDI + 0x68;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_1;
  uVar3 = ((int)in_RAX - *in_RAX) - (uint)CARRY1(bVar2,(byte)param_1);
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RDI = *unaff_RSI;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
  unaff_RDI[1] = unaff_RSI[1];
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

