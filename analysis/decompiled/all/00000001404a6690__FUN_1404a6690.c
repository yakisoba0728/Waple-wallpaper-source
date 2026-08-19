// Function: FUN_1404a6690
// Addr: 1404a6690
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404a66c8) overlaps instruction at (ram,0x0001404a66c5)
    */

void FUN_1404a6690(char *param_1,longlong param_2,char param_3)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  byte bVar8;
  char *in_RAX;
  undefined7 uVar9;
  uint *puVar6;
  uint *puVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  char *pcVar5;
  
  in_RAX[0x21004a65] = in_RAX[0x21004a65] + unaff_BL;
  *unaff_RSI = *unaff_RSI + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar4 = in(0x4d);
  pcVar5 = (char *)CONCAT71(uVar9,cVar4);
  *pcVar5 = *pcVar5 + cVar4;
  pcVar5[in_FS_OFFSET] = pcVar5[in_FS_OFFSET] + param_3;
  puVar6 = (uint *)(CONCAT71(uVar9,cVar4) ^ 0x4a);
  pcVar5 = (char *)((longlong)puVar6 + -0x25fff687);
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  *pcVar5 = *pcVar5 + bVar8;
  if (*pcVar5 < '\0') {
    *(char *)((longlong)puVar6 + 0x21004a65) = *(char *)((longlong)puVar6 + 0x21004a65) + unaff_BL;
    cVar4 = (char)puVar6;
    *(char *)puVar6 = (char)*puVar6 + cVar4;
    pbVar1 = (byte *)((longlong)puVar6 + -0x25fff687);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar8;
    if (-1 < (char)*pbVar1) {
      *param_1 = *param_1 + cVar4 + CARRY1(bVar3,bVar8);
      pcVar5 = (char *)((longlong)puVar6 + (longlong)unaff_RSI * 2);
      *pcVar5 = *pcVar5 + cVar4;
      goto code_r0x0001404a66ce;
    }
  }
  else {
    puVar6 = (uint *)CONCAT71(uVar9,cRam98000979da000979);
    param_1[unaff_GS_OFFSET] = param_1[unaff_GS_OFFSET] + cRam98000979da000979;
  }
  *(char *)((longlong)puVar6 + 0x1004a65) = *(char *)((longlong)puVar6 + 0x1004a65) + unaff_BL;
  pcVar5 = (char *)((longlong)puVar6 + (longlong)unaff_RSI * 2);
  *pcVar5 = *pcVar5 + (char)puVar6;
code_r0x0001404a66ce:
  *(uint **)((ulonglong)(uint)((int)&stack0x00000000 + *(int *)((longlong)puVar6 + 2)) - 8) = puVar6
  ;
  *(char *)puVar6 = (char)*puVar6 + (char)puVar6;
  *puVar6 = *puVar6 & (uint)param_1;
  puVar7 = (uint *)CONCAT71((int7)((ulonglong)puVar6 >> 8),(char)puVar6 + (char)*puVar6);
  unaff_RSI[param_2] = unaff_RSI[param_2] | (byte)((ulonglong)param_2 >> 8);
  *(char *)((longlong)puVar7 + -0x7d) = *(char *)((longlong)puVar7 + -0x7d) + (char)param_2;
  *puVar7 = *puVar7 | (uint)puVar7;
  piVar2 = (int *)(CONCAT71(unaff_00000019,unaff_BL) + 0x65f40009);
  *piVar2 = *piVar2 + 0x4a;
  *param_1 = *param_1 + (char)((ulonglong)puVar6 >> 8);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)((ulonglong)param_1 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

