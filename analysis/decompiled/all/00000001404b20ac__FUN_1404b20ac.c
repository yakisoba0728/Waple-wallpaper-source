// Function: FUN_1404b20ac
// Addr: 1404b20ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b2152) overlaps instruction at (ram,0x0001404b2151)
    */

void FUN_1404b20ac(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  char *in_RAX;
  undefined1 *puVar8;
  byte bVar9;
  longlong lVar10;
  char *pcVar11;
  byte bVar13;
  byte bVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  uint unaff_ESI;
  char *pcVar17;
  byte *unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar18;
  uint *puVar7;
  char cVar12;
  
  uVar16 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar15 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar13 = (byte)param_2;
  bVar14 = (char)((ulonglong)param_2 >> 8) + *in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  *(uint *)(in_RAX + param_1) =
       *(uint *)(in_RAX + param_1) & CONCAT22(uVar15,CONCAT11(bVar14,bVar13));
  *(byte *)CONCAT71(unaff_00000021,unaff_SPL) = *(char *)CONCAT71(unaff_00000021,unaff_SPL) + bVar13
  ;
  cVar5 = (char)param_1;
  *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,bVar13))) =
       *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,bVar13))) + cVar5;
  uVar6 = (uint)in_RAX;
  *(uint *)(in_RAX + in_FS_OFFSET) = *(uint *)(in_RAX + in_FS_OFFSET) | uVar6;
  if (SCARRY4(uVar6,-0x2ffff7ac)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar12 = (char)((ulonglong)param_1 >> 8);
  lVar10 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar12 * '\x02',cVar5));
  if (!SCARRY1(cVar12,cVar12)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = uVar6 + 0xd0000854 | *(uint *)((ulonglong)(uVar6 + 0xd0000854) * 2);
  pcVar17 = (char *)(ulonglong)(unaff_ESI | *(uint *)(lVar10 * 2));
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar5;
  uVar3 = (undefined3)(uVar6 >> 8);
  bVar4 = (byte)uVar6 ^ *unaff_RDI;
  uVar6 = CONCAT31(uVar3,bVar4);
  puVar7 = (uint *)(ulonglong)uVar6;
  pcVar11 = (char *)(lVar10 + -1);
  if (pcVar11 != (char *)0x0 && bVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar9 = (byte)pcVar11;
  *unaff_RDI = *unaff_RDI + bVar9;
  if (*unaff_RDI != 0) {
    *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,bVar13))) =
         *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,bVar13))) + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = (byte *)((longlong)puVar7 + -0x4fffe98d);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar13;
  if (CARRY1(bVar2,bVar13)) {
    *(byte *)puVar7 = (byte)*puVar7 + bVar13;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & bVar9;
    *puVar7 = *puVar7 & uVar6;
    uVar6 = *puVar7;
    *(byte *)puVar7 = (byte)*puVar7 + bVar4;
    bVar18 = (byte)*puVar7 == 0;
    if (CARRY1((byte)uVar6,bVar4)) {
      *(byte *)((longlong)puVar7 + 0x10001673) = *(byte *)((longlong)puVar7 + 0x10001673) + bVar14;
      *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & bVar9;
      *(uint *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,bVar13))) =
           *(uint *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,bVar13))) & (uint)pcVar11;
      goto code_r0x0001404b211c;
    }
  }
  else {
    bVar4 = bVar4 | *(byte *)((longlong)puVar7 * 2);
code_r0x0001404b211c:
    uVar6 = CONCAT31(uVar3,bVar4);
    bVar14 = bVar14 | unaff_RDI[uVar6];
    uVar6 = uVar6 + 0x20000664;
    puVar7 = (uint *)(ulonglong)uVar6;
    bVar18 = uVar6 == 0;
  }
  bVar4 = (byte)((ulonglong)puVar7 >> 8);
  if (!bVar18) {
    *pcVar11 = *pcVar11 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar17 = *pcVar17 + unaff_BH;
  if (*pcVar17 != '\0') {
    halt_baddata();
  }
  *(byte *)(puVar7 + 0x8401287) = (byte)puVar7[0x8401287] + unaff_BL;
  cVar5 = (char)puVar7;
  *(byte *)puVar7 = (byte)*puVar7 + cVar5;
  uVar6 = *puVar7;
  *(byte *)puVar7 = (byte)*puVar7 + bVar4;
  bVar18 = (byte)*puVar7 == 0;
  if (bVar18) {
    *pcVar17 = *pcVar17 + unaff_BH;
    if (*pcVar17 == '\0') {
      *(byte *)(puVar7 + 0x8401287) = (byte)puVar7[0x8401287] + unaff_BL;
      halt_baddata();
    }
    out(0x49,cVar5);
    *pcVar11 = *pcVar11 + bVar4;
  }
  else {
    if (CARRY1((byte)uVar6,bVar4) || bVar18) goto code_r0x0001404b2165;
    *pcVar17 = *pcVar17 + bVar14;
    *param_4 = *param_4 + unaff_SPL;
  }
  *(byte *)puVar7 = (byte)*puVar7 + cVar5;
  puVar8 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar7 >> 8),cVar5 + bVar4);
  if ((byte)(cVar5 + bVar4) == '\0') {
    bVar4 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + unaff_BL;
    if (!CARRY1(bVar4,unaff_BL) && *unaff_RDI != 0) {
      *pcVar17 = *pcVar17 + bVar14;
      *param_4 = *param_4;
code_r0x0001404b2165:
      pcVar17[CONCAT71(unaff_00000021,unaff_SPL)] =
           pcVar17[CONCAT71(unaff_00000021,unaff_SPL)] + bVar13;
      LocalDescriptorTableRegister
                (*(undefined2 *)
                  (pcVar17 + CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,bVar13)))));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (lVar10 + -2 != 0) {
      *unaff_RDI = *unaff_RDI + (char)(lVar10 + -2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,bVar13))) =
         *(byte *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,bVar13))) >> 1 |
         *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(bVar14,bVar13))) << 7;
  }
  *puVar8 = *puVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

