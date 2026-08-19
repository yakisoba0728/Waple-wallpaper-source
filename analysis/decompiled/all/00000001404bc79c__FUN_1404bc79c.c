// Function: FUN_1404bc79c
// Addr: 1404bc79c
// Size: 1 bytes


void FUN_1404bc79c(byte param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  byte *in_RAX;
  undefined7 uVar7;
  byte *pbVar5;
  char *pcVar6;
  byte bVar8;
  char cVar9;
  longlong unaff_RSI;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4;
  *in_RAX = *in_RAX + (byte)in_RAX;
  *(char *)(unaff_RSI + -0xc) = *(char *)(unaff_RSI + -0xc) + (char)param_2;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (byte)in_RAX & *in_RAX;
  bVar1 = *(byte *)CONCAT71(uVar7,bVar3);
  *param_4 = *param_4;
  uVar4 = (int)CONCAT71(uVar7,bVar3 & bVar1) + 0x64050002;
  bVar3 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(0xf4,bVar3));
  uVar2 = (undefined3)(uVar4 >> 8);
  bVar3 = bVar3 & *(byte *)(ulonglong)uVar4;
  uVar4 = (int)&stack0x00000000 << (param_1 & 0x1f);
  bVar3 = bVar3 & *(byte *)(ulonglong)CONCAT31(uVar2,bVar3);
  pbVar5 = (byte *)(ulonglong)CONCAT31(uVar2,bVar3);
  bVar8 = cVar9 << 1 | cVar9 < '\0';
  cVar9 = (char)uVar4;
  *param_4 = *param_4 + cVar9;
  *pbVar5 = *pbVar5 + bVar3;
  pcVar6 = (char *)(((ulonglong)uVar4 - 0xb2cffde) + ((ulonglong)&stack0x00000000 & 0xffffffff) * 8)
  ;
  *pcVar6 = *pcVar6 + bVar8;
  bVar1 = *pbVar5;
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar2,bVar3 & bVar1);
  *param_4 = *param_4 + cVar9;
  *pcVar6 = *pcVar6 + (bVar3 & bVar1);
  *pcVar6 = *pcVar6 + (bVar8 << 1 | (char)bVar8 < '\0');
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

