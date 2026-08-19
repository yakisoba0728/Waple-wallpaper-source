// Function: FUN_1404cd8e0
// Addr: 1404cd8e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cd927) overlaps instruction at (ram,0x0001404cd926)
    */
/* WARNING: Removing unreachable block (ram,0x0001404cd95b) */

void FUN_1404cd8e0(byte *param_1,undefined8 param_2,byte param_3)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  ulonglong in_RAX;
  undefined6 uVar10;
  undefined7 uVar9;
  int *piVar11;
  byte bVar12;
  char cVar14;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  char *unaff_RSI;
  char cVar15;
  byte *unaff_RDI;
  char unaff_R12B;
  longlong unaff_R14;
  char *unaff_R15;
  char in_CF;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar13;
  
  uVar10 = (undefined6)(in_RAX >> 0x10);
  bVar4 = (byte)in_RAX;
  bVar2 = -in_CF;
  pbVar7 = (byte *)CONCAT62(uVar10,CONCAT11(bVar2,bVar4));
  bVar5 = *pbVar7;
  *pbVar7 = *pbVar7 - bVar4;
  bVar12 = (char)param_2 + bVar2 + (bVar5 < bVar4);
  pbVar13 = (byte *)CONCAT71((int7)((ulonglong)param_2 >> 8),bVar12);
  *(int *)pbVar7 = *(int *)pbVar7 - (int)pbVar7;
  pbVar7 = (byte *)CONCAT62(uVar10,CONCAT11(bVar2 | bVar4,bVar4));
  *pbVar7 = *pbVar7 ^ bVar4;
  cVar15 = (char)unaff_RDI;
  *(char *)(unaff_R14 + -0x7ffbe92) = *(char *)(unaff_R14 + -0x7ffbe92) + cVar15;
  uVar9 = (undefined7)((ulonglong)pbVar7 >> 8);
  bVar5 = *(byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   (in_RAX & 0xff));
  pcVar8 = (char *)CONCAT71(uVar9,bVar5);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar8 = *pcVar8 + bVar5;
  cVar14 = (char)((ulonglong)param_2 >> 8);
  pcVar8[0x6d] = pcVar8[0x6d] + cVar14;
  *(char *)(unaff_R14 + -0x7ffbe92) = *(char *)(unaff_R14 + -0x7ffbe92) + cVar15;
  uVar6 = *(undefined1 *)
           (CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
           (ulonglong)bVar5);
  bVar5 = *param_1;
  *param_1 = *param_1 + param_3;
  piVar11 = (int *)CONCAT71((int7)((ulonglong)param_1 >> 8),
                            (char)param_1 + *(char *)CONCAT71(uVar9,uVar6) + CARRY1(bVar5,param_3));
  *pbVar13 = *pbVar13 + bVar12;
  LocalDescriptorTableRegister(*(undefined2 *)pbVar13);
  pcVar8 = (char *)(CONCAT71(uVar9,uVar6) ^ 0xe);
  bVar5 = *pbVar13;
  bVar2 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar12;
  bVar4 = (byte)pcVar8;
  if ((CARRY1(bVar5,bVar12)) ||
     (piVar11 = (int *)((longlong)piVar11 + -1), piVar11 != (int *)0x0 && *pbVar13 != 0)) {
    if (SCARRY1(bVar2,bVar12)) {
      pcVar8 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x6004cd8);
      *pcVar8 = *pcVar8 + unaff_BL;
      goto code_r0x0001404cd96e;
    }
    *unaff_RDI = *unaff_RDI + unaff_BH;
  }
  else if (!SCARRY1(bVar2,bVar12)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = *unaff_R15;
  *unaff_R15 = *unaff_R15 + cVar15;
  if (SCARRY1(cVar3,cVar15)) {
    *pcVar8 = *pcVar8 + unaff_BH;
    *pcVar8 = *pcVar8 + bVar4;
    pcVar1 = pcVar8 + 0x3f004170;
    cVar14 = *pcVar1;
    *pcVar1 = *pcVar1 + bVar12;
    if (!SCARRY1(cVar14,bVar12)) {
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
  *unaff_RSI = *unaff_RSI + bVar4;
code_r0x0001404cd96e:
  *pbVar13 = *pbVar13 | bVar4;
  *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       (int)CONCAT62((int6)((ulonglong)piVar11 >> 0x10),
                     CONCAT11((char)((ulonglong)piVar11 >> 8) + cVar14,(char)piVar11));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

