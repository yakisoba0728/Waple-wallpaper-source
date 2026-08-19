// Function: FUN_1404c8e94
// Addr: 1404c8e94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8e94(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint *in_RAX;
  undefined7 uVar9;
  int *piVar7;
  char cVar10;
  longlong unaff_RBP;
  int *unaff_RSI;
  byte *unaff_RDI;
  char in_R11B;
  undefined8 uStack_8;
  byte *pbVar5;
  uint *puVar6;
  char *pcVar8;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = (char)in_RAX + (char)*in_RAX;
  puVar6 = (uint *)CONCAT71(uVar9,cVar3);
  *(char *)((longlong)unaff_RSI + (longlong)puVar6) =
       *(char *)((longlong)unaff_RSI + (longlong)puVar6) + cVar10;
  *(char *)(puVar6 + -0x16) = (char)puVar6[-0x16] + (char)param_2;
  uVar4 = (uint)puVar6;
  *puVar6 = *puVar6 ^ uVar4;
  if (*puVar6 != 0) {
    *puVar6 = *puVar6 ^ uVar4;
    uStack_8 = *(undefined8 *)((longlong)puVar6 + 0x31);
    (&stack0x00000043)[unaff_RBP * 8] = (&stack0x00000043)[unaff_RBP * 8] + (char)param_1;
    *param_1 = *param_1 + cVar3;
    uVar4 = uVar4 + 0xcbd2fffd;
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
    bVar2 = (char)uVar4 + 2;
    pbVar5 = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar2);
    bVar1 = *pbVar5;
    *pbVar5 = *pbVar5 + bVar2;
    *unaff_RSI = (*unaff_RSI - (int)&uStack_8) - (uint)CARRY1(bVar1,bVar2);
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar6 = *puVar6 ^ uVar4;
  *param_4 = *param_4 + cVar3;
  piVar7 = (int *)(CONCAT71(uVar9,cVar3) ^ 7);
  (&stack0x00000000)[param_2 * 2] = (&stack0x00000000)[param_2 * 2] + cVar10;
  uVar4 = ((int)piVar7 + *piVar7 | 0x74U) + 0x4640c00;
  pcVar8 = (char *)(ulonglong)uVar4;
  *pcVar8 = *pcVar8 + (char)param_1;
  *pcVar8 = *pcVar8 + (char)uVar4;
  uRam0000000174518ec4 = uRam0000000174518ec4 & uVar4;
  cVar3 = (char)uVar4 + *pcVar8;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar3);
  puVar6 = (uint *)(ulonglong)uVar4;
  *(char *)(param_2 + -0x27ffce4f) = *(char *)(param_2 + -0x27ffce4f) + '1';
  pcVar8 = (char *)(ulonglong)(uVar4 * 2 + 0x21);
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  *(char *)((longlong)puVar6 + -0x4f) = *(char *)((longlong)puVar6 + -0x4f) + cVar3;
  *puVar6 = *puVar6 ^ uVar4;
  *pcVar8 = *pcVar8 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

