// Function: FUN_1404b6b70
// Addr: 1404b6b70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6b70(char *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint3 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *in_RAX;
  uint *puVar8;
  char cVar9;
  byte bVar10;
  byte unaff_BH;
  char *unaff_RDI;
  
  cVar9 = (char)param_2 + *in_RAX;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar5 = (int)in_RAX + 0x83bb6002;
  pbVar1 = (byte *)(param_1 + -0x49);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  uVar5 = (uVar5 - *(int *)(ulonglong)uVar5) - (uint)CARRY1(bVar2,unaff_BH);
  puVar8 = (uint *)(ulonglong)uVar5;
  bVar4 = (byte)(uVar5 >> 8);
  *param_1 = *param_1 + bVar4;
  *(char *)puVar8 = (char)*puVar8 + (char)uVar5;
  pbVar1 = (byte *)((longlong)puVar8 + -0x4a);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  uVar6 = (uVar5 - *puVar8) - (uint)CARRY1(bVar2,bVar4);
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  if ((int)uVar6 < 0) {
    *param_1 = *param_1 +
               (((char)uVar6 - (char)*(undefined4 *)(ulonglong)uVar6) -
               (uVar5 < *puVar8 || uVar5 - *puVar8 < (uint)CARRY1(bVar2,bVar4)));
    pcVar7 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                              CONCAT11(bVar10 | unaff_RDI[(longlong)param_1],cVar9));
    *pcVar7 = *pcVar7 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (uint3)(uVar6 >> 8);
  pcVar7 = (char *)CONCAT71((uint7)uVar3,0x1b);
  pcVar7[0x69] = pcVar7[0x69] + unaff_BH;
  *param_4 = *param_4 - 8;
  *pcVar7 = *pcVar7 + '\x1b';
  *pcVar7 = *pcVar7 + bVar10;
  uVar5 = CONCAT31(uVar3,0x1b);
  pbVar1 = (byte *)(CONCAT71((int7)((ulonglong)param_2 >> 8),cVar9) + -0x50);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + 0x1b;
  uVar5 = (uVar5 - *(int *)(ulonglong)uVar5) - (uint)(0xe4 < bVar2);
  if (-1 < (int)uVar5) {
    bVar2 = *param_4;
    bVar4 = (byte)uVar5;
    *param_4 = *param_4 + bVar4;
    *unaff_RDI = *unaff_RDI + bVar4 + CARRY1(bVar2,bVar4);
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar9;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

