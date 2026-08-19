// Function: FUN_1404a8130
// Addr: 1404a8130
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8130(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  longlong in_RAX;
  byte *pbVar2;
  char *pcVar3;
  char cVar5;
  longlong unaff_RSI;
  undefined7 uVar4;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + in_RAX) = *(char *)(unaff_RSI + in_RAX) + cVar5;
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = (char)in_RAX * '\x02';
  pbVar2 = (byte *)CONCAT71(uVar4,bVar1);
  *pbVar2 = *pbVar2 + bVar1;
  *param_2 = *param_2 | 0x21;
  pbVar2[0x54] = pbVar2[0x54] + cVar5;
  *pbVar2 = *pbVar2 | bVar1;
  pcVar3 = (char *)CONCAT71(uVar4,bVar1 + 0xc);
  *pcVar3 = *pcVar3 + bVar1 + 0xc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

