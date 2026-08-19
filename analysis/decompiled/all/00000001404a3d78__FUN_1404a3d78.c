// Function: FUN_1404a3d78
// Addr: 1404a3d78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3d78(longlong param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  int *piVar6;
  undefined1 unaff_BL;
  char unaff_BH;
  char cVar7;
  undefined2 unaff_0000001a;
  longlong unaff_RDI;
  bool bVar8;
  char *pcVar5;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  bVar2 = (char)in_RAX * '@';
  cVar7 = unaff_BH + (char)param_2;
  piVar6 = (int *)(param_1 + -1);
  if (piVar6 == (int *)0x0 || cVar7 == '\0') {
    (&stack0x00000000)[unaff_RDI] = (&stack0x00000000)[unaff_RDI] + (char)((ulonglong)param_2 >> 8);
    *(byte *)piVar6 = *(char *)piVar6 + bVar2;
  }
  bVar3 = *param_2;
  *param_2 = *param_2 + (char)piVar6;
  *piVar6 = *piVar6 + CONCAT22(unaff_0000001a,CONCAT11(cVar7,unaff_BL));
  *(char *)piVar6 = *(char *)piVar6 + (char)((ulonglong)in_RAX >> 8);
  uVar4 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2 | bVar3) ^ 0x54350008;
  bVar8 = uVar4 < *(uint *)(ulonglong)uVar4;
  iVar1 = uVar4 - *(uint *)(ulonglong)uVar4;
  bVar3 = (byte)iVar1;
  bVar2 = bVar3 + 0x74;
  cVar7 = bVar2 + bVar8;
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),cVar7);
  *pcVar5 = (*pcVar5 - cVar7) - (0x8b < bVar3 || CARRY1(bVar2,bVar8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

