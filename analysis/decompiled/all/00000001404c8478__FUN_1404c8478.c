// Function: FUN_1404c8478
// Addr: 1404c8478
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c84fd) overlaps instruction at (ram,0x0001404c84fc)
    */

void FUN_1404c8478(uint *param_1,longlong param_2)

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
  uint *puVar8;
  uint *puVar9;
  char *pcVar11;
  byte *pbVar12;
  byte unaff_BL;
  char unaff_BH;
  char cVar13;
  undefined6 unaff_0000001a;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  uint uVar14;
  byte *unaff_RDI;
  char unaff_R12B;
  uint unaff_retaddr;
  int aiStackX_8 [8];
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar4 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  uVar6 = *param_1;
  cVar13 = unaff_BH + unaff_BL;
  uVar14 = *param_1;
  *(byte *)((longlong)in_RAX + -0x7d) = *(byte *)((longlong)in_RAX + -0x7d) + unaff_BL;
  *(char *)param_1 = (char)*param_1 + unaff_R12B;
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  cVar5 = (char)param_2;
  *(byte *)in_RAX = (byte)*in_RAX + cVar5;
  uVar14 = unaff_retaddr | uVar6 | uVar14 | *param_1;
  pcVar11 = (char *)((ulonglong)uVar14 + 0xb);
  *pcVar11 = *pcVar11 + unaff_BL;
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  puVar1 = (undefined4 *)((longlong)in_RAX * 2 + 0x21);
  *puVar1 = *puVar1;
  *(byte *)in_RAX = (byte)*in_RAX | bVar4;
  bVar10 = (char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_2 >> 8);
  uVar6 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar10 + bVar4,bVar4)) +
          0x14640000 + (uint)CARRY1(bVar10,bVar4);
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  puVar8 = (uint *)((ulonglong)uVar6 ^ 0x13);
  *(char *)puVar8 = (char)*puVar8 + cVar5;
  uVar14 = uVar14 | *param_1;
  pcVar11 = (char *)((ulonglong)uVar14 + 0xb);
  *pcVar11 = *pcVar11 + unaff_BL;
  *puVar8 = *puVar8 ^ (uint)puVar8;
  puVar1 = (undefined4 *)((longlong)puVar8 * 2 + 0x21);
  *puVar1 = *puVar1;
  bVar4 = (char)puVar8 + (char)*puVar8;
  bVar10 = (byte)(uVar6 >> 8);
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11(bVar10 + bVar4,bVar4)) + 0x310b1000 +
          (uint)CARRY1(bVar10,bVar4);
  puVar9 = (uint *)(ulonglong)uVar6;
  pcVar11 = (char *)((ulonglong)uVar14 + 0xb);
  *pcVar11 = *pcVar11 + unaff_BL;
  *puVar9 = *puVar9 ^ uVar6;
  puVar8 = (uint *)((longlong)puVar9 * 2 + 0x21);
  *puVar8 = *puVar8 | 5;
  iVar7 = CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + (char)*puVar9) + -0x1ffff33c;
  uVar14 = uVar14 + *param_1;
  *(char *)param_1 = (char)*param_1 + cVar5;
  cVar5 = (char)iVar7 + '1';
  pcVar11 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x21004a +
                    CONCAT62(unaff_0000001a,CONCAT11(cVar13,unaff_BL)));
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
  puVar8 = (uint *)(ulonglong)uVar6;
  *puVar8 = *puVar8 ^ uVar6;
  *(uint *)(pcVar11 + uVar14) = *(int *)(pcVar11 + uVar14) + uVar6;
  pcVar2 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x21004a +
                   CONCAT62(unaff_0000001a,CONCAT11(cVar13,unaff_BL)));
  *pcVar2 = *pcVar2 + (char)pcVar11;
  *(char *)puVar8 = (char)*puVar8 + cVar5;
  pbVar12 = (byte *)((longlong)param_1 + -2);
  if (pbVar12 != (byte *)0x0 && (char)*puVar8 != '\0') {
    puVar8 = (uint *)(ulonglong)CONCAT31(uVar3,cVar5 + '1');
  }
  *puVar8 = *puVar8 ^ (uint)puVar8;
  *(uint *)(pbVar12 + uVar14) = *(int *)(pbVar12 + uVar14) + (uint)puVar8;
  pcVar11 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x1901004a +
                    CONCAT62(unaff_0000001a,CONCAT11(cVar13,unaff_BL)));
  *pcVar11 = *pcVar11 + (byte)pbVar12;
  uVar6 = *puVar8;
  *(int *)((longlong)aiStackX_8 + param_2) = *(int *)((longlong)aiStackX_8 + param_2) - uVar14;
  bVar4 = *pbVar12;
  *pbVar12 = *pbVar12 + unaff_BL;
  uVar14 = (int)param_2 + 0x11e013f0 + (uint)CARRY1(bVar4,unaff_BL);
  puVar9 = (uint *)(ulonglong)uVar14;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(int *)((longlong)puVar9 + 0x54a8000a) = *(int *)((longlong)puVar9 + 0x54a8000a) + unaff_EBP;
  *(byte *)puVar9 = (byte)*puVar9 | (byte)uVar14;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(cVar13,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(cVar13,unaff_BL)) + ((byte)puVar8 | (byte)uVar6);
  bVar4 = (byte)pbVar12 ^ *unaff_RDI;
  if (CONCAT71((int7)((ulonglong)pbVar12 >> 8),bVar4) == 1 || bVar4 == 0) {
    *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(cVar13,unaff_BL)) =
         *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(cVar13,unaff_BL));
    uRam000000013451853c = uRam000000013451853c & uVar14;
    *puVar9 = *puVar9 | uVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar9 = *puVar9 ^ uVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

