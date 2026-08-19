// Function: FUN_1404a818c
// Addr: 1404a818c
// Size: 1 bytes


void FUN_1404a818c(longlong param_1,undefined8 param_2,byte *param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  int *piVar4;
  char cVar6;
  char unaff_SPL;
  longlong unaff_RDI;
  byte *pbVar5;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  piVar4 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)in_RAX,(char)in_RAX));
  uVar3 = (int)piVar4 + *piVar4;
  pbVar5 = (byte *)(ulonglong)uVar3;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)(uVar3 >> 8);
  pbVar5[param_1] = pbVar5[param_1] + (char)param_2;
  pbVar5[unaff_RDI] = pbVar5[unaff_RDI] + cVar6;
  *pbVar5 = *pbVar5 + cVar6;
  bVar2 = (byte)uVar3 | *pbVar5;
  bVar1 = *(byte *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2);
  *param_4 = *param_4 + unaff_SPL;
  *param_3 = *param_3 | bVar2 | bVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

