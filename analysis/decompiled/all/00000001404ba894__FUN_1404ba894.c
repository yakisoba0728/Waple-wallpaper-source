// Function: FUN_1404ba894
// Addr: 1404ba894
// Size: 1 bytes


void FUN_1404ba894(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  uint *puVar2;
  undefined1 uVar3;
  code *pcVar4;
  byte bVar5;
  byte *in_RAX;
  byte *pbVar6;
  char unaff_BH;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  longlong in_FS_OFFSET;
  undefined6 uVar7;
  
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  while( true ) {
    *in_RAX = *in_RAX & (byte)in_RAX;
    if ('\0' < (char)*in_RAX) break;
    *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) - (char)((ulonglong)param_2 >> 8);
    in_RAX = (byte *)(ulonglong)((int)in_RAX + 0x6c000854);
  }
  *in_RAX = *in_RAX & (byte)in_RAX;
  do {
    pbVar6 = in_RAX;
    bVar5 = bRam0500020521004ba7;
    in_RAX = (byte *)CONCAT71((int7)((ulonglong)pbVar6 >> 8),bRam0500020521004ba7);
    puVar2 = (uint *)(in_RAX + in_FS_OFFSET);
    *puVar2 = *puVar2 | (uint)in_RAX;
  } while ((int)*puVar2 < 1);
  *in_RAX = *in_RAX & bVar5;
  uVar7 = (undefined6)((ulonglong)pbVar6 >> 0x10);
  pbVar6 = (byte *)CONCAT62(uVar7,CONCAT11(0xf2,bVar5));
  *pbVar6 = *pbVar6 & bVar5;
  pbVar6 = (byte *)CONCAT62(uVar7,CONCAT11(0xa7,bVar5));
  *param_4 = *param_4;
  *pbVar6 = *pbVar6 + bVar5;
  *(char *)(unaff_RSI + -0xe) = *(char *)(unaff_RSI + -0xe) + unaff_BH;
  *pbVar6 = *pbVar6 & bVar5;
  pbVar6 = (byte *)CONCAT62(uVar7,CONCAT11(0xf2,bVar5));
  *pbVar6 = *pbVar6 & bVar5;
  pbVar6 = (byte *)CONCAT62(uVar7,CONCAT11(0xa7,bVar5));
  *param_4 = *param_4;
  *pbVar6 = *pbVar6 + bVar5;
  pcVar1 = (char *)(param_2 + 0x20 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RSI + -0xe) = *(char *)(unaff_RSI + -0xe) + unaff_BH;
  *pbVar6 = *pbVar6 & bVar5;
  pcVar4 = (code *)swi(1);
  (*pcVar4)();
  return;
}

