// Function: FUN_14049e478
// Addr: 14049e478
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e518) overlaps instruction at (ram,0x00014049e517)
    */
/* WARNING: Removing unreachable block (ram,0x00014049e517) */
/* WARNING: Removing unreachable block (ram,0x00014049e539) */
/* WARNING: Removing unreachable block (ram,0x00014049e546) */

void FUN_14049e478(char *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *in_RAX;
  char cVar5;
  undefined7 uVar7;
  int *piVar6;
  char cVar8;
  undefined2 uVar9;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  uint *puVar4;
  
  uVar9 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)param_2;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (in_CF || in_ZF) {
    *(int *)unaff_RDI = *(int *)unaff_RDI + unaff_ESI;
    param_1 = (char *)CONCAT71(uVar7,(char)param_1 + cRam000000014a29f0ed);
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
    cVar5 = cVar5 + in_RAX[1];
  }
  else {
    bVar1 = (byte)in_RAX;
    *in_RAX = *in_RAX + bVar1;
    cVar8 = (char)((ulonglong)in_RAX >> 8);
    *param_1 = *param_1 + cVar8;
    *in_RAX = *in_RAX + bVar1;
    in_RAX[0x7b] = in_RAX[0x7b] + cVar8;
    bVar2 = *in_RAX;
    *in_RAX = *in_RAX + bVar1;
    if (!CARRY1(bVar2,bVar1) && *in_RAX != 0) {
      bVar2 = *in_RAX;
      *in_RAX = *in_RAX + bVar1;
      cVar5 = ((char)param_1 - *in_RAX) - CARRY1(bVar2,bVar1);
      piVar6 = (int *)CONCAT71(uVar7,cVar5);
      *param_2 = *param_2 + unaff_BL;
      *piVar6 = *piVar6 + unaff_ESI;
      *(char *)CONCAT71(unaff_00000019,unaff_BL) =
           *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar3 = (uint)in_RAX | *(uint *)CONCAT44(unaff_00000034,unaff_ESI);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  bVar2 = (byte)uVar3 ^ *unaff_RDI;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2);
  puVar4 = (uint *)(ulonglong)uVar3;
  piVar6 = (int *)(param_1 + -1);
  if (piVar6 == (int *)0x0 || bVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar8 = (char)((ulonglong)param_2 >> 8) + (char)*puVar4;
  *piVar6 = *piVar6 + CONCAT22(uVar9,CONCAT11(cVar8,cVar5));
  *puVar4 = *puVar4 | uVar3;
  piVar6 = (int *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),CONCAT22(uVar9,CONCAT11(cVar8,cVar5)))
                  + 0xd);
  *piVar6 = *piVar6 + uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

