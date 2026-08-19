// Function: FUN_1404b9b34
// Addr: 1404b9b34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b9b66) overlaps instruction at (ram,0x0001404b9b64)
    */

void FUN_1404b9b34(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  undefined3 uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char cVar13;
  uint *in_RAX;
  uint *puVar10;
  ulonglong uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char unaff_SPL;
  uint unaff_EBP;
  char *unaff_RDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  char *pcVar11;
  
  uVar9 = (uint)param_1;
  cVar16 = (char)((ulonglong)param_2 >> 8);
  if (!in_ZF && in_OF == in_SF) {
    *(char *)(param_1 + 0x60001f7e) = *(char *)(param_1 + 0x60001f7e) + unaff_BH;
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         uVar9;
    uVar6 = (uint)in_RAX;
    *in_RAX = *in_RAX & uVar6;
    uVar7 = *in_RAX;
    bVar4 = (byte)in_RAX;
    uVar3 = *in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX + bVar4;
    if ((byte)*in_RAX == 0 || SCARRY1((byte)uVar3,bVar4) != (char)(byte)*in_RAX < '\0') {
      *in_RAX = *in_RAX + uVar6 + (uint)CARRY1((byte)uVar7,bVar4);
    }
    else {
      *(char *)(param_1 + 0x60001f7e) = *(char *)(param_1 + 0x60001f7e) + unaff_BH;
      *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
           uVar9;
      *in_RAX = *in_RAX & uVar6;
      in_RAX = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar16,
                                         bVar4 | (byte)*in_RAX));
    }
  }
  puVar10 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                             CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',
                                      (byte)in_RAX | (byte)*in_RAX));
  uVar7 = (uint)puVar10 | *puVar10;
  pcVar11 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                    param_2);
  *pcVar11 = *pcVar11 + cVar16;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + (char)(uVar7 >> 8);
  pcVar11 = (char *)(param_1 + param_2);
  cVar1 = *pcVar11;
  cVar15 = (char)param_2;
  *pcVar11 = *pcVar11 + cVar15;
  if (*pcVar11 != '\0' && SCARRY1(cVar1,cVar15) == *pcVar11 < '\0') {
    *(char *)(param_1 + 0x60001f7e) = *(char *)(param_1 + 0x60001f7e) + unaff_BH;
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         uVar9;
    *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar8 = uVar7 + 0xdc40500;
  uVar2 = (undefined3)((uint)iVar8 >> 8);
  cVar5 = (char)iVar8 + cVar15;
  pcVar11 = (char *)(ulonglong)CONCAT31(uVar2,cVar5);
  cVar14 = (char)param_1;
  *unaff_RDI = *unaff_RDI + cVar14;
  LOCK();
  cVar1 = *unaff_RDI;
  *unaff_RDI = unaff_BL;
  UNLOCK();
  cVar13 = (char)((uint)iVar8 >> 8);
  pcVar11[0xd] = pcVar11[0xd] + cVar13;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar11 = *pcVar11 + cVar5;
  uVar12 = (ulonglong)CONCAT31(uVar2,cVar5 + cVar15);
  *unaff_RDI = *unaff_RDI + cVar14;
  LOCK();
  *unaff_RDI = cVar1;
  UNLOCK();
  pcVar11 = (char *)(uVar12 + 0xd);
  *pcVar11 = *pcVar11 + cVar13;
  *param_4 = *param_4 + unaff_SPL;
  pcVar11 = (char *)(uVar12 * 2);
  *pcVar11 = *pcVar11 + cVar14;
  uVar9 = CONCAT22((short)((uint)iVar8 >> 0x10),CONCAT11((cVar13 + cVar16) * '\x02',cVar5 + cVar15))
          + 0x6d40000;
  *(char *)(ulonglong)uVar9 = *(char *)(ulonglong)uVar9 + (char)uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

