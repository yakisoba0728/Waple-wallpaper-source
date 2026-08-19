// Function: FUN_1404a1270
// Addr: 1404a1270
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1270(int *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  int *piVar5;
  char cVar7;
  longlong unaff_RBX;
  char *pcVar6;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  piVar5 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0xa8);
  uVar4 = (int)piVar5 + *piVar5;
  pcVar6 = (char *)(ulonglong)uVar4;
  bVar3 = (byte)uVar4;
  pcVar6[0x21004a11] = pcVar6[0x21004a11] + bVar3;
  *pcVar6 = *pcVar6 + bVar3;
  pcVar6[-0x7fffc58] = pcVar6[-0x7fffc58] + cVar7;
  pcVar6[0x21004a11] = pcVar6[0x21004a11] + bVar3;
  *(char *)((longlong)pcVar6 * 2) = *(char *)((longlong)pcVar6 * 2) + bVar3;
  *(char *)(unaff_RBX + (longlong)param_1) =
       *(char *)(unaff_RBX + (longlong)param_1) + (char)param_2;
  *(char *)(param_2 + (longlong)param_1) = *(char *)(param_2 + (longlong)param_1) + cVar7;
  pcVar6[-0x7fffc58] = pcVar6[-0x7fffc58] + cVar7;
  pbVar1 = (byte *)(pcVar6 + 0x1004a11);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  *param_1 = *param_1 + (int)param_1 + (uint)CARRY1(bVar2,bVar3);
  *(char *)param_1 = (char)*param_1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

