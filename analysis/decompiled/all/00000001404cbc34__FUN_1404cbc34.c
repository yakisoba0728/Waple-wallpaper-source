// Function: FUN_1404cbc34
// Addr: 1404cbc34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbc84) overlaps instruction at (ram,0x0001404cbc83)
    */

void FUN_1404cbc34(byte *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  byte bVar8;
  char cVar9;
  byte *in_RAX;
  int iVar10;
  byte bVar11;
  int *unaff_RBX;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  char *pcVar7;
  
  *unaff_RBX = *unaff_RBX + (int)param_2;
  bVar4 = (byte)in_RAX + *in_RAX;
  iVar10 = (int)param_2 + *(int *)(param_2 + 0xf) + (uint)CARRY1((byte)in_RAX,*in_RAX);
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 ^ bVar8;
  pbVar3 = (byte *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4) * 2);
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar4;
  bVar11 = (byte)((uint)iVar10 >> 8);
  pcVar7 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(bVar8 + bVar11 + CARRY1(bVar1,bVar4),bVar4));
  *pcVar7 = *pcVar7 + bVar4;
  iVar6 = (uint)pcVar7 + 0xc00003c4;
  if (0x3ffffc3b < (uint)pcVar7) {
    pcVar7 = (char *)((longlong)unaff_RBX + (longlong)unaff_RSI * 2);
    *pcVar7 = *pcVar7 + (char)param_1;
    uVar2 = in((short)iVar10);
    *unaff_RDI = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar5 = (byte)iVar6 + bVar11;
  pcVar7 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar6 >> 8),cVar5);
  cVar9 = (char)((uint)iVar6 >> 8);
  if (!CARRY1((byte)iVar6,bVar11)) {
    *(char *)(unaff_RBX + (longlong)(unaff_RDI + 0x13)) =
         (char)unaff_RBX[(longlong)(unaff_RDI + 0x13)] + cVar9;
    *param_1 = *param_1 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBX + (longlong)(unaff_RDI + 0x13)) =
       (char)unaff_RBX[(longlong)(unaff_RDI + 0x13)] + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + cVar9;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *pcVar7 = *pcVar7 + cVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

