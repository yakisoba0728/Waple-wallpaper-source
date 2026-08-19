// Function: FUN_1404a79a8
// Addr: 1404a79a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a7a4d) */
/* WARNING: Removing unreachable block (ram,0x0001404a7a67) */
/* WARNING: Removing unreachable block (ram,0x0001404a7a6f) */
/* WARNING: Removing unreachable block (ram,0x0001404a7a7d) */
/* WARNING: Removing unreachable block (ram,0x0001404a7a73) */
/* WARNING: Removing unreachable block (ram,0x0001404a7a77) */
/* WARNING: Removing unreachable block (ram,0x0001404a7a79) */

void FUN_1404a79a8(int *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar5;
  uint *in_RAX;
  char *pcVar3;
  char cVar6;
  char *pcVar7;
  undefined4 unaff_EBX;
  char *unaff_RDI;
  byte *pbVar4;
  
  uVar2 = (uint)in_RAX + *in_RAX;
  pcVar3 = (char *)(ulonglong)uVar2;
  unaff_RDI[10] = (byte)unaff_RDI[10] >> 1 | CARRY4((uint)in_RAX,*in_RAX) << 7;
  pcVar7 = (char *)((longlong)param_2 + -0x53fff59f);
  *pcVar7 = *pcVar7 + (char)unaff_EBX;
  bVar1 = (byte)(uVar2 >> 8);
  if (-1 < *pcVar7) {
    *(byte *)param_1 = (char)*param_1 + bVar1;
    *pcVar3 = *pcVar3 + (byte)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)param_1 = (char)*param_1 + bVar1;
  bVar1 = (byte)uVar2 | *(byte *)((longlong)pcVar3 * 2) | bVar1;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1) | 0xf540500;
  pbVar4 = (byte *)(ulonglong)uVar2;
  cVar6 = (char)param_1;
  cRam00000001924a847e = cRam00000001924a847e + cVar6;
  *pbVar4 = *pbVar4 + (char)param_2;
  cVar5 = (char)(uVar2 >> 8);
  if (-1 < (char)*pbVar4) {
    if ((POPCOUNT(*pbVar4) & 1U) != 0) {
      if ((POPCOUNT((char)((uint)unaff_EBX >> 8) + cVar6) & 1U) == 0) goto code_r0x0001404a7ac1;
      pbVar4[0x1004a79] = pbVar4[0x1004a79] + (char)((ulonglong)param_1 >> 8);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)param_1 = (char)*param_1 + cVar5;
  *pbVar4 = *pbVar4 + bVar1;
  cRam00000001924a848e = cRam00000001924a848e + cVar6;
  *pbVar4 = *pbVar4 + (char)param_2;
  if ((char)*pbVar4 < '\0') {
    *(char *)param_1 = (char)*param_1 + cVar5;
    *pbVar4 = *pbVar4 + bVar1;
    *pbVar4 = *pbVar4 + bVar1;
    pcVar7 = (char *)(ulonglong)(uint)(*param_2 * 0xa690d00);
    *pbVar4 = *pbVar4;
    if ((char)*pbVar4 < '\0') {
      *pcVar7 = *pcVar7 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar4 = *pbVar4 ^ bVar1;
    *pcVar7 = *pcVar7 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x0001404a7ac1:
  *param_1 = *param_1 + (int)param_2;
  *unaff_RDI = *unaff_RDI + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

