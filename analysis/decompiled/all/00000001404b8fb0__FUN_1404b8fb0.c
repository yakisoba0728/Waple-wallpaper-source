// Function: FUN_1404b8fb0
// Addr: 1404b8fb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b8fd9) overlaps instruction at (ram,0x0001404b8fd5)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b8ff3) */
/* WARNING: Removing unreachable block (ram,0x0001404b8fcf) */
/* WARNING: Removing unreachable block (ram,0x0001404b8fd3) */

uint FUN_1404b8fb0(longlong param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char *in_RAX;
  undefined7 uVar8;
  uint *puVar7;
  byte *pbVar9;
  byte unaff_BL;
  char unaff_BH;
  uint unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  char *pcVar6;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = (char)in_RAX + (char)param_2;
  pcVar6 = (char *)CONCAT71(uVar8,cVar3);
  if (param_1 != 1 && cVar3 == '\0') {
    uVar5 = (int)pcVar6 + 0xf4050002;
    return uVar5 | *(uint *)(ulonglong)uVar5;
  }
  *param_2 = *param_2 + cVar3;
  if (param_1 == 2) {
    pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x521004b);
    *pcVar1 = *pcVar1 + unaff_BH;
    uVar5 = (int)CONCAT71(uVar8,cVar3 + *pcVar6) + 0xa0000a34;
    pcVar6 = (char *)(ulonglong)uVar5;
    bVar4 = (byte)uVar5;
    *pcVar6 = *pcVar6 + bVar4;
    pbVar9 = (byte *)(pcVar6 + in_FS_OFFSET);
    bVar2 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar4;
    pbVar9 = (byte *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                              CONCAT11(((char)((ulonglong)param_2 >> 8) - *unaff_RDI) -
                                       CARRY1(bVar2,bVar4),(char)param_2));
    bVar2 = *pbVar9;
    *pbVar9 = *pbVar9 + unaff_BL;
    puVar7 = (uint *)((ulonglong)pbVar9 & 0xffffffff);
    uVar5 = (uint)pbVar9 + 0x21004b8e;
    puVar7[4] = puVar7[4] + unaff_ESI +
                (uint)(0xdeffb471 < (uint)pbVar9 || CARRY4(uVar5,(uint)CARRY1(bVar2,unaff_BL)));
    *(uint **)((ulonglong)(uVar5 + CARRY1(bVar2,unaff_BL)) - 8) = puVar7;
    *puVar7 = *puVar7 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

