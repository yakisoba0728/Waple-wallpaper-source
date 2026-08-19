// Function: FUN_1404cbc24
// Addr: 1404cbc24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbc84) overlaps instruction at (ram,0x0001404cbc83)
    */

void FUN_1404cbc24(byte *param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  char cVar12;
  uint uVar8;
  byte bVar11;
  uint *in_RAX;
  char cVar14;
  int iVar15;
  byte bVar16;
  longlong unaff_RBX;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  uint uVar9;
  char *pcVar10;
  undefined7 uVar13;
  
  cVar14 = (char)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar8 = *in_RAX;
  bVar3 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar3;
  uVar13 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar11 = (byte)((ulonglong)in_RAX >> 8);
  if (SCARRY1((char)uVar8,bVar3)) {
    *(byte *)in_RAX = (char)*in_RAX + bVar11;
    uVar6 = in(1);
    in_RAX = (uint *)CONCAT71(uVar13,uVar6);
  }
  else {
    cVar5 = (char)((ulonglong)unaff_RBX >> 8);
    unaff_RBX = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                         CONCAT11(cVar5 + cVar14,(char)unaff_RBX));
    if (!SCARRY1(cVar5,cVar14)) {
      *(byte *)in_RAX = (char)*in_RAX + bVar3;
      bVar4 = bVar3 + (char)*in_RAX;
      iVar15 = (int)param_2 + *(int *)(param_2 + 0xf) + (uint)CARRY1(bVar3,(byte)*in_RAX);
      *param_1 = *param_1 ^ bVar11;
      pbVar2 = (byte *)(CONCAT71(uVar13,bVar4) * 2);
      bVar3 = *pbVar2;
      *pbVar2 = *pbVar2 + bVar4;
      bVar16 = (byte)((uint)iVar15 >> 8);
      pcVar10 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                 CONCAT11(bVar11 + bVar16 + CARRY1(bVar3,bVar4),bVar4));
      *pcVar10 = *pcVar10 + bVar4;
      iVar7 = (uint)pcVar10 + 0xc00003c4;
      if (0x3ffffc3b < (uint)pcVar10) {
        pcVar10 = (char *)((longlong)unaff_RSI * 2 + 0x1301004c);
        *pcVar10 = *pcVar10 + cVar14;
        uVar6 = in((short)iVar15);
        *unaff_RDI = uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar5 = (byte)iVar7 + bVar16;
      pcVar10 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar7 >> 8),cVar5);
      cVar12 = (char)((uint)iVar7 >> 8);
      if (!CARRY1((byte)iVar7,bVar16)) {
        pcVar10 = (char *)((longlong)unaff_RDI * 4 + 0x13010098);
        *pcVar10 = *pcVar10 + cVar12;
        *param_1 = *param_1 + cVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pcVar1 = (char *)((longlong)unaff_RDI * 4 + 0x13010098);
      *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
      *param_1 = *param_1 + cVar12;
      *unaff_RSI = *unaff_RSI + cVar14;
      *pcVar10 = *pcVar10 + cVar5;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + (char)param_2;
  uVar9 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)*in_RAX);
  uVar8 = uVar9 + 0xf0000474;
  if (uVar9 < 0xffffb8c) {
    pcVar10 = (char *)(unaff_RBX + (longlong)unaff_RSI * 2);
    *pcVar10 = *pcVar10 + cVar14;
    uVar6 = in((short)param_2);
    *unaff_RDI = uVar6;
    *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)uVar8;
  *(undefined1 *)(param_2 + 0x34) = *(undefined1 *)(param_2 + 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

