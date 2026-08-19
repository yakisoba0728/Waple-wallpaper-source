// Function: FUN_1404b6d10
// Addr: 1404b6d10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte *pbVar10;
  undefined1 uVar12;
  char cVar13;
  undefined6 uVar14;
  byte bVar15;
  undefined7 uVar16;
  longlong unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  uint *puVar11;
  
  uVar16 = (undefined7)((ulonglong)param_2 >> 8);
  bVar15 = (byte)param_2;
  uVar14 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar13 = (char)((ulonglong)param_1 >> 8);
  uVar12 = (undefined1)param_1;
  uVar8 = func_0x0001ac6f6d35();
  *param_4 = *param_4 + -8;
  lVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),(char)uVar8 + -2);
  pcVar1 = (char *)(lVar9 + CONCAT44(unaff_0000002c,unaff_EBP) * 2);
  *pcVar1 = *pcVar1 + cVar13;
  uVar5 = (int)lVar9 + 0x1be82900;
  pbVar10 = (byte *)(unaff_RBX + -0x18);
  bVar2 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar15;
  pbVar10 = (byte *)((ulonglong)((uVar5 - *(int *)(ulonglong)uVar5) - (uint)CARRY1(bVar2,bVar15)) &
                    0xffffffffffffff6c);
  *param_4 = *param_4 + -8;
  bVar4 = (byte)pbVar10;
  *(byte *)CONCAT71(uVar16,bVar15) = *(char *)CONCAT71(uVar16,bVar15) + bVar4;
  bVar2 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar4;
  uVar5 = ((int)pbVar10 - *(int *)pbVar10) - (uint)CARRY1(bVar2,bVar4);
  uVar6 = uVar5 - unaff_EBP;
  uVar5 = (uint)(uVar5 < unaff_EBP);
  uVar3 = uVar6 - *(uint *)(ulonglong)uVar6;
  uVar7 = uVar3 - uVar5;
  puVar11 = (uint *)(ulonglong)uVar7;
  pcVar1 = (char *)(unaff_RBX + CONCAT62(uVar14,CONCAT11(cVar13,uVar12)) * 2);
  *pcVar1 = *pcVar1 + cVar13 + (uVar6 < *(uint *)(ulonglong)uVar6 || uVar3 < uVar5);
  *puVar11 = *puVar11 & uVar7;
  *(char *)puVar11 = (char)*puVar11 + (char)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

