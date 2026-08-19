// Function: FUN_1404cb014
// Addr: 1404cb014
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb014(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  char cVar7;
  char *in_RAX;
  int *piVar5;
  char cVar8;
  undefined6 uVar9;
  char unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char unaff_R12B;
  char *pcVar6;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  uRam000000011459b01e = uRam000000011459b01e & (uint)param_1;
  uVar4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX) + 0xd0000654;
  *param_1 = *param_1 + unaff_R12B;
  piVar5 = (int *)((ulonglong)uVar4 ^ 10);
  *piVar5 = *piVar5 + (int)piVar5;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(byte)piVar5 & (byte)(uVar4 >> 8));
  uVar4 = uVar4 + *(int *)(ulonglong)uVar4 | 0x5000564;
  cVar8 = (char)((ulonglong)param_2 >> 8) + unaff_BL * '\x02';
  uVar2 = (undefined3)(uVar4 >> 8);
  bVar3 = (byte)uVar4 ^ 7 | *(byte *)(unaff_RBP + 0x33);
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar2,bVar3);
  pcVar1 = (char *)(unaff_RDI + 0x4c + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + bVar3;
  cVar7 = (char)(uVar4 >> 8);
  *param_1 = *param_1 + cVar7;
  *pcVar6 = *pcVar6 + bVar3;
  bVar3 = bVar3 | *(byte *)(unaff_RBP + 0x33);
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar2,bVar3);
  pcVar1 = (char *)(unaff_RDI + 0x4c + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + bVar3;
  *param_1 = *param_1 + cVar7;
  *pcVar6 = *pcVar6 + bVar3;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(uVar9,CONCAT11(cVar8,(char)param_2)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,(char)param_2)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

