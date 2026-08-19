// Function: FUN_14049e470
// Addr: 14049e470
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e518) overlaps instruction at (ram,0x00014049e517)
    */
/* WARNING: Removing unreachable block (ram,0x00014049e517) */
/* WARNING: Removing unreachable block (ram,0x00014049e539) */
/* WARNING: Removing unreachable block (ram,0x00014049e546) */

void FUN_14049e470(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined7 uVar9;
  byte *in_RAX;
  char cVar10;
  int *piVar11;
  undefined2 uVar12;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool in_SF;
  undefined1 auStack_8 [8];
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  
  uVar12 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  pbVar7 = in_RAX;
  if (in_SF) {
    pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x7b);
    *pcVar1 = *pcVar1 + cVar10;
    *in_RAX = *in_RAX + (char)in_RAX;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar2 = (char)in_RAX + 2;
    pbVar6 = (byte *)CONCAT71(uVar9,bVar2);
    bVar4 = bVar2 + *pbVar6;
    cVar3 = bVar4 + (0x1c < bVar2);
    pbVar7 = (byte *)CONCAT71(uVar9,cVar3);
    if ((CARRY1(bVar2,*pbVar6) || CARRY1(bVar4,0x1c < bVar2)) || cVar3 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar7 = *pbVar7 + cVar3;
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  }
  *param_4 = *param_4 + (char)register0x00000020;
  bVar2 = (byte)pbVar7;
  *pbVar7 = *pbVar7 + bVar2;
  pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x7b);
  *pcVar1 = *pcVar1 + cVar10;
  *pbVar7 = *pbVar7 + bVar2;
  cVar3 = (char)((ulonglong)pbVar7 >> 8);
  *param_1 = *param_1 + cVar3;
  *pbVar7 = *pbVar7 + bVar2;
  pbVar7[0x7b] = pbVar7[0x7b] + cVar3;
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar2;
  if (CARRY1(bVar4,bVar2) || *pbVar7 == 0) {
    uVar5 = (uint)pbVar7 | *(uint *)CONCAT44(unaff_00000034,unaff_ESI);
    *(char *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
    bVar4 = (byte)uVar5 ^ *unaff_RDI;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar4);
    puVar8 = (uint *)(ulonglong)uVar5;
    piVar11 = (int *)(param_1 + -1);
    if (piVar11 != (int *)0x0 && bVar4 != 0) {
      cVar10 = cVar10 + (char)*puVar8;
      *piVar11 = *piVar11 + CONCAT22(uVar12,CONCAT11(cVar10,(char)param_2));
      *puVar8 = *puVar8 | uVar5;
      piVar11 = (int *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                                 CONCAT22(uVar12,CONCAT11(cVar10,(char)param_2))) + 0xd);
      *piVar11 = *piVar11 + uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar2;
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x10049e3;
  cVar10 = ((char)param_1 - *pbVar7) - CARRY1(bVar4,bVar2);
  piVar11 = (int *)CONCAT71((int7)((ulonglong)param_1 >> 8),cVar10);
  *param_2 = *param_2 + unaff_BL;
  *piVar11 = *piVar11 + unaff_ESI;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

