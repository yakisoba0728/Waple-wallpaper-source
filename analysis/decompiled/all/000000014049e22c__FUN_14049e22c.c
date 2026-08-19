// Function: FUN_14049e22c
// Addr: 14049e22c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e26a) overlaps instruction at (ram,0x00014049e269)
    */

void FUN_14049e22c(int *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong in_RAX;
  undefined7 uVar10;
  ulonglong uVar4;
  char *pcVar5;
  uint *puVar7;
  int *piVar8;
  uint uVar11;
  char *pcVar12;
  char cVar13;
  byte bVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined2 in_ES;
  longlong in_FS_OFFSET;
  byte *pbStackX_8;
  byte *pbVar6;
  byte bVar9;
  
  uVar16 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar15 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar13 = (char)param_2;
  pcVar12 = (char *)(in_RAX ^ 0xe1);
  *param_4 = *param_4;
  *pcVar12 = *pcVar12 + (char)pcVar12;
  uVar10 = (undefined7)(in_RAX >> 8);
  cVar1 = (char)pcVar12 + (char)(in_RAX >> 8);
  pcVar12 = (char *)CONCAT71(uVar10,cVar1);
  *pcVar12 = *pcVar12 + cVar1;
  *pcVar12 = *pcVar12 + cVar1;
  uVar4 = CONCAT71(uVar10,cVar1) ^ 0xe1;
  bVar2 = (byte)uVar4;
  *param_4 = *param_4 + bVar2;
  bVar2 = bVar2 | *(byte *)(uVar4 * 2);
  bVar14 = (byte)((ulonglong)param_2 >> 8) | pbStackX_8[CONCAT71(uVar10,bVar2)];
  *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,cVar13))) =
       *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,cVar13))) + (char)param_1;
  bVar2 = bVar2 ^ *pbStackX_8;
  *(char *)CONCAT71(uVar10,bVar2) = *(char *)CONCAT71(uVar10,bVar2) + bVar2;
  *(byte *)param_1 = (char)*param_1 + bVar2;
  cVar1 = bVar2 + 1;
  pcVar5 = (char *)CONCAT71(uVar10,cVar1);
  pcVar12 = (char *)(CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,cVar13))) +
                    (longlong)pcVar5 * 2);
  *pcVar12 = *pcVar12 + cVar1;
  *pcVar5 = *pcVar5 + cVar1;
  *(int *)pbStackX_8 = *(int *)pbStackX_8 + CONCAT22(uVar15,CONCAT11(bVar14,cVar13));
  uVar3 = (int)pcVar5 + 0x84011600;
  pbVar6 = (byte *)(ulonglong)uVar3;
  uVar11 = (int)param_1 + *param_1;
  uVar4 = (ulonglong)uVar11;
  pcVar12 = (char *)(uVar4 - 1);
  bVar2 = (byte)uVar3;
  bVar9 = (byte)(uVar3 >> 8);
  if (pcVar12 == (char *)0x0 || uVar11 == 0) {
    if (!SCARRY4((int)param_1,*param_1)) {
      *pbVar6 = *pbVar6 ^ bVar2;
      *pcVar12 = *pcVar12 + bVar9;
      *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,cVar13))) =
           *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,cVar13))) | bVar2;
    }
    *pbVar6 = *pbVar6 + (char)pcVar12;
    bVar2 = *(byte *)(in_FS_OFFSET + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  }
  else {
    bVar2 = bVar2 + *pbVar6;
    pbVar6 = (byte *)(CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,cVar13))) + 3 +
                     (longlong)pcVar12 * 4);
    *pbVar6 = *pbVar6 | bVar9;
  }
  uVar11 = CONCAT31((int3)(uVar3 >> 8),bVar2);
  puVar7 = (uint *)(ulonglong)uVar11;
  *pcVar12 = *pcVar12 + bVar9;
  pbVar6 = pbStackX_8 + -0x77ffff9f;
  *pbVar6 = *pbVar6 + (char)pcVar12;
  pcVar12 = (char *)(uVar4 - 2);
  if (pcVar12 != (char *)0x0 && *pbVar6 == 0) {
    *puVar7 = *puVar7 & (uint)pcVar12;
    bVar2 = bVar2 + (char)*puVar7;
    bVar9 = bVar9 | bVar14;
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11(bVar9,bVar2));
    piVar8 = (int *)(ulonglong)uVar3;
    *(undefined2 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = in_ES;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar9;
    pcVar5 = (char *)(CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,cVar13))) + -0x1fffff9d);
    *pcVar5 = *pcVar5 + (char)((ulonglong)pcVar12 >> 8);
    pcVar12 = (char *)(uVar4 - 3);
    if (pcVar12 != (char *)0x0 && *pcVar5 == '\0') {
      pbVar6 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x69b002);
      *pbVar6 = *pbVar6 | bVar14;
      uVar3 = *piVar8 * 0x49e23c00;
      *pcVar12 = *pcVar12 + (char)(uVar3 >> 8);
      *(undefined1 *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,cVar13 + unaff_BH))) =
           *(undefined1 *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,cVar13 + unaff_BH)));
      *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)pcVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar12 = *pcVar12 + bVar9;
    *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,cVar13))) =
         *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,cVar13))) | bVar2;
    *(char *)piVar8 = (char)*piVar8 + (char)pcVar12;
    cVar1 = in(0x8a);
    pcVar12 = (char *)(in_FS_OFFSET + (ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar1));
    *pcVar12 = *pcVar12 + cVar1;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *pcVar12 = *pcVar12 + bVar9;
  *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,cVar13))) =
       *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,cVar13))) | bVar2;
  *(char *)puVar7 = (char)*puVar7 + (char)pcVar12;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

