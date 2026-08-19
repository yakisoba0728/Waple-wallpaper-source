// Function: FUN_1404d1110
// Addr: 1404d1110
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1110(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  char cVar6;
  char cVar7;
  undefined6 uVar8;
  char cVar9;
  char *unaff_RBP;
  byte unaff_R12B;
  
  cVar9 = (char)param_2;
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)param_1;
  uVar5 = in_EAX + 0x3600470;
  *(char *)((ulonglong)uVar5 + 0x10) = *(char *)((ulonglong)uVar5 + 0x10) + cVar9;
  pbVar1 = (byte *)(param_3 + 0x55);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_R12B;
  *unaff_RBP = *unaff_RBP + cVar6 + CARRY1(bVar3,unaff_R12B);
  bVar4 = (byte)uVar5;
  cVar7 = (char)((ulonglong)param_1 >> 8) + bVar4;
  bVar3 = *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,cVar6));
  *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,cVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(cVar7,cVar6)) + bVar4;
  pcVar2 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x2b,cVar9)) +
                   (ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar4 + 9 + CARRY1(bVar3,bVar4)) * 4);
  *pcVar2 = *pcVar2 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

