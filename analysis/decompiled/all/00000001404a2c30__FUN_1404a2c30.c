// Function: FUN_1404a2c30
// Addr: 1404a2c30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2c30(int *param_1,int *param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *in_RAX;
  uint *puVar7;
  char cVar8;
  char cVar9;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  bool in_OF;
  char *pcVar6;
  
  cVar9 = (char)((ulonglong)param_1 >> 8);
  cVar8 = (char)param_1;
  iVar4 = (int)in_RAX;
  uVar2 = SUB82(param_2,0);
  if (!in_OF) {
    uVar5 = iVar4 + 0x56b9100;
    pcVar6 = (char *)(ulonglong)uVar5;
    pcVar1 = (char *)(unaff_RBX + 0x4a + unaff_RBP);
    *pcVar1 = *pcVar1 + cVar8;
    *(char *)param_1 = (char)*param_1 + (char)(uVar5 >> 8);
    *pcVar6 = *pcVar6 + (char)uVar5;
    pcVar6[0x6b] = pcVar6[0x6b] + (char)((ulonglong)param_2 >> 8);
    pcVar1 = (char *)(unaff_RBX + 0x4a + unaff_RBP);
    *pcVar1 = *pcVar1 + cVar8;
    *(char *)param_1 = (char)*param_1 + (char)(iVar4 + 0xad72200);
    *(char *)param_2 = (char)*param_2 + cVar8;
    *param_1 = *param_1 + (int)param_2;
    *(char *)param_1 = (char)*param_1 + (char)((uint)(iVar4 + 0xad72200) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (char)((ulonglong)in_RAX >> 8);
  out(*unaff_RSI,uVar2);
  pcVar1 = (char *)((ulonglong)(iVar4 + 0x56e3f00) + 0x21004a2b);
  *pcVar1 = *pcVar1 + cVar9;
  uVar5 = iVar4 + 0x39733f02;
  iVar4 = CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 | *(byte *)(ulonglong)uVar5);
  out(*(undefined4 *)(unaff_RSI + 1),uVar2);
  uVar5 = iVar4 + 0x56f6500;
  puVar7 = (uint *)(ulonglong)uVar5;
  *(char *)puVar7 = (char)*puVar7 + (char)(uVar5 >> 8);
  iVar3 = *param_2;
  *puVar7 = *puVar7 & uVar5;
  *(char *)puVar7 = (char)*puVar7 + (char)uVar5;
  out(*(undefined4 *)(unaff_RSI + 5),uVar2);
  uVar5 = iVar4 + 0xadeca00;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)(uVar5 >> 8);
  *param_2 = *param_2 +
             CONCAT22((short)((ulonglong)param_1 >> 0x10),
                      CONCAT11(cVar9,cVar8 + (char)iVar3 + (char)*param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

