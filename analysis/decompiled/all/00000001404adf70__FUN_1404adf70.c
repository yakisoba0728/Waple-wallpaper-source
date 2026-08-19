// Function: FUN_1404adf70
// Addr: 1404adf70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adf70(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  byte bVar5;
  byte bVar6;
  uint in_EAX;
  undefined4 uVar8;
  char unaff_SPL;
  char in_CF;
  char *pcVar7;
  
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar4 = (undefined3)(in_EAX >> 8);
  bVar5 = (char)in_EAX + *(char *)(ulonglong)in_EAX + in_CF;
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar4,bVar5);
  LOCK();
  uVar2 = *(undefined4 *)(param_1 + -0x2183ffee);
  *(int *)(param_1 + -0x2183ffee) = (int)param_2;
  UNLOCK();
  *param_1 = *param_1 + unaff_SPL;
  *pcVar7 = *pcVar7 + bVar5;
  pbVar1 = (byte *)(pcVar7 + -0x70);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  bVar6 = bVar5 + *pcVar7 + CARRY1(bVar6,bVar5);
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar4,bVar6);
  LOCK();
  uVar3 = *(undefined4 *)(param_1 + -0x2183ffee);
  *(undefined4 *)(param_1 + -0x2183ffee) = uVar2;
  UNLOCK();
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)CONCAT44(uVar8,uVar3) = *(byte *)CONCAT44(uVar8,uVar3) | bVar6;
  *pcVar7 = *pcVar7 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

