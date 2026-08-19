// Function: FUN_1404d0314
// Addr: 1404d0314
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0314(uint *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_RAX;
  undefined7 uVar8;
  longlong unaff_RBX;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  byte *pbVar6;
  uint *puVar7;
  
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (*(byte *)CONCAT71(uVar8,0x66) < 0x66) + 0x68;
  pbVar6 = (byte *)CONCAT71(uVar8,bVar3);
  *param_4 = *param_4 + unaff_R12B;
  *(char *)((longlong)pbVar6 * 2) = *(char *)((longlong)pbVar6 * 2) + bVar3;
  param_2[unaff_RBX] = param_2[unaff_RBX] + (char)((ulonglong)in_RAX >> 8);
  pcVar1 = (char *)((longlong)param_1 + unaff_RBX);
  cVar4 = *pcVar1;
  *pcVar1 = *pcVar1 + (char)param_2;
  if (SCARRY1(cVar4,(char)param_2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam21004d0200003866 = (uint)pbVar6;
  *param_2 = *param_2 + bVar3;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar3;
  cVar4 = bVar3 - pbVar6[in_FS_OFFSET];
  uVar5 = (uint)CONCAT71(uVar8,cVar4 - CARRY1(bVar2,bVar3));
  if (SBORROW1(bVar3,pbVar6[in_FS_OFFSET]) == SBORROW1(cVar4,CARRY1(bVar2,bVar3))) {
    uRam21004d0200003866 = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = uVar5 | *param_1;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 - (char)uVar5;
  cVar4 = (char)uVar5 + '0';
  puVar7 = (uint *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar4);
  *(char *)puVar7 = (char)*puVar7 + cVar4;
  *puVar7 = *puVar7 & (uint)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

