// Function: FUN_1404b20f8
// Addr: 1404b20f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b2152) overlaps instruction at (ram,0x0001404b2151)
    */

void FUN_1404b20f8(char *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  byte bVar6;
  uint in_EAX;
  uint uVar3;
  undefined1 *puVar5;
  char cVar7;
  byte bVar8;
  undefined6 uVar9;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *unaff_RSI;
  byte *unaff_RDI;
  bool bVar10;
  uint *puVar4;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  cVar7 = (char)param_2;
  uVar3 = in_EAX + 0x90000654;
  puVar4 = (uint *)(ulonglong)uVar3;
  if (in_EAX < 0x6ffff9ac) {
code_r0x0001404b2115:
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & (byte)param_1;
    *param_2 = *param_2 & (uint)param_1;
    bVar8 = bVar8 | unaff_RDI[uVar3];
    puVar4 = (uint *)(ulonglong)(in_EAX + 0xb0000cb8);
    bVar10 = in_EAX + 0xb0000cb8 == 0;
  }
  else {
    *(byte *)((longlong)puVar4 + 0x10001673) = *(byte *)((longlong)puVar4 + 0x10001673) + bVar8;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & (byte)param_1;
    *puVar4 = *puVar4 & uVar3;
    uVar1 = *puVar4;
    *(byte *)puVar4 = (byte)*puVar4 + (byte)uVar3;
    bVar10 = (byte)*puVar4 == 0;
    if (CARRY1((byte)uVar1,(byte)uVar3)) {
      *(byte *)((longlong)puVar4 + 0x10001673) = *(byte *)((longlong)puVar4 + 0x10001673) + bVar8;
      goto code_r0x0001404b2115;
    }
  }
  bVar6 = (byte)((ulonglong)puVar4 >> 8);
  if (!bVar10) {
    *param_1 = *param_1 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI + unaff_BH;
  if (*unaff_RSI != '\0') {
    halt_baddata();
  }
  *(byte *)(puVar4 + 0x8401287) = (byte)puVar4[0x8401287] + unaff_BL;
  cVar2 = (char)puVar4;
  *(byte *)puVar4 = (byte)*puVar4 + cVar2;
  uVar3 = *puVar4;
  *(byte *)puVar4 = (byte)*puVar4 + bVar6;
  bVar10 = (byte)*puVar4 == 0;
  if (bVar10) {
    *unaff_RSI = *unaff_RSI + unaff_BH;
    if (*unaff_RSI == '\0') {
      *(byte *)(puVar4 + 0x8401287) = (byte)puVar4[0x8401287] + unaff_BL;
      halt_baddata();
    }
    out(0x49,cVar2);
    *param_1 = *param_1 + bVar6;
  }
  else {
    if (CARRY1((byte)uVar3,bVar6) || bVar10) goto code_r0x0001404b2165;
    *unaff_RSI = *unaff_RSI + bVar8;
    *param_4 = *param_4 + unaff_SPL;
  }
  *(byte *)puVar4 = (byte)*puVar4 + cVar2;
  puVar5 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar4 >> 8),cVar2 + bVar6);
  if ((byte)(cVar2 + bVar6) == '\0') {
    bVar6 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + unaff_BL;
    if (!CARRY1(bVar6,unaff_BL) && *unaff_RDI != 0) {
      *unaff_RSI = *unaff_RSI + bVar8;
      *param_4 = *param_4;
code_r0x0001404b2165:
      unaff_RSI[CONCAT71(unaff_00000021,unaff_SPL)] =
           unaff_RSI[CONCAT71(unaff_00000021,unaff_SPL)] + cVar7;
      LocalDescriptorTableRegister
                (*(undefined2 *)(unaff_RSI + CONCAT62(uVar9,CONCAT11(bVar8,cVar7))));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (param_1 + -1 != (char *)0x0) {
      *unaff_RDI = *unaff_RDI + (char)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) =
         *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) >> 1 |
         *(char *)CONCAT62(uVar9,CONCAT11(bVar8,cVar7)) << 7;
  }
  *puVar5 = *puVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

