// Function: FUN_1404ae87c
// Addr: 1404ae87c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ae8fe) */
/* WARNING: Removing unreachable block (ram,0x0001404ae8ea) */
/* WARNING: Removing unreachable block (ram,0x0001404ae8ee) */
/* WARNING: Removing unreachable block (ram,0x0001404ae8db) */

void FUN_1404ae87c(undefined8 param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  byte bVar2;
  uint in_EAX;
  uint uVar3;
  int *piVar5;
  char cVar6;
  longlong in_FS_OFFSET;
  byte *pbVar4;
  
  *param_4 = *param_4;
  uVar3 = (in_EAX ^ 0xe6) + 0x64050002;
  pbVar4 = (byte *)(ulonglong)uVar3;
  *pbVar4 = *pbVar4 | (byte)uVar3;
  uVar3 = uVar3 + *(int *)pbVar4;
  piVar5 = (int *)(ulonglong)uVar3;
  cVar6 = (char)((ulonglong)param_1 >> 8);
  *(char *)((longlong)piVar5 + 0x210049ed) = *(char *)((longlong)piVar5 + 0x210049ed) + cVar6;
  bVar2 = (byte)uVar3;
  *param_2 = *param_2 + bVar2;
  *(byte *)piVar5 = (char)*piVar5 + bVar2;
  *(byte *)(in_FS_OFFSET + (longlong)piVar5) = *(byte *)(in_FS_OFFSET + (longlong)piVar5) | bVar2;
  pcVar1 = (char *)((ulonglong)(uVar3 + *piVar5) + 0x210049ed);
  *pcVar1 = *pcVar1 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

