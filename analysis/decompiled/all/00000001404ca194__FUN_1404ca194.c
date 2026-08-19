// Function: FUN_1404ca194
// Addr: 1404ca194
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca194(char *param_1,char *param_2,char param_3)

{
  byte *pbVar1;
  uint3 uVar2;
  byte bVar3;
  int iVar4;
  char cVar6;
  uint *in_RAX;
  char *pcVar5;
  uint uVar7;
  uint *unaff_RSI;
  char unaff_R12B;
  
  *in_RAX = *in_RAX & (uint)param_2;
  iVar4 = (int)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                        CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',
                                                 (char)in_RAX)) >> 8),(char)in_RAX) + 0x60000ad4;
  uVar2 = (uint3)((uint)iVar4 >> 8);
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + -0x60;
  *(char *)CONCAT71((uint7)uVar2,0xa0) = *(char *)CONCAT71((uint7)uVar2,0xa0) + -0x60;
  bVar3 = in(0xc);
  pbVar1 = (byte *)(ulonglong)CONCAT31(uVar2,bVar3) + -0x41;
  cVar6 = (char)((uint)iVar4 >> 8);
  *pbVar1 = *pbVar1 + cVar6;
  uVar7 = (int)param_1 - CONCAT31(uVar2,bVar3 ^ *(byte *)(ulonglong)CONCAT31(uVar2,bVar3));
  pcVar5 = (char *)CONCAT71((uint7)uVar2,0xa0);
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + unaff_R12B;
  *pcVar5 = *pcVar5 + -0x60;
  pcVar5[-0x41] = pcVar5[-0x41] + cVar6;
  uVar7 = uVar7 - (CONCAT31(uVar2,*pcVar5) ^ 0xa0);
  pcVar5 = (char *)(ulonglong)uVar7;
  *pcVar5 = *pcVar5 + param_3;
  *unaff_RSI = *unaff_RSI | (uint)CONCAT71((uint7)uVar2,0xa0);
  *pcVar5 = *pcVar5 + (char)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

