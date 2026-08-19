// Function: FUN_1404b70a0
// Addr: 1404b70a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b70a0(char *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  byte *in_RAX;
  undefined1 uVar7;
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char *pcVar6;
  
  uVar7 = (undefined1)((ulonglong)param_1 >> 8);
  cVar4 = (char)((ulonglong)in_RAX >> 8);
  *(char *)(unaff_RBP + param_2) = *(char *)(unaff_RBP + param_2) + cVar4;
  *(undefined1 *)(unaff_RDI + 0x4b) = uVar7;
  *param_1 = *param_1 + cVar4;
  bVar3 = (byte)in_RAX;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + bVar3;
  in_RAX[6] = in_RAX[6] + unaff_BH;
  bVar2 = *in_RAX;
  *in_RAX = *in_RAX + bVar3;
  iVar5 = (int)in_RAX + 0x1c2a4000 + (uint)CARRY1(bVar2,bVar3);
  pbVar1 = (byte *)(unaff_RBP + 0x2a);
  bVar2 = *pbVar1;
  bVar3 = (byte)((uint)iVar5 >> 8);
  *pbVar1 = *pbVar1 + bVar3;
  cVar4 = (char)iVar5 - CARRY1(bVar2,bVar3);
  pcVar6 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar5 >> 8),cVar4);
  *(undefined1 *)(unaff_RDI + 0x4b) = uVar7;
  *param_1 = *param_1 + bVar3;
  *pcVar6 = *pcVar6 + cVar4;
  pcVar6[0x2a] = pcVar6[0x2a] + cVar4;
  *(undefined1 *)(unaff_RDI + 0x4b) = uVar7;
  *param_1 = *param_1 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

