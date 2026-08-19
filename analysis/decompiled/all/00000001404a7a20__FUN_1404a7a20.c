// Function: FUN_1404a7a20
// Addr: 1404a7a20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a7a77) */

void FUN_1404a7a20(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar4;
  uint in_EAX;
  uint uVar2;
  char *pcVar5;
  char *unaff_RDI;
  byte *pbVar3;
  
  uVar2 = in_EAX | 0x52000a69;
  pbVar3 = (byte *)(ulonglong)uVar2;
  *pbVar3 = *pbVar3 + (char)param_2;
  bVar1 = (byte)uVar2;
  if (-1 < (char)*pbVar3) {
    *param_1 = *param_1 + (int)param_2;
    *unaff_RDI = *unaff_RDI + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar4 = (char)(uVar2 >> 8);
  *(char *)param_1 = (char)*param_1 + cVar4;
  *pbVar3 = *pbVar3 + bVar1;
  *pbVar3 = *pbVar3 + bVar1;
  pcVar5 = (char *)(ulonglong)(uint)(*param_2 * 0xa690d00);
  *pbVar3 = *pbVar3;
  if (-1 < (char)*pbVar3) {
    *pbVar3 = *pbVar3 ^ bVar1;
    *pcVar5 = *pcVar5 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar5 = *pcVar5 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

