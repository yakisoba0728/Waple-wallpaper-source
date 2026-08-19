// Function: FUN_14049e460
// Addr: 14049e460
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e518) overlaps instruction at (ram,0x00014049e517)
    */
/* WARNING: Removing unreachable block (ram,0x00014049e517) */
/* WARNING: Removing unreachable block (ram,0x00014049e539) */
/* WARNING: Removing unreachable block (ram,0x00014049e546) */

void FUN_14049e460(char *param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  char cVar7;
  byte *in_RAX;
  char cVar8;
  int *piVar9;
  undefined2 uVar10;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  byte unaff_retaddr;
  byte *pbVar5;
  uint *puVar6;
  
  uVar10 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar8 = (char)((ulonglong)param_2 >> 8);
  *(uint *)(in_RAX + (longlong)param_2) = *(uint *)(in_RAX + (longlong)param_2) & (uint)in_RAX;
  bVar3 = (byte)in_RAX;
  bVar2 = bVar3 + *in_RAX + CARRY1(unaff_retaddr,bVar3);
  pbVar5 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  if ((CARRY1(bVar3,*in_RAX) || CARRY1(bVar3 + *in_RAX,CARRY1(unaff_retaddr,bVar3))) || bVar2 == 0)
  {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar5 = *pbVar5 + bVar2;
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar7;
  *pbVar5 = *pbVar5 + bVar2;
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x7b);
  *pcVar1 = *pcVar1 + cVar8;
  *pbVar5 = *pbVar5 + bVar2;
  *param_1 = *param_1 + cVar7;
  *pbVar5 = *pbVar5 + bVar2;
  pbVar5[0x7b] = pbVar5[0x7b] + cVar7;
  bVar3 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar2;
  if (CARRY1(bVar3,bVar2) || *pbVar5 == 0) {
    uVar4 = (uint)pbVar5 | *(uint *)CONCAT44(unaff_00000034,unaff_ESI);
    *(char *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
    bVar3 = (byte)uVar4 ^ *unaff_RDI;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar3);
    puVar6 = (uint *)(ulonglong)uVar4;
    piVar9 = (int *)(param_1 + -1);
    if (piVar9 == (int *)0x0 || bVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar8 = cVar8 + (char)*puVar6;
    *piVar9 = *piVar9 + CONCAT22(uVar10,CONCAT11(cVar8,(char)param_2));
    *puVar6 = *puVar6 | uVar4;
    piVar9 = (int *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                              CONCAT22(uVar10,CONCAT11(cVar8,(char)param_2))) + 0xd);
    *piVar9 = *piVar9 + uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar2;
  cVar8 = ((char)param_1 - *pbVar5) - CARRY1(bVar3,bVar2);
  piVar9 = (int *)CONCAT71((int7)((ulonglong)param_1 >> 8),cVar8);
  *param_2 = *param_2 + unaff_BL;
  *piVar9 = *piVar9 + unaff_ESI;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

