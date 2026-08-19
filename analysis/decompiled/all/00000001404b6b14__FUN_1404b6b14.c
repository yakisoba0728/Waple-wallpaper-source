// Function: FUN_1404b6b14
// Addr: 1404b6b14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6b49) overlaps instruction at (ram,0x0001404b6b47)
    */

void FUN_1404b6b14(char *param_1,uint *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar9;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar8;
  byte bVar10;
  char unaff_BH;
  char *unaff_RDI;
  uint *puVar7;
  
  piVar6 = (int *)CONCAT71((uint7)(uint3)((uint)(in_EAX + 0x30000f64) >> 8),0x1b);
  puVar7 = param_2 + -0x14;
  uVar4 = *puVar7;
  *(byte *)puVar7 = (byte)*puVar7 + 0x1b;
  uVar4 = ((int)piVar6 - *piVar6) - (uint)(0xe4 < (byte)uVar4);
  puVar7 = (uint *)(ulonglong)uVar4;
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  if ((int)uVar4 < 0) {
    pbVar1 = (byte *)((longlong)puVar7 + -0x4a);
    bVar3 = *pbVar1;
    bVar9 = (byte)(uVar4 >> 8);
    *pbVar1 = *pbVar1 + bVar9;
    uVar2 = (uint)CARRY1(bVar3,bVar9);
    uVar5 = (uVar4 - *puVar7) - uVar2;
    if ((int)uVar5 < 0) {
      *param_1 = *param_1 +
                 (((char)uVar5 - (char)*(undefined4 *)(ulonglong)uVar5) -
                 (uVar4 < *puVar7 || uVar4 - *puVar7 < uVar2));
      pcVar8 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                                CONCAT11(bVar10 | unaff_RDI[(longlong)param_1],(char)param_2));
      *pcVar8 = *pcVar8 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar8 = (char *)CONCAT71((uint7)(uint3)(uVar5 >> 8),0x1b);
    pcVar8[0x69] = pcVar8[0x69] + unaff_BH;
  }
  else {
    *param_4 = *param_4;
    *(char *)((longlong)puVar7 * 2) = *(char *)((longlong)puVar7 * 2) + (char)uVar4;
    *(char *)((longlong)puVar7 + 5) =
         *(char *)((longlong)puVar7 + 5) + (char)((ulonglong)param_1 >> 8);
    *(char *)puVar7 = (char)*puVar7 + (char)uVar4;
    *(char *)((ulonglong)uVar4 ^ 0xe) = *(char *)((ulonglong)uVar4 ^ 0xe) + bVar10;
    piVar6 = (int *)CONCAT71((uint7)(uint3)(uVar4 >> 8),0x1b);
    puVar7 = param_2 + -0x14;
    uVar4 = *puVar7;
    *(byte *)puVar7 = (byte)*puVar7 + 0x1b;
    uVar4 = ((int)piVar6 - *piVar6) - (uint)(0xe4 < (byte)uVar4);
    if ((int)uVar4 < 0) {
      *param_2 = *param_2 & (uint)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_4 = *param_4;
    *(char *)param_2 = (char)*param_2 + (char)uVar4;
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
    *(char *)((ulonglong)uVar4 ^ 0xe) = *(char *)((ulonglong)uVar4 ^ 0xe) + bVar10;
    piVar6 = (int *)CONCAT71((uint7)(uint3)(uVar4 >> 8),0x1b);
    puVar7 = param_2 + -0x14;
    uVar4 = *puVar7;
    *(byte *)puVar7 = (byte)*puVar7 + 0x1b;
    uVar4 = ((int)piVar6 - *piVar6) - (uint)(0xe4 < (byte)uVar4);
    pcVar8 = (char *)(ulonglong)uVar4;
    if ((int)uVar4 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *param_4 = *param_4;
  *pcVar8 = *pcVar8 + (char)pcVar8;
  *pcVar8 = *pcVar8 + bVar10;
  piVar6 = (int *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),0x1b);
  puVar7 = param_2 + -0x14;
  uVar4 = *puVar7;
  *(byte *)puVar7 = (byte)*puVar7 + 0x1b;
  uVar4 = ((int)piVar6 - *piVar6) - (uint)(0xe4 < (byte)uVar4);
  if (-1 < (int)uVar4) {
    bVar10 = *param_4;
    bVar3 = (byte)uVar4;
    *param_4 = *param_4 + bVar3;
    *unaff_RDI = *unaff_RDI + bVar3 + CARRY1(bVar10,bVar3);
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)param_2;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

