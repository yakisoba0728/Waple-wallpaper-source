// Function: FUN_1404a8ca8
// Addr: 1404a8ca8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8ca8(longlong param_1,uint *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  int *piVar5;
  byte bVar6;
  char *unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  char in_CF;
  
  bVar6 = (byte)param_2;
  piVar5 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '\x04' + in_CF);
  pbVar2 = (byte *)(param_1 + (longlong)piVar5);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar6;
  uVar4 = (int)piVar5 + *piVar5 + (uint)CARRY1(bVar3,bVar6) | 0x21700bf0;
  *(byte *)param_2 = (byte)*param_2 | (byte)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)param_1;
  *unaff_RBX = *unaff_RBX + -1;
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x23fff401);
  *pcVar1 = *pcVar1 + bVar6;
  uVar4 = *param_2;
  param_2 = (uint *)((longlong)param_2 + (ulonglong)uVar4);
  *param_2 = *param_2 & unaff_EBP;
  cRam0000000001004a8a = cRam0000000001004a8a + (char)(uVar4 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

