// Function: FUN_1404acf64
// Addr: 1404acf64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acf64(char *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 in_RAX;
  undefined7 uVar10;
  char *pcVar8;
  char unaff_BL;
  char unaff_BH;
  uint *puVar7;
  byte *pbVar9;
  
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = (char)in_RAX + bVar5 + unaff_BL + (char)param_1;
  puVar7 = (uint *)CONCAT71(uVar10,bVar4);
  *(byte *)((longlong)puVar7 + -0x57ffffc5) = *(byte *)((longlong)puVar7 + -0x57ffffc5) + unaff_BH;
  *(byte *)((longlong)puVar7 + -0x77ffffc3) = *(byte *)((longlong)puVar7 + -0x77ffffc3) + unaff_BL;
  *(byte *)puVar7 = (byte)*puVar7 + bVar4;
  uVar6 = (uint)puVar7;
  if (-1 < (char)(byte)*puVar7) {
    uVar3 = *puVar7;
    *(byte *)puVar7 = (byte)*puVar7 + bVar4;
    uVar2 = (uint)CARRY1((byte)uVar3,bVar4);
    uVar3 = *puVar7;
    uVar1 = *puVar7;
    *puVar7 = uVar1 + uVar6 + uVar2;
    uVar1 = (uint)(CARRY4(uVar3,uVar6) || CARRY4(uVar1 + uVar6,uVar2));
    uVar3 = *param_2;
    uVar2 = *param_2 + (uint)param_1;
    *param_2 = uVar2 + uVar1;
    *puVar7 = *puVar7 + uVar6 + (uint)(CARRY4(uVar3,(uint)param_1) || CARRY4(uVar2,uVar1));
    pcVar8 = (char *)CONCAT71(uVar10,bVar4 + 0x32);
    *param_1 = *param_1 + -8;
    *pcVar8 = *pcVar8 + bVar4 + 0x32;
    *pcVar8 = *pcVar8 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = uVar6 ^ *puVar7;
  pbVar9 = (byte *)(ulonglong)uVar6;
  pbVar9[0x34] = pbVar9[0x34] | bVar5;
  bVar5 = (byte)uVar6;
  pbVar9[0x6400113c] = pbVar9[0x6400113c] + bVar5;
  *param_1 = *param_1;
  *(char *)((longlong)pbVar9 * 2) = *(char *)((longlong)pbVar9 * 2) + bVar5;
  pbVar9[0x33] = pbVar9[0x33] + unaff_BH;
  bVar4 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar5;
  *(uint *)pbVar9 = *(int *)pbVar9 + uVar6 + (uint)CARRY1(bVar4,bVar5);
  *param_1 = *param_1 + -8;
  *pbVar9 = *pbVar9 + bVar5;
  pbVar9[0x6400113c] = pbVar9[0x6400113c] + bVar5;
  *param_1 = *param_1 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

