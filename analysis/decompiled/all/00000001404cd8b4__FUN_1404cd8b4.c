// Function: FUN_1404cd8b4
// Addr: 1404cd8b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cd927) overlaps instruction at (ram,0x0001404cd926)
    */

void FUN_1404cd8b4(byte *param_1,byte *param_2,byte param_3,byte *param_4)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined8 in_RAX;
  undefined7 uVar9;
  char cVar10;
  int *piVar11;
  byte bVar12;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  uint unaff_ESI;
  byte *unaff_RDI;
  longlong unaff_R12;
  char *unaff_R15;
  char *pcVar8;
  
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar5 = (char)in_RAX + 4;
  pcVar8 = (char *)CONCAT71(uVar9,bVar5);
  *param_4 = *param_4;
  *pcVar8 = *pcVar8 + bVar5;
  cVar3 = *pcVar8;
  *pcVar8 = *pcVar8 + bVar5;
  cVar10 = (char)param_1;
  bVar12 = (byte)param_2;
  if (*pcVar8 == '\0' || SCARRY1(cVar3,bVar5) != *pcVar8 < '\0') {
    param_1[0x7f] = param_1[0x7f] + cVar10;
    pcVar8[unaff_R12] = pcVar8[unaff_R12] + bVar5;
    bVar4 = *param_4;
    *param_4 = *param_4 + bVar5;
    bVar7 = *unaff_RDI;
    *param_2 = *param_2 + bVar12;
    *(uint *)param_2 = *(int *)param_2 + unaff_EBP;
    *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         cVar10;
    LOCK();
    puVar1 = (uint *)(CONCAT71(uVar9,bVar5 + bVar7 + CARRY1(bVar4,bVar5)) + 8);
    *puVar1 = *puVar1 | unaff_ESI;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = *(undefined1 *)
           (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
           (ulonglong)bVar5);
  bVar5 = *param_1;
  *param_1 = *param_1 + param_3;
  piVar11 = (int *)CONCAT71((int7)((ulonglong)param_1 >> 8),
                            cVar10 + *(char *)CONCAT71(uVar9,uVar6) + CARRY1(bVar5,param_3));
  *param_2 = *param_2 + bVar12;
  LocalDescriptorTableRegister(*(undefined2 *)param_2);
  pcVar8 = (char *)(CONCAT71(uVar9,uVar6) ^ 0xe);
  bVar5 = *param_2;
  bVar4 = *param_2;
  *param_2 = *param_2 + bVar12;
  bVar7 = (byte)pcVar8;
  if ((CARRY1(bVar5,bVar12)) ||
     (piVar11 = (int *)((longlong)piVar11 + -1), piVar11 != (int *)0x0 && *param_2 != 0)) {
    if (SCARRY1(bVar4,bVar12)) {
      pcVar8 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x6004cd8);
      *pcVar8 = *pcVar8 + unaff_BL;
      goto code_r0x0001404cd96e;
    }
    *unaff_RDI = *unaff_RDI + unaff_BH;
  }
  else if (!SCARRY1(bVar4,bVar12)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = *unaff_R15;
  *unaff_R15 = *unaff_R15 + (char)unaff_RDI;
  if (SCARRY1(cVar3,(char)unaff_RDI)) {
    *pcVar8 = *pcVar8 + unaff_BH;
    *pcVar8 = *pcVar8 + bVar7;
    pcVar2 = pcVar8 + 0x3f004170;
    cVar3 = *pcVar2;
    *pcVar2 = *pcVar2 + bVar12;
    if (!SCARRY1(cVar3,bVar12)) {
      halt_baddata();
    }
    *pcVar8 = *pcVar8 + unaff_BH;
    *(uint *)((longlong)pcVar8 * 2) = *(uint *)((longlong)pcVar8 * 2) & (uint)piVar11;
    *(uint *)(pcVar8 + 0xb) = *(uint *)(pcVar8 + 0xb) & unaff_EBP;
    *(char *)piVar11 = (char)*piVar11 + unaff_BL;
    *piVar11 = *piVar11 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    cRam000000014a2ce541 = cRam000000014a2ce541 + (char)piVar11;
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
    pcVar8[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 8 +
           0x3128004c] =
         pcVar8[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 8 +
                0x3128004c] + bVar12 + pcVar8[0x50];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000000f800416e = cRam00000000f800416e + bVar7;
code_r0x0001404cd96e:
  *param_2 = *param_2 | bVar7;
  *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       (int)CONCAT62((int6)((ulonglong)piVar11 >> 0x10),
                     CONCAT11((char)((ulonglong)piVar11 >> 8) + (char)((ulonglong)param_2 >> 8),
                              (char)piVar11));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

