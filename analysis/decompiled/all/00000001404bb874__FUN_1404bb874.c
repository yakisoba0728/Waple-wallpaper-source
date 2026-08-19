// Function: FUN_1404bb874
// Addr: 1404bb874
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bb875) overlaps instruction at (ram,0x0001404bb874)
    */

void FUN_1404bb874(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char cVar6;
  byte bVar7;
  uint *puVar4;
  undefined8 in_RAX;
  undefined6 uVar9;
  char cVar10;
  char unaff_BL;
  char cVar11;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  char *unaff_RSI;
  char *unaff_RDI;
  char in_AF;
  char *pcVar5;
  undefined7 uVar8;
  
  cVar10 = (char)param_2;
  bVar2 = (byte)in_RAX;
  uVar9 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar7 = (byte)((ulonglong)in_RAX >> 8) | bVar2;
  puVar4 = (uint *)CONCAT62(uVar9,CONCAT11(bVar7,bVar2));
  uVar3 = *puVar4;
  *(byte *)puVar4 = (char)*puVar4 + bVar2;
  if (!SCARRY1((char)uVar3,bVar2)) {
    *puVar4 = *puVar4 & (uint)puVar4;
    pcVar5 = (char *)(CONCAT62(uVar9,CONCAT11(((int)*puVar4 < 0) << 7 | (*puVar4 == 0) << 6 |
                                              in_AF << 4 |
                                              ((POPCOUNT(*puVar4 & 0xff) & 1U) == 0) << 2,bVar2)) |
                     0x200);
    *(undefined4 *)param_1 = unaff_ESP;
    *pcVar5 = *pcVar5 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar6 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + cVar10;
  if (*unaff_RSI != '\0' && SCARRY1(cVar6,cVar10) == *unaff_RSI < '\0') {
    *(char *)((longlong)puVar4 + 0x7e) = *(char *)((longlong)puVar4 + 0x7e) + bVar2;
    *puVar4 = *puVar4 & (uint)puVar4;
    cVar1 = bVar2 + 0xb7;
    uVar8 = (undefined7)((ulonglong)puVar4 >> 8);
    puVar4 = (uint *)CONCAT71(uVar8,cVar1);
    cVar11 = (char)unaff_ESP;
    *param_4 = *param_4 + cVar11;
    *(char *)puVar4 = (char)*puVar4 + cVar1;
    cVar6 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + cVar10;
    if (*unaff_RSI == '\0' || SCARRY1(cVar6,cVar10) != *unaff_RSI < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((longlong)puVar4 + 0x7e) = *(char *)((longlong)puVar4 + 0x7e) + cVar1;
    *puVar4 = *puVar4 & (uint)puVar4;
    cVar6 = bVar2 + 0x6e;
    *param_4 = *param_4 + cVar11;
    *(char *)CONCAT71(uVar8,cVar6) = *(char *)CONCAT71(uVar8,cVar6) + cVar6;
    cVar1 = cVar6 + bVar7;
    pcVar5 = (char *)CONCAT71(uVar8,cVar1);
    if (SCARRY1(cVar6,bVar7) == cVar1 < '\0') {
      puVar4 = (uint *)(CONCAT71(uVar8,cVar1) | 0x74);
      pcVar5 = (char *)(ulonglong)((uint)puVar4 | *puVar4);
    }
    else {
      cVar6 = *unaff_RSI;
      *unaff_RSI = *unaff_RSI + cVar10;
      if (*unaff_RSI != '\0' && SCARRY1(cVar6,cVar10) == *unaff_RSI < '\0') {
        *pcVar5 = *pcVar5 + cVar1;
        *param_1 = *param_1 + cVar1;
        *(char *)((longlong)param_2 * 9) = *(char *)((longlong)param_2 * 9) + unaff_BL;
        halt_baddata();
      }
    }
    param_1[CONCAT44(unaff_00000024,unaff_ESP)] =
         param_1[CONCAT44(unaff_00000024,unaff_ESP)] | (byte)((ulonglong)pcVar5 >> 8);
    bVar2 = (char)pcVar5 + 0x34;
    uVar3 = (uint)CONCAT71((int7)((ulonglong)pcVar5 >> 8),bVar2) | 0x21867000;
    puVar4 = (uint *)(ulonglong)uVar3;
    cVar6 = (char)(uVar3 >> 8);
    unaff_RSI[(longlong)puVar4 * 4 + -0x489fffdf] =
         unaff_RSI[(longlong)puVar4 * 4 + -0x489fffdf] + cVar6;
    *param_4 = *param_4 + cVar11;
    *(byte *)puVar4 = (char)*puVar4 + bVar2;
    *(char *)((longlong)puVar4 + -0x7a) =
         *(char *)((longlong)puVar4 + -0x7a) + (char)((ulonglong)param_2 >> 8);
    *puVar4 = *puVar4 & uVar3;
    *unaff_RDI = *unaff_RSI;
    LOCK();
    cVar10 = *param_1;
    *param_1 = cVar6;
    pcVar5 = (char *)(ulonglong)CONCAT22((short)(uVar3 >> 0x10),CONCAT11(cVar10,bVar2));
    UNLOCK();
    pcVar5[-0x49] = pcVar5[-0x49] + cVar10;
    *param_4 = *param_4 + cVar11;
    *param_2 = *param_2 | bVar2;
    *pcVar5 = *pcVar5 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

