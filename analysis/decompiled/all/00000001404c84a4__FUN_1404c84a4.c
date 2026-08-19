// Function: FUN_1404c84a4
// Addr: 1404c84a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c84fd) overlaps instruction at (ram,0x0001404c84fc)
    */

void FUN_1404c84a4(uint *param_1,longlong param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  byte bVar10;
  uint *in_RAX;
  uint *puVar9;
  char *pcVar11;
  byte *pbVar12;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  uint unaff_ESI;
  uint uVar13;
  byte *unaff_RDI;
  uint *puVar8;
  
  bVar10 = (byte)((ulonglong)in_RAX >> 8);
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] + bVar10;
  pcVar11 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + param_2);
  *pcVar11 = *pcVar11 + (char)((ulonglong)param_2 >> 8);
  *(char *)in_RAX = (char)*in_RAX + (char)param_2;
  uVar13 = unaff_ESI | *param_1;
  pcVar11 = (char *)((ulonglong)uVar13 + 0xb);
  *pcVar11 = *pcVar11 + unaff_BL;
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  puVar1 = (undefined4 *)((longlong)in_RAX * 2 + 0x21);
  *puVar1 = *puVar1;
  bVar4 = (char)in_RAX + (char)*in_RAX;
  uVar6 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar10 + bVar4,bVar4)) +
          0x310b1000 + (uint)CARRY1(bVar10,bVar4);
  puVar8 = (uint *)(ulonglong)uVar6;
  pcVar11 = (char *)((ulonglong)uVar13 + 0xb);
  *pcVar11 = *pcVar11 + unaff_BL;
  *puVar8 = *puVar8 ^ uVar6;
  puVar9 = (uint *)((longlong)puVar8 * 2 + 0x21);
  *puVar9 = *puVar9 | 5;
  iVar7 = CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + (char)*puVar8) + -0x1ffff33c;
  uVar13 = uVar13 + *param_1;
  *(char *)param_1 = (char)*param_1 + (char)param_2;
  cVar5 = (char)iVar7 + '1';
  pcVar11 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x21004a +
                    CONCAT71(unaff_00000019,unaff_BL));
  *pcVar11 = *pcVar11 + (char)param_1;
  cVar5 = cVar5 + *(char *)(ulonglong)CONCAT31((int3)((uint)iVar7 >> 8),cVar5);
  uVar3 = (undefined3)
          (CONCAT22((short)((uint)iVar7 >> 0x10),CONCAT11((char)((uint)iVar7 >> 8) + cVar5,cVar5))
          >> 8);
  pcVar11 = (char *)((longlong)param_1 + -1);
  if (pcVar11 != (char *)0x0 && cVar5 != '\0') {
    cVar5 = cVar5 + '1';
  }
  uVar6 = CONCAT31(uVar3,cVar5);
  puVar9 = (uint *)(ulonglong)uVar6;
  *puVar9 = *puVar9 ^ uVar6;
  *(uint *)(pcVar11 + uVar13) = *(int *)(pcVar11 + uVar13) + uVar6;
  pcVar2 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x21004a +
                   CONCAT71(unaff_00000019,unaff_BL));
  *pcVar2 = *pcVar2 + (char)pcVar11;
  *(char *)puVar9 = (char)*puVar9 + cVar5;
  pbVar12 = (byte *)((longlong)param_1 + -2);
  if (pbVar12 != (byte *)0x0 && (char)*puVar9 != '\0') {
    puVar9 = (uint *)(ulonglong)CONCAT31(uVar3,cVar5 + '1');
  }
  *puVar9 = *puVar9 ^ (uint)puVar9;
  *(uint *)(pbVar12 + uVar13) = *(int *)(pbVar12 + uVar13) + (uint)puVar9;
  pcVar11 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x1901004a +
                    CONCAT71(unaff_00000019,unaff_BL));
  *pcVar11 = *pcVar11 + (byte)pbVar12;
  uVar6 = *puVar9;
  *(uint *)(&stack0x00000000 + param_2) = *(int *)(&stack0x00000000 + param_2) - uVar13;
  bVar4 = *pbVar12;
  *pbVar12 = *pbVar12 + unaff_BL;
  uVar13 = (int)param_2 + 0x11e013f0 + (uint)CARRY1(bVar4,unaff_BL);
  puVar8 = (uint *)(ulonglong)uVar13;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(int *)((longlong)puVar8 + 0x54a8000a) = *(int *)((longlong)puVar8 + 0x54a8000a) + unaff_EBP;
  *(byte *)puVar8 = (byte)*puVar8 | (byte)uVar13;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + ((byte)puVar9 | (byte)uVar6);
  bVar4 = (byte)pbVar12 ^ *unaff_RDI;
  if (CONCAT71((int7)((ulonglong)pbVar12 >> 8),bVar4) == 1 || bVar4 == 0) {
    *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL) =
         *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL);
    uRam000000013451853c = uRam000000013451853c & uVar13;
    *puVar8 = *puVar8 | uVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar8 = *puVar8 ^ uVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

