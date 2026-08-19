// Function: FUN_1404c41a4
// Addr: 1404c41a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c41a4(byte *param_1,int param_2)

{
  byte bVar1;
  int3 iVar2;
  uint uVar3;
  byte bVar4;
  undefined8 in_RAX;
  char *pcVar5;
  int *piVar6;
  char cVar7;
  char cVar8;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  
  bVar4 = bRamc200000001002edc;
  cVar8 = (char)((uint)param_2 >> 8);
  cVar7 = (char)param_2;
  iVar2 = (int3)(char)((ulonglong)in_RAX >> 8);
  uVar3 = CONCAT31(iVar2,bRamc200000001002edc);
  pcVar5 = (char *)(ulonglong)uVar3;
  *pcVar5 = *pcVar5 + bRamc200000001002edc;
  *pcVar5 = *pcVar5 + bVar4;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar4;
  *unaff_RSI = *unaff_RSI + bVar4 + CARRY1(bVar1,bVar4);
  *pcVar5 = *pcVar5 + cVar7;
  *(uint *)(pcVar5 + in_FS_OFFSET) = *(uint *)(pcVar5 + in_FS_OFFSET) | uVar3;
  pcVar5[(longlong)param_1] = pcVar5[(longlong)param_1] + cVar8;
  *pcVar5 = *pcVar5 + cVar7;
  piVar6 = (int *)((ulonglong)CONCAT31(iVar2,bVar4) | 0x70);
  *piVar6 = *piVar6 + param_2;
  pcVar5 = (char *)(ulonglong)CONCAT31(iVar2,(char)piVar6);
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + cVar8;
  *pcVar5 = *pcVar5 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

