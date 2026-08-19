// Function: FUN_1404b9b40
// Addr: 1404b9b40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b9b66) overlaps instruction at (ram,0x0001404b9b64)
    */

void FUN_1404b9b40(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  undefined3 uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar11;
  uint *in_RAX;
  undefined6 uVar13;
  uint *puVar8;
  char cVar12;
  ulonglong uVar10;
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
  char *pcVar9;
  
  uVar5 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar5;
  uVar6 = *in_RAX;
  bVar3 = (byte)in_RAX;
  uVar2 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar3;
  if ((byte)*in_RAX == 0 || SCARRY1((byte)uVar2,bVar3) != (char)(byte)*in_RAX < '\0') {
    *in_RAX = *in_RAX + uVar5 + (uint)CARRY1((byte)uVar6,bVar3);
  }
  *(char *)(param_1 + 0x60001f7e) = *(char *)(param_1 + 0x60001f7e) + unaff_BH;
  *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
       (uint)param_1;
  *in_RAX = *in_RAX & uVar5;
  bVar3 = bVar3 | (byte)*in_RAX;
  uVar13 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar16 = (char)((ulonglong)param_2 >> 8);
  cVar11 = (char)((ulonglong)in_RAX >> 8) + cVar16;
  puVar8 = (uint *)CONCAT62(uVar13,CONCAT11(cVar11 * '\x02',
                                            bVar3 | *(byte *)CONCAT62(uVar13,CONCAT11(cVar11,bVar3))
                                           ));
  uVar6 = (uint)puVar8 | *puVar8;
  pcVar9 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   param_2);
  *pcVar9 = *pcVar9 + cVar16;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + (char)(uVar6 >> 8);
  pcVar9 = (char *)(param_1 + param_2);
  cVar11 = *pcVar9;
  cVar15 = (char)param_2;
  *pcVar9 = *pcVar9 + cVar15;
  if (*pcVar9 != '\0' && SCARRY1(cVar11,cVar15) == *pcVar9 < '\0') {
    *(char *)(param_1 + 0x60001f7e) = *(char *)(param_1 + 0x60001f7e) + unaff_BH;
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) |
         (uint)param_1;
    *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar7 = uVar6 + 0xdc40500;
  uVar1 = (undefined3)((uint)iVar7 >> 8);
  cVar4 = (char)iVar7 + cVar15;
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar1,cVar4);
  cVar14 = (char)param_1;
  *unaff_RDI = *unaff_RDI + cVar14;
  LOCK();
  cVar11 = *unaff_RDI;
  *unaff_RDI = unaff_BL;
  UNLOCK();
  cVar12 = (char)((uint)iVar7 >> 8);
  pcVar9[0xd] = pcVar9[0xd] + cVar12;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar9 = *pcVar9 + cVar4;
  uVar10 = (ulonglong)CONCAT31(uVar1,cVar4 + cVar15);
  *unaff_RDI = *unaff_RDI + cVar14;
  LOCK();
  *unaff_RDI = cVar11;
  UNLOCK();
  pcVar9 = (char *)(uVar10 + 0xd);
  *pcVar9 = *pcVar9 + cVar12;
  *param_4 = *param_4 + unaff_SPL;
  pcVar9 = (char *)(uVar10 * 2);
  *pcVar9 = *pcVar9 + cVar14;
  uVar6 = CONCAT22((short)((uint)iVar7 >> 0x10),CONCAT11((cVar12 + cVar16) * '\x02',cVar4 + cVar15))
          + 0x6d40000;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

