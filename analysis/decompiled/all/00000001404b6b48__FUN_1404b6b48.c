// Function: FUN_1404b6b48
// Addr: 1404b6b48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6b48(undefined8 param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  char *pcVar5;
  int *piVar6;
  char unaff_BH;
  char *unaff_RDI;
  undefined7 uVar7;
  
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar5 = (char *)CONCAT71(uVar7,0x1b);
  pcVar5[0x69] = pcVar5[0x69] + unaff_BH;
  *param_4 = *param_4;
  *pcVar5 = *pcVar5 + '\x1b';
  *pcVar5 = *pcVar5 + (char)((ulonglong)param_2 >> 8);
  piVar6 = (int *)CONCAT71(uVar7,0x1b);
  pbVar1 = (byte *)(param_2 + -0x50);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + 0x1b;
  uVar4 = ((int)piVar6 - *piVar6) - (uint)(0xe4 < bVar2);
  if (-1 < (int)uVar4) {
    bVar2 = *param_4;
    bVar3 = (byte)uVar4;
    *param_4 = *param_4 + bVar3;
    *unaff_RDI = *unaff_RDI + bVar3 + CARRY1(bVar2,bVar3);
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)param_2;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

