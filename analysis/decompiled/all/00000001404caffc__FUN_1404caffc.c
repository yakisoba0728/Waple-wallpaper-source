// Function: FUN_1404caffc
// Addr: 1404caffc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404caffc(char *param_1,undefined8 param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar7;
  int in_EAX;
  uint uVar3;
  int *piVar5;
  char *pcVar6;
  byte bVar8;
  char cVar9;
  undefined6 uVar10;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char unaff_R12B;
  char *pcVar4;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar8 = (byte)param_2;
  uVar3 = in_EAX + 0x3600470;
  cVar7 = *(char *)(ulonglong)uVar3;
  uVar1 = (undefined3)(uVar3 >> 8);
  bVar2 = (byte)uVar3 & bVar8;
  pcVar4 = (char *)(ulonglong)CONCAT31(uVar1,bVar2);
  *pcVar4 = *pcVar4 + unaff_BH;
  *pcVar4 = *pcVar4 + bVar2;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (uint)param_1;
  LOCK();
  uRam000000011459b01e = uRam000000011459b01e & (uint)param_1;
  UNLOCK();
  uVar3 = CONCAT31(uVar1,bVar2 + *pcVar4 + *(char *)(ulonglong)CONCAT31(uVar1,bVar2 + *pcVar4)) +
          0xd0000654;
  *param_1 = *param_1 + unaff_R12B;
  piVar5 = (int *)((ulonglong)uVar3 ^ 10);
  *piVar5 = *piVar5 + (int)piVar5;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(byte)piVar5 & (byte)(uVar3 >> 8));
  uVar3 = uVar3 + *(int *)(ulonglong)uVar3 | 0x5000564;
  cVar9 = (char)((ulonglong)param_2 >> 8) + cVar7 + unaff_BL * '\x02';
  uVar1 = (undefined3)(uVar3 >> 8);
  bVar2 = (byte)uVar3 ^ 7 | *(byte *)(unaff_RBP + 0x33);
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar1,bVar2);
  pcVar4 = (char *)(unaff_RDI + 0x4c + unaff_RBP * 4);
  *pcVar4 = *pcVar4 + bVar2;
  cVar7 = (char)(uVar3 >> 8);
  *param_1 = *param_1 + cVar7;
  *pcVar6 = *pcVar6 + bVar2;
  bVar2 = bVar2 | *(byte *)(unaff_RBP + 0x33);
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar1,bVar2);
  pcVar4 = (char *)(unaff_RDI + 0x4c + unaff_RBP * 4);
  *pcVar4 = *pcVar4 + bVar2;
  *param_1 = *param_1 + cVar7;
  *pcVar6 = *pcVar6 + bVar2;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(uVar10,CONCAT11(cVar9,bVar8)) =
       *(char *)CONCAT62(uVar10,CONCAT11(cVar9,bVar8)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

