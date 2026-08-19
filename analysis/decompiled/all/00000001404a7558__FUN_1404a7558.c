// Function: FUN_1404a7558
// Addr: 1404a7558
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7558(uint param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char cVar7;
  longlong in_RAX;
  uint uVar8;
  byte bVar9;
  char cVar10;
  undefined6 uVar11;
  byte unaff_BH;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char *pcVar6;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2 | *(byte *)(unaff_RDI + in_RAX);
  iVar5 = (int)in_RAX + -0x5ffff9cc;
  uVar8 = param_1 | *(uint *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)) |
          *(uint *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9));
  uVar2 = (undefined3)((uint)iVar5 >> 8);
  bVar3 = (byte)iVar5 + unaff_BH;
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar2,bVar3);
  if (CARRY1((byte)iVar5,unaff_BH)) {
    (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar7 = (char)((uint)iVar5 >> 8);
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + cVar7;
  *pcVar6 = *pcVar6 + bVar3;
  pcVar6[-0x2cfff5f5] = pcVar6[-0x2cfff5f5] + cVar7;
  pcVar6 = (char *)(ulonglong)(uVar8 | *(uint *)CONCAT62(uVar11,CONCAT11(cVar10,bVar9)));
  bVar4 = bVar3 + unaff_BH;
  if (!CARRY1(bVar3,unaff_BH)) {
    *pcVar6 = *pcVar6 + bVar4;
    pbVar1 = (byte *)((ulonglong)CONCAT31(uVar2,bVar4) * 2);
    *pbVar1 = *pbVar1 | bVar4;
    pbVar1 = (byte *)(unaff_RSI + (ulonglong)CONCAT31(uVar2,bVar4));
    *pbVar1 = *pbVar1 | bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar6 = (char *)(((ulonglong)CONCAT31(uVar2,bVar4) ^ 4) - 0x20fff5f1);
  *pcVar6 = *pcVar6 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

