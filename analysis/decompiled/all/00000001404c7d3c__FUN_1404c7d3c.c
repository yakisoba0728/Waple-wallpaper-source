// Function: FUN_1404c7d3c
// Addr: 1404c7d3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c7d77) overlaps instruction at (ram,0x0001404c7d76)
    */

void FUN_1404c7d3c(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined3 uVar4;
  char cVar5;
  byte bVar6;
  int in_EAX;
  uint uVar7;
  char cVar9;
  char cVar10;
  byte bVar11;
  undefined6 uVar12;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  byte *unaff_RSI;
  longlong unaff_RDI;
  bool bVar13;
  byte *pbVar8;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)((ulonglong)param_2 >> 8);
  cVar9 = (char)param_2;
  uVar7 = in_EAX + 0xd0000674;
  pbVar8 = (byte *)(ulonglong)uVar7;
  if (SCARRY4(in_EAX,-0x2ffff98c)) {
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar11 = cVar5 + unaff_BH;
  if (SCARRY1(cVar5,unaff_BH)) {
    param_1 = param_1 + -1;
    cVar9 = cVar9 + *pbVar8;
  }
  else {
    pcVar2 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + 0x4c + unaff_RDI * 2);
    *pcVar2 = *pcVar2 + cVar9;
    cVar10 = (char)(uVar7 >> 8);
    *param_1 = *param_1 + cVar10;
    cVar5 = (char)uVar7;
    *pbVar8 = *pbVar8 + cVar5;
    uVar4 = (undefined3)(uVar7 >> 8);
    bVar6 = cVar5 + cVar9;
    uVar7 = CONCAT31(uVar4,bVar6);
    pbVar8 = (byte *)(ulonglong)uVar7;
    if (!SCARRY1(cVar5,cVar9)) {
      bVar13 = SCARRY1(bVar11,unaff_BH);
      bVar11 = bVar11 + unaff_BH;
      if (!bVar13) {
        pcVar2 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + 0x4c + unaff_RDI * 2);
        *pcVar2 = *pcVar2 + cVar9;
        *param_1 = *param_1 + cVar10;
        *pbVar8 = *pbVar8 + bVar6;
        pbVar1 = pbVar8 + -0x2fffcf90;
        bVar3 = *pbVar1;
        *pbVar1 = *pbVar1 + cVar10;
        if (!SCARRY1(bVar3,cVar10)) {
          pcVar2 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + 0x4c + unaff_RDI * 2);
          *pcVar2 = *pcVar2 + bVar6;
          *param_1 = *param_1 + unaff_BL;
          uVar7 = uVar7 & 0x1170009;
          *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 - (char)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((char)(cVar9 + cVar10) == '\0') {
          pbVar8[0x7a] = pbVar8[0x7a] + bVar11;
          *pbVar8 = *pbVar8 ^ bVar6;
          in((ushort)bVar11 << 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pcVar2 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + 0x21004c + unaff_RDI * 2);
        *pcVar2 = *pcVar2 + unaff_BL;
        *pbVar8 = *pbVar8 + bVar6;
        pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30);
        *pcVar2 = *pcVar2 << 1;
        cVar10 = cVar9 + cVar10 + cVar10;
        if (cVar10 == '\0') {
          pbVar8[0x7b] = pbVar8[0x7b] + bVar6;
          *pbVar8 = *pbVar8 ^ bVar6;
          LOCK();
          *(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30) = unaff_BH;
          UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pcVar2 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + 0x521004c + unaff_RDI * 2);
        *pcVar2 = *pcVar2 + unaff_BL;
        uVar7 = CONCAT31(uVar4,bVar6 + *pbVar8) + 0x40000664;
        pbVar8 = (byte *)(ulonglong)uVar7;
        if ((POPCOUNT(uVar7 & 0xff) & 1U) != 0) {
          pbVar8[0x7a] = pbVar8[0x7a] + bVar11;
          *pbVar8 = *pbVar8 ^ (byte)uVar7;
          in(CONCAT11(bVar11,cVar10));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *pbVar8 = *pbVar8 + (byte)uVar7;
        bVar11 = in(9);
        pbVar8 = (byte *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar11);
        pbVar8[0x7b] = pbVar8[0x7b] + bVar11;
        *pbVar8 = *pbVar8 ^ bVar11;
        LOCK();
        *(char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30) = unaff_BH;
        UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x0001404c7d87;
    }
  }
  *pbVar8 = *pbVar8 + (char)((ulonglong)pbVar8 >> 8);
  *unaff_RSI = *unaff_RSI >> 1;
code_r0x0001404c7d87:
  pbVar8[0x21000000] = pbVar8[0x21000000] + bVar11;
  *(byte *)CONCAT62(uVar12,CONCAT11(bVar11,cVar9)) =
       *(byte *)CONCAT62(uVar12,CONCAT11(bVar11,cVar9)) | (byte)pbVar8;
  *pbVar8 = *pbVar8 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

