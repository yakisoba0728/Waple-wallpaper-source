// Function: FUN_1404a7b0c
// Addr: 1404a7b0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7b0c(char *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 in_RAX;
  byte *pbVar4;
  char cVar5;
  byte unaff_BH;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  uVar2 = in(0);
  *(char *)(unaff_RDI + 0x34) = *(char *)(unaff_RDI + 0x34) + (char)param_1;
  if ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2) != 0x140001c4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RSI + -0x74) = *(char *)(unaff_RSI + -0x74) + cVar5;
  bVar3 = bRam000000000a8c7000;
  pbVar4 = (byte *)(ulonglong)CONCAT31(0xa8c70,bRam000000000a8c7000);
  *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) ^ unaff_BH;
  *param_1 = *param_1 + 'p';
  *pbVar4 = *pbVar4 + bVar3;
  pbVar4[-0x74] = pbVar4[-0x74] + cVar5;
  bVar3 = bVar3 | *pbVar4;
  if (bVar3 != 0) {
    bVar1 = *(byte *)(ulonglong)CONCAT31(0xa8c70,bVar3);
    *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) ^ unaff_BH;
    *param_1 = *param_1 + (bVar3 | bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

