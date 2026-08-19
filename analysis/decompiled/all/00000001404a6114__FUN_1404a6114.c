// Function: FUN_1404a6114
// Addr: 1404a6114
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a6125) overlaps instruction at (ram,0x0001404a6121)
    */

void FUN_1404a6114(int *param_1,byte *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  uint in_EAX;
  int iVar5;
  char *pcVar8;
  char cVar9;
  undefined8 unaff_RDI;
  byte *pbVar6;
  uint *puVar7;
  
  cVar9 = '\0';
  cVar3 = in(0x17);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),cVar3);
  pbVar6 = (byte *)(uVar2 & 0xffffffff);
  pcVar8 = (char *)((ulonglong)in_EAX + 0x17001574);
  bVar4 = (byte)param_1;
  *pcVar8 = *pcVar8 + bVar4;
  if (*pcVar8 < '\0') {
    *param_1 = *param_1 + (int)param_2;
    cRam00000001617a657d = cRam00000001617a657d + cVar3;
  }
  else {
    bVar1 = *pbVar6;
    *pbVar6 = *pbVar6 + (byte)param_2;
    cVar9 = -8;
    iVar5 = (int)uVar2;
    *(uint *)pbVar6 = *(int *)pbVar6 + iVar5 + (uint)CARRY1(bVar1,(byte)param_2);
    pbVar6 = (byte *)(ulonglong)(iVar5 + 0x21300450);
  }
  *param_2 = *param_2 | (byte)pbVar6;
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  bVar4 = (byte)pbVar6 + CARRY1(bVar1,bVar4);
  puVar7 = (uint *)CONCAT71((int7)((ulonglong)pbVar6 >> 8),bVar4);
  pcVar8 = (char *)((longlong)param_1 + -1);
  if (pcVar8 == (char *)0x0 || bVar4 == 0) {
    *puVar7 = *puVar7 | (uint)puVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar7 = *puVar7 | (uint)puVar7;
  *pcVar8 = *pcVar8 + cVar9;
  *param_2 = *param_2 | bVar4;
  *(char *)puVar7 = (char)*puVar7 + (char)pcVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

