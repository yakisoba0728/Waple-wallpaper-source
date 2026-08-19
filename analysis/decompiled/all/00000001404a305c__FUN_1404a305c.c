// Function: FUN_1404a305c
// Addr: 1404a305c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a305c(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char cVar8;
  undefined8 in_RAX;
  char *pcVar7;
  undefined7 uVar9;
  char cVar10;
  byte bVar11;
  undefined6 uVar12;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int iVar5;
  byte *pbVar6;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)param_2;
  uVar9 = (undefined7)((ulonglong)param_1 >> 8);
  bVar2 = param_1[0x2f640005];
  bVar11 = *param_1;
  *param_1 = *param_1 + unaff_SPL;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + cVar10;
  iVar5 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                        (char)in_RAX + '\x06' + CARRY1(bVar11,unaff_SPL));
  uVar4 = iVar5 + 0x7d40c00;
  pbVar6 = (byte *)(ulonglong)uVar4;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)pbVar6 * 8);
  bVar11 = (byte)uVar4;
  *pcVar1 = *pcVar1 + bVar11;
  *pbVar6 = *pbVar6 | bVar11;
  bVar11 = (byte)((ulonglong)param_2 >> 8) & bVar2 & param_1[-0x4eabfffb];
  uVar4 = iVar5 + 0x52038c00;
  pcVar7 = (char *)(ulonglong)uVar4;
  cVar8 = (char)(uVar4 >> 8);
  *param_1 = *param_1 + cVar8;
  cVar3 = (char)uVar4;
  *pcVar7 = *pcVar7 + cVar3;
  *(char *)CONCAT62(uVar12,CONCAT11(bVar11,cVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(bVar11,cVar10)) + cVar8;
  pcVar1 = (char *)(CONCAT71(uVar9,5) + 5 + unaff_RSI * 4);
  *pcVar1 = *pcVar1 + cVar10;
  pcVar7[0x21004a2f] = pcVar7[0x21004a2f] + cVar3;
  *pcVar7 = *pcVar7 + cVar3;
  cRam00000001624a364a = cRam00000001624a364a + cVar3;
  pcVar1 = (char *)(unaff_RDI + 0x4a + unaff_RBP);
  *pcVar1 = *pcVar1 + cVar8;
  *(char *)CONCAT71(uVar9,5) = *(char *)CONCAT71(uVar9,5) + cVar8;
  *pcVar7 = *pcVar7 + cVar3;
  cRam000000010c4a365e = cRam000000010c4a365e + '\x05';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

