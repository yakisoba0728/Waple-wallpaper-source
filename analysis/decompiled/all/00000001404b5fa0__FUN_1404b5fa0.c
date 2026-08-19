// Function: FUN_1404b5fa0
// Addr: 1404b5fa0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5fa0(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  char cVar7;
  char unaff_SPL;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  uVar4 = *(uint *)(unaff_RBP + 0x1b);
  pcVar5 = (char *)(ulonglong)uVar4;
  *unaff_RSI = *unaff_RSI + cVar7;
  *param_4 = *param_4 + unaff_SPL;
  cVar2 = (char)uVar4;
  *pcVar5 = *pcVar5 + cVar2;
  pcVar5[0x45] = pcVar5[0x45] + cVar2;
  iVar1 = *(int *)(unaff_RBP + 0x1b);
  *unaff_RSI = *unaff_RSI + cVar7;
  *param_4 = *param_4 + unaff_SPL;
  uVar4 = iVar1 + 0x74050002;
  pbVar6 = (byte *)(ulonglong)uVar4;
  bVar3 = (byte)uVar4;
  *pbVar6 = *pbVar6 | bVar3;
  *(undefined1 *)(unaff_RBP + 0x1b) = *(undefined1 *)(unaff_RBP + 0x1b);
  pcVar5 = (char *)(unaff_RDI + 0x4a + (longlong)param_2 * 4);
  *pcVar5 = *pcVar5 + (char)param_1;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *param_2 = *param_2 + bVar3;
  *pbVar6 = *pbVar6 + bVar3;
  if (*pbVar6 != 0) {
    pbVar6 = (byte *)((ulonglong)(uint3)(uVar4 >> 8) << 8);
  }
  pcVar5 = (char *)(unaff_RDI + 0x4a + (longlong)param_2 * 4);
  *pcVar5 = *pcVar5 + (char)param_1;
  *param_1 = *param_1 + (char)((ulonglong)pbVar6 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

