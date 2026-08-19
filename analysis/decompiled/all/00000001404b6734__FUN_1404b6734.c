// Function: FUN_1404b6734
// Addr: 1404b6734
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6752) overlaps instruction at (ram,0x0001404b6751)
    */

void FUN_1404b6734(undefined8 param_1,uint param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint in_EAX;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar8;
  byte bVar9;
  undefined7 uVar10;
  byte bVar11;
  byte bVar14;
  uint *puVar12;
  uint *puVar13;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  bool bVar15;
  bool in_PF;
  char *pcVar7;
  
  uVar10 = (undefined7)((ulonglong)param_1 >> 8);
  bVar9 = (byte)param_1;
  puVar6 = (uint *)(ulonglong)param_2;
  puVar12 = (uint *)(ulonglong)in_EAX;
  bVar2 = (byte)param_2;
  bVar11 = (byte)in_EAX;
  bVar14 = (byte)(in_EAX >> 8);
  if (in_PF) {
    bVar15 = CARRY1((byte)*puVar6,bVar2);
    *(byte *)puVar6 = (byte)*puVar6 + bVar2;
    if ((byte)*puVar6 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    bVar15 = CARRY1(bVar9,bVar11);
    bVar9 = bVar9 + bVar11;
    if ((POPCOUNT(bVar9) & 1U) != 0) {
      *(byte *)((longlong)puVar6 + 0x66) = *(byte *)((longlong)puVar6 + 0x66) + bVar2;
      *param_4 = *param_4;
      *(byte *)puVar6 = (byte)*puVar6 + bVar2;
      pbVar1 = (byte *)((longlong)puVar12 + -0x2effe486);
      bVar15 = CARRY1(*pbVar1,bVar11);
      *pbVar1 = *pbVar1 + bVar11;
      puVar13 = puVar12;
      if ((POPCOUNT(*pbVar1) & 1U) == 0) goto code_r0x0001404b6766;
      *(byte *)((longlong)puVar6 + 0x66) = *(byte *)((longlong)puVar6 + 0x66) + bVar2;
      *param_4 = *param_4;
      *(byte *)puVar6 = (byte)*puVar6 + bVar2;
      pbVar1 = (byte *)(unaff_RBP + 0x7a);
      bVar15 = CARRY1(*pbVar1,bVar14);
      *pbVar1 = *pbVar1 + bVar14;
    }
  }
  uVar4 = (param_2 - *puVar6) - (uint)bVar15;
  puVar13 = (uint *)(ulonglong)uVar4;
  if ((POPCOUNT(uVar4 & 0xff) & 1U) == 0) {
    uVar4 = CONCAT22((short)(in_EAX >> 0x10),CONCAT11(bVar14 * '\x02',bVar11)) + 0x6d40000;
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI + bVar14;
  *param_4 = *param_4;
  *(byte *)puVar12 = (byte)*puVar12 + bVar11;
  pbVar1 = (byte *)((longlong)puVar12 + 0x7a);
  bVar15 = CARRY1(*pbVar1,(byte)uVar4);
  *pbVar1 = *pbVar1 + (byte)uVar4;
  puVar6 = puVar12;
code_r0x0001404b6766:
  uVar4 = (uint)puVar6 - *puVar6;
  uVar5 = uVar4 - bVar15;
  if (uVar5 == 0) {
    iRam0000000000000000 = -(uint)((uint)puVar6 < *puVar6 || uVar4 < bVar15) - iRam0000000000000000;
    cVar3 = (char)iRam0000000000000000;
    pcVar7 = (char *)(ulonglong)
                     CONCAT22((short)((uint)iRam0000000000000000 >> 0x10),CONCAT11(0x24,cVar3));
    *(undefined1 *)CONCAT71(uVar10,bVar9) = *(undefined1 *)CONCAT71(uVar10,bVar9);
    *unaff_RSI = *unaff_RSI + bVar9;
    *pcVar7 = *pcVar7 + cVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  lVar8 = func_0x0001614bb353(bVar9,(longlong)((longlong)puVar13 << 0x20 | (ulonglong)uVar5) %
                                    (longlong)*(int *)(unaff_RBX * 2) & 0xffffffff);
  uVar4 = (uint)lVar8 | *(uint *)(lVar8 * 2) | (uint)&stack0x00000000;
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

