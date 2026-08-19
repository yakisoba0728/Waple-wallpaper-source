// Function: FUN_1404a6b00
// Addr: 1404a6b00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6b00(byte *param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  uint3 uVar3;
  undefined2 uVar4;
  byte bVar5;
  char cVar6;
  byte bVar11;
  uint in_EAX;
  uint uVar7;
  uint uVar8;
  uint *puVar10;
  char cVar13;
  char *pcVar12;
  char cVar15;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  byte in_CF;
  char *pcVar9;
  undefined6 uVar14;
  
  cVar15 = (char)((ulonglong)param_2 >> 8);
  bVar5 = *param_1;
  bVar11 = *param_1 - (byte)in_EAX;
  *param_1 = bVar11 - in_CF;
  uVar8 = (uint)(bVar5 < (byte)in_EAX || bVar11 < in_CF);
  uVar7 = (in_EAX + 0xf40ff300) - uVar8;
  param_1 = param_1 + -1;
  if (param_1 == (byte *)0x0 || uVar7 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = (uVar7 - *(int *)(ulonglong)uVar7) -
          (uint)(in_EAX < 0xbf00d00 || in_EAX + 0xf40ff300 < uVar8) | 0x4001c74;
  pcVar1 = (char *)(((ulonglong)uVar8 ^ 0x23) - 0x13fff649);
  *pcVar1 = *pcVar1 + cVar15;
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  cVar13 = (char)((ulonglong)param_1 >> 8);
  *pcVar1 = *pcVar1 + cVar13;
  *param_1 = *param_1 + unaff_SPL;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + param_2 * 8);
  *pcVar1 = *pcVar1 + (char)((ulonglong)uVar8 ^ 0x23) + '\x02';
  bVar5 = in((short)param_2);
  pcVar9 = (char *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar5);
  uVar14 = (undefined6)((ulonglong)param_1 >> 0x10);
  pcVar12 = (char *)CONCAT62(uVar14,CONCAT11(cVar13 + '\t',(char)param_1));
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + '\t';
  *pcVar12 = *pcVar12 + unaff_SPL;
  *pcVar9 = *pcVar9 + bVar5;
  uVar4 = (undefined2)(uVar8 >> 0x10);
  bVar11 = (char)(uVar8 >> 8) + cVar13 + '\t';
  cVar13 = cVar13 + '\x12';
  pcVar12 = (char *)CONCAT62(uVar14,CONCAT11(cVar13,(char)param_1));
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + '\t';
  *pcVar12 = *pcVar12 + unaff_SPL;
  pcVar1 = (char *)((ulonglong)CONCAT22(uVar4,CONCAT11(bVar11,bVar5)) * 2);
  *pcVar1 = *pcVar1 + bVar5;
  uVar8 = CONCAT22(uVar4,CONCAT11(bVar11 + bVar5,bVar5));
  iVar2 = *(int *)(ulonglong)uVar8;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) +
                   CONCAT62(unaff_0000001a,CONCAT11(9,unaff_BL)));
  *pcVar1 = *pcVar1 + cVar15;
  uVar3 = (uint3)((uVar8 - iVar2) - (uint)CARRY1(bVar11,bVar5) >> 8);
  puVar10 = (uint *)CONCAT71((uint7)uVar3,0xb7);
  *puVar10 = *puVar10 | (uint)puVar10;
  cVar6 = in((short)param_2);
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar3,cVar6);
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar13;
  *pcVar12 = *pcVar12 + unaff_SPL;
  *pcVar9 = *pcVar9 + cVar6;
  pcVar9[-0x13fff649] = pcVar9[-0x13fff649] + cVar15;
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar13;
  *pcVar12 = *pcVar12 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

