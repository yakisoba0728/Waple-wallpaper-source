// Function: FUN_1404bc034
// Addr: 1404bc034
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bc0bf) overlaps instruction at (ram,0x0001404bc0bd)
    */

void FUN_1404bc034(char param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 in_RAX;
  undefined1 *puVar6;
  byte *pbVar7;
  char *pcVar8;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 unaff_RBP;
  undefined1 *unaff_RDI;
  longlong unaff_retaddr;
  
  pcVar8 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0xc) + 0x59);
  *pcVar8 = *pcVar8 + param_1;
  *(ulonglong *)(unaff_retaddr + -8) = CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  unaff_RDI[0x21004b] = unaff_RDI[0x21004b] & unaff_BH;
  puVar6 = (undefined1 *)(ulonglong)(((uint)((ulonglong)in_RAX >> 8) & 0x26d800) << 8);
  *puVar6 = *puVar6;
  *(undefined8 *)(unaff_retaddr + -8) = unaff_RBP;
  iRam00000000a8000028 = iRam00000000a8000028 + 0x57ffffd8;
  cRam0000000030000052 = cRam0000000030000052 + unaff_BL;
  uVar5 = 0xa8000028 - iRam00000000a8000028;
  pcVar8 = (char *)(ulonglong)uVar5;
  pcVar8[0x2c] = pcVar8[0x2c] + unaff_BH;
  *pcVar8 = *pcVar8 + (char)uVar5;
  *(undefined8 *)(unaff_retaddr + -0x37) = 0x5948002d;
  *(ulonglong *)(unaff_retaddr + -0x3f) = CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  uVar2 = *(undefined8 *)(unaff_retaddr + -0x3f);
  unaff_RDI[0x21004b] = unaff_RDI[0x21004b] & unaff_BH;
  uVar5 = uVar5 >> 8 & 0x26d800;
  pcVar8 = (char *)(ulonglong)(uVar5 << 8);
  *pcVar8 = *pcVar8;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (char)((ulonglong)uVar2 >> 8);
  *pcVar8 = *pcVar8;
  if (*pcVar8 < '\0') {
    *pcVar8 = *pcVar8 + unaff_BH;
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
    pcVar8 = (char *)((ulonglong)(uint3)uVar5 << 8);
  }
  *pcVar8 = *pcVar8;
  *(undefined8 *)(unaff_retaddr + -0x3f) = 0x5944002d;
  uVar3 = (undefined7)((ulonglong)pcVar8 >> 8);
  pbVar7 = (byte *)CONCAT71(uVar3,0xbf);
  *param_4 = *param_4 + (char)unaff_retaddr + -0x37;
  *pbVar7 = *pbVar7 + 0xbf;
  *pbVar7 = *pbVar7 + 0xbf;
  bVar4 = *pbVar7 & 0xbf & *(byte *)(CONCAT71(uVar3,*pbVar7) & 0xffffffffffffffbf);
  puRamfffffffffffffff8 = (undefined1 *)(unaff_retaddr + -8);
  uRam00000001a450c0d0 =
       uRam00000001a450c0d0 &
       (int)CONCAT71(uVar3,bVar4 + *(char *)CONCAT71(uVar3,bVar4)) + 0xc0000654U;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

