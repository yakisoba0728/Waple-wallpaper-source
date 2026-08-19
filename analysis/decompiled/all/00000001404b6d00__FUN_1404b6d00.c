// Function: FUN_1404b6d00
// Addr: 1404b6d00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6d00(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte *pbVar10;
  undefined1 uVar12;
  char cVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  byte bVar16;
  undefined7 uVar17;
  longlong unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  uint *puVar11;
  
  uVar17 = (undefined7)((ulonglong)param_2 >> 8);
  bVar16 = (byte)param_2;
  uVar15 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar14 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar13 = (char)((ulonglong)param_1 >> 8);
  uVar12 = (undefined1)param_1;
  uVar4 = in_EAX - unaff_EBP;
  uVar6 = uVar4 - *(uint *)(ulonglong)uVar4;
  uVar5 = uVar6 - (in_EAX < unaff_EBP);
  pcVar1 = (char *)(unaff_RBX + param_1 * 2);
  *pcVar1 = *pcVar1 + cVar13 + (uVar4 < *(uint *)(ulonglong)uVar4 || uVar6 < (in_EAX < unaff_EBP));
  *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 & (uint)param_1;
  *(byte *)(param_1 + param_2) = *(byte *)(param_1 + param_2) | (byte)(uVar5 >> 8);
  uVar8 = func_0x0001ac6f6d35();
  *param_4 = *param_4 + -8;
  lVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),(char)uVar8 + -2);
  pcVar1 = (char *)(lVar9 + CONCAT44(unaff_0000002c,unaff_EBP) * 2);
  *pcVar1 = *pcVar1 + cVar13;
  uVar6 = (int)lVar9 + 0x1be82900;
  pbVar10 = (byte *)(unaff_RBX + -0x18);
  bVar2 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar16;
  pbVar10 = (byte *)((ulonglong)((uVar6 - *(int *)(ulonglong)uVar6) - (uint)CARRY1(bVar2,bVar16)) &
                    0xffffffffffffff6c);
  *param_4 = *param_4 + -8;
  bVar3 = (byte)pbVar10;
  *(byte *)CONCAT71(uVar17,bVar16) = *(char *)CONCAT71(uVar17,bVar16) + bVar3;
  bVar2 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar3;
  uVar6 = ((int)pbVar10 - *(int *)pbVar10) - (uint)CARRY1(bVar2,bVar3);
  uVar5 = uVar6 - unaff_EBP;
  uVar6 = (uint)(uVar6 < unaff_EBP);
  uVar4 = uVar5 - *(uint *)(ulonglong)uVar5;
  uVar7 = uVar4 - uVar6;
  puVar11 = (uint *)(ulonglong)uVar7;
  pcVar1 = (char *)(unaff_RBX + CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,uVar12))) * 2);
  *pcVar1 = *pcVar1 + cVar13 + (uVar5 < *(uint *)(ulonglong)uVar5 || uVar4 < uVar6);
  *puVar11 = *puVar11 & uVar7;
  *(char *)puVar11 = (char)*puVar11 + (char)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

