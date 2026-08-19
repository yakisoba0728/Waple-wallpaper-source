// Function: FUN_1404c4a30
// Addr: 1404c4a30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c4a52) overlaps instruction at (ram,0x0001404c4a51)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c4a46) */
/* WARNING: Removing unreachable block (ram,0x0001404c4a52) */

void FUN_1404c4a30(longlong param_1,int *param_2)

{
  uint uVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  char *in_RAX;
  undefined7 uVar8;
  uint *puVar6;
  byte bVar9;
  byte bVar10;
  undefined6 uVar11;
  byte unaff_BL;
  byte *unaff_RSI;
  bool bVar12;
  byte unaff_retaddr;
  char *pcVar7;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar9 = (byte)param_2;
  *(int *)(in_RAX + param_1) = *(int *)(in_RAX + param_1) + (int)in_RAX;
  pcVar7 = (char *)((longlong)param_2 + (longlong)in_RAX * 2);
  bVar3 = (byte)in_RAX;
  *pcVar7 = *pcVar7 + bVar3;
  *in_RAX = *in_RAX + bVar3;
  *param_2 = *param_2 + (int)param_1;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar10 = (byte)((ulonglong)param_2 >> 8) | unaff_RSI[(longlong)in_RAX];
  *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + (char)param_1;
  bVar3 = bVar3 ^ *unaff_RSI | *(byte *)(CONCAT71(uVar8,bVar3 ^ *unaff_RSI) * 2);
  bVar10 = bVar10 | unaff_RSI[CONCAT71(uVar8,bVar3)];
  *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + (char)param_1;
  iVar5 = (int)CONCAT71(uVar8,bVar3 ^ *unaff_RSI);
  uVar1 = iVar5 + 0x74150008;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
  iVar5 = iVar5 + -0x76eaf894;
                    /* WARNING: Bad instruction - Truncating control flow here */
  bVar12 = CARRY1(bRam00000001422c5b97,bVar9);
  bRam00000001422c5b97 = bRam00000001422c5b97 + bVar9;
  uVar2 = (undefined3)((uint)iVar5 >> 8);
  bVar3 = (((byte)iVar5 ^ 6) - 0xc) - bVar12;
  uVar1 = CONCAT31(uVar2,bVar3);
  puVar6 = (uint *)(ulonglong)uVar1;
  bVar12 = CARRY4(*puVar6,uVar1) || CARRY4(*puVar6 + uVar1,(uint)CARRY1(unaff_retaddr,unaff_BL));
  *puVar6 = *puVar6 + uVar1 + (uint)CARRY1(unaff_retaddr,unaff_BL);
  cVar4 = (bVar3 + 0xac) - bVar12;
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar2,cVar4);
  *pcVar7 = *pcVar7 + cVar4 + (bVar3 < 0x54 || (byte)(bVar3 + 0xac) < bVar12);
  TaskRegister(*(undefined2 *)(CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + (longlong)unaff_RSI * 2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

