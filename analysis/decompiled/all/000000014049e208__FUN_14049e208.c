// Function: FUN_14049e208
// Addr: 14049e208
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e26a) overlaps instruction at (ram,0x00014049e269)
    */

void FUN_14049e208(int *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint in_EAX;
  uint uVar4;
  char *pcVar5;
  ulonglong uVar6;
  byte *pbVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar12;
  char *pcVar13;
  byte bVar14;
  byte bVar15;
  undefined2 uVar16;
  undefined4 uVar17;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar18;
  undefined2 in_ES;
  longlong in_FS_OFFSET;
  bool bVar19;
  undefined1 auStack_8 [8];
  byte bVar10;
  undefined7 uVar11;
  
  uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar16 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar14 = (byte)param_2;
  uVar4 = in_EAX | 0x4f006c2;
  pcVar13 = (char *)(ulonglong)uVar4;
  *pcVar13 = *pcVar13 + (char)uVar4;
  puVar8 = (uint *)(pcVar13 + (longlong)param_1);
  *puVar8 = *puVar8 & (uint)param_1;
  puVar18 = auStack_8;
  if (*puVar8 != 0) {
    bVar19 = CARRY1(bRam000000014e49ef01,bVar14);
    bRam000000014e49ef01 = bRam000000014e49ef01 + bVar14;
    bVar2 = (char)uVar4 + pcVar13[in_FS_OFFSET] + bVar19;
    cVar3 = bVar2 + 0x34;
    pcVar13 = (char *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar3);
    *pcVar13 = *pcVar13 + cVar3 + (0xcb < bVar2);
    param_1 = (int *)((longlong)param_1 + -1);
    if (param_1 != (int *)0x0 && *pcVar13 != '\0') {
      halt_baddata();
    }
    *pcVar13 = *pcVar13 + cVar3;
    puVar18 = (undefined1 *)register0x00000020;
  }
  *pcVar13 = *pcVar13 + (char)pcVar13;
  uVar11 = (undefined7)((ulonglong)pcVar13 >> 8);
  pcVar5 = (char *)((ulonglong)pcVar13 ^ 0xe1);
  *param_4 = *param_4 + (char)puVar18;
  *pcVar5 = *pcVar5 + (char)pcVar5;
  cVar3 = (char)pcVar5 + (char)((ulonglong)pcVar13 >> 8);
  pcVar13 = (char *)CONCAT71(uVar11,cVar3);
  *pcVar13 = *pcVar13 + cVar3;
  pbVar1 = *(byte **)(puVar18 + 8);
  *pcVar13 = *pcVar13 + cVar3;
  uVar6 = CONCAT71(uVar11,cVar3) ^ 0xe1;
  bVar2 = (byte)uVar6;
  *param_4 = *param_4 + bVar2;
  bVar2 = bVar2 | *(byte *)(uVar6 * 2);
  bVar15 = (byte)((ulonglong)param_2 >> 8) | pbVar1[CONCAT71(uVar11,bVar2)];
  *(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14))) =
       *(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14))) + (char)param_1;
  bVar2 = bVar2 ^ *pbVar1;
  *(char *)CONCAT71(uVar11,bVar2) = *(char *)CONCAT71(uVar11,bVar2) + bVar2;
  *(byte *)param_1 = (char)*param_1 + bVar2;
  cVar3 = bVar2 + 1;
  pcVar5 = (char *)CONCAT71(uVar11,cVar3);
  pcVar13 = (char *)(CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14))) +
                    (longlong)pcVar5 * 2);
  *pcVar13 = *pcVar13 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *(int *)pbVar1 = *(int *)pbVar1 + CONCAT22(uVar16,CONCAT11(bVar15,bVar14));
  uVar4 = (int)pcVar5 + 0x84011600;
  pbVar7 = (byte *)(ulonglong)uVar4;
  uVar12 = (int)param_1 + *param_1;
  uVar6 = (ulonglong)uVar12;
  pcVar13 = (char *)(uVar6 - 1);
  bVar2 = (byte)uVar4;
  bVar10 = (byte)(uVar4 >> 8);
  if (pcVar13 == (char *)0x0 || uVar12 == 0) {
    if (!SCARRY4((int)param_1,*param_1)) {
      *pbVar7 = *pbVar7 ^ bVar2;
      *pcVar13 = *pcVar13 + bVar10;
      *(byte *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14))) =
           *(byte *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14))) | bVar2;
    }
    *pbVar7 = *pbVar7 + (char)pcVar13;
    bVar2 = *(byte *)(in_FS_OFFSET + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  }
  else {
    bVar2 = bVar2 + *pbVar7;
    pbVar7 = (byte *)(CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14))) + 3 +
                     (longlong)pcVar13 * 4);
    *pbVar7 = *pbVar7 | bVar10;
  }
  uVar12 = CONCAT31((int3)(uVar4 >> 8),bVar2);
  puVar8 = (uint *)(ulonglong)uVar12;
  *pcVar13 = *pcVar13 + bVar10;
  pbVar1 = pbVar1 + -0x77ffff9f;
  *pbVar1 = *pbVar1 + (char)pcVar13;
  pcVar13 = (char *)(uVar6 - 2);
  if (pcVar13 == (char *)0x0 || *pbVar1 != 0) {
    *pcVar13 = *pcVar13 + bVar10;
    *(byte *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14))) =
         *(byte *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14))) | bVar2;
    *(char *)puVar8 = (char)*puVar8 + (char)pcVar13;
    *(undefined1 **)(puVar18 + 8) = puVar18 + 0x10;
    *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar8 = *puVar8 & (uint)pcVar13;
  bVar2 = bVar2 + (char)*puVar8;
  bVar10 = bVar10 | bVar15;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(bVar10,bVar2));
  piVar9 = (int *)(ulonglong)uVar4;
  *(undefined2 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = in_ES;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar10;
  pcVar5 = (char *)(CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14))) + -0x1fffff9d);
  *pcVar5 = *pcVar5 + (char)((ulonglong)pcVar13 >> 8);
  pcVar13 = (char *)(uVar6 - 3);
  if (pcVar13 == (char *)0x0 || *pcVar5 != '\0') {
    *pcVar13 = *pcVar13 + bVar10;
    *(byte *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14))) =
         *(byte *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14))) | bVar2;
    *(char *)piVar9 = (char)*piVar9 + (char)pcVar13;
    cVar3 = in(0x8a);
    pcVar13 = (char *)(in_FS_OFFSET + (ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar3));
    *pcVar13 = *pcVar13 + cVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x69b002);
  *pbVar1 = *pbVar1 | bVar15;
  uVar4 = *piVar9 * 0x49e23c00;
  *pcVar13 = *pcVar13 + (char)(uVar4 >> 8);
  *(undefined1 *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14 + unaff_BH))) =
       *(undefined1 *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,bVar14 + unaff_BH)));
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)pcVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

