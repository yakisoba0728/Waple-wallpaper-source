// Function: FUN_1404b20d4
// Addr: 1404b20d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b2152) overlaps instruction at (ram,0x0001404b2151)
    */

void FUN_1404b20d4(undefined8 param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint *in_RAX;
  undefined1 *puVar6;
  byte bVar7;
  byte bVar9;
  byte bVar10;
  undefined6 uVar11;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *unaff_RSI;
  byte *unaff_RDI;
  bool bVar12;
  char *pcVar8;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2;
  *(byte *)((longlong)in_RAX + 0x16) = *(byte *)((longlong)in_RAX + 0x16) << 1;
  cVar4 = (char)((ulonglong)param_1 >> 8);
  bVar7 = (byte)param_1;
  pcVar8 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar4 * '\x02',bVar7));
  if (!SCARRY1(cVar4,cVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((char)(cVar4 * '\x02') != '\0') {
    *(byte *)param_2 = (char)*param_2 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = (byte *)((longlong)in_RAX + -0x4fffe98d);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar9;
  bVar3 = (byte)in_RAX;
  if (CARRY1(bVar2,bVar9)) {
    *(byte *)in_RAX = (byte)*in_RAX + bVar9;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & bVar7;
    *in_RAX = *in_RAX & (uint)in_RAX;
    uVar5 = *in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX + bVar3;
    bVar12 = (byte)*in_RAX == 0;
    if (CARRY1((byte)uVar5,bVar3)) {
      *(byte *)((longlong)in_RAX + 0x10001673) = *(byte *)((longlong)in_RAX + 0x10001673) + bVar10;
      *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & bVar7;
      *param_2 = *param_2 & (uint)pcVar8;
      goto code_r0x0001404b211c;
    }
  }
  else {
    in_RAX = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3 | *(byte *)((longlong)in_RAX * 2)
                             );
code_r0x0001404b211c:
    bVar10 = bVar10 | unaff_RDI[(longlong)in_RAX];
    uVar5 = (int)in_RAX + 0x20000664;
    in_RAX = (uint *)(ulonglong)uVar5;
    bVar12 = uVar5 == 0;
  }
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  if (!bVar12) {
    *pcVar8 = *pcVar8 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI + unaff_BH;
  if (*unaff_RSI != '\0') {
    halt_baddata();
  }
  *(byte *)(in_RAX + 0x8401287) = (byte)in_RAX[0x8401287] + unaff_BL;
  cVar4 = (char)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + cVar4;
  uVar5 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar7;
  bVar12 = (byte)*in_RAX == 0;
  if (bVar12) {
    *unaff_RSI = *unaff_RSI + unaff_BH;
    if (*unaff_RSI == '\0') {
      *(byte *)(in_RAX + 0x8401287) = (byte)in_RAX[0x8401287] + unaff_BL;
      halt_baddata();
    }
    out(0x49,cVar4);
    *pcVar8 = *pcVar8 + bVar7;
  }
  else {
    if (CARRY1((byte)uVar5,bVar7) || bVar12) goto code_r0x0001404b2165;
    *unaff_RSI = *unaff_RSI + bVar10;
    *param_4 = *param_4 + unaff_SPL;
  }
  *(byte *)in_RAX = (byte)*in_RAX + cVar4;
  puVar6 = (undefined1 *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4 + bVar7);
  if ((byte)(cVar4 + bVar7) == '\0') {
    bVar7 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + unaff_BL;
    if (!CARRY1(bVar7,unaff_BL) && *unaff_RDI != 0) {
      *unaff_RSI = *unaff_RSI + bVar10;
      *param_4 = *param_4;
code_r0x0001404b2165:
      unaff_RSI[CONCAT71(unaff_00000021,unaff_SPL)] =
           unaff_RSI[CONCAT71(unaff_00000021,unaff_SPL)] + bVar9;
      LocalDescriptorTableRegister
                (*(undefined2 *)(unaff_RSI + CONCAT62(uVar11,CONCAT11(bVar10,bVar9))));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (pcVar8 + -1 != (char *)0x0) {
      *unaff_RDI = *unaff_RDI + (char)(pcVar8 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
         *(byte *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) >> 1 |
         *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) << 7;
  }
  *puVar6 = *puVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

