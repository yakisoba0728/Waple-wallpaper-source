// Function: FUN_1404a6b4c
// Addr: 1404a6b4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6b4c(char *param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  uint3 uVar3;
  byte bVar4;
  char cVar5;
  uint *in_RAX;
  int *piVar6;
  uint *puVar7;
  char cVar10;
  char cVar11;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  char *pcVar8;
  byte bVar9;
  
  cVar11 = (char)((ulonglong)param_2 >> 8);
  cVar10 = (char)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar4 = (byte)in_RAX;
  bVar9 = (byte)((ulonglong)in_RAX >> 8);
  piVar6 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar9 + bVar4,bVar4));
  iVar2 = *piVar6;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) +
                   CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *pcVar1 = *pcVar1 + cVar11;
  uVar3 = (uint3)(((int)piVar6 - iVar2) - (uint)CARRY1(bVar9,bVar4) >> 8);
  puVar7 = (uint *)CONCAT71((uint7)uVar3,0xb7);
  *puVar7 = *puVar7 | (uint)puVar7;
  cVar5 = in((short)param_2);
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar3,cVar5);
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar10;
  *param_1 = *param_1 + unaff_SPL;
  *pcVar8 = *pcVar8 + cVar5;
  pcVar8[-0x13fff649] = pcVar8[-0x13fff649] + cVar11;
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar10;
  *param_1 = *param_1 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

