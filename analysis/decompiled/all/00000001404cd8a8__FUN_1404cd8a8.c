// Function: FUN_1404cd8a8
// Addr: 1404cd8a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cd927) overlaps instruction at (ram,0x0001404cd926)
    */

void FUN_1404cd8a8(byte *param_1,byte *param_2,byte param_3,byte *param_4)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  undefined3 uVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  int in_EAX;
  uint uVar9;
  undefined7 uVar11;
  char cVar12;
  int *piVar13;
  byte bVar14;
  char cVar15;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  uint unaff_ESI;
  char cVar16;
  byte *unaff_RDI;
  char unaff_R12B;
  undefined7 unaff_000000a1;
  longlong unaff_R14;
  char *unaff_R15;
  char *pcVar10;
  
  uVar9 = in_EAX + 0xe64;
  pcVar10 = (char *)(ulonglong)uVar9;
  bVar5 = (byte)uVar9;
  uVar4 = (undefined3)(uVar9 >> 8);
  cVar12 = (char)param_1;
  bVar14 = (byte)param_2;
  cVar15 = (char)((ulonglong)param_2 >> 8);
  cVar16 = (char)unaff_RDI;
  if (uVar9 == 0 || in_EAX < -0xe64) {
    param_1[0x7f] = param_1[0x7f] + cVar12;
    pcVar10[CONCAT71(unaff_000000a1,unaff_R12B)] =
         pcVar10[CONCAT71(unaff_000000a1,unaff_R12B)] + bVar5;
    *param_4 = *param_4;
    *pcVar10 = *pcVar10 + bVar5;
    cVar6 = *pcVar10;
    *pcVar10 = *pcVar10 + bVar5;
    if (*pcVar10 == '\0' || SCARRY1(cVar6,bVar5) != *pcVar10 < '\0') {
      param_1[0x7f] = param_1[0x7f] + cVar12;
      pcVar10[CONCAT71(unaff_000000a1,unaff_R12B)] =
           pcVar10[CONCAT71(unaff_000000a1,unaff_R12B)] + bVar5;
      bVar3 = *param_4;
      *param_4 = *param_4 + bVar5;
      bVar8 = *unaff_RDI;
      *param_2 = *param_2 + bVar14;
      *(uint *)param_2 = *(int *)param_2 + unaff_EBP;
      *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
           cVar12;
      LOCK();
      puVar1 = (uint *)((ulonglong)CONCAT31(uVar4,bVar5 + bVar8 + CARRY1(bVar3,bVar5)) + 8);
      *puVar1 = *puVar1 | unaff_ESI;
      UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    cVar6 = *(char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))
                     + (ulonglong)bVar5);
    pcVar10 = (char *)(ulonglong)CONCAT31(uVar4,cVar6);
    *param_1 = *param_1 + unaff_R12B;
    *pcVar10 = *pcVar10 + cVar6;
    pcVar10[0x6d] = pcVar10[0x6d] + cVar15;
    *(char *)(unaff_R14 + -0x7ffbe92) = *(char *)(unaff_R14 + -0x7ffbe92) + cVar16;
  }
  uVar11 = (undefined7)((ulonglong)pcVar10 >> 8);
  uVar7 = *(undefined1 *)
           (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
           ((ulonglong)pcVar10 & 0xff));
  bVar5 = *param_1;
  *param_1 = *param_1 + param_3;
  piVar13 = (int *)CONCAT71((int7)((ulonglong)param_1 >> 8),
                            cVar12 + *(char *)CONCAT71(uVar11,uVar7) + CARRY1(bVar5,param_3));
  *param_2 = *param_2 + bVar14;
  LocalDescriptorTableRegister(*(undefined2 *)param_2);
  pcVar10 = (char *)(CONCAT71(uVar11,uVar7) ^ 0xe);
  bVar5 = *param_2;
  bVar3 = *param_2;
  *param_2 = *param_2 + bVar14;
  bVar8 = (byte)pcVar10;
  if ((CARRY1(bVar5,bVar14)) ||
     (piVar13 = (int *)((longlong)piVar13 + -1), piVar13 != (int *)0x0 && *param_2 != 0)) {
    if (SCARRY1(bVar3,bVar14)) {
      pcVar10 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x6004cd8);
      *pcVar10 = *pcVar10 + unaff_BL;
      goto code_r0x0001404cd96e;
    }
    *unaff_RDI = *unaff_RDI + unaff_BH;
  }
  else if (!SCARRY1(bVar3,bVar14)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar12 = *unaff_R15;
  *unaff_R15 = *unaff_R15 + cVar16;
  if (SCARRY1(cVar12,cVar16)) {
    *pcVar10 = *pcVar10 + unaff_BH;
    *pcVar10 = *pcVar10 + bVar8;
    pcVar2 = pcVar10 + 0x3f004170;
    cVar12 = *pcVar2;
    *pcVar2 = *pcVar2 + bVar14;
    if (!SCARRY1(cVar12,bVar14)) {
      halt_baddata();
    }
    *pcVar10 = *pcVar10 + unaff_BH;
    *(uint *)((longlong)pcVar10 * 2) = *(uint *)((longlong)pcVar10 * 2) & (uint)piVar13;
    *(uint *)(pcVar10 + 0xb) = *(uint *)(pcVar10 + 0xb) & unaff_EBP;
    *(char *)piVar13 = (char)*piVar13 + unaff_BL;
    *piVar13 = *piVar13 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    cRam000000014a2ce541 = cRam000000014a2ce541 + (char)piVar13;
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
    pcVar10[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 8 +
            0x3128004c] =
         pcVar10[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 8 +
                 0x3128004c] + bVar14 + pcVar10[0x50];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000000f800416e = cRam00000000f800416e + bVar8;
code_r0x0001404cd96e:
  *param_2 = *param_2 | bVar8;
  *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       (int)CONCAT62((int6)((ulonglong)piVar13 >> 0x10),
                     CONCAT11((char)((ulonglong)piVar13 >> 8) + cVar15,(char)piVar13));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

