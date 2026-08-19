// Function: FUN_1404c4a48
// Addr: 1404c4a48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c4a52) overlaps instruction at (ram,0x0001404c4a51)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c4a52) */

void FUN_1404c4a48(char param_1,undefined8 param_2)

{
  uint uVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong in_RAX;
  byte bVar8;
  byte bVar9;
  undefined6 uVar10;
  byte unaff_BL;
  byte *unaff_RSI;
  bool bVar11;
  byte unaff_retaddr;
  uint *puVar6;
  char *pcVar7;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar8 = (byte)param_2;
  bVar9 = (byte)((ulonglong)param_2 >> 8) | unaff_RSI[in_RAX];
  *(char *)CONCAT62(uVar10,CONCAT11(bVar9,bVar8)) =
       *(char *)CONCAT62(uVar10,CONCAT11(bVar9,bVar8)) + param_1;
  iVar5 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX ^ *unaff_RSI);
  uVar1 = iVar5 + 0x74150008;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
  iVar5 = iVar5 + -0x76eaf894;
                    /* WARNING: Bad instruction - Truncating control flow here */
  bVar11 = CARRY1(bRam00000001422c5b97,bVar8);
  bRam00000001422c5b97 = bRam00000001422c5b97 + bVar8;
  uVar2 = (undefined3)((uint)iVar5 >> 8);
  bVar3 = (((byte)iVar5 ^ 6) - 0xc) - bVar11;
  uVar1 = CONCAT31(uVar2,bVar3);
  puVar6 = (uint *)(ulonglong)uVar1;
  bVar11 = CARRY4(*puVar6,uVar1) || CARRY4(*puVar6 + uVar1,(uint)CARRY1(unaff_retaddr,unaff_BL));
  *puVar6 = *puVar6 + uVar1 + (uint)CARRY1(unaff_retaddr,unaff_BL);
  cVar4 = (bVar3 + 0xac) - bVar11;
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar2,cVar4);
  *pcVar7 = *pcVar7 + cVar4 + (bVar3 < 0x54 || (byte)(bVar3 + 0xac) < bVar11);
  TaskRegister(*(undefined2 *)(CONCAT62(uVar10,CONCAT11(bVar9,bVar8)) + (longlong)unaff_RSI * 2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

