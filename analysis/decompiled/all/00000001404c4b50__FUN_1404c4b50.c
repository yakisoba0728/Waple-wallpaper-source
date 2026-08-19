// Function: FUN_1404c4b50
// Addr: 1404c4b50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4b50(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int *in_RAX;
  char *pcVar6;
  undefined7 uVar7;
  byte unaff_BL;
  char unaff_BH;
  longlong unaff_RSI;
  
  uVar7 = (undefined7)((ulonglong)param_2 >> 8);
  iVar4 = (int)in_RAX;
  *in_RAX = *in_RAX + iVar4;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar6 = (char *)(ulonglong)(iVar4 + 0xd2983800U);
  *(char *)(unaff_RSI + 0x36) = *(char *)(unaff_RSI + 0x36) + unaff_BH;
  cVar2 = (char)(iVar4 + 0xd2983800U);
  *pcVar6 = *pcVar6 + cVar2;
  *pcVar6 = *pcVar6 + cVar2;
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  uVar5 = iVar4 + 0x46ad3808 + (uint)CARRY1(bVar1,unaff_BL);
  pcVar6 = (char *)((ulonglong)((uVar5 | *(uint *)(ulonglong)uVar5) + 0x15000a64) ^ 9);
  cRam00000000e12c5ccb = cRam00000000e12c5ccb + 'g';
  *param_1 = *param_1 + (char)pcVar6;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  *(char *)(unaff_RSI + 0x68) = *(char *)(unaff_RSI + 0x68) + unaff_BH;
  uVar5 = (int)pcVar6 + 0xd2976c00;
  pcVar6 = (char *)(ulonglong)uVar5;
  *(char *)(unaff_RSI + 0x36) = *(char *)(unaff_RSI + 0x36) + unaff_BH;
  bVar3 = (byte)uVar5;
  *pcVar6 = *pcVar6 + bVar3;
  *pcVar6 = *pcVar6 + bVar3;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar3;
  *(uint *)CONCAT71(uVar7,0x67) =
       (*(int *)CONCAT71(uVar7,0x67) - (int)param_1) - (uint)CARRY1(bVar1,bVar3);
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

