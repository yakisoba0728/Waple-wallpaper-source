// Function: FUN_1404ad180
// Addr: 1404ad180
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad181) overlaps instruction at (ram,0x0001404ad180)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ad166) */
/* WARNING: Removing unreachable block (ram,0x0001404ad0ef) */

void FUN_1404ad180(byte *param_1,char *param_2)

{
  byte *pbVar1;
  uint uVar2;
  char cVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  uint *puVar8;
  uint *in_RAX;
  byte bVar10;
  undefined7 uVar11;
  char cVar12;
  byte unaff_BH;
  undefined1 *puVar13;
  uint uVar3;
  undefined7 uVar9;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar5 = (char)in_RAX + (char)*in_RAX;
  puVar8 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) +
                                     (char)((ulonglong)param_2 >> 8),bVar5));
  *(byte *)puVar8 = (byte)*puVar8 | bVar5;
  pbVar1 = (byte *)((longlong)puVar8 + -0x7b);
  bVar10 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  *puVar8 = *puVar8 + (int)puVar8 + (uint)CARRY1(bVar10,unaff_BH);
  if (-1 < (int)*puVar8) {
    *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar8 = (byte)*puVar8 | bVar5;
  puVar13 = (undefined1 *)register0x00000020;
  do {
    pbVar1 = (byte *)((longlong)puVar8 + -0x7b);
    bVar10 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BH;
    uVar2 = *puVar8;
    uVar6 = (uint)puVar8;
    uVar3 = *puVar8;
    *puVar8 = uVar3 + uVar6 + (uint)CARRY1(bVar10,unaff_BH);
    cVar12 = (char)param_2;
    if (-1 < (int)*puVar8) {
      *param_1 = *param_1 + (char)puVar13;
      cVar4 = (char)puVar8;
      *(byte *)puVar8 = (byte)*puVar8 + cVar4;
      *(byte *)(puVar8 + 0x1e000461) = (byte)puVar8[0x1e000461] + cVar12;
      *(byte *)(puVar8 + -0xc) = (byte)puVar8[-0xc] + unaff_BH;
      *param_1 = *param_1 + (char)puVar13;
      *param_2 = *param_2 + cVar4;
      *(byte *)puVar8 = (byte)*puVar8 + cVar4;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *puVar8 = *puVar8 + uVar6 +
              (uint)(CARRY4(uVar2,uVar6) || CARRY4(uVar3 + uVar6,(uint)CARRY1(bVar10,unaff_BH)));
    uVar9 = (undefined7)((ulonglong)puVar8 >> 8);
    pcVar7 = (char *)CONCAT71(uVar9,0x4a);
    bVar10 = *param_1;
    *param_1 = *param_1 + 0x4a;
    uVar11 = (undefined7)((ulonglong)param_1 >> 8);
    bVar10 = (char)param_1 + *pcVar7 + (0xb5 < bVar10);
    *param_2 = *param_2 + cVar12;
    *(undefined1 **)(puVar13 + -8) = puVar13;
    puVar8 = (uint *)(CONCAT71(uVar9,*pcVar7) | 0x4a);
    param_2 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                               CONCAT11((char)((ulonglong)param_2 >> 8) +
                                        *(char *)(CONCAT71(uVar11,bVar10) * 2),cVar12));
    *param_2 = *param_2 + cVar12;
    bVar10 = bVar10 ^ bRam00000000ec001182;
    param_1 = (byte *)(CONCAT71(uVar11,bVar10) + -1);
    puVar13 = puVar13 + -8;
  } while (param_1 != (byte *)0x0 && bVar10 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

