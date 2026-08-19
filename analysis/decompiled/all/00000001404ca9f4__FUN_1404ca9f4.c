// Function: FUN_1404ca9f4
// Addr: 1404ca9f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca9f4(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  uint *in_RAX;
  char cVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  byte *pbVar4;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + unaff_RSI);
  cVar5 = (char)param_1;
  *pcVar1 = *pcVar1 + cVar5;
  (&stack0x00000033)[(longlong)param_1] =
       (&stack0x00000033)[(longlong)param_1] + (char)((uint)param_2 >> 8);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + unaff_BL) + 0x74050002;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar2 = (byte)uVar3;
  *pbVar4 = *pbVar4 | bVar2;
  bRam000000014de6aa46 = bRam000000014de6aa46 | 0x33;
  pbVar4[unaff_RSI * 8 + 0x210049] = pbVar4[unaff_RSI * 8 + 0x210049] + cVar5;
  *pbVar4 = *pbVar4 + bVar2;
  bRam000000014de6aa56 = bRam000000014de6aa56 | 0x33;
  pbVar4[unaff_RSI * 8 + 0xa210049] = pbVar4[unaff_RSI * 8 + 0xa210049] + cVar5;
  rdpmc((int)param_1);
  rdpmc(CONCAT31((int3)((ulonglong)param_1 >> 8),cVar5 + unaff_BL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

