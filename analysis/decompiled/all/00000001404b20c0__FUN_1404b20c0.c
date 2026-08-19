// Function: FUN_1404b20c0
// Addr: 1404b20c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b2152) overlaps instruction at (ram,0x0001404b2151)
    */

void FUN_1404b20c0(undefined8 param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  int in_EAX;
  uint uVar6;
  undefined1 *puVar8;
  byte bVar9;
  longlong lVar10;
  char *pcVar11;
  byte bVar12;
  byte bVar13;
  undefined6 uVar14;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  uint unaff_ESI;
  char *pcVar15;
  byte *unaff_RDI;
  bool bVar16;
  uint *puVar7;
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  bVar12 = (byte)param_2;
  if (SCARRY4(in_EAX,-0x2ffff7ac)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar5 = (char)((ulonglong)param_1 >> 8);
  lVar10 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar5 * '\x02',(char)param_1));
  if (!SCARRY1(cVar5,cVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = in_EAX + 0xd0000854U | *(uint *)((ulonglong)(in_EAX + 0xd0000854U) * 2);
  pcVar15 = (char *)(ulonglong)(unaff_ESI | *(uint *)(lVar10 * 2));
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
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
    *(byte *)param_2 = (char)*param_2 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = (byte *)((longlong)puVar7 + -0x4fffe98d);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar12;
  if (CARRY1(bVar2,bVar12)) {
    *(byte *)puVar7 = (byte)*puVar7 + bVar12;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & bVar9;
    *puVar7 = *puVar7 & uVar6;
    uVar6 = *puVar7;
    *(byte *)puVar7 = (byte)*puVar7 + bVar4;
    bVar16 = (byte)*puVar7 == 0;
    if (CARRY1((byte)uVar6,bVar4)) {
      *(byte *)((longlong)puVar7 + 0x10001673) = *(byte *)((longlong)puVar7 + 0x10001673) + bVar13;
      *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & bVar9;
      *param_2 = *param_2 & (uint)pcVar11;
      goto code_r0x0001404b211c;
    }
  }
  else {
    bVar4 = bVar4 | *(byte *)((longlong)puVar7 * 2);
code_r0x0001404b211c:
    uVar6 = CONCAT31(uVar3,bVar4);
    bVar13 = bVar13 | unaff_RDI[uVar6];
    uVar6 = uVar6 + 0x20000664;
    puVar7 = (uint *)(ulonglong)uVar6;
    bVar16 = uVar6 == 0;
  }
  bVar4 = (byte)((ulonglong)puVar7 >> 8);
  if (!bVar16) {
    *pcVar11 = *pcVar11 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar15 = *pcVar15 + unaff_BH;
  if (*pcVar15 != '\0') {
    halt_baddata();
  }
  *(byte *)(puVar7 + 0x8401287) = (byte)puVar7[0x8401287] + unaff_BL;
  cVar5 = (char)puVar7;
  *(byte *)puVar7 = (byte)*puVar7 + cVar5;
  uVar6 = *puVar7;
  *(byte *)puVar7 = (byte)*puVar7 + bVar4;
  bVar16 = (byte)*puVar7 == 0;
  if (bVar16) {
    *pcVar15 = *pcVar15 + unaff_BH;
    if (*pcVar15 == '\0') {
      *(byte *)(puVar7 + 0x8401287) = (byte)puVar7[0x8401287] + unaff_BL;
      halt_baddata();
    }
    out(0x49,cVar5);
    *pcVar11 = *pcVar11 + bVar4;
  }
  else {
    if (CARRY1((byte)uVar6,bVar4) || bVar16) goto code_r0x0001404b2165;
    *pcVar15 = *pcVar15 + bVar13;
    *param_4 = *param_4 + unaff_SPL;
  }
  *(byte *)puVar7 = (byte)*puVar7 + cVar5;
  puVar8 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar7 >> 8),cVar5 + bVar4);
  if ((byte)(cVar5 + bVar4) == '\0') {
    bVar4 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + unaff_BL;
    if (!CARRY1(bVar4,unaff_BL) && *unaff_RDI != 0) {
      *pcVar15 = *pcVar15 + bVar13;
      *param_4 = *param_4;
code_r0x0001404b2165:
      pcVar15[CONCAT71(unaff_00000021,unaff_SPL)] =
           pcVar15[CONCAT71(unaff_00000021,unaff_SPL)] + bVar12;
      LocalDescriptorTableRegister
                (*(undefined2 *)(pcVar15 + CONCAT62(uVar14,CONCAT11(bVar13,bVar12))));
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
    *(byte *)CONCAT62(uVar14,CONCAT11(bVar13,bVar12)) =
         *(byte *)CONCAT62(uVar14,CONCAT11(bVar13,bVar12)) >> 1 |
         *(char *)CONCAT62(uVar14,CONCAT11(bVar13,bVar12)) << 7;
  }
  *puVar8 = *puVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

