// Function: FUN_14049e48c
// Addr: 14049e48c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e518) overlaps instruction at (ram,0x00014049e517)
    */
/* WARNING: Removing unreachable block (ram,0x00014049e517) */
/* WARNING: Removing unreachable block (ram,0x00014049e539) */
/* WARNING: Removing unreachable block (ram,0x00014049e546) */

void FUN_14049e48c(longlong param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *in_RAX;
  char cVar4;
  int *piVar5;
  undefined2 uVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  uint *puVar3;
  
  uVar6 = (undefined2)((ulonglong)param_2 >> 0x10);
  if (!in_CF && !in_ZF) {
    bVar1 = *in_RAX;
    *in_RAX = *in_RAX + (byte)in_RAX;
    cVar4 = ((char)param_1 - *in_RAX) - CARRY1(bVar1,(byte)in_RAX);
    piVar5 = (int *)CONCAT71((int7)((ulonglong)param_1 >> 8),cVar4);
    *param_2 = *param_2 + unaff_BL;
    *piVar5 = *piVar5 + unaff_ESI;
    *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = (uint)in_RAX | *(uint *)CONCAT44(unaff_00000034,unaff_ESI);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  bVar1 = (byte)uVar2 ^ *unaff_RDI;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
  puVar3 = (uint *)(ulonglong)uVar2;
  piVar5 = (int *)(param_1 + -1);
  if (piVar5 == (int *)0x0 || bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar4 = (char)((ulonglong)param_2 >> 8) + (char)*puVar3;
  *piVar5 = *piVar5 + CONCAT22(uVar6,CONCAT11(cVar4,(char)param_2));
  *puVar3 = *puVar3 | uVar2;
  piVar5 = (int *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                            CONCAT22(uVar6,CONCAT11(cVar4,(char)param_2))) + 0xd);
  *piVar5 = *piVar5 + uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

