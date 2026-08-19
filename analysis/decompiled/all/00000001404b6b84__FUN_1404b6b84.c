// Function: FUN_1404b6b84
// Addr: 1404b6b84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6b84(char *param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint3 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint *in_RAX;
  byte bVar8;
  char unaff_BH;
  char *unaff_RDI;
  
  bVar4 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar4;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pbVar1 = (byte *)((longlong)in_RAX + -0x4a);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  uVar5 = (uint)in_RAX - *in_RAX;
  uVar6 = uVar5 - CARRY1(bVar2,bVar4);
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  if ((int)uVar6 < 0) {
    *param_1 = *param_1 +
               (((char)uVar6 - (char)*(undefined4 *)(ulonglong)uVar6) -
               ((uint)in_RAX < *in_RAX || uVar5 < CARRY1(bVar2,bVar4)));
    pcVar7 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                              CONCAT11(bVar8 | unaff_RDI[(longlong)param_1],(char)param_2));
    *pcVar7 = *pcVar7 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (uint3)(uVar6 >> 8);
  pcVar7 = (char *)CONCAT71((uint7)uVar3,0x1b);
  pcVar7[0x69] = pcVar7[0x69] + unaff_BH;
  *param_4 = *param_4 - 8;
  *pcVar7 = *pcVar7 + '\x1b';
  *pcVar7 = *pcVar7 + bVar8;
  uVar5 = CONCAT31(uVar3,0x1b);
  pbVar1 = (byte *)(param_2 + -0x50);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + 0x1b;
  uVar5 = (uVar5 - *(int *)(ulonglong)uVar5) - (uint)(0xe4 < bVar2);
  if (-1 < (int)uVar5) {
    bVar2 = *param_4;
    bVar4 = (byte)uVar5;
    *param_4 = *param_4 + bVar4;
    *unaff_RDI = *unaff_RDI + bVar4 + CARRY1(bVar2,bVar4);
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)param_2;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

