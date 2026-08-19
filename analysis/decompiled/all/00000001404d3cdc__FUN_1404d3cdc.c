// Function: FUN_1404d3cdc
// Addr: 1404d3cdc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3cdc(char *param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 uVar4;
  char cVar6;
  char cVar8;
  char *pcVar5;
  byte bVar10;
  longlong unaff_RBX;
  undefined8 *puVar11;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  bool bVar12;
  bool bVar13;
  undefined8 uStack_18;
  byte bVar7;
  byte bVar9;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  puVar11 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar6 = '\x10';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar11 = puVar11 + -1;
    *puVar11 = *unaff_RBP;
    cVar6 = cVar6 + -1;
  } while ('\0' < cVar6);
  bRam00000000a84b0007 = bRam00000000a84b0007 | 7;
  bVar9 = (byte)(uRam0000000000000007 | 7);
  bVar7 = (byte)(uRam0000000000000007 >> 8);
  uVar2 = (undefined2)(uRam0000000000000007 >> 0x10);
  cVar6 = bVar7 - bVar10;
  uVar3 = CONCAT22(uVar2,CONCAT11(cVar6,((bVar9 | 7) -
                                        *(char *)(ulonglong)
                                                 (CONCAT22(uVar2,CONCAT11(cVar6,bVar9)) | 7)) -
                                        (bVar7 < bVar10)));
  bVar12 = uVar3 < *(uint *)(ulonglong)uVar3;
  iVar1 = uVar3 - *(uint *)(ulonglong)uVar3;
  bVar9 = (byte)((uint)iVar1 >> 8);
  bVar10 = bVar9 - (byte)param_2;
  bVar13 = bVar9 < (byte)param_2 || bVar10 < bVar12;
  bVar9 = (byte)iVar1;
  cVar8 = bVar10 - bVar12;
  uVar4 = (undefined3)(CONCAT22((short)((uint)iVar1 >> 0x10),CONCAT11(cVar8,bVar9)) >> 8);
  cVar6 = bVar9 - bVar13;
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar4,cVar6);
  (&stack0xfffffffffffffff0)[unaff_RBX] =
       (&stack0xfffffffffffffff0)[unaff_RBX] + cVar8 + (bVar9 < bVar13);
  uRam0000000000000007 = uRam0000000000000007 | 7;
  *(char *)(unaff_RSI + -5) = *(char *)(unaff_RSI + -5) + cVar6;
  *param_1 = *param_1 + cVar8;
  *pcVar5 = *pcVar5 + cVar6;
  pcVar5 = (char *)((ulonglong)CONCAT31(uVar4,cVar6 * '\x02') + 0x1004d3b);
  *pcVar5 = *pcVar5 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

